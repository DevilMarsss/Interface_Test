/********************************************************************************
** Form generated from reading UI file 'userlog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOG_H
#define UI_USERLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLog
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *UserLogStackedWidget;
    QWidget *page_login;
    QGridLayout *gridLayout_3;
    QFrame *LogInFrame;
    QGridLayout *gridLayout_4;
    QGridLayout *UserInputLayout;
    QLabel *UsernameLabel;
    QLabel *UserKeyLabel;
    QLineEdit *UserKeyInputEdit;
    QLineEdit *UsernameInputEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer1;
    QPushButton *UserLogInBtn;
    QSpacerItem *horizontalSpacer3;
    QPushButton *UserExitBtn;
    QSpacerItem *horizontalSpacer2;
    QWidget *page_loged;
    QGridLayout *gridLayout_2;
    QHBoxLayout *LogedBtnLayout;
    QSpacerItem *horizontalSpacer4;
    QPushButton *LogedHideBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *LogedLogoutBtn;
    QSpacerItem *horizontalSpacer5;
    QLabel *LogedLabel;

    void setupUi(QDialog *UserLog)
    {
        if (UserLog->objectName().isEmpty())
            UserLog->setObjectName(QString::fromUtf8("UserLog"));
        UserLog->resize(400, 300);
        UserLog->setMinimumSize(QSize(400, 300));
        UserLog->setMaximumSize(QSize(400, 300));
        UserLog->setStyleSheet(QString::fromUtf8("*{\n"
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
"QFrame{\n"
"border-radius:10px;\n"
"}"));
        gridLayout = new QGridLayout(UserLog);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 30);
        UserLogStackedWidget = new QStackedWidget(UserLog);
        UserLogStackedWidget->setObjectName(QString::fromUtf8("UserLogStackedWidget"));
        page_login = new QWidget();
        page_login->setObjectName(QString::fromUtf8("page_login"));
        gridLayout_3 = new QGridLayout(page_login);
        gridLayout_3->setSpacing(10);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(10, 40, 10, 20);
        LogInFrame = new QFrame(page_login);
        LogInFrame->setObjectName(QString::fromUtf8("LogInFrame"));
        LogInFrame->setFrameShape(QFrame::StyledPanel);
        LogInFrame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(LogInFrame);
        gridLayout_4->setSpacing(10);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        UserInputLayout = new QGridLayout();
        UserInputLayout->setObjectName(QString::fromUtf8("UserInputLayout"));
        UserInputLayout->setHorizontalSpacing(20);
        UserInputLayout->setVerticalSpacing(10);
        UserInputLayout->setContentsMargins(10, -1, 30, -1);
        UsernameLabel = new QLabel(LogInFrame);
        UsernameLabel->setObjectName(QString::fromUtf8("UsernameLabel"));

        UserInputLayout->addWidget(UsernameLabel, 0, 0, 1, 1);

        UserKeyLabel = new QLabel(LogInFrame);
        UserKeyLabel->setObjectName(QString::fromUtf8("UserKeyLabel"));

        UserInputLayout->addWidget(UserKeyLabel, 1, 0, 1, 1);

        UserKeyInputEdit = new QLineEdit(LogInFrame);
        UserKeyInputEdit->setObjectName(QString::fromUtf8("UserKeyInputEdit"));
        UserKeyInputEdit->setMinimumSize(QSize(0, 30));
        UserKeyInputEdit->setMaxLength(10);
        UserKeyInputEdit->setEchoMode(QLineEdit::Password);

        UserInputLayout->addWidget(UserKeyInputEdit, 1, 1, 1, 1);

        UsernameInputEdit = new QLineEdit(LogInFrame);
        UsernameInputEdit->setObjectName(QString::fromUtf8("UsernameInputEdit"));
        UsernameInputEdit->setMinimumSize(QSize(0, 30));
        UsernameInputEdit->setMaxLength(10);
        UsernameInputEdit->setEchoMode(QLineEdit::Normal);
        UsernameInputEdit->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        UsernameInputEdit->setClearButtonEnabled(false);

        UserInputLayout->addWidget(UsernameInputEdit, 0, 1, 1, 1);


        gridLayout_4->addLayout(UserInputLayout, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer1);

        UserLogInBtn = new QPushButton(LogInFrame);
        UserLogInBtn->setObjectName(QString::fromUtf8("UserLogInBtn"));

        horizontalLayout->addWidget(UserLogInBtn);

        horizontalSpacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer3);

        UserExitBtn = new QPushButton(LogInFrame);
        UserExitBtn->setObjectName(QString::fromUtf8("UserExitBtn"));

        horizontalLayout->addWidget(UserExitBtn);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer2);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout_3->addWidget(LogInFrame, 0, 0, 1, 1);

        UserLogStackedWidget->addWidget(page_login);
        page_loged = new QWidget();
        page_loged->setObjectName(QString::fromUtf8("page_loged"));
        gridLayout_2 = new QGridLayout(page_loged);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(20, 20, 20, 20);
        LogedBtnLayout = new QHBoxLayout();
        LogedBtnLayout->setSpacing(0);
        LogedBtnLayout->setObjectName(QString::fromUtf8("LogedBtnLayout"));
        horizontalSpacer4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LogedBtnLayout->addItem(horizontalSpacer4);

        LogedHideBtn = new QPushButton(page_loged);
        LogedHideBtn->setObjectName(QString::fromUtf8("LogedHideBtn"));

        LogedBtnLayout->addWidget(LogedHideBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LogedBtnLayout->addItem(horizontalSpacer);

        LogedLogoutBtn = new QPushButton(page_loged);
        LogedLogoutBtn->setObjectName(QString::fromUtf8("LogedLogoutBtn"));

        LogedBtnLayout->addWidget(LogedLogoutBtn);

        horizontalSpacer5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LogedBtnLayout->addItem(horizontalSpacer5);


        gridLayout_2->addLayout(LogedBtnLayout, 1, 0, 1, 1);

        LogedLabel = new QLabel(page_loged);
        LogedLabel->setObjectName(QString::fromUtf8("LogedLabel"));
        LogedLabel->setStyleSheet(QString::fromUtf8("font: 25 20pt \"Adobe \345\256\213\344\275\223 Std L\";"));
        LogedLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LogedLabel, 0, 0, 1, 1);

        UserLogStackedWidget->addWidget(page_loged);

        gridLayout->addWidget(UserLogStackedWidget, 0, 0, 1, 1);


        retranslateUi(UserLog);
        QObject::connect(UserExitBtn, SIGNAL(clicked()), UserLog, SLOT(close()));

        UserLogStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserLog);
    } // setupUi

    void retranslateUi(QDialog *UserLog)
    {
        UserLog->setWindowTitle(QApplication::translate("UserLog", "Dialog", nullptr));
        UsernameLabel->setText(QApplication::translate("UserLog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        UserKeyLabel->setText(QApplication::translate("UserLog", "\345\257\206 \347\240\201 \357\274\232", nullptr));
        UserKeyInputEdit->setInputMask(QString());
        UserKeyInputEdit->setText(QString());
        UserKeyInputEdit->setPlaceholderText(QApplication::translate("UserLog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        UsernameInputEdit->setText(QString());
        UsernameInputEdit->setPlaceholderText(QApplication::translate("UserLog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        UserLogInBtn->setText(QApplication::translate("UserLog", "\347\231\273\345\275\225", nullptr));
        UserExitBtn->setText(QApplication::translate("UserLog", "\345\217\226\346\266\210", nullptr));
        LogedHideBtn->setText(QApplication::translate("UserLog", "\351\232\220\350\227\217", nullptr));
        LogedLogoutBtn->setText(QApplication::translate("UserLog", "\351\200\200\345\207\272", nullptr));
        LogedLabel->setText(QApplication::translate("UserLog", "\347\231\273\345\275\225\346\210\220\345\212\237\357\274\201\346\254\242\350\277\216\344\275\277\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLog: public Ui_UserLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOG_H
