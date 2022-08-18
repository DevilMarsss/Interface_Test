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
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());    //去窗口边框
}

ChangeKey::~ChangeKey()
{
    delete ui;
}

void ChangeKey::on_ChangeKeyAckBtn_clicked()
{
    if(ui->UsernameChangeEdit->text() == UserName && ui->UserKeyBeforeEdit->text() == UserKey
            && ui->UserKeyAfterEdit->text() == ui->UserKeyAckEdit->text() && isAdministrator == false)    //判断原密码是否为已登录用户的密码，以及判断新密码是否等于确认密码
    {
        ChangeKey::saveUserFile();
        UserKey = ui->UserKeyAckEdit->text();
    }
    else if(ui->UsernameChangeEdit->text() == UserName && ui->UserKeyBeforeEdit->text() == UserKey
            && ui->UserKeyAfterEdit->text() == ui->UserKeyAckEdit->text() && isAdministrator == true)
    {
        QMessageBox::warning(this, "提醒", "用户具有管理员权限！无法修改密码！");
    }
    else
    {
        QMessageBox::warning(this, "提醒", "用户信息错误！请再次输入！");
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
        file.open(QIODevice::ReadOnly);   //打开成功
        QAxObject *excel = new QAxObject(this);    //建立excel操作对象
        excel->setControl("Excel.Application");    //连接Excel控件
        excel->setProperty("Visible", false);    //不显示窗体看效果
        excel->setProperty("DisplayAlerts", false);    //不显示警告看效果
        QAxObject *workbooks = excel->querySubObject("WorkBooks");
        workbooks->dynamicCall("Open(const QString&)", excel_path);    //excel_path至关重要，获取excel文件的路径
        QAxObject *workbook = excel->querySubObject("ActiveWorkBook");
        QAxObject *worksheet = workbook->querySubObject("WorkSheets(int)", 1);    //访问excel中的工作表中第一个单元格
        QAxObject *usedRange = worksheet->querySubObject("UsedRange");    //sheet的范围
        QAxObject *cell;

        int intRowStart = usedRange->property("Row").toInt();    //起始行数
        int intColStart = usedRange->property("Column").toInt();    //起始列数
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
            QAxObject *workbooks = excel2->querySubObject("WorkBooks");    //获取工作簿合集
            workbooks->dynamicCall("Add");    //新建一个工作簿
            QAxObject *workbook = excel2->querySubObject("ActiveWorkBook");    //获取当前工作簿
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
    QMessageBox::information(this, "提醒", "用户密码已修改");
}
