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

    setWindowFlags(Qt::FramelessWindowHint | windowFlags());    //去窗口边框
    //setAttribute(Qt::WA_TranslucentBackground); //把窗口背景设置为透明（效果不佳）

    if(isLogIn == false)    //判断用户是否登录
    {
        this->ui->UserLogStackedWidget->setCurrentIndex(0);

        if(!excel_path.isEmpty())
        {
            /**********文件对象**********/
            QFile file(excel_path);
            /**********打开文件,默认为utf8变量**********/
            if(file.open(QIODevice::ReadOnly))    //打开成功
            {
                QAxObject *excel = new QAxObject(this);    //建立excel操作对象
                excel->setControl("Excel.Application");    //连接Excel控件
                excel->setProperty("Visible", false);    //不显示窗体看效果
                excel->setProperty("DisplayAlerts", false);    //不显示警告看效果
                /**********获取COM文件的一种方式**********/
                QAxObject *workbooks = excel->querySubObject("WorkBooks");
                /**********获取工作簿(excel文件)集合**********/
                workbooks->dynamicCall("Open(const QString&)", excel_path);    //excel_path至关重要，获取excel文件的路径
                /**********打开一个excel文件**********/
                QAxObject *workbook = excel->querySubObject("ActiveWorkBook");
                QAxObject *worksheet = workbook->querySubObject("WorkSheets(int)", 1);    //访问excel中的工作表中第一个单元格
                QAxObject *usedRange = worksheet->querySubObject("UsedRange");    //sheet的范围
                QAxObject *cell;
                /**********获取打开excel的起始行数和列数和总共的行数和列数**********/
                int intRowStart = usedRange->property("Row").toInt();    //起始行数
                int intColStart = usedRange->property("Column").toInt();    //起始列数
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
        //移到左上角
        move(event->globalPos() - Ref);
    }
}

void UserLog::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        //求坐标差值
        //当前点击坐标-窗口左上角坐标
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
                if(UserIsAdministrator == "是")
                    isAdministrator = true;
                this->ui->UserLogStackedWidget->setCurrentIndex(1);
                return;
            }
        }
    }

    if(isLogIn == 0)
    {
        QMessageBox::warning(this," 错误 ","用户名或密码错误！");
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
    QMessageBox::information(this,"注销","用户已注销！");
    this->close();
}

