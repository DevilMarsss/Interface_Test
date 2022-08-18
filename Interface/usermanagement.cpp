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
    tableHeader<<QString("�û���")<<QString("����")<<QString("����ԱȨ��");
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
    if (ui->UserManagementWidget->item(row, 2)->text() == "��")
    {
        QMessageBox::warning(this,"����","�û����й���ԱȨ�ޣ�");
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
                    text[coerow][coecol] = cellValue.toByteArray();    //QVariantת��ΪQByteArray
                    if(!text[coerow][coecol].isEmpty())
                        exceldata[coerow][coecol] = QString(text[coerow][coecol]);    //QByteArrayת��ΪQString
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
            QAxObject *workbooks = excel->querySubObject("WorkBooks");    //��ȡ�������ϼ�
            workbooks->dynamicCall("Add");    //�½�һ��������
            QAxObject *workbook = excel->querySubObject("ActiveWorkBook");    //��ȡ��ǰ������
            QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);
            QAxObject *cell;

            /**********���Excel��ͷ����**********/
            for (int i = 1; i <= ui->UserManagementWidget->columnCount(); i++)
            {
                cell = worksheet->querySubObject("Cells(int,int)", 1, i);
                cell->setProperty("RowHeight", 40);
                cell->dynamicCall("SetValue(const QString&)",ui->UserManagementWidget->horizontalHeaderItem(i-1)->data(0).toString());
            }

            /**********��form�б��е��������α��浽Excel�ļ���**********/
            for (int j = 2; j <= ui->UserManagementWidget->rowCount() + 1; j++)
            {
                for (int k = 1; k <= ui->UserManagementWidget->columnCount(); k++)
                {
                        cell = worksheet->querySubObject("Cells(int,int)", j, k);
                        cell->dynamicCall("SetValue(const QString&)", ui->UserManagementWidget->item(j-2, k-1)->text());
                }
            }

            /**********�����ɵ�Excel�ļ����浽ָ��Ŀ¼��**********/
            workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(excel_path));    //������excel_path
            workbook->dynamicCall("Close()");    //�رչ�����
            excel->dynamicCall("Quit()");    //�ر�Excel
            delete excel;
            /*
            if (QMessageBox::question(NULL, QString::fromUtf8("���"),QString::fromUtf8("�ļ��Ѿ��������Ƿ����ڴ򿪣�"), QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
            {
                QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(excel_path)));
            }
            */
        }
        else
        {
            QMessageBox::warning(this,"����","δ�ܴ���Excel���밲װMicrosoft Excel��");
        }
    }
    QMessageBox::information(this, "����", "�û���Ϣ���޸�");
}

void UserManagement::on_UserManagementCloseBtn_clicked()
{
    this->close();
}
