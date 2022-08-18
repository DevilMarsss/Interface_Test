/********************************************************************************
** Form generated from reading UI file 'changekey.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEKEY_H
#define UI_CHANGEKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ChangeKey
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *ChangeKeyBtnLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ChangeKeyAckBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ChangeKeyCancerBtn;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *ChangeKeyInputLayout;
    QLineEdit *UsernameChangeEdit;
    QLabel *UserKeyBeforeLabel;
    QLineEdit *UserKeyBeforeEdit;
    QLabel *UserKeyAfterLabel;
    QLineEdit *UserKeyAfterEdit;
    QLabel *UserKeyAckLabel;
    QLineEdit *UserKeyAckEdit;
    QLabel *UsernameChangeLabel;

    void setupUi(QDialog *ChangeKey)
    {
        if (ChangeKey->objectName().isEmpty())
            ChangeKey->setObjectName(QString::fromUtf8("ChangeKey"));
        ChangeKey->resize(300, 300);
        ChangeKey->setMinimumSize(QSize(300, 300));
        ChangeKey->setMaximumSize(QSize(300, 300));
        ChangeKey->setStyleSheet(QString::fromUtf8("*{\n"
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
"}"));
        gridLayout = new QGridLayout(ChangeKey);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, 10, 20, 30);
        ChangeKeyBtnLayout = new QHBoxLayout();
        ChangeKeyBtnLayout->setObjectName(QString::fromUtf8("ChangeKeyBtnLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ChangeKeyBtnLayout->addItem(horizontalSpacer);

        ChangeKeyAckBtn = new QPushButton(ChangeKey);
        ChangeKeyAckBtn->setObjectName(QString::fromUtf8("ChangeKeyAckBtn"));

        ChangeKeyBtnLayout->addWidget(ChangeKeyAckBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ChangeKeyBtnLayout->addItem(horizontalSpacer_3);

        ChangeKeyCancerBtn = new QPushButton(ChangeKey);
        ChangeKeyCancerBtn->setObjectName(QString::fromUtf8("ChangeKeyCancerBtn"));

        ChangeKeyBtnLayout->addWidget(ChangeKeyCancerBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ChangeKeyBtnLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(ChangeKeyBtnLayout, 1, 0, 1, 1);

        ChangeKeyInputLayout = new QFormLayout();
        ChangeKeyInputLayout->setObjectName(QString::fromUtf8("ChangeKeyInputLayout"));
        ChangeKeyInputLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ChangeKeyInputLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ChangeKeyInputLayout->setHorizontalSpacing(10);
        ChangeKeyInputLayout->setVerticalSpacing(10);
        ChangeKeyInputLayout->setContentsMargins(10, 20, 10, 10);
        UsernameChangeEdit = new QLineEdit(ChangeKey);
        UsernameChangeEdit->setObjectName(QString::fromUtf8("UsernameChangeEdit"));
        UsernameChangeEdit->setMaxLength(10);

        ChangeKeyInputLayout->setWidget(0, QFormLayout::FieldRole, UsernameChangeEdit);

        UserKeyBeforeLabel = new QLabel(ChangeKey);
        UserKeyBeforeLabel->setObjectName(QString::fromUtf8("UserKeyBeforeLabel"));

        ChangeKeyInputLayout->setWidget(1, QFormLayout::LabelRole, UserKeyBeforeLabel);

        UserKeyBeforeEdit = new QLineEdit(ChangeKey);
        UserKeyBeforeEdit->setObjectName(QString::fromUtf8("UserKeyBeforeEdit"));
        UserKeyBeforeEdit->setMaxLength(10);
        UserKeyBeforeEdit->setEchoMode(QLineEdit::Password);

        ChangeKeyInputLayout->setWidget(1, QFormLayout::FieldRole, UserKeyBeforeEdit);

        UserKeyAfterLabel = new QLabel(ChangeKey);
        UserKeyAfterLabel->setObjectName(QString::fromUtf8("UserKeyAfterLabel"));

        ChangeKeyInputLayout->setWidget(2, QFormLayout::LabelRole, UserKeyAfterLabel);

        UserKeyAfterEdit = new QLineEdit(ChangeKey);
        UserKeyAfterEdit->setObjectName(QString::fromUtf8("UserKeyAfterEdit"));
        UserKeyAfterEdit->setMaxLength(10);
        UserKeyAfterEdit->setEchoMode(QLineEdit::Password);

        ChangeKeyInputLayout->setWidget(2, QFormLayout::FieldRole, UserKeyAfterEdit);

        UserKeyAckLabel = new QLabel(ChangeKey);
        UserKeyAckLabel->setObjectName(QString::fromUtf8("UserKeyAckLabel"));

        ChangeKeyInputLayout->setWidget(3, QFormLayout::LabelRole, UserKeyAckLabel);

        UserKeyAckEdit = new QLineEdit(ChangeKey);
        UserKeyAckEdit->setObjectName(QString::fromUtf8("UserKeyAckEdit"));
        UserKeyAckEdit->setMaxLength(10);
        UserKeyAckEdit->setEchoMode(QLineEdit::Password);

        ChangeKeyInputLayout->setWidget(3, QFormLayout::FieldRole, UserKeyAckEdit);

        UsernameChangeLabel = new QLabel(ChangeKey);
        UsernameChangeLabel->setObjectName(QString::fromUtf8("UsernameChangeLabel"));

        ChangeKeyInputLayout->setWidget(0, QFormLayout::LabelRole, UsernameChangeLabel);


        gridLayout->addLayout(ChangeKeyInputLayout, 0, 0, 1, 1);


        retranslateUi(ChangeKey);

        QMetaObject::connectSlotsByName(ChangeKey);
    } // setupUi

    void retranslateUi(QDialog *ChangeKey)
    {
        ChangeKey->setWindowTitle(QApplication::translate("ChangeKey", "Dialog", nullptr));
        ChangeKeyAckBtn->setText(QApplication::translate("ChangeKey", "\347\241\256\350\256\244", nullptr));
        ChangeKeyCancerBtn->setText(QApplication::translate("ChangeKey", "\345\217\226\346\266\210", nullptr));
        UserKeyBeforeLabel->setText(QApplication::translate("ChangeKey", "\345\216\237\345\257\206\347\240\201\357\274\232", nullptr));
        UserKeyAfterLabel->setText(QApplication::translate("ChangeKey", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        UserKeyAckLabel->setText(QApplication::translate("ChangeKey", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        UsernameChangeLabel->setText(QApplication::translate("ChangeKey", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeKey: public Ui_ChangeKey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEKEY_H
