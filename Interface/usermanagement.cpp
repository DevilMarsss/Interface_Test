#include "usermanagement.h"
#include "ui_usermanagement.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDesktopServices>
#include <ActiveQt/QAxObject>

#pragma execution_character_set("utf-8")

UserManagement::UserManagement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserManagement)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);

    isChanged = false;

    ui->UserManagementWidget->setColumnCount(3);
    ui->UserManagementWidget->setShowGrid(true);
    ui->UserManagementWidget->setGridStyle(Qt::SolidLine);

    QStringList tableHeader;
    tableHeader<<QString("用户名")<<QString("密码")<<QString("管理员权限");
    ui->UserManagementWidget->setHorizontalHeaderLabels(tableHeader);
    ui->UserManagementWidget->horizontalHeader()->setVisible(true);
    ui->UserManagementWidget->verticalHeader()->setVisible(true);

    ui->UserManagementWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->UserManagementWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->UserManagementWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    UserManagement::readUserFile();
}

UserManagement::~UserManagement()
{
    if(isChanged == true)
    {
        UserManagement::saveUserFile();
    }
    delete ui;
}

void UserManagement::insertRow()
{
    const QModelIndex index = ui->UserManagementWidget->selectionModel()->currentIndex();
    QAbstractItemModel *model = ui->UserManagementWidget->model();

    if (!model->insertRow(index.row() + 1, index.parent()))
        return;

    for (int column = 0; column < model->columnCount(index.parent()); column++)
    {
        const QModelIndex child = model->index(index.row() + 1, column, index.parent());
        model->setData(child, QVariant(tr("")), Qt::EditRole);
    }

    updateActions();
}

void UserManagement::removeRow()
{
    const QModelIndex index =  ui->UserManagementWidget->selectionModel()->currentIndex();
    QAbstractItemModel *model =  ui->UserManagementWidget->model();
    if (model->removeRow(index.row(), index.parent()))
        updateActions();
}

void UserManagement::updateActions()
{
    ui->DelUserBtn->setEnabled(1);
    ui->AddUserBtn->setEnabled(1);
}

void UserManagement::on_AddUserBtn_clicked()
{
    if (ui->UserManagementWidget->rowCount() >= 7)
    {
        UserManagement::insertRow();
        ui->AddUserBtn->setEnabled(false);
        isChanged = true;
    }
    else
    {
        UserManagement::insertRow();
        isChanged = true;
    }
}

void UserManagement::on_DelUserBtn_clicked()
{
    int row = ui->UserManagementWidget->selectionModel()->currentIndex().row();
    if (ui->UserManagementWidget->item(row, 2)->text() == "是")
    {
        QMessageBox::warning(this,"警告","用户具有管理员权限！");
    }
    else
    {
        UserManagement::removeRow();
        ui->AddUserBtn->setEnabled(1);
        isChanged = true;
    }
}

void UserManagement::readUserFile()
{
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
            //int a = intRow - intRowStart + 1;
            //int b = intCol - intColStart + 1;
            QString exceldata[9][3];
            QByteArray text[9][3];

            int coerow=0;
            for(int i = intRowStart; i < intRowStart + intRow; i++, coerow++)
            {
                int coecol=0;
                for(int j = intColStart; j < intColStart + intCol; j++, coecol++)
                {
                    cell = excel->querySubObject("Cells(Int, Int)", i, j);
                    QVariant cellValue = cell->dynamicCall("value");
                    text[coerow][coecol] = cellValue.toByteArray();    //QVariant转换为QByteArray
                    if(!text[coerow][coecol].isEmpty())
                        exceldata[coerow][coecol] = QString(text[coerow][coecol]);    //QByteArray转换为QString
                }
            }
            ui->UserManagementWidget->setRowCount(intRow - 1);
            for(int i=0; i < intRow - 1; i++)
            {
                for(int j=0; j < intCol; j++)
                {
                    QTableWidgetItem *tempItem = new QTableWidgetItem(exceldata[i+1][j]);
                    ui->UserManagementWidget->setItem(i, j, tempItem);
                }
            }
            workbook->dynamicCall("Close(Boolean)", false);
            excel->dynamicCall("Quit(void)");
            delete excel;
        }
    file.close();
    }
}

void UserManagement::saveUserFile()
{
    if (excel_path != NULL)
    {
        QAxObject *excel = new QAxObject;
        if (excel->setControl("Excel.Application"))
        {
            excel->dynamicCall("SetVisible (bool Visible)", false);
            excel->setProperty("DisplayAlerts", false);
            QAxObject *workbooks = excel->querySubObject("WorkBooks");    //获取工作簿合集
            workbooks->dynamicCall("Add");    //新建一个工作簿
            QAxObject *workbook = excel->querySubObject("ActiveWorkBook");    //获取当前工作簿
            QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);
            QAxObject *cell;

            /**********添加Excel表头数据**********/
            for (int i = 1; i <= ui->UserManagementWidget->columnCount(); i++)
            {
                cell = worksheet->querySubObject("Cells(int,int)", 1, i);
                cell->setProperty("RowHeight", 40);
                cell->dynamicCall("SetValue(const QString&)",ui->UserManagementWidget->horizontalHeaderItem(i-1)->data(0).toString());
            }

            /**********将form列表中的数据依次保存到Excel文件中**********/
            for (int j = 2; j <= ui->UserManagementWidget->rowCount() + 1; j++)
            {
                for (int k = 1; k <= ui->UserManagementWidget->columnCount(); k++)
                {
                        cell = worksheet->querySubObject("Cells(int,int)", j, k);
                        cell->dynamicCall("SetValue(const QString&)", ui->UserManagementWidget->item(j-2, k-1)->text());
                }
            }

            /**********将生成的Excel文件保存到指定目录下**********/
            workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(excel_path));    //保存至excel_path
            workbook->dynamicCall("Close()");    //关闭工作簿
            excel->dynamicCall("Quit()");    //关闭Excel
            delete excel;
            /*
            if (QMessageBox::question(NULL, QString::fromUtf8("完成"),QString::fromUtf8("文件已经导出，是否现在打开？"), QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
            {
                QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(excel_path)));
            }
            */
        }
        else
        {
            QMessageBox::warning(this,"错误","未能创建Excel，请安装Microsoft Excel！");
        }
    }
    QMessageBox::information(this, "提醒", "用户信息已修改");
}

void UserManagement::on_UserManagementCloseBtn_clicked()
{
    this->close();
}
