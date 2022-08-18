/********************************************************************************
** Form generated from reading UI file 'usermanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEMENT_H
#define UI_USERMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_UserManagement
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddUserBtn;
    QPushButton *DelUserBtn;
    QTableWidget *UserManagementWidget;
    QHBoxLayout *UserManagementCloseLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *UserManagementCloseBtn;

    void setupUi(QDialog *UserManagement)
    {
        if (UserManagement->objectName().isEmpty())
            UserManagement->setObjectName(QString::fromUtf8("UserManagement"));
        UserManagement->resize(420, 450);
        UserManagement->setMinimumSize(QSize(420, 450));
        UserManagement->setMaximumSize(QSize(420, 450));
        UserManagement->setStyleSheet(QString::fromUtf8("*{\n"
"color:rgb(0, 255, 255);\n"
"background:rgb(0, 255, 255);\n"
"font-size:15px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QWidget{\n"
"border:2px sold rgb(0, 255, 255);\n"
"background:rgb(0, 0, 40);\n"
"}\n"
"QLineEdit{\n"
"color:rgb(0, 255, 255);\n"
"background-color:#405361;\n"
"height:40px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"border:2px solid rgb(0, 255, 255);\n"
"font-size:16px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton{\n"
"width:150px;\n"
"height:40px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"border:2px solid rgb(0, 255, 255);\n"
"font-size:16px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton:pressed{\n"
"color:rgb(0, 0, 50);\n"
"background-color:rgb(0, 255, 255);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QLabel{\n"
"color:rgb(0, 255, 255);\n"
"background:rgba(85,170,255,0);\n"
"height:40px;\n"
"font-size:16px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QTableWidget{\n"
"\n"
"}\n"
"QTableWidget::item:hover{\n"
"color:rgb(0, 0, 50);\n"
"backgroun"
                        "d-color:rgb(0, 255, 255);\n"
"}\n"
"QTableWidget::item:selected{\n"
"color:rgb(0, 0, 50);\n"
"background-color:rgb(0, 255, 255);\n"
"}\n"
"QHeaderView{\n"
"color:rgb(0, 0, 50);\n"
"background:transparent;\n"
"font-size:16px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QHeaderView:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        gridLayout = new QGridLayout(UserManagement);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(10, 5, 10, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(80);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        AddUserBtn = new QPushButton(UserManagement);
        AddUserBtn->setObjectName(QString::fromUtf8("AddUserBtn"));

        horizontalLayout->addWidget(AddUserBtn);

        DelUserBtn = new QPushButton(UserManagement);
        DelUserBtn->setObjectName(QString::fromUtf8("DelUserBtn"));

        horizontalLayout->addWidget(DelUserBtn);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        UserManagementWidget = new QTableWidget(UserManagement);
        UserManagementWidget->setObjectName(QString::fromUtf8("UserManagementWidget"));
        UserManagementWidget->setMouseTracking(false);

        gridLayout->addWidget(UserManagementWidget, 1, 0, 1, 1);

        UserManagementCloseLayout = new QHBoxLayout();
        UserManagementCloseLayout->setObjectName(QString::fromUtf8("UserManagementCloseLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        UserManagementCloseLayout->addItem(horizontalSpacer);

        UserManagementCloseBtn = new QPushButton(UserManagement);
        UserManagementCloseBtn->setObjectName(QString::fromUtf8("UserManagementCloseBtn"));
        UserManagementCloseBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid #8f8f91;\n"
"	border-radius: 6px;\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"	width: 50px;\n"
"	height: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        UserManagementCloseLayout->addWidget(UserManagementCloseBtn);


        gridLayout->addLayout(UserManagementCloseLayout, 0, 0, 1, 1);


        retranslateUi(UserManagement);

        QMetaObject::connectSlotsByName(UserManagement);
    } // setupUi

    void retranslateUi(QDialog *UserManagement)
    {
        UserManagement->setWindowTitle(QApplication::translate("UserManagement", "Dialog", nullptr));
        AddUserBtn->setText(QApplication::translate("UserManagement", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        DelUserBtn->setText(QApplication::translate("UserManagement", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        UserManagementCloseBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserManagement: public Ui_UserManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEMENT_H
