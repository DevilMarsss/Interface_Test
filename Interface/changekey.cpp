#include "changekey.h"
#include "ui_changekey.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDesktopServices>
#include <ActiveQt/QAxObject>

#pragma execution_character_set("utf-8")

ChangeKey::ChangeKey(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeKey)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());    //ȥ���ڱ߿�
}

ChangeKey::~ChangeKey()
{
    delete ui;
}

void ChangeKey::on_ChangeKeyAckBtn_clicked()
{
    if(ui->UsernameChangeEdit->text() == UserName && ui->UserKeyBeforeEdit->text() == UserKey
            && ui->UserKeyAfterEdit->text() == ui->UserKeyAckEdit->text() && isAdministrator == false)    //�ж�ԭ�����Ƿ�Ϊ�ѵ�¼�û������룬�Լ��ж��������Ƿ����ȷ������
    {
        ChangeKey::saveUserFile();
        UserKey = ui->UserKeyAckEdit->text();
    }
    else if(ui->UsernameChangeEdit->text() == UserName && ui->UserKeyBeforeEdit->text() == UserKey
            && ui->UserKeyAfterEdit->text() == ui->UserKeyAckEdit->text() && isAdministrator == true)
    {
        QMessageBox::warning(this, "����", "�û����й���ԱȨ�ޣ��޷��޸����룡");
    }
    else
    {
        QMessageBox::warning(this, "����", "�û���Ϣ�������ٴ����룡");
    }
    this->accept();
}

void ChangeKey::on_ChangeKeyCancerBtn_clicked()
{
    this->close();
}

void ChangeKey::saveUserFile()
{
    if(!excel_path.isEmpty())
    {
        QFile file(excel_path);
        file.open(QIODevice::ReadOnly);   //�򿪳ɹ�
        QAxObject *excel = new QAxObject(this);    //����excel��������
        excel->setControl("Excel.Application");    //����Excel�ؼ�
        excel->setProperty("Visible", false);    //����ʾ���忴Ч��
        excel->setProperty("DisplayAlerts", false);    //����ʾ���濴Ч��
        QAxObject *workbooks = excel->querySubObject("WorkBooks");
        workbooks->dynamicCall("Open(const QString&)", excel_path);    //excel_path������Ҫ����ȡexcel�ļ���·��
        QAxObject *workbook = excel->querySubObject("ActiveWorkBook");
        QAxObject *worksheet = workbook->querySubObject("WorkSheets(int)", 1);    //����excel�еĹ������е�һ����Ԫ��
        QAxObject *usedRange = worksheet->querySubObject("UsedRange");    //sheet�ķ�Χ
        QAxObject *cell;

        int intRowStart = usedRange->property("Row").toInt();    //��ʼ����
        int intColStart = usedRange->property("Column").toInt();    //��ʼ����
        int intRow = usedRange->querySubObject("Rows")->property("Count").toInt();
        int intCol = usedRange->querySubObject("Columns")->property("Count").toInt();
        QString exceldata[9][3];

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
        file.close();

        QAxObject *excel2 = new QAxObject;
        if (excel2->setControl("Excel.Application"))
        {
            excel2->dynamicCall("SetVisible (bool Visible)", false);
            excel2->setProperty("DisplayAlerts", false);
            QAxObject *workbooks = excel2->querySubObject("WorkBooks");    //��ȡ�������ϼ�
            workbooks->dynamicCall("Add");    //�½�һ��������
            QAxObject *workbook = excel2->querySubObject("ActiveWorkBook");    //��ȡ��ǰ������
            QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);
            QAxObject *cell;

            for (int i = 1; i < intRowStart + intRow; i++)
            {
                for (int j = 1; j < intColStart + intCol; j++)
                {
                    cell = worksheet->querySubObject("Cells(int,int)", i, j);
                    cell->dynamicCall("SetValue(const QString&)", exceldata[i-1][j-1]);
                }
            }
            extern int UserSequence;
            if(UserSequence)
            {
                cell = worksheet->querySubObject("Cells(int,int)", UserSequence, 2);
                cell->dynamicCall("SetValue(const QString&)", ui->UserKeyAfterEdit->text());
            }

            workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(excel_path));
            workbook->dynamicCall("Close(Boolean)", false);
            excel2->dynamicCall("Quit(void)");
            delete excel2;
        }
    }
    QMessageBox::information(this, "����", "�û��������޸�");
}
