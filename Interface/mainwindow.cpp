#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "usermanagement.h"
#include "changekey.h"
#include "userlog.h"
#include <QMessageBox>
#include <sys/stat.h>
#include <QFileDialog>
#include <QDataStream>
#include <QTime>
#include <QDebug>

#pragma execution_character_set("utf-8")

bool isLogIn = false;   //�û��Ƿ��¼
bool isAdministrator = false;   //�û��Ƿ��ǹ���Ա
int UserSequence = 0;
QString UserName;
QString UserKey;
QString UserIsAdministrator;
QString excel_path;   //�����û���¼�����û���������ļ���ַ

bool g_b_read = false;
bool g_b_write = false;
extern bool g_bStop;
extern QMutex muter;
quint8 short_msg_buf[1024 * 32 * 1024];
quint8 res[32 * 1024 * 1024];
uint8_t pu8Buffer[128 * 1024 * 1024];
extern quint32 g_cn2_22;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->ui->stackedWidget->setCurrentIndex(0);

    displaytimer = new QTimer(this);
    connect(displaytimer, SIGNAL(timeout()), this, SLOT(display_Interface()));

    /* �����û���¼���ܵ�������ȡ������·�� */
    excel_path = QDir::currentPath();
    excel_path.remove("/debug");
    excel_path.append("/data/userManagement.xls");

    /* ���ý������ݵı���·�� */
    file_recv_name = QDir::currentPath();
    file_recv_name.remove("/debug");
    file_recv_name.append("/data/data_files");

    ddrRead = START_DDR_READ_ADDR;
    isWaitingRecv = false;
    isCycleSending = false;

#if 0
    if(InitXDMA() < 0)
        QMessageBox::information(this, "ERROR", "PCIe init error");
#endif

    WriteReg(0x20404,0x1200ffff);
    WriteReg(0x60010,0x2710);

    TransSpeedInit();

    displaytimer->start(100);
}

MainWindow::~MainWindow()
{
    g_b_read = true;
    g_b_write = true;

    if(isWaitingRecv && isLogIn)
        MainWindow::on_RecContinuousBtn_clicked();

    UninitXDMA();
    delete ui;
}

void MainWindow::on_log_action_triggered()
{
    UserLog userInterface;
    userInterface.exec();
}

void MainWindow::on_logout_action_triggered()
{
    if(isLogIn)
    {
        UserLog userInterface;
        userInterface.exec();
    }
}

void MainWindow::on_changeKey_action_triggered()
{
    if(isLogIn)
    {
        ChangeKey changeKeyInterface;
        changeKeyInterface.exec();
    }
    else
    {
        QMessageBox::warning(this, "����", "���¼�û����޸����룡");
    }
}

void MainWindow::on_browse_action_triggered()
{
    if(isAdministrator)
    {
        UserManagement userManagementInterface;
        userManagementInterface.exec();
    }
    else
    {
        QMessageBox::warning(this, "����", "�û��޹���ԱȨ�ޣ�");
    }
}

void MainWindow::on_exit_action_triggered()
{
    this->close();
}

