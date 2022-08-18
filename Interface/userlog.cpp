#include "userlog.h"
#include "ui_userlog.h"
#include "mainwindow.h"
#include <QMouseEvent>
#include <QMessageBox>
#include <QByteArray>
#include <QFileDialog>
#include <QDesktopServices>
#include <ActiveQt/QAxObject>

#pragma execution_character_set("utf-8")

UserLog::UserLog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserLog)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint | windowFlags());    //ȥ���ڱ߿�
    //setAttribute(Qt::WA_TranslucentBackground); //�Ѵ��ڱ�������Ϊ͸����Ч�����ѣ�

    if(isLogIn == false)    //�ж��û��Ƿ��¼
    {
        this->ui->UserLogStackedWidget->setCurrentIndex(0);

        if(!excel_path.isEmpty())
        {
            /**********�ļ�����**********/
            QFile file(excel_path);
            /**********���ļ�,Ĭ��Ϊutf8����**********/
            if(file.open(QIODevice::ReadOnly))    //�򿪳ɹ�
            {
                QAxObject *excel = new QAxObject(this);    //����excel��������
                excel->setControl("Excel.Application");    //����Excel�ؼ�
                excel->setProperty("Visible", false);    //����ʾ���忴Ч��
                excel->setProperty("DisplayAlerts", false);    //����ʾ���濴Ч��
                /**********��ȡCOM�ļ���һ�ַ�ʽ**********/
                QAxObject *workbooks = excel->querySubObject("WorkBooks");
                /**********��ȡ������(excel�ļ�)����**********/
                workbooks->dynamicCall("Open(const QString&)", excel_path);    //excel_path������Ҫ����ȡexcel�ļ���·��
                /**********��һ��excel�ļ�**********/
                QAxObject *workbook = excel->querySubObject("ActiveWorkBook");
                QAxObject *worksheet = workbook->querySubObject("WorkSheets(int)", 1);    //����excel�еĹ������е�һ����Ԫ��
                QAxObject *usedRange = worksheet->querySubObject("UsedRange");    //sheet�ķ�Χ
                QAxObject *cell;
                /**********��ȡ��excel����ʼ�������������ܹ�������������**********/
                int intRowStart = usedRange->property("Row").toInt();    //��ʼ����
                int intColStart = usedRange->property("Column").toInt();    //��ʼ����
                int intRow = usedRange->querySubObject("Rows")->property("Count").toInt();
                int intCol = usedRange->querySubObject("Columns")->property("Count").toInt();

                int coerow=0;
                for(int i = intRowStart; i < intRowStart + intRow; i++, coerow++)
                {
                    int coecol=0;
                    for(int j = intColStart; j < intColStart + intCol; j++, coecol++)
                    {
                        cell = excel->querySubObject("Cells(Int, Int)", i, j);
                        QVariant cellValue = cell->dynamicCall("value");
                        exceldata[coerow][coecol] = cellValue.toString();
                    }
                }

                workbook->dynamicCall("Close(Boolean)", false);
                excel->dynamicCall("Quit(void)");
                delete excel;
            }
        file.close();
        }
    }
    else
    {
        this->ui->UserLogStackedWidget->setCurrentIndex(1);
    }
}

UserLog::~UserLog()
{
    delete ui;
}

void UserLog::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        //�Ƶ����Ͻ�
        move(event->globalPos() - Ref);
    }
}

void UserLog::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        //�������ֵ
        //��ǰ�������-�������Ͻ�����
        Ref = event->globalPos() - this->frameGeometry().topLeft();
    }
}

void UserLog::on_UserLogInBtn_clicked()
{
    if(!(QString::compare(ui->UsernameInputEdit->text(),"000000")
         || QString::compare(ui->UserKeyInputEdit->text(),"000000")))
    {
        isLogIn = true;
        UserName = "000000";
        UserKey = "000000";
        isAdministrator = true;
        this->ui->UserLogStackedWidget->setCurrentIndex(1);
    }
    else
    {
        for(int i = 0; i < 8; i++)
        {
            if(!(QString::compare(ui->UsernameInputEdit->text(),exceldata[i+1][0])
                || QString::compare(ui->UserKeyInputEdit->text(),exceldata[i+1][1]))
                 && !ui->UsernameInputEdit->text().isEmpty() && !ui->UserKeyInputEdit->text().isEmpty())
            {
                isLogIn = true;
                UserSequence = i+2;
                UserName = exceldata[i+1][0];
                UserKey = exceldata[i+1][1];
                UserIsAdministrator = exceldata[i+1][2];
                if(UserIsAdministrator == "��")
                    isAdministrator = true;
                this->ui->UserLogStackedWidget->setCurrentIndex(1);
                return;
            }
        }
    }

    if(isLogIn == 0)
    {
        QMessageBox::warning(this," ���� ","�û������������");
    }
}

void UserLog::on_UserExitBtn_clicked()
{
    this->close();
}

void UserLog::on_LogedHideBtn_clicked()
{
    this->accept();
}

void UserLog::on_LogedLogoutBtn_clicked()
{
    isLogIn = false;
    isAdministrator = false;
    QMessageBox::information(this,"ע��","�û���ע����");
    this->close();
}