void MainWindow::on_DiagnosisMonitor_triggered()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_NetTestInitBtn_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_VehicleTestInitBtn_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_PartTestInitBtn_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_OBCInterfaceBtn_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_BMSInterfaceBtn_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_Record_triggered()
{
    this->ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_Review_triggered()
{
    this->ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_VCU_Button_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_BitSetBtn_clicked()
{
    /* Ŀǰ�����ڲ���(20211031) 540:0x8A00 214:0x4280 */
    for (int i = 0; i < 12; ++i) messageStream_Ethernet[i] = 0xFF;
    messageStream_Ethernet[12] = 0x00;
    messageStream_Ethernet[13] = 0x0B;
    messageStream_Ethernet[14] = 0x08;
    messageStream_Ethernet[15] = 0x42;
    messageStream_Ethernet[16] = 0x80;
    for (int i = 0; i < 8; ++i) messageStream_Ethernet[17+i] = 0xFF;
    CAN_UNPACK CANUNPACK;
    Ethernet_UNPACK ETHERNETUNPACK;
    ETHERNETUNPACK.Ethernet_Division(messageStream_Ethernet);
    CANUNPACK.CANUNPACK();
}

void MainWindow::on_SendOnceBtn_clicked()
{

}

void MainWindow::on_SendContinuousBtn_clicked()
{
    displaytimer->stop();
}

void MainWindow::on_RecContinuousBtn_clicked()
{
    if(!isWaitingRecv)
    {
        //д�Ĵ���
        ui->RecContinuousBtn->setText("ֹͣ����");
        long strDDRSize = 262144;
        bool bSaveFile = true;
        m_cycle_read = new QCycleRead(file_recv_name, ddrRead, strDDRSize,bSaveFile);
        //m_cycle_ddr = new qDma2Ddr(strDDRSize);//2021.0914-file_recv_name--ddr size

        ui->RecordDisplay->appendPlainText("path:" + file_recv_name + "ddr read" + QString::number(ddrRead, 16));

        m_cycle_read->moveToThread(&thread_cycle_read);
        connect(&thread_cycle_read, SIGNAL(started()), m_cycle_read, SLOT(CycleGetFiFoFrame()));
        //connect(m_cycle_read, SIGNAL(sig_size_over1280(unsigned int)), this, SLOT(rcv_over1280(unsigned int )));
        //connect(m_cycle_read, SIGNAL(sig_rcv_data(uint8_t *,unsigned int)), this, SLOT(show_rcv_data(uint8_t *,unsigned int )));

        //m_cycle_ddr->moveToThread(&thread_cycle_ddr);
        //connect(&thread_cycle_ddr,SIGNAL(started()),m_cycle_ddr,SLOT(CycleDDR()));

        thread_cycle_read.start();
        //thread_cycle_ddr.start();
        isWaitingRecv = true;

        save_to_file(file_recv_name);
        ui->RecordDisplay->appendPlainText("path" + file_recv_name);
        ui->RecordDisplay->appendPlainText("save to file");
    }
    else
    {
        g_bStop = true;
        ui->RecContinuousBtn->setText("��������");
        isWaitingRecv = false;

        m_cycle_read->bWhileRead = false;
        //m_cycle_ddr->bWhileDDR = false;
        QThread::msleep(200);
        unsigned int address = m_cycle_read->GetNewestDDRRead();

        quint64 debug_total = m_cycle_read->DebugCount();

        if(address > START_DDR_READ_ADDR)
        {
            ddrRead = address;
            //save_to_file(file_recv_name);
            //debug_total += address-START_DDR_READ_ADDR;
        }

        ui->RecordDisplay->appendPlainText("rcv data byte is:" + QString ::number(debug_total, 10));
        quint64 singleDMA = 16384;
        ui->RecordDisplay->appendPlainText("rcv count is:" + QString ::number(debug_total / singleDMA, 10));
        ui->RecordDisplay->appendPlainText("dma ok is:" + QString ::number(g_cn2_22, 10));
        ui->RecordDisplay->appendPlainText("total is:" + QString ::number(g_cnt1, 10));
        ui->RecordDisplay->appendPlainText("0 is:" + QString ::number(g_cnt, 10));
        ui->RecordDisplay->appendPlainText("0x60014 is:" + QString ::number(g_cnt14, 10));
        //QMessageBox::information(nullptr,"debug",QString ::number(debug_total,10),QMessageBox::Ok);

        thread_cycle_read.quit();
        thread_cycle_read.wait();

        if(m_cycle_read != NULL)
        {
            delete m_cycle_read;
            m_cycle_read = NULL;
        }

        //thread_cycle_ddr.quit();
        //thread_cycle_ddr.wait(1000);
        //if(m_cycle_ddr != NULL)
        //{
        //    delete m_cycle_ddr;
        //    m_cycle_ddr = NULL;
        //}

        /* �����ݱ��浽ָ���ļ� */
        save_to_file(file_recv_name);
        ui->RecordDisplay->appendPlainText("path" + file_recv_name);
        ui->RecordDisplay->appendPlainText("save to file");
    }

    return;
}

void MainWindow::on_ClearLogBtn_clicked()
{
    ui->RecordDisplay->clear();
}

void MainWindow::get_fifo_frame()
{
    unsigned int ddrReadtmp = ddrRead;
    unsigned int ret = read_fifo(ddrReadtmp);
    if(ret==-1){
        ui->RecordDisplay->appendPlainText("no frame in fifo");
        return;
    }
    ddrReadtmp +=ret;
    ui->RecordDisplay->appendPlainText(QString("ddrReadtmp: 0x%1").arg(ddrRead,0,16));
    ui->RecordDisplay->appendPlainText(QString("size: %1").arg(ret,0,10));

    //uint8_t *pu8Buffer;
    //pu8Buffer = (uint8_t *)malloc(ret);
    //c2h_transfer(ddrRead,ret,(unsigned char *)pu8Buffer);

    ddrRead = ddrReadtmp;

    if(ddrRead>=(START_DDR_READ_ADDR + MAX_RECV_BUFF_SIZE))
    {
        ui->RecordDisplay->appendPlainText("full");
        //QString recvname = file_recv_name+"."+QTime::currentTime().toString("hh:mm:ss.zzz");
        save_to_file(file_recv_name);
    }
}

void MainWindow::save_to_file(QString fname)
{
    unsigned int allframesize = ddrRead - START_DDR_READ_ADDR;
    QFile f(fname);

    if(!f.open(QIODevice::Append))
    {
        QMessageBox::information(this, "ERROR", "File Open Error!");
        return;
    }

    QDataStream recv_stream(&f);

    uint8_t *pu8Buffer;
    pu8Buffer = (uint8_t *)malloc(allframesize);
    c2h_transfer(START_DDR_READ_ADDR, allframesize, (unsigned char *)pu8Buffer);

    for(int j = 0; j < allframesize; j++)
    {
        recv_stream << pu8Buffer[j];
    }

    f.close();

    ddrRead = START_DDR_READ_ADDR;
    //С��10kʱ��ʾ
    QString res_str = "";
    QString pstr;

    if(allframesize < 10 * 1024)
    {
        for (int i = 0; i < allframesize; i++)
        {
            pstr = QString::number(pu8Buffer[i], 16);

            if(pstr.size() == 1)
                res_str += "0" + pstr;
            else
                res_str +=  pstr;

            res_str += " ";
        }
    }

    free(pu8Buffer);
}

void MainWindow::setRecvFileName()
{
    /* �������ݱ����ļ���λ�� ������Ҫ��(����)(20211027) */
    QFileDialog *fileDialog = new QFileDialog(this);

    fileDialog->setWindowTitle("Select File");
    fileDialog->setDirectory("D:\\");
    fileDialog->setNameFilter(tr("File(*.*)"));
    fileDialog->setViewMode(QFileDialog::Detail);

    QStringList fileNames;

    if(fileDialog->exec())
    {
        fileNames = fileDialog->selectedFiles();
        file_recv_name = fileNames.at(0);
    }

    delete fileDialog;
}

void MainWindow::TransSpeedInit()
{
    TransSpeed.Init();
    //connect(this, SIGNAL(signalReceiveSpeed(quint64)), &TransSpeed, SLOT(slotRecvSpeed(quint64)));
    //connect(this, SIGNAL(signalSendSpeed(quint64)), &TransSpeed, SLOT(slotSendSpeed(quint64)));//ͳ�ƶ���Ϣ�����ٶ�
    connect(&TransSpeed, SIGNAL(signalSendSpeed(quint64)), this, SLOT(SendSpeed(quint64)));
    connect(&TransSpeed, SIGNAL(signalRecvSpeed(quint64)), this, SLOT(RecvSpeed(quint64)));
}

void MainWindow::SendSpeed(quint64 value)
{
    QString text;

    if(value < 1000)
    {
        text = QString::number(value) + " B/s";
    }
    else if(value >= 1000 && value < 1e6)
    {
        text = QString::number(value / 1000.0) + " KB/s";
    }
    else if(value >= 1e6 && value < 1e9)
    {
        text = QString::number(value / 1000000.0) + " MB/s";
    }
    else
    {
        text = QString::number(value / 1000000000.0) + " GB/s";
    }

    ui->SendRateTxt->setText(text );
}

void MainWindow::RecvSpeed(quint64 value)
{
    QString text;

    if(value < 1000)
    {
        text = QString::number(value) + " B/s";
    }
    else if(value >= 1000 && value < 1e6)
    {
        text = QString::number(value / 1000.0) + " KB/s";
    }
    else if(value >= 1e6 && value < 1e9)
    {
        text = QString::number(value / 1000000.0) + " MB/s";
    }
    else
    {
        text = QString::number(value / 1000000000.0) + " GB/s";
    }

    ui->RecRateTxt->setText(text);
}

void MainWindow::display_Interface()
{
    switch ((uint)CAN_UNPACK_B.VCU_0x214_o1)
    {
    case 0:
        ui->VCU_0x214_o1_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->VCU_0x214_o1_txt->setText("�ϸ�ѹ");
        break;
    case 2:
        break;
    case 3:
        ui->VCU_0x214_o1_txt->setText("�¸�ѹ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.VCU_0x214_o2)
    {
    case 0:
        ui->VCU_0x214_o2_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->VCU_0x214_o2_txt->setText("������");
        break;
    case 2:
        ui->VCU_0x214_o2_txt->setText("��������");
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.VCU_0x214_o3)
    {
    case 0:
        ui->VCU_0x214_o3_txt->setText("���������");
        break;
    case 1:
        ui->VCU_0x214_o3_txt->setText("�������");
        break;
    }

    switch ((uint)CAN_UNPACK_B.VCU_0x214_o4)
    {
    case 0:
        ui->VCU_0x214_o4_txt->setText("δ����");
        break;
    case 1:
        ui->VCU_0x214_o4_txt->setText("�ѻ���");
        break;
    }

    switch ((uint)CAN_UNPACK_B.VCU_0x214_o5)
    {
    case 0:
        ui->VCU_0x214_o5_txt->setText("δ����");
        break;
    case 1:
        ui->VCU_0x214_o5_txt->setText("�ѻ���");
        break;
    }

    switch ((uint)CAN_UNPACK_B.VCU_0x214_o6)
    {
    case 0:
        ui->VCU_0x214_o6_txt->setText("δ����");
        break;
    case 1:
        ui->VCU_0x214_o6_txt->setText("�ѻ���");
        break;
    }

    switch ((uint)CAN_UNPACK_B.VCU_0x631_o1)
    {
    case 0:
        ui->VCU_0x631_o1_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->VCU_0x631_o1_txt->setText("�����¸�ѹ����ֹ��ѹ�ϵ磩");
        break;
    case 2:
        ui->VCU_0x631_o1_txt->setText("�ӳٶϸ�ѹ");
        break;
    case 3:
        ui->VCU_0x631_o1_txt->setText("��Ť��");
        break;
    case 4:
        ui->VCU_0x631_o1_txt->setText("����");
        break;
    case 5:
        ui->VCU_0x631_o1_txt->setText("�޹���");
        break;
    default:
        break;
    }

    switch ((uint)CAN_UNPACK_B.VCU_0x631_o2) {
    case 0:
        ui->VCU_0x631_o2_txt->setText("�޹���");
        break;
    case 1:
        ui->VCU_0x631_o2_txt->setText("һ������");
        break;
    case 2:
        ui->VCU_0x631_o2_txt->setText("��������");
        break;
    case 3:
        ui->VCU_0x631_o2_txt->setText("��������");
        break;
    }

    switch ((uint)CAN_UNPACK_B.VCU_0x701)
    {
    case 0:
        ui->VCU_0x701_txt->setText("��Ч");
        break;
    case 1:
        ui->VCU_0x701_txt->setText("��Ч");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x450_o1)
    {
    case 0:
        ui->BMS_0x450_o1_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x450_o1_txt->setText("��ƽָ��");
        break;
    case 2:
        ui->BMS_0x450_o1_txt->setText("PWNָ��");
        break;
    case 3:
        ui->BMS_0x450_o1_txt->setText("��Чֵ");
        break;
    }

    ui->BMS_0x450_o2_txt->setText(QString::number(0.1*((uint)CAN_UNPACK_B.BMS_0x450_o2)));

    ui->BMS_0x450_o3_txt->setText(QString::number(0.01*((uint)CAN_UNPACK_B.BMS_0x450_o3)));

    ui->BMS_0x450_o4_txt->setText(QString::number(0.01*((uint)CAN_UNPACK_B.BMS_0x450_o4)));

    ui->BMS_0x450_o5_txt->setText(QString::number(0.4*((uint)CAN_UNPACK_B.BMS_0x450_o5)));

    ui->BMS_0x450_o6_txt->setText(QString::number((uint)CAN_UNPACK_B.BMS_0x450_o6));

    switch ((uint)CAN_UNPACK_B.BMS_0x450_o7)
    {
    case 0:
        ui->BMS_0x450_o7_txt->setText("��ʼ��δ���");
        break;
    case 1:
        ui->BMS_0x450_o7_txt->setText("��ʼ�������");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x451_o1)
    {
    case 0:
        ui->BMS_0x451_o1_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x451_o1_txt->setText("������");
        break;
    case 2:
        ui->BMS_0x451_o1_txt->setText("����µ�����");
        break;
    case 3:
        ui->BMS_0x451_o1_txt->setText("VTOL�µ�����");
        break;
    case 4:
        ui->BMS_0x451_o1_txt->setText("VTOV�µ�����");
        break;
    case 5:
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x451_o2)
    {
    case 0:
        ui->BMS_0x451_o2_txt->setText("δ��λ");
        break;
    case 1:
        ui->BMS_0x451_o2_txt->setText("��λ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x451_o3)
    {
    case 0:
        ui->BMS_0x451_o3_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x451_o3_txt->setText("��ʼ��");
        break;
    case 2:
        ui->BMS_0x451_o3_txt->setText("Standy");
        break;
    case 3:
        ui->BMS_0x451_o3_txt->setText("Ready");
        break;
    case 4:
        ui->BMS_0x451_o3_txt->setText("AC Charging");
        break;
    case 5:
        ui->BMS_0x451_o3_txt->setText("DC Charging");
        break;
    case 6:
        ui->BMS_0x451_o3_txt->setText("Heating");
        break;
    case 7:
        ui->BMS_0x451_o3_txt->setText("Power Down");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x451_o4)
    {
    case 0:
        ui->BMS_0x451_o4_txt->setText("�Ͽ�����");
        break;
    case 1:
        ui->BMS_0x451_o4_txt->setText("����״̬");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x451_o5)
    {
    case 0:
        ui->BMS_0x451_o5_txt->setText("��������");
        break;
    case 1:
        ui->BMS_0x451_o5_txt->setText("������");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x451_o6)
    {
    case 0:
        ui->BMS_0x451_o6_txt->setText("δ��λ");
        break;
    case 1:
        ui->BMS_0x451_o6_txt->setText("��λ");
        break;
    }

    ui->BMS_0x451_o7_txt->setText(QString::number(0.02*((uint)CAN_UNPACK_B.BMS_0x451_o7)));

    ui->BMS_0x451_o8_txt->setText(QString::number(0.02*((uint)CAN_UNPACK_B.BMS_0x451_o8)));

    ui->BMS_0x451_o9_txt->setText(QString::number(0.02*((uint)CAN_UNPACK_B.BMS_0x451_o9)));

    switch ((uint)CAN_UNPACK_B.BMS_0x452_o1)
    {
    case 0:
        ui->BMS_0x452_o1_txt->setText("�޾���");
        break;
    case 1:
        ui->BMS_0x452_o1_txt->setText("���⼤��");
        break;
    }

    ui->BMS_0x452_o2_txt->setText(QString::number((uint)CAN_UNPACK_B.BMS_0x452_o2));

    ui->BMS_0x452_o3_txt->setText(QString::number((uint)CAN_UNPACK_B.BMS_0x452_o3));

    ui->BMS_0x452_o4_txt->setText(QString::number((uint)CAN_UNPACK_B.BMS_0x452_o4));

    ui->BMS_0x453_o1_txt->setText(QString::number(((int)CAN_UNPACK_B.BMS_0x453_o1)-48));

    ui->BMS_0x453_o2_txt->setText(QString::number((uint)CAN_UNPACK_B.BMS_0x453_o2));

    ui->BMS_0x453_o3_txt->setText(QString::number(((int)CAN_UNPACK_B.BMS_0x453_o3)-48));

    ui->BMS_0x453_o4_txt->setText(QString::number(((int)CAN_UNPACK_B.BMS_0x453_o4)-48));

    ui->BMS_0x457_txt->setText(QString::number(0.02*((int)CAN_UNPACK_B.BMS_0x457)-400));

    switch ((uint)CAN_UNPACK_B.BMS_0x458_o1)
    {
    case 0:
        ui->BMS_0x458_o1_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x458_o1_txt->setText("δ����");
        break;
    case 2:
        ui->BMS_0x458_o1_txt->setText("���׼������");
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x458_o2)
    {
    case 0:
        ui->BMS_0x458_o2_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x458_o2_txt->setText("������");
        break;
    case 2:
        ui->BMS_0x458_o2_txt->setText("����µ�����");
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    }

    ui->BMS_0x61C_o1_txt->setText(QString::number(0.02*((uint)CAN_UNPACK_B.BMS_0x61C_o1)));

    ui->BMS_0x61C_o2_txt->setText(QString::number(0.02*((uint)CAN_UNPACK_B.BMS_0x61C_o2)));

    ui->BMS_0x61C_o3_txt->setText(QString::number((uint)CAN_UNPACK_B.BMS_0x61C_o3));

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o1)
    {
    case 0:
        ui->BMS_0x61D_o1_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o1_txt->setText("δ����");
        break;
    case 2:
        ui->BMS_0x61D_o1_txt->setText("������");
        break;
    case 3:
        ui->BMS_0x61D_o1_txt->setText("��Чֵ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o2)
    {
    case 0:
        ui->BMS_0x61D_o2_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o2_txt->setText("δ����");
        break;
    case 2:
        ui->BMS_0x61D_o2_txt->setText("������");
        break;
    case 3:
        ui->BMS_0x61D_o2_txt->setText("��Чֵ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o3)
    {
    case 0:
        ui->BMS_0x61D_o3_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o3_txt->setText("��һ�ν�����");
        break;
    case 2:
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o4)
    {
    case 0:
        ui->BMS_0x61D_o4_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o4_txt->setText("Ԥ��������");
        break;
    case 2:
        ui->BMS_0x61D_o4_txt->setText("�������");
        break;
    case 3:
        ui->BMS_0x61D_o4_txt->setText("������");
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o5)
    {
    case 0:
        ui->BMS_0x61D_o5_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o5_txt->setText("Ԥ��������");
        break;
    case 2:
        ui->BMS_0x61D_o5_txt->setText("��������");
        break;
    case 3:
        ui->BMS_0x61D_o5_txt->setText("������");
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o6)
    {
    case 0:
        ui->BMS_0x61D_o6_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o6_txt->setText("������");
        break;
    case 2:
        ui->BMS_0x61D_o6_txt->setText("������");
        break;
    case 3:
        ui->BMS_0x61D_o6_txt->setText("��Чֵ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o7)
    {
    case 0:
        ui->BMS_0x61D_o7_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o7_txt->setText("��һ�ν�����");
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        ui->BMS_0x61D_o7_txt->setText("���һ�ν�����");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o8)
    {
    case 0:
        ui->BMS_0x61D_o8_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o8_txt->setText("δ���");
        break;
    case 2:
        ui->BMS_0x61D_o8_txt->setText("���������");
        break;
    case 3:
        ui->BMS_0x61D_o8_txt->setText("ֱ�������");
        break;
    case 4:
        ui->BMS_0x61D_o8_txt->setText("������");
        break;
    case 5:
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o9)
    {
    case 0:
        ui->BMS_0x61D_o9_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o9_txt->setText("�պ�");
        break;
    case 2:
        ui->BMS_0x61D_o9_txt->setText("�Ͽ�");
        break;
    case 3:
        ui->BMS_0x61D_o9_txt->setText("��Чֵ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o10)
    {
    case 0:
        ui->BMS_0x61D_o10_txt->setText("δ���");
        break;
    case 1:
        ui->BMS_0x61D_o10_txt->setText("���");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o11)
    {
    case 0:
        ui->BMS_0x61D_o11_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o11_txt->setText("���ǹ�ٴβ���");
        break;
    case 2:
        break;
    case 3:
        ui->BMS_0x61D_o11_txt->setText("��Чֵ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o12)
    {
    case 0:
        ui->BMS_0x61D_o12_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o12_txt->setText("����ָ��");
        break;
    case 2:
        ui->BMS_0x61D_o12_txt->setText("����ָ��");
        break;
    case 3:
        ui->BMS_0x61D_o12_txt->setText("��Դָ��");
        break;
    case 4:
        ui->BMS_0x61D_o12_txt->setText("ͣ��ָ��");
        break;
    case 5:
        ui->BMS_0x61D_o12_txt->setText("����ָ��");
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x61D_o13)
    {
    case 0:
        ui->BMS_0x61D_o13_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x61D_o13_txt->setText("�պ�ָ��");
        break;
    case 2:
        ui->BMS_0x61D_o13_txt->setText("�Ͽ�ָ��");
        break;
    case 3:
        ui->BMS_0x61D_o13_txt->setText("��Чֵ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x655_o1)
    {
    case 0:
        ui->BMS_0x655_o1_txt->setText("��ֹ");
        break;
    case 1:
        ui->BMS_0x655_o1_txt->setText("����");
        break;
    case 2:
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x655_o2)
    {
    case 0:
        ui->BMS_0x655_o2_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x655_o2_txt->setText("������ֹ");
        break;
    case 2:
        ui->BMS_0x655_o2_txt->setText("������");
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x655_o3)
    {
    case 0:
        ui->BMS_0x655_o3_txt->setText("δ�ﵽSOCĿ��ֵ");
        break;
    case 1:
        ui->BMS_0x655_o3_txt->setText("�ﵽSOCĿ��ֵ");
        break;
    case 2:
        ui->BMS_0x655_o3_txt->setText("������");
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x655_o4)
    {
    case 0:
        ui->BMS_0x655_o4_txt->setText("δ�ﵽ�ܵ�ѹĿ��ֵ");
        break;
    case 1:
        ui->BMS_0x655_o4_txt->setText("�ﵽ�ܵ�ѹĿ��ֵ");
        break;
    case 2:
        ui->BMS_0x655_o4_txt->setText("������");
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x655_o5)
    {
    case 0:
        ui->BMS_0x655_o5_txt->setText("δ�ﵽ�����ѹĿ��ֵ");
        break;
    case 1:
        ui->BMS_0x655_o5_txt->setText("�ﵽ�����ѹĿ��ֵ");
        break;
    case 2:
        ui->BMS_0x655_o5_txt->setText("������");
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x655_o6)
    {
    case 0:
        ui->BMS_0x655_o6_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x655_o6_txt->setText("�¶ȹ���");
        break;
    case 2:
        ui->BMS_0x655_o6_txt->setText("������");
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x655_o7)
    {
    case 0:
        ui->BMS_0x655_o7_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x655_o7_txt->setText("��������");
        break;
    case 2:
        ui->BMS_0x655_o7_txt->setText("������");
        break;
    case 3:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x655_o8)
    {
    case 0:
        ui->BMS_0x655_o8_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x655_o8_txt->setText("��ѹ�쳣");
        break;
    case 2:
        ui->BMS_0x655_o8_txt->setText("������");
        break;
    case 3:
        break;
    }

    ui->BMS_0x655_o9_txt->setText(QString::number((uint)CAN_UNPACK_B.BMS_0x655_o9));

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o1)
    {
    case 0:
        ui->BMS_0x6C1_o1_txt->setText("����״̬");
        break;
    case 1:
        ui->BMS_0x6C1_o1_txt->setText("�Ͽ�״̬");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o2)
    {
    case 0:
        ui->BMS_0x6C1_o2_txt->setText("�޹���");
        break;
    case 1:
        ui->BMS_0x6C1_o2_txt->setText("һ������");
        break;
    case 2:
        ui->BMS_0x6C1_o2_txt->setText("��������");
        break;
    case 3:
        ui->BMS_0x6C1_o2_txt->setText("��������");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o3)
    {
    case 0:
        ui->BMS_0x6C1_o3_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x6C1_o3_txt->setText("����_1");
        break;
    case 2:
        ui->BMS_0x6C1_o3_txt->setText("����_2");
        break;
    case 3:
        ui->BMS_0x6C1_o3_txt->setText("����_3");
        break;
    case 4:
        ui->BMS_0x6C1_o3_txt->setText("����_4");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o4)
    {
    case 0:
        ui->BMS_0x6C1_o4_txt->setText("δ����");
        break;
    case 1:
        ui->BMS_0x6C1_o4_txt->setText("��������");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o5)
    {
    case 0:
        ui->BMS_0x6C1_o5_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x6C1_o5_txt->setText("��ʱ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o6)
    {
    case 0:
        ui->BMS_0x6C1_o6_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x6C1_o6_txt->setText("��ʱ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o7)
    {
    case 0:
        ui->BMS_0x6C1_o7_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x6C1_o7_txt->setText("��ʱ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o8)
    {
    case 0:
        ui->BMS_0x6C1_o8_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x6C1_o8_txt->setText("��ʱ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o9)
    {
    case 0:
        ui->BMS_0x6C1_o9_txt->setText("����");
        break;
    case 1:
        ui->BMS_0x6C1_o9_txt->setText("��ʱ");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o10)
    {
    case 0:
        ui->BMS_0x6C1_o10_txt->setText("�Ͽ�");
        break;
    case 1:
        ui->BMS_0x6C1_o10_txt->setText("�պ�");
        break;
    }

    ui->BMS_0x6C1_o11_txt->setText(QString::number(0.1*((uint)CAN_UNPACK_B.BMS_0x6C1_o11)));

    ui->BMS_0x6C1_o12_txt->setText(QString::number(0.1*((uint)CAN_UNPACK_B.BMS_0x6C1_o12)));

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o13)
    {
    case 0:
        ui->BMS_0x6C1_o13_txt->setText("�Ͽ�");
        break;
    case 1:
        ui->BMS_0x6C1_o13_txt->setText("�պ�");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o14)
    {
    case 0:
        ui->BMS_0x6C1_o14_txt->setText("�Ͽ�");
        break;
    case 1:
        ui->BMS_0x6C1_o14_txt->setText("�պ�");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o15)
    {
    case 0:
        ui->BMS_0x6C1_o15_txt->setText("�Ͽ�");
        break;
    case 1:
        ui->BMS_0x6C1_o15_txt->setText("�պ�");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o16)
    {
    case 0:
        ui->BMS_0x6C1_o16_txt->setText("�Ͽ�");
        break;
    case 1:
        ui->BMS_0x6C1_o16_txt->setText("�պ�");
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C1_o17)
    {
    case 0:
        ui->BMS_0x6C1_o17_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->BMS_0x6C1_o17_txt->setText("δ��ʱ");
        break;
    case 2:
        ui->BMS_0x6C1_o17_txt->setText("����ϵ��ѳ�ʱ");
        break;
    case 3:
        ui->BMS_0x6C1_o17_txt->setText("VTOL�ϵ��ѳ�ʱ");
        break;
    case 4:
        ui->BMS_0x6C1_o17_txt->setText("VTOV�ϵ��ѳ�ʱ");
        break;
    case 5:
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.BMS_0x6C3_o1)
    {
    case 0:
        ui->BMS_0x6C3_o1_txt->setText("������");
        break;
    case 1:
        ui->BMS_0x6C3_o1_txt->setText("�������");
        break;
    }

    ui->BMS_0x6C3_o2_txt->setText(QString::number(0.01*((uint)CAN_UNPACK_B.BMS_0x6C3_o2)));

    ui->BMS_0x6C3_o3_txt->setText(QString::number(0.0001*((uint)CAN_UNPACK_B.BMS_0x6C3_o3)));

    ui->BMS_0x6C3_o4_txt->setText(QString::number(0.0001*((uint)CAN_UNPACK_B.BMS_0x6C3_o4)));

    ui->BMS_0x6C3_o5_txt->setText(QString::number((uint)CAN_UNPACK_B.BMS_0x6C3_o5));

    switch ((uint)CAN_UNPACK_B.OBC_0x480_o1)
    {
    case 0:
        ui->OBC_0x480_o1_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->OBC_0x480_o1_txt->setText("δ����״̬");
        break;
    case 2:
        ui->OBC_0x480_o1_txt->setText("������״̬");
        break;
    case 3:
        ui->OBC_0x480_o1_txt->setText("��ŵ�ǹ��ȫ����");
        break;
    case 4:
        ui->OBC_0x480_o1_txt->setText("VTOL�ŵ�ǹ��ȫ����");
        break;
    case 5:
        break;
    }

    ui->OBC_0x480_o2_txt->setText(QString::number(0.02*((uint)CAN_UNPACK_B.OBC_0x480_o2)));

    ui->OBC_0x480_o3_txt->setText(QString::number(0.02*((uint)CAN_UNPACK_B.OBC_0x480_o3)));

    switch ((uint)CAN_UNPACK_B.OBC_0x480_o4)
    {
    case 0:
        ui->OBC_0x480_o4_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->OBC_0x480_o4_txt->setText("״̬2");
        break;
    case 2:
        ui->OBC_0x480_o4_txt->setText("״̬2'");
        break;
    case 3:
        ui->OBC_0x480_o4_txt->setText("״̬3'");
        break;
    case 4:
        ui->OBC_0x480_o4_txt->setText("ֹͣ���״̬");
        break;
    case 5:
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.OBC_0x480_o5)
    {
    case 0:
        ui->OBC_0x480_o5_txt->setText("��ʼֵ");
        break;
    case 1:
        ui->OBC_0x480_o5_txt->setText("�Ͽ�");
        break;
    case 2:
        ui->OBC_0x480_o5_txt->setText("�պ�");
        break;
    case 3:
        ui->OBC_0x480_o5_txt->setText("��Чֵ");
        break;
    }

    ui->OBC_0x6D3_o1_txt->setText(QString::number(0.02*((uint)CAN_UNPACK_B.OBC_0x6D3_o1)));

    ui->OBC_0x6D3_o2_txt->setText(QString::number(((int)CAN_UNPACK_B.OBC_0x6D3_o2)-48));

    ui->OBC_0x6D3_o3_txt->setText(QString::number(0.5*((uint)CAN_UNPACK_B.OBC_0x6D3_o3)));

    switch ((uint)CAN_UNPACK_B.OBC_0x6D3_o4)
    {
    case 0:
        ui->OBC_0x6D3_o4_txt->setText("δ�ϵ�");
        break;
    case 1:
        ui->OBC_0x6D3_o4_txt->setText("�ϵ�");
        break;
    }

    switch ((uint)CAN_UNPACK_B.OBC_0x6D3_o5)
    {
    case 0:
        ui->OBC_0x6D3_o5_txt->setText("��ʼ��״̬");
        break;
    case 1:
        ui->OBC_0x6D3_o5_txt->setText("����״̬");
        break;
    case 2:
        ui->OBC_0x6D3_o5_txt->setText("����״̬");
        break;
    case 3:
        ui->OBC_0x6D3_o5_txt->setText("��Ϸ���״̬");
        break;
    case 4:
        ui->OBC_0x6D3_o5_txt->setText("����״̬");
        break;
    case 5:
        ui->OBC_0x6D3_o5_txt->setText("����״̬");
        break;
    case 6:
        break;
    }

    switch ((uint)CAN_UNPACK_B.OBC_0x6D4_o1)
    {
    case 0:
        ui->OBC_0x6D4_o1_txt->setText("δ����");
        break;
    case 1:
        ui->OBC_0x6D4_o1_txt->setText("�ѻ���");
        break;
    }

    switch ((uint)CAN_UNPACK_B.OBC_0x6D4_o2)
    {
    case 0:
        ui->OBC_0x6D4_o2_txt->setText("����");
        break;
    case 1:
        ui->OBC_0x6D4_o2_txt->setText("2kw");
        break;
    case 2:
        ui->OBC_0x6D4_o2_txt->setText("3.3kw");
        break;
    case 3:
        ui->OBC_0x6D4_o2_txt->setText("6.6kw");
        break;
    }

    ui->OBC_0x6D7_txt->setText(QString::number(0.01*((uint)CAN_UNPACK_B.OBC_0x6D7)));



    ui->RecordDisplay->appendPlainText(QString("ID  %1").arg(CAN_UNPACK_B.CANPack.ID, 0, 10));
    ui->RecordDisplay->appendPlainText(QString("State1  %1").arg((int)CAN_UNPACK_B.VCU_0x214_o1));
    ui->RecordDisplay->appendPlainText(QString("State2  %1").arg((int)CAN_UNPACK_B.VCU_0x214_o2));
    ui->RecordDisplay->appendPlainText(QString("State3  %1").arg((int)CAN_UNPACK_B.VCU_0x214_o3));
    ui->RecordDisplay->appendPlainText(QString("State4  %1").arg((int)CAN_UNPACK_B.VCU_0x214_o4));
    ui->RecordDisplay->appendPlainText(QString("State5  %1").arg((int)CAN_UNPACK_B.VCU_0x214_o5));
    ui->RecordDisplay->appendPlainText(QString("State %1").arg((int)CAN_UNPACK_B.BMS_0x450_o1));
    ui->RecordDisplay->appendPlainText(QString("State %1").arg((int)CAN_UNPACK_B.BMS_0x450_o2));

}

