/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *log_action;
    QAction *changeKey_action;
    QAction *browse_action;
    QAction *addUser_action;
    QAction *logout_action;
    QAction *delUser_action;
    QAction *ProtocolSet;
    QAction *ProtocolImport;
    QAction *DiagnosisMonitor;
    QAction *Record;
    QAction *Review;
    QAction *exit_action;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page_init;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer;
    QLabel *TitleLabel;
    QGridLayout *InitLayout;
    QPushButton *PartTestInitBtn;
    QPushButton *NetTestInitBtn;
    QPushButton *VehicleTestInitBtn;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_net;
    QGridLayout *gridLayout;
    QGridLayout *ProtocolTestLayout;
    QGridLayout *PeriodicTestLayout;
    QLabel *PeriodicTestLabel;
    QGridLayout *AlgorithmTestLayout;
    QLabel *AlgorithmTestLabel;
    QGridLayout *ResponseTestLayout;
    QLabel *ResponseTestLabel;
    QLabel *ProtocolTestLabel;
    QGridLayout *RateTestLayout;
    QPlainTextEdit *RecordDisplay;
    QGridLayout *ControlLayout;
    QTextBrowser *SendRateTxt;
    QLineEdit *BitSetLine;
    QLabel *BitSetLabel;
    QTextBrowser *DropAmountTxt;
    QLabel *DropAmountLabel;
    QLabel *RecRateLabel;
    QLabel *SendRateLabel;
    QTextBrowser *DropRateTxt;
    QLabel *DropRateLabel;
    QTextBrowser *RecRateTxt;
    QVBoxLayout *TransmissionLayout;
    QPushButton *BitSetBtn;
    QPushButton *SendOnceBtn;
    QPushButton *SendContinuousBtn;
    QPushButton *RecContinuousBtn;
    QPushButton *ClearLogBtn;
    QLabel *RateTestLabel;
    QWidget *page_battery;
    QGridLayout *gridLayout_4;
    QLabel *PartTestLabel;
    QGridLayout *batteryTestMainControlLayout;
    QLabel *Remain1;
    QLabel *Remain2;
    QPushButton *OBCInterfaceBtn;
    QPushButton *BMSInterfaceBtn;
    QWidget *page_VCU;
    QGridLayout *gridLayout_6;
    QGridLayout *VCUgridLayout;
    QTextBrowser *VCU_0x631_o2_txt;
    QLabel *VCU_0x214_o6_label;
    QLabel *VCU_0x214_o3_label;
    QLabel *VCU_0x214_o5_label;
    QTextBrowser *VCU_0x214_o4_txt;
    QTextBrowser *VCU_0x214_o2_txt;
    QLabel *VCU_0x631_o1_label;
    QLabel *VCU_0x631_o2_label;
    QLabel *VCU_0x214_o2_label;
    QTextBrowser *VCU_0x214_o3_txt;
    QLabel *VCU_0x214_o1_label;
    QTextBrowser *VCU_0x214_o6_txt;
    QLabel *VCU_0x214_o4_label;
    QTextBrowser *VCU_0x631_o1_txt;
    QTextBrowser *VCU_0x214_o5_txt;
    QLabel *VCU_0x701_label;
    QTextBrowser *VCU_0x701_txt;
    QTextBrowser *VCU_0x214_o1_txt;
    QSpacerItem *horizontalSpacer;
    QPushButton *VCU_Button;
    QWidget *page_dataRR;
    QGridLayout *gridLayout_11;
    QLabel *dataRRInterfaceLabel;
    QWidget *page_OBC;
    QGridLayout *gridLayout_8;
    QGridLayout *OBCgridLayout_2;
    QTextBrowser *OBC_0x6D3_o5_txt;
    QTextBrowser *OBC_0x6D3_o3_txt;
    QLabel *OBC_0x6D3_o3_label;
    QLabel *OBC_0x6D3_o5_label;
    QLabel *OBC_0x6D3_o1_label;
    QTextBrowser *OBC_0x6D3_o1_txt;
    QTextBrowser *OBC_0x6D3_o4_txt;
    QLabel *OBC_0x6D3_o4_label;
    QLabel *OBC_0x6D3_o2_label;
    QTextBrowser *OBC_0x6D3_o2_txt;
    QLabel *OBC_0x6D7_label;
    QTextBrowser *OBC_0x6D7_txt;
    QLabel *OBCInterfaceLabel;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *OBCgridLayout_1;
    QTextBrowser *OBC_0x480_o4_txt;
    QLabel *OBC_0x480_o2_label;
    QTextBrowser *OBC_0x6D4_o1_txt;
    QLabel *OBC_0x480_o1_label;
    QTextBrowser *OBC_0x480_o5_txt;
    QLabel *OBC_0x6D4_o1_label;
    QTextBrowser *OBC_0x480_o1_txt;
    QLabel *OBC_0x480_o3_label;
    QTextBrowser *OBC_0x480_o3_txt;
    QTextBrowser *OBC_0x480_o2_txt;
    QLabel *OBC_0x480_o4_label;
    QLabel *OBC_0x480_o5_label;
    QLabel *OBC_0x6D4_o2_label;
    QTextBrowser *OBC_0x6D4_o2_txt;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *page_BMS;
    QGridLayout *gridLayout_9;
    QGridLayout *BMS_0x451;
    QLabel *BMS_0x451_o3_label;
    QLabel *BMS_0x451_o7_label;
    QTextBrowser *BMS_0x451_o8_txt;
    QLabel *BMS_0x451_o5_label;
    QTextBrowser *BMS_0x451_o6_txt;
    QTextBrowser *BMS_0x451_o2_txt;
    QTextBrowser *BMS_0x451_o4_txt;
    QTextBrowser *BMS_0x451_o7_txt;
    QLabel *BMS_0x451_o8_label;
    QTextBrowser *BMS_0x451_o1_txt;
    QLabel *BMS_0x451_o2_label;
    QLabel *BMS_0x451_o4_label;
    QLabel *BMS_0x451_o1_label;
    QLabel *BMS_0x451_o6_label;
    QTextBrowser *BMS_0x451_o5_txt;
    QTextBrowser *BMS_0x451_o3_txt;
    QLabel *BMS_0x451_o9_label;
    QTextBrowser *BMS_0x451_o9_txt;
    QGridLayout *BMS_0x457_0x458_0x61C_0x61D;
    QTextBrowser *BMS_0x458_o2_txt;
    QLabel *BMS_0x458_o2_label;
    QTextBrowser *BMS_0x61D_o7_txt;
    QTextBrowser *BMS_0x457_txt;
    QTextBrowser *BMS_0x61C_o1_txt;
    QLabel *BMS_0x61D_o10_label;
    QLabel *BMS_0x61D_o1_label;
    QLabel *BMS_0x61D_o2_label;
    QLabel *BMS_0x61D_o8_label;
    QLabel *BMS_0x61D_o7_label;
    QTextBrowser *BMS_0x61D_o8_txt;
    QLabel *BMS_0x458_o1_label;
    QTextBrowser *BMS_0x61C_o2_txt;
    QLabel *BMS_0x61C_o3_label;
    QTextBrowser *BMS_0x61D_o2_txt;
    QTextBrowser *BMS_0x458_o1_txt;
    QTextBrowser *BMS_0x61D_o4_txt;
    QLabel *BMS_0x61D_o5_label;
    QTextBrowser *BMS_0x61D_o3_txt;
    QTextBrowser *BMS_0x61D_o9_txt;
    QTextBrowser *BMS_0x61D_o10_txt;
    QTextBrowser *BMS_0x61D_o5_txt;
    QLabel *BMS_0x457_label;
    QLabel *BMS_0x61D_o4_label;
    QLabel *BMS_0x61C_o1_label;
    QTextBrowser *BMS_0x61D_o6_txt;
    QTextBrowser *BMS_0x61C_o3_txt;
    QLabel *BMS_0x61D_o9_label;
    QTextBrowser *BMS_0x61D_o1_txt;
    QLabel *BMS_0x61D_o6_label;
    QLabel *BMS_0x61C_o2_label;
    QLabel *BMS_0x61D_o3_label;
    QGridLayout *BMS_0x6C1;
    QLabel *BMS_0x6C1_o5_label;
    QLabel *BMS_0x6C1_o6_label;
    QTextBrowser *BMS_0x6C1_o8_txt;
    QLabel *BMS_0x6C1_o1_label;
    QLabel *BMS_0x6C1_o2_label;
    QLabel *BMS_0x6C1_o9_label;
    QTextBrowser *BMS_0x6C1_o3_txt;
    QTextBrowser *BMS_0x6C1_o4_txt;
    QTextBrowser *BMS_0x6C1_o10_txt;
    QTextBrowser *BMS_0x6C1_o9_txt;
    QTextBrowser *BMS_0x6C1_o5_txt;
    QLabel *BMS_0x6C1_o8_label;
    QLabel *BMS_0x6C1_o12_label;
    QTextBrowser *BMS_0x6C1_o7_txt;
    QLabel *BMS_0x6C1_o3_label;
    QTextBrowser *BMS_0x6C1_o1_txt;
    QTextBrowser *BMS_0x6C1_o11_txt;
    QLabel *BMS_0x6C1_o10_label;
    QLabel *BMS_0x6C1_o7_label;
    QTextBrowser *BMS_0x6C1_o2_txt;
    QTextBrowser *BMS_0x6C1_o12_txt;
    QTextBrowser *BMS_0x6C1_o6_txt;
    QLabel *BMS_0x6C1_o11_label;
    QLabel *BMS_0x6C1_o4_label;
    QGridLayout *BMS_0x450_0x452_0x453;
    QLabel *BMS_0x452_o3_label;
    QTextBrowser *BMS_0x453_o2_txt;
    QTextBrowser *BMS_0x450_o1_txt;
    QLabel *BMS_0x450_o1_label;
    QTextBrowser *BMS_0x450_o5_txt;
    QTextBrowser *BMS_0x450_o6_txt;
    QLabel *BMS_0x452_o1_label;
    QTextBrowser *BMS_0x452_o3_txt;
    QTextBrowser *BMS_0x450_o4_txt;
    QLabel *BMS_0x452_o2_label;
    QTextBrowser *BMS_0x453_o3_txt;
    QLabel *BMS_0x450_o6_label;
    QTextBrowser *BMS_0x452_o1_txt;
    QLabel *BMS_0x450_o4_label;
    QLabel *BMS_0x450_o5_label;
    QLabel *BMS_0x452_o4_label;
    QLabel *BMS_0x450_o2_label;
    QTextBrowser *BMS_0x450_o2_txt;
    QLabel *BMS_0x453_o3_label;
    QTextBrowser *BMS_0x450_o3_txt;
    QLabel *BMS_0x450_o3_label;
    QTextBrowser *BMS_0x450_o7_txt;
    QTextBrowser *BMS_0x452_o4_txt;
    QLabel *BMS_0x453_o4_label;
    QTextBrowser *BMS_0x453_o1_txt;
    QLabel *BMS_0x453_o2_label;
    QLabel *BMS_0x453_o1_label;
    QLabel *BMS_0x450_o7_label;
    QTextBrowser *BMS_0x453_o4_txt;
    QTextBrowser *BMS_0x452_o2_txt;
    QGridLayout *BMS_0x6C1_0x6C3;
    QTextBrowser *BMS_0x6C1_o15_txt;
    QLabel *BMS_0x6C3_o1_label;
    QTextBrowser *BMS_0x6C1_o13_txt;
    QTextBrowser *BMS_0x6C1_o14_txt;
    QTextBrowser *BMS_0x6C3_o2_txt;
    QLabel *BMS_0x6C1_o13_label;
    QLabel *BMS_0x6C1_o15_label;
    QLabel *BMS_0x6C3_o3_label;
    QTextBrowser *BMS_0x6C3_o1_txt;
    QLabel *BMS_0x6C1_o14_label;
    QLabel *BMS_0x6C1_o16_label;
    QTextBrowser *BMS_0x6C1_o17_txt;
    QTextBrowser *BMS_0x6C1_o16_txt;
    QLabel *BMS_0x6C3_o4_label;
    QLabel *BMS_0x6C3_o2_label;
    QLabel *BMS_0x6C1_o17_label;
    QTextBrowser *BMS_0x6C3_o3_txt;
    QLabel *BMS_0x6C3_o5_label;
    QTextBrowser *BMS_0x6C3_o4_txt;
    QTextBrowser *BMS_0x6C3_o5_txt;
    QGridLayout *BMS_0x61D_0x655;
    QTextBrowser *BMS_0x61D_o13_txt;
    QLabel *BMS_0x655_o4_label;
    QLabel *BMS_0x655_o7_label;
    QTextBrowser *BMS_0x655_o5_txt;
    QTextBrowser *BMS_0x655_o3_txt;
    QLabel *BMS_0x655_o9_label;
    QTextBrowser *BMS_0x655_o7_txt;
    QTextBrowser *BMS_0x655_o8_txt;
    QTextBrowser *BMS_0x655_o9_txt;
    QLabel *BMS_0x61D_o13_label;
    QTextBrowser *BMS_0x655_o2_txt;
    QLabel *BMS_0x655_o3_label;
    QTextBrowser *BMS_0x61D_o12_txt;
    QLabel *BMS_0x655_o2_label;
    QTextBrowser *BMS_0x61D_o11_txt;
    QTextBrowser *BMS_0x655_o4_txt;
    QTextBrowser *BMS_0x655_o1_txt;
    QLabel *BMS_0x655_o8_label;
    QLabel *BMS_0x61D_o11_label;
    QLabel *BMS_0x655_o5_label;
    QLabel *BMS_0x61D_o12_label;
    QLabel *BMS_0x655_o1_label;
    QLabel *BMS_0x655_o6_label;
    QTextBrowser *BMS_0x655_o6_txt;
    QLabel *BMSInterfaceLabel;
    QMenuBar *menuBar;
    QMenu *userManagement;
    QMenu *APPfunction;
    QMenu *Help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setMinimumSize(QSize(1920, 1080));
        MainWindow->setMaximumSize(QSize(1920, 1600));
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"color:rgb(0, 0, 0);\n"
"background:rgb(240, 240, 240);\n"
"font: 20pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"font-size:16px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QWidget{\n"
"background:rgb(240, 240, 240);\n"
"}\n"
"QMenuBar{\n"
"font: 18pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(160, 160, 160);\n"
"}\n"
"QMenuBar::item:selected{\n"
"color:rgb(245, 255, 255);\n"
"background-color:rgb(60, 60, 60);\n"
"border-style:inset;\n"
"}\n"
"QMenu{\n"
"font: 18pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"color:rgb(0, 0, 0);\n"
"background:rgb(245, 255, 255);\n"
"}\n"
"QMenu::item:selected{\n"
"color:rgb(245, 255, 255);\n"
"background-color:rgb(60, 60, 60);\n"
"border-style:inset;\n"
"}\n"
"QMenu::item::pressed{\n"
"color:rgb(252, 255, 255);\n"
"background-color:rgb(50, 50, 50);\n"
"}\n"
"QTextBrowser{\n"
"height:50px;\n"
"background-color:rgb(250,255,255);\n"
"border-style:inset;\n"
"border-radius:10px;\n"
"border:2px solid rgb(222, 222, 222);\n"
"fo"
                        "nt-size:24px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QLineEdit{\n"
"color:rgb(0, 0, 0);\n"
"height:50px;\n"
"background-color:rgb(250,255,255);\n"
"border-style:inset;\n"
"border-radius:10px;\n"
"border:2px solid rgb(222, 222, 222);\n"
"font-size:24px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPlainTextEdit{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(250,255,255);\n"
"border-style:inset;\n"
"border-radius:10px;\n"
"border:2px solid rgb(222, 222, 222);\n"
"font-size:24px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton{\n"
"width:150px;\n"
"height:40px;\n"
"background-color:rgb(253,255,255);\n"
"border-radius:10px;\n"
"border-right:3px groove rgb(222, 222, 222);\n"
"border-bottom:3px groove rgb(222, 222, 222);\n"
"font-size:24px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton:pressed{\n"
"color:rgb(60, 60, 60);\n"
"background-color:rgb(250, 255, 255);\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QLabel{\n"
"color:rgb(0, 0, 0);\n"
"height:40px;\n"
"font-size:16px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        log_action = new QAction(MainWindow);
        log_action->setObjectName(QString::fromUtf8("log_action"));
        QFont font;
        log_action->setFont(font);
        changeKey_action = new QAction(MainWindow);
        changeKey_action->setObjectName(QString::fromUtf8("changeKey_action"));
        browse_action = new QAction(MainWindow);
        browse_action->setObjectName(QString::fromUtf8("browse_action"));
        addUser_action = new QAction(MainWindow);
        addUser_action->setObjectName(QString::fromUtf8("addUser_action"));
        logout_action = new QAction(MainWindow);
        logout_action->setObjectName(QString::fromUtf8("logout_action"));
        delUser_action = new QAction(MainWindow);
        delUser_action->setObjectName(QString::fromUtf8("delUser_action"));
        ProtocolSet = new QAction(MainWindow);
        ProtocolSet->setObjectName(QString::fromUtf8("ProtocolSet"));
        ProtocolImport = new QAction(MainWindow);
        ProtocolImport->setObjectName(QString::fromUtf8("ProtocolImport"));
        DiagnosisMonitor = new QAction(MainWindow);
        DiagnosisMonitor->setObjectName(QString::fromUtf8("DiagnosisMonitor"));
        Record = new QAction(MainWindow);
        Record->setObjectName(QString::fromUtf8("Record"));
        Review = new QAction(MainWindow);
        Review->setObjectName(QString::fromUtf8("Review"));
        exit_action = new QAction(MainWindow);
        exit_action->setObjectName(QString::fromUtf8("exit_action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_init = new QWidget();
        page_init->setObjectName(QString::fromUtf8("page_init"));
        gridLayout_5 = new QGridLayout(page_init);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, -1, 0, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 1);

        TitleLabel = new QLabel(page_init);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));
        TitleLabel->setEnabled(true);
        TitleLabel->setMinimumSize(QSize(0, 200));
        TitleLabel->setMaximumSize(QSize(5000, 200));
        TitleLabel->setStyleSheet(QString::fromUtf8("font: 25 72pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"background-color:rgb(248, 255, 255);\n"
"border:10px ridge rgb(245, 255, 255);"));
        TitleLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(TitleLabel, 1, 0, 1, 1);

        InitLayout = new QGridLayout();
        InitLayout->setObjectName(QString::fromUtf8("InitLayout"));
        InitLayout->setHorizontalSpacing(60);
        InitLayout->setVerticalSpacing(50);
        InitLayout->setContentsMargins(150, -1, 150, 100);
        PartTestInitBtn = new QPushButton(page_init);
        PartTestInitBtn->setObjectName(QString::fromUtf8("PartTestInitBtn"));
        PartTestInitBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:150px;\n"
"height:550px;\n"
"border-radius:20px;\n"
"border-style:groove;\n"
"background-image:url(:/battery);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"text-align:bottom;\n"
"font-size:32px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));

        InitLayout->addWidget(PartTestInitBtn, 0, 2, 1, 1);

        NetTestInitBtn = new QPushButton(page_init);
        NetTestInitBtn->setObjectName(QString::fromUtf8("NetTestInitBtn"));
        NetTestInitBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:150px;\n"
"height:550px;\n"
"border-radius:20px;\n"
"border-style:groove;\n"
"background-image:url(:/network);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"text-align:bottom;\n"
"font-size:32px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        NetTestInitBtn->setAutoDefault(false);

        InitLayout->addWidget(NetTestInitBtn, 0, 0, 1, 1);

        VehicleTestInitBtn = new QPushButton(page_init);
        VehicleTestInitBtn->setObjectName(QString::fromUtf8("VehicleTestInitBtn"));
        VehicleTestInitBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:150px;\n"
"height:550px;\n"
"border-radius:20px;\n"
"border-style:groove;\n"
"background-image:url(:/controller);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"text-align:bottom;\n"
"font-size:32px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));

        InitLayout->addWidget(VehicleTestInitBtn, 0, 1, 1, 1);


        gridLayout_5->addLayout(InitLayout, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_init);
        page_net = new QWidget();
        page_net->setObjectName(QString::fromUtf8("page_net"));
        gridLayout = new QGridLayout(page_net);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(50, 50, 50, 50);
        ProtocolTestLayout = new QGridLayout();
        ProtocolTestLayout->setObjectName(QString::fromUtf8("ProtocolTestLayout"));
        ProtocolTestLayout->setHorizontalSpacing(10);
        ProtocolTestLayout->setVerticalSpacing(50);
        ProtocolTestLayout->setContentsMargins(0, -1, -1, -1);
        PeriodicTestLayout = new QGridLayout();
        PeriodicTestLayout->setObjectName(QString::fromUtf8("PeriodicTestLayout"));
        PeriodicTestLabel = new QLabel(page_net);
        PeriodicTestLabel->setObjectName(QString::fromUtf8("PeriodicTestLabel"));

        PeriodicTestLayout->addWidget(PeriodicTestLabel, 0, 0, 1, 1);


        ProtocolTestLayout->addLayout(PeriodicTestLayout, 3, 0, 1, 1);

        AlgorithmTestLayout = new QGridLayout();
        AlgorithmTestLayout->setObjectName(QString::fromUtf8("AlgorithmTestLayout"));
        AlgorithmTestLabel = new QLabel(page_net);
        AlgorithmTestLabel->setObjectName(QString::fromUtf8("AlgorithmTestLabel"));

        AlgorithmTestLayout->addWidget(AlgorithmTestLabel, 0, 0, 1, 1);


        ProtocolTestLayout->addLayout(AlgorithmTestLayout, 5, 0, 1, 1);

        ResponseTestLayout = new QGridLayout();
        ResponseTestLayout->setObjectName(QString::fromUtf8("ResponseTestLayout"));
        ResponseTestLabel = new QLabel(page_net);
        ResponseTestLabel->setObjectName(QString::fromUtf8("ResponseTestLabel"));

        ResponseTestLayout->addWidget(ResponseTestLabel, 0, 0, 1, 1);


        ProtocolTestLayout->addLayout(ResponseTestLayout, 4, 0, 1, 1);


        gridLayout->addLayout(ProtocolTestLayout, 6, 0, 1, 1);

        ProtocolTestLabel = new QLabel(page_net);
        ProtocolTestLabel->setObjectName(QString::fromUtf8("ProtocolTestLabel"));
        ProtocolTestLabel->setStyleSheet(QString::fromUtf8("font: 25 20pt \"Adobe \345\256\213\344\275\223 Std L\";"));

        gridLayout->addWidget(ProtocolTestLabel, 5, 0, 1, 1);

        RateTestLayout = new QGridLayout();
        RateTestLayout->setObjectName(QString::fromUtf8("RateTestLayout"));
        RateTestLayout->setHorizontalSpacing(50);
        RateTestLayout->setContentsMargins(0, -1, -1, -1);
        RecordDisplay = new QPlainTextEdit(page_net);
        RecordDisplay->setObjectName(QString::fromUtf8("RecordDisplay"));

        RateTestLayout->addWidget(RecordDisplay, 0, 2, 1, 1);

        ControlLayout = new QGridLayout();
        ControlLayout->setObjectName(QString::fromUtf8("ControlLayout"));
        ControlLayout->setHorizontalSpacing(20);
        ControlLayout->setVerticalSpacing(10);
        ControlLayout->setContentsMargins(-1, -1, 0, -1);
        SendRateTxt = new QTextBrowser(page_net);
        SendRateTxt->setObjectName(QString::fromUtf8("SendRateTxt"));
        SendRateTxt->setMinimumSize(QSize(100, 30));
        SendRateTxt->setMaximumSize(QSize(16777215, 30));

        ControlLayout->addWidget(SendRateTxt, 1, 1, 1, 1);

        BitSetLine = new QLineEdit(page_net);
        BitSetLine->setObjectName(QString::fromUtf8("BitSetLine"));
        BitSetLine->setMinimumSize(QSize(100, 30));
        BitSetLine->setMaximumSize(QSize(16777215, 30));

        ControlLayout->addWidget(BitSetLine, 0, 1, 1, 1);

        BitSetLabel = new QLabel(page_net);
        BitSetLabel->setObjectName(QString::fromUtf8("BitSetLabel"));

        ControlLayout->addWidget(BitSetLabel, 0, 0, 1, 1);

        DropAmountTxt = new QTextBrowser(page_net);
        DropAmountTxt->setObjectName(QString::fromUtf8("DropAmountTxt"));
        DropAmountTxt->setMinimumSize(QSize(100, 30));
        DropAmountTxt->setMaximumSize(QSize(16777215, 30));

        ControlLayout->addWidget(DropAmountTxt, 3, 1, 1, 1);

        DropAmountLabel = new QLabel(page_net);
        DropAmountLabel->setObjectName(QString::fromUtf8("DropAmountLabel"));

        ControlLayout->addWidget(DropAmountLabel, 3, 0, 1, 1);

        RecRateLabel = new QLabel(page_net);
        RecRateLabel->setObjectName(QString::fromUtf8("RecRateLabel"));

        ControlLayout->addWidget(RecRateLabel, 2, 0, 1, 1);

        SendRateLabel = new QLabel(page_net);
        SendRateLabel->setObjectName(QString::fromUtf8("SendRateLabel"));
        SendRateLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        ControlLayout->addWidget(SendRateLabel, 1, 0, 1, 1);

        DropRateTxt = new QTextBrowser(page_net);
        DropRateTxt->setObjectName(QString::fromUtf8("DropRateTxt"));
        DropRateTxt->setMinimumSize(QSize(100, 30));
        DropRateTxt->setMaximumSize(QSize(16777215, 30));

        ControlLayout->addWidget(DropRateTxt, 4, 1, 1, 1);

        DropRateLabel = new QLabel(page_net);
        DropRateLabel->setObjectName(QString::fromUtf8("DropRateLabel"));

        ControlLayout->addWidget(DropRateLabel, 4, 0, 1, 1);

        RecRateTxt = new QTextBrowser(page_net);
        RecRateTxt->setObjectName(QString::fromUtf8("RecRateTxt"));
        RecRateTxt->setMinimumSize(QSize(100, 30));
        RecRateTxt->setMaximumSize(QSize(16777215, 30));

        ControlLayout->addWidget(RecRateTxt, 2, 1, 1, 1);


        RateTestLayout->addLayout(ControlLayout, 0, 0, 1, 1);

        TransmissionLayout = new QVBoxLayout();
        TransmissionLayout->setObjectName(QString::fromUtf8("TransmissionLayout"));
        TransmissionLayout->setContentsMargins(10, -1, 10, -1);
        BitSetBtn = new QPushButton(page_net);
        BitSetBtn->setObjectName(QString::fromUtf8("BitSetBtn"));
        BitSetBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:120px;\n"
"height:50px;\n"
"}"));

        TransmissionLayout->addWidget(BitSetBtn);

        SendOnceBtn = new QPushButton(page_net);
        SendOnceBtn->setObjectName(QString::fromUtf8("SendOnceBtn"));
        SendOnceBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:120px;\n"
"height:50px;\n"
"}"));

        TransmissionLayout->addWidget(SendOnceBtn);

        SendContinuousBtn = new QPushButton(page_net);
        SendContinuousBtn->setObjectName(QString::fromUtf8("SendContinuousBtn"));
        SendContinuousBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:120px;\n"
"height:50px;\n"
"}"));

        TransmissionLayout->addWidget(SendContinuousBtn);

        RecContinuousBtn = new QPushButton(page_net);
        RecContinuousBtn->setObjectName(QString::fromUtf8("RecContinuousBtn"));
        RecContinuousBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:120px;\n"
"height:50px;\n"
"}"));

        TransmissionLayout->addWidget(RecContinuousBtn);

        ClearLogBtn = new QPushButton(page_net);
        ClearLogBtn->setObjectName(QString::fromUtf8("ClearLogBtn"));
        ClearLogBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width:120px;\n"
"height:50px;\n"
"}"));

        TransmissionLayout->addWidget(ClearLogBtn);


        RateTestLayout->addLayout(TransmissionLayout, 0, 1, 1, 1);


        gridLayout->addLayout(RateTestLayout, 4, 0, 1, 1);

        RateTestLabel = new QLabel(page_net);
        RateTestLabel->setObjectName(QString::fromUtf8("RateTestLabel"));
        RateTestLabel->setStyleSheet(QString::fromUtf8("font: 25 20pt \"Adobe \345\256\213\344\275\223 Std L\";"));

        gridLayout->addWidget(RateTestLabel, 0, 0, 1, 1);

        stackedWidget->addWidget(page_net);
        page_battery = new QWidget();
        page_battery->setObjectName(QString::fromUtf8("page_battery"));
        gridLayout_4 = new QGridLayout(page_battery);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        PartTestLabel = new QLabel(page_battery);
        PartTestLabel->setObjectName(QString::fromUtf8("PartTestLabel"));
        PartTestLabel->setMaximumSize(QSize(16777215, 100));
        PartTestLabel->setStyleSheet(QString::fromUtf8("font: 25 20pt"));
        PartTestLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(PartTestLabel, 0, 0, 1, 1);

        batteryTestMainControlLayout = new QGridLayout();
        batteryTestMainControlLayout->setObjectName(QString::fromUtf8("batteryTestMainControlLayout"));
        Remain1 = new QLabel(page_battery);
        Remain1->setObjectName(QString::fromUtf8("Remain1"));
        Remain1->setAlignment(Qt::AlignCenter);

        batteryTestMainControlLayout->addWidget(Remain1, 0, 0, 1, 1);

        Remain2 = new QLabel(page_battery);
        Remain2->setObjectName(QString::fromUtf8("Remain2"));
        Remain2->setAlignment(Qt::AlignCenter);

        batteryTestMainControlLayout->addWidget(Remain2, 0, 1, 1, 1);

        OBCInterfaceBtn = new QPushButton(page_battery);
        OBCInterfaceBtn->setObjectName(QString::fromUtf8("OBCInterfaceBtn"));

        batteryTestMainControlLayout->addWidget(OBCInterfaceBtn, 1, 0, 1, 1);

        BMSInterfaceBtn = new QPushButton(page_battery);
        BMSInterfaceBtn->setObjectName(QString::fromUtf8("BMSInterfaceBtn"));

        batteryTestMainControlLayout->addWidget(BMSInterfaceBtn, 1, 1, 1, 1);


        gridLayout_4->addLayout(batteryTestMainControlLayout, 1, 0, 1, 1);

        stackedWidget->addWidget(page_battery);
        page_VCU = new QWidget();
        page_VCU->setObjectName(QString::fromUtf8("page_VCU"));
        gridLayout_6 = new QGridLayout(page_VCU);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, -1, 0, -1);
        VCUgridLayout = new QGridLayout();
        VCUgridLayout->setObjectName(QString::fromUtf8("VCUgridLayout"));
        VCUgridLayout->setHorizontalSpacing(10);
        VCUgridLayout->setVerticalSpacing(50);
        VCUgridLayout->setContentsMargins(20, 20, 20, 20);
        VCU_0x631_o2_txt = new QTextBrowser(page_VCU);
        VCU_0x631_o2_txt->setObjectName(QString::fromUtf8("VCU_0x631_o2_txt"));

        VCUgridLayout->addWidget(VCU_0x631_o2_txt, 7, 1, 1, 1);

        VCU_0x214_o6_label = new QLabel(page_VCU);
        VCU_0x214_o6_label->setObjectName(QString::fromUtf8("VCU_0x214_o6_label"));

        VCUgridLayout->addWidget(VCU_0x214_o6_label, 5, 0, 1, 1);

        VCU_0x214_o3_label = new QLabel(page_VCU);
        VCU_0x214_o3_label->setObjectName(QString::fromUtf8("VCU_0x214_o3_label"));

        VCUgridLayout->addWidget(VCU_0x214_o3_label, 2, 0, 1, 1);

        VCU_0x214_o5_label = new QLabel(page_VCU);
        VCU_0x214_o5_label->setObjectName(QString::fromUtf8("VCU_0x214_o5_label"));

        VCUgridLayout->addWidget(VCU_0x214_o5_label, 4, 0, 1, 1);

        VCU_0x214_o4_txt = new QTextBrowser(page_VCU);
        VCU_0x214_o4_txt->setObjectName(QString::fromUtf8("VCU_0x214_o4_txt"));

        VCUgridLayout->addWidget(VCU_0x214_o4_txt, 3, 1, 1, 1);

        VCU_0x214_o2_txt = new QTextBrowser(page_VCU);
        VCU_0x214_o2_txt->setObjectName(QString::fromUtf8("VCU_0x214_o2_txt"));

        VCUgridLayout->addWidget(VCU_0x214_o2_txt, 1, 1, 1, 1);

        VCU_0x631_o1_label = new QLabel(page_VCU);
        VCU_0x631_o1_label->setObjectName(QString::fromUtf8("VCU_0x631_o1_label"));

        VCUgridLayout->addWidget(VCU_0x631_o1_label, 6, 0, 1, 1);

        VCU_0x631_o2_label = new QLabel(page_VCU);
        VCU_0x631_o2_label->setObjectName(QString::fromUtf8("VCU_0x631_o2_label"));

        VCUgridLayout->addWidget(VCU_0x631_o2_label, 7, 0, 1, 1);

        VCU_0x214_o2_label = new QLabel(page_VCU);
        VCU_0x214_o2_label->setObjectName(QString::fromUtf8("VCU_0x214_o2_label"));

        VCUgridLayout->addWidget(VCU_0x214_o2_label, 1, 0, 1, 1);

        VCU_0x214_o3_txt = new QTextBrowser(page_VCU);
        VCU_0x214_o3_txt->setObjectName(QString::fromUtf8("VCU_0x214_o3_txt"));

        VCUgridLayout->addWidget(VCU_0x214_o3_txt, 2, 1, 1, 1);

        VCU_0x214_o1_label = new QLabel(page_VCU);
        VCU_0x214_o1_label->setObjectName(QString::fromUtf8("VCU_0x214_o1_label"));

        VCUgridLayout->addWidget(VCU_0x214_o1_label, 0, 0, 1, 1);

        VCU_0x214_o6_txt = new QTextBrowser(page_VCU);
        VCU_0x214_o6_txt->setObjectName(QString::fromUtf8("VCU_0x214_o6_txt"));

        VCUgridLayout->addWidget(VCU_0x214_o6_txt, 5, 1, 1, 1);

        VCU_0x214_o4_label = new QLabel(page_VCU);
        VCU_0x214_o4_label->setObjectName(QString::fromUtf8("VCU_0x214_o4_label"));

        VCUgridLayout->addWidget(VCU_0x214_o4_label, 3, 0, 1, 1);

        VCU_0x631_o1_txt = new QTextBrowser(page_VCU);
        VCU_0x631_o1_txt->setObjectName(QString::fromUtf8("VCU_0x631_o1_txt"));

        VCUgridLayout->addWidget(VCU_0x631_o1_txt, 6, 1, 1, 1);

        VCU_0x214_o5_txt = new QTextBrowser(page_VCU);
        VCU_0x214_o5_txt->setObjectName(QString::fromUtf8("VCU_0x214_o5_txt"));

        VCUgridLayout->addWidget(VCU_0x214_o5_txt, 4, 1, 1, 1);

        VCU_0x701_label = new QLabel(page_VCU);
        VCU_0x701_label->setObjectName(QString::fromUtf8("VCU_0x701_label"));

        VCUgridLayout->addWidget(VCU_0x701_label, 8, 0, 1, 1);

        VCU_0x701_txt = new QTextBrowser(page_VCU);
        VCU_0x701_txt->setObjectName(QString::fromUtf8("VCU_0x701_txt"));

        VCUgridLayout->addWidget(VCU_0x701_txt, 8, 1, 1, 1);

        VCU_0x214_o1_txt = new QTextBrowser(page_VCU);
        VCU_0x214_o1_txt->setObjectName(QString::fromUtf8("VCU_0x214_o1_txt"));

        VCUgridLayout->addWidget(VCU_0x214_o1_txt, 0, 1, 1, 1);


        gridLayout_6->addLayout(VCUgridLayout, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 1, 1, 1);

        VCU_Button = new QPushButton(page_VCU);
        VCU_Button->setObjectName(QString::fromUtf8("VCU_Button"));
        VCU_Button->setStyleSheet(QString::fromUtf8("height:80px;\n"
"background-color:rgb(253,255,255);\n"
"border-radius:0px;\n"
"border-top:3px groove rgb(222, 222, 222);\n"
"border-right:0px;\n"
"font-size:24px;\n"
"font-style:MingLiU-ExtB;\n"
"font:40px;"));

        gridLayout_6->addWidget(VCU_Button, 0, 0, 1, 2);

        stackedWidget->addWidget(page_VCU);
        page_dataRR = new QWidget();
        page_dataRR->setObjectName(QString::fromUtf8("page_dataRR"));
        gridLayout_11 = new QGridLayout(page_dataRR);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        dataRRInterfaceLabel = new QLabel(page_dataRR);
        dataRRInterfaceLabel->setObjectName(QString::fromUtf8("dataRRInterfaceLabel"));
        dataRRInterfaceLabel->setStyleSheet(QString::fromUtf8("font: 25 20pt \"Adobe \345\256\213\344\275\223 Std L\";"));

        gridLayout_11->addWidget(dataRRInterfaceLabel, 0, 0, 1, 1);

        stackedWidget->addWidget(page_dataRR);
        page_OBC = new QWidget();
        page_OBC->setObjectName(QString::fromUtf8("page_OBC"));
        gridLayout_8 = new QGridLayout(page_OBC);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        OBCgridLayout_2 = new QGridLayout();
        OBCgridLayout_2->setSpacing(50);
        OBCgridLayout_2->setObjectName(QString::fromUtf8("OBCgridLayout_2"));
        OBCgridLayout_2->setContentsMargins(20, 50, 50, 50);
        OBC_0x6D3_o5_txt = new QTextBrowser(page_OBC);
        OBC_0x6D3_o5_txt->setObjectName(QString::fromUtf8("OBC_0x6D3_o5_txt"));
        OBC_0x6D3_o5_txt->setMinimumSize(QSize(0, 50));
        OBC_0x6D3_o5_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o5_txt, 0, 1, 1, 1);

        OBC_0x6D3_o3_txt = new QTextBrowser(page_OBC);
        OBC_0x6D3_o3_txt->setObjectName(QString::fromUtf8("OBC_0x6D3_o3_txt"));
        OBC_0x6D3_o3_txt->setMinimumSize(QSize(0, 50));
        OBC_0x6D3_o3_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o3_txt, 2, 1, 1, 1);

        OBC_0x6D3_o3_label = new QLabel(page_OBC);
        OBC_0x6D3_o3_label->setObjectName(QString::fromUtf8("OBC_0x6D3_o3_label"));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o3_label, 2, 0, 1, 1);

        OBC_0x6D3_o5_label = new QLabel(page_OBC);
        OBC_0x6D3_o5_label->setObjectName(QString::fromUtf8("OBC_0x6D3_o5_label"));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o5_label, 0, 0, 1, 1);

        OBC_0x6D3_o1_label = new QLabel(page_OBC);
        OBC_0x6D3_o1_label->setObjectName(QString::fromUtf8("OBC_0x6D3_o1_label"));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o1_label, 1, 0, 1, 1);

        OBC_0x6D3_o1_txt = new QTextBrowser(page_OBC);
        OBC_0x6D3_o1_txt->setObjectName(QString::fromUtf8("OBC_0x6D3_o1_txt"));
        OBC_0x6D3_o1_txt->setMinimumSize(QSize(0, 50));
        OBC_0x6D3_o1_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o1_txt, 1, 1, 1, 1);

        OBC_0x6D3_o4_txt = new QTextBrowser(page_OBC);
        OBC_0x6D3_o4_txt->setObjectName(QString::fromUtf8("OBC_0x6D3_o4_txt"));
        OBC_0x6D3_o4_txt->setMinimumSize(QSize(0, 50));
        OBC_0x6D3_o4_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o4_txt, 4, 1, 1, 1);

        OBC_0x6D3_o4_label = new QLabel(page_OBC);
        OBC_0x6D3_o4_label->setObjectName(QString::fromUtf8("OBC_0x6D3_o4_label"));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o4_label, 4, 0, 1, 1);

        OBC_0x6D3_o2_label = new QLabel(page_OBC);
        OBC_0x6D3_o2_label->setObjectName(QString::fromUtf8("OBC_0x6D3_o2_label"));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o2_label, 3, 0, 1, 1);

        OBC_0x6D3_o2_txt = new QTextBrowser(page_OBC);
        OBC_0x6D3_o2_txt->setObjectName(QString::fromUtf8("OBC_0x6D3_o2_txt"));
        OBC_0x6D3_o2_txt->setMinimumSize(QSize(0, 50));
        OBC_0x6D3_o2_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_2->addWidget(OBC_0x6D3_o2_txt, 3, 1, 1, 1);

        OBC_0x6D7_label = new QLabel(page_OBC);
        OBC_0x6D7_label->setObjectName(QString::fromUtf8("OBC_0x6D7_label"));

        OBCgridLayout_2->addWidget(OBC_0x6D7_label, 5, 0, 1, 1);

        OBC_0x6D7_txt = new QTextBrowser(page_OBC);
        OBC_0x6D7_txt->setObjectName(QString::fromUtf8("OBC_0x6D7_txt"));
        OBC_0x6D7_txt->setMinimumSize(QSize(0, 50));
        OBC_0x6D7_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_2->addWidget(OBC_0x6D7_txt, 5, 1, 1, 1);


        gridLayout_8->addLayout(OBCgridLayout_2, 1, 6, 1, 1);

        OBCInterfaceLabel = new QLabel(page_OBC);
        OBCInterfaceLabel->setObjectName(QString::fromUtf8("OBCInterfaceLabel"));
        OBCInterfaceLabel->setMinimumSize(QSize(0, 50));
        OBCInterfaceLabel->setMaximumSize(QSize(16777215, 80));
        OBCInterfaceLabel->setStyleSheet(QString::fromUtf8("font: 25 20pt \"Adobe \345\256\213\344\275\223 Std L\";"));

        gridLayout_8->addWidget(OBCInterfaceLabel, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        OBCgridLayout_1 = new QGridLayout();
        OBCgridLayout_1->setSpacing(50);
        OBCgridLayout_1->setObjectName(QString::fromUtf8("OBCgridLayout_1"));
        OBCgridLayout_1->setContentsMargins(20, 50, 20, 50);
        OBC_0x480_o4_txt = new QTextBrowser(page_OBC);
        OBC_0x480_o4_txt->setObjectName(QString::fromUtf8("OBC_0x480_o4_txt"));
        OBC_0x480_o4_txt->setMinimumSize(QSize(0, 50));
        OBC_0x480_o4_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_1->addWidget(OBC_0x480_o4_txt, 4, 2, 1, 1);

        OBC_0x480_o2_label = new QLabel(page_OBC);
        OBC_0x480_o2_label->setObjectName(QString::fromUtf8("OBC_0x480_o2_label"));

        OBCgridLayout_1->addWidget(OBC_0x480_o2_label, 1, 0, 1, 1);

        OBC_0x6D4_o1_txt = new QTextBrowser(page_OBC);
        OBC_0x6D4_o1_txt->setObjectName(QString::fromUtf8("OBC_0x6D4_o1_txt"));
        OBC_0x6D4_o1_txt->setMinimumSize(QSize(0, 50));
        OBC_0x6D4_o1_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_1->addWidget(OBC_0x6D4_o1_txt, 6, 2, 1, 1);

        OBC_0x480_o1_label = new QLabel(page_OBC);
        OBC_0x480_o1_label->setObjectName(QString::fromUtf8("OBC_0x480_o1_label"));

        OBCgridLayout_1->addWidget(OBC_0x480_o1_label, 0, 0, 1, 1);

        OBC_0x480_o5_txt = new QTextBrowser(page_OBC);
        OBC_0x480_o5_txt->setObjectName(QString::fromUtf8("OBC_0x480_o5_txt"));
        OBC_0x480_o5_txt->setMinimumSize(QSize(0, 50));
        OBC_0x480_o5_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_1->addWidget(OBC_0x480_o5_txt, 5, 2, 1, 1);

        OBC_0x6D4_o1_label = new QLabel(page_OBC);
        OBC_0x6D4_o1_label->setObjectName(QString::fromUtf8("OBC_0x6D4_o1_label"));

        OBCgridLayout_1->addWidget(OBC_0x6D4_o1_label, 6, 0, 1, 1);

        OBC_0x480_o1_txt = new QTextBrowser(page_OBC);
        OBC_0x480_o1_txt->setObjectName(QString::fromUtf8("OBC_0x480_o1_txt"));
        OBC_0x480_o1_txt->setMinimumSize(QSize(0, 50));
        OBC_0x480_o1_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_1->addWidget(OBC_0x480_o1_txt, 0, 2, 1, 1);

        OBC_0x480_o3_label = new QLabel(page_OBC);
        OBC_0x480_o3_label->setObjectName(QString::fromUtf8("OBC_0x480_o3_label"));

        OBCgridLayout_1->addWidget(OBC_0x480_o3_label, 2, 0, 1, 1);

        OBC_0x480_o3_txt = new QTextBrowser(page_OBC);
        OBC_0x480_o3_txt->setObjectName(QString::fromUtf8("OBC_0x480_o3_txt"));
        OBC_0x480_o3_txt->setMinimumSize(QSize(0, 50));
        OBC_0x480_o3_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_1->addWidget(OBC_0x480_o3_txt, 2, 2, 1, 1);

        OBC_0x480_o2_txt = new QTextBrowser(page_OBC);
        OBC_0x480_o2_txt->setObjectName(QString::fromUtf8("OBC_0x480_o2_txt"));
        OBC_0x480_o2_txt->setMinimumSize(QSize(0, 50));
        OBC_0x480_o2_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_1->addWidget(OBC_0x480_o2_txt, 1, 2, 1, 1);

        OBC_0x480_o4_label = new QLabel(page_OBC);
        OBC_0x480_o4_label->setObjectName(QString::fromUtf8("OBC_0x480_o4_label"));

        OBCgridLayout_1->addWidget(OBC_0x480_o4_label, 4, 0, 1, 1);

        OBC_0x480_o5_label = new QLabel(page_OBC);
        OBC_0x480_o5_label->setObjectName(QString::fromUtf8("OBC_0x480_o5_label"));

        OBCgridLayout_1->addWidget(OBC_0x480_o5_label, 5, 0, 1, 1);

        OBC_0x6D4_o2_label = new QLabel(page_OBC);
        OBC_0x6D4_o2_label->setObjectName(QString::fromUtf8("OBC_0x6D4_o2_label"));

        OBCgridLayout_1->addWidget(OBC_0x6D4_o2_label, 3, 0, 1, 1);

        OBC_0x6D4_o2_txt = new QTextBrowser(page_OBC);
        OBC_0x6D4_o2_txt->setObjectName(QString::fromUtf8("OBC_0x6D4_o2_txt"));
        OBC_0x6D4_o2_txt->setMinimumSize(QSize(0, 50));
        OBC_0x6D4_o2_txt->setMaximumSize(QSize(16777215, 60));

        OBCgridLayout_1->addWidget(OBC_0x6D4_o2_txt, 3, 2, 1, 1);


        gridLayout_8->addLayout(OBCgridLayout_1, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 1, 7, 1, 1);

        stackedWidget->addWidget(page_OBC);
        page_BMS = new QWidget();
        page_BMS->setObjectName(QString::fromUtf8("page_BMS"));
        gridLayout_9 = new QGridLayout(page_BMS);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        BMS_0x451 = new QGridLayout();
        BMS_0x451->setSpacing(10);
        BMS_0x451->setObjectName(QString::fromUtf8("BMS_0x451"));
        BMS_0x451->setContentsMargins(10, 10, 10, 10);
        BMS_0x451_o3_label = new QLabel(page_BMS);
        BMS_0x451_o3_label->setObjectName(QString::fromUtf8("BMS_0x451_o3_label"));

        BMS_0x451->addWidget(BMS_0x451_o3_label, 2, 0, 1, 1);

        BMS_0x451_o7_label = new QLabel(page_BMS);
        BMS_0x451_o7_label->setObjectName(QString::fromUtf8("BMS_0x451_o7_label"));

        BMS_0x451->addWidget(BMS_0x451_o7_label, 6, 0, 1, 1);

        BMS_0x451_o8_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o8_txt->setObjectName(QString::fromUtf8("BMS_0x451_o8_txt"));
        BMS_0x451_o8_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o8_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o8_txt, 7, 1, 1, 1);

        BMS_0x451_o5_label = new QLabel(page_BMS);
        BMS_0x451_o5_label->setObjectName(QString::fromUtf8("BMS_0x451_o5_label"));

        BMS_0x451->addWidget(BMS_0x451_o5_label, 4, 0, 1, 1);

        BMS_0x451_o6_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o6_txt->setObjectName(QString::fromUtf8("BMS_0x451_o6_txt"));
        BMS_0x451_o6_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o6_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o6_txt, 5, 1, 1, 1);

        BMS_0x451_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o2_txt->setObjectName(QString::fromUtf8("BMS_0x451_o2_txt"));
        BMS_0x451_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o2_txt, 1, 1, 1, 1);

        BMS_0x451_o4_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o4_txt->setObjectName(QString::fromUtf8("BMS_0x451_o4_txt"));
        BMS_0x451_o4_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o4_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o4_txt, 3, 1, 1, 1);

        BMS_0x451_o7_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o7_txt->setObjectName(QString::fromUtf8("BMS_0x451_o7_txt"));
        BMS_0x451_o7_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o7_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o7_txt, 6, 1, 1, 1);

        BMS_0x451_o8_label = new QLabel(page_BMS);
        BMS_0x451_o8_label->setObjectName(QString::fromUtf8("BMS_0x451_o8_label"));

        BMS_0x451->addWidget(BMS_0x451_o8_label, 7, 0, 1, 1);

        BMS_0x451_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o1_txt->setObjectName(QString::fromUtf8("BMS_0x451_o1_txt"));
        BMS_0x451_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o1_txt, 0, 1, 1, 1);

        BMS_0x451_o2_label = new QLabel(page_BMS);
        BMS_0x451_o2_label->setObjectName(QString::fromUtf8("BMS_0x451_o2_label"));

        BMS_0x451->addWidget(BMS_0x451_o2_label, 1, 0, 1, 1);

        BMS_0x451_o4_label = new QLabel(page_BMS);
        BMS_0x451_o4_label->setObjectName(QString::fromUtf8("BMS_0x451_o4_label"));

        BMS_0x451->addWidget(BMS_0x451_o4_label, 3, 0, 1, 1);

        BMS_0x451_o1_label = new QLabel(page_BMS);
        BMS_0x451_o1_label->setObjectName(QString::fromUtf8("BMS_0x451_o1_label"));

        BMS_0x451->addWidget(BMS_0x451_o1_label, 0, 0, 1, 1);

        BMS_0x451_o6_label = new QLabel(page_BMS);
        BMS_0x451_o6_label->setObjectName(QString::fromUtf8("BMS_0x451_o6_label"));

        BMS_0x451->addWidget(BMS_0x451_o6_label, 5, 0, 1, 1);

        BMS_0x451_o5_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o5_txt->setObjectName(QString::fromUtf8("BMS_0x451_o5_txt"));
        BMS_0x451_o5_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o5_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o5_txt, 4, 1, 1, 1);

        BMS_0x451_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o3_txt->setObjectName(QString::fromUtf8("BMS_0x451_o3_txt"));
        BMS_0x451_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o3_txt, 2, 1, 1, 1);

        BMS_0x451_o9_label = new QLabel(page_BMS);
        BMS_0x451_o9_label->setObjectName(QString::fromUtf8("BMS_0x451_o9_label"));

        BMS_0x451->addWidget(BMS_0x451_o9_label, 8, 0, 1, 1);

        BMS_0x451_o9_txt = new QTextBrowser(page_BMS);
        BMS_0x451_o9_txt->setObjectName(QString::fromUtf8("BMS_0x451_o9_txt"));
        BMS_0x451_o9_txt->setMinimumSize(QSize(0, 50));
        BMS_0x451_o9_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x451->addWidget(BMS_0x451_o9_txt, 8, 1, 1, 1);


        gridLayout_9->addLayout(BMS_0x451, 1, 1, 1, 1);

        BMS_0x457_0x458_0x61C_0x61D = new QGridLayout();
        BMS_0x457_0x458_0x61C_0x61D->setSpacing(10);
        BMS_0x457_0x458_0x61C_0x61D->setObjectName(QString::fromUtf8("BMS_0x457_0x458_0x61C_0x61D"));
        BMS_0x457_0x458_0x61C_0x61D->setContentsMargins(10, 10, 10, 10);
        BMS_0x458_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x458_o2_txt->setObjectName(QString::fromUtf8("BMS_0x458_o2_txt"));
        BMS_0x458_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x458_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x458_o2_txt, 2, 2, 1, 1);

        BMS_0x458_o2_label = new QLabel(page_BMS);
        BMS_0x458_o2_label->setObjectName(QString::fromUtf8("BMS_0x458_o2_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x458_o2_label, 2, 0, 1, 1);

        BMS_0x61D_o7_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o7_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o7_txt"));
        BMS_0x61D_o7_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o7_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o7_txt, 12, 2, 1, 1);

        BMS_0x457_txt = new QTextBrowser(page_BMS);
        BMS_0x457_txt->setObjectName(QString::fromUtf8("BMS_0x457_txt"));
        BMS_0x457_txt->setMinimumSize(QSize(0, 50));
        BMS_0x457_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x457_txt, 0, 2, 1, 1);

        BMS_0x61C_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x61C_o1_txt->setObjectName(QString::fromUtf8("BMS_0x61C_o1_txt"));
        BMS_0x61C_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61C_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61C_o1_txt, 3, 2, 1, 1);

        BMS_0x61D_o10_label = new QLabel(page_BMS);
        BMS_0x61D_o10_label->setObjectName(QString::fromUtf8("BMS_0x61D_o10_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o10_label, 15, 0, 1, 1);

        BMS_0x61D_o1_label = new QLabel(page_BMS);
        BMS_0x61D_o1_label->setObjectName(QString::fromUtf8("BMS_0x61D_o1_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o1_label, 6, 0, 1, 1);

        BMS_0x61D_o2_label = new QLabel(page_BMS);
        BMS_0x61D_o2_label->setObjectName(QString::fromUtf8("BMS_0x61D_o2_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o2_label, 7, 0, 1, 1);

        BMS_0x61D_o8_label = new QLabel(page_BMS);
        BMS_0x61D_o8_label->setObjectName(QString::fromUtf8("BMS_0x61D_o8_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o8_label, 13, 0, 1, 1);

        BMS_0x61D_o7_label = new QLabel(page_BMS);
        BMS_0x61D_o7_label->setObjectName(QString::fromUtf8("BMS_0x61D_o7_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o7_label, 12, 0, 1, 1);

        BMS_0x61D_o8_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o8_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o8_txt"));
        BMS_0x61D_o8_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o8_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o8_txt, 13, 2, 1, 1);

        BMS_0x458_o1_label = new QLabel(page_BMS);
        BMS_0x458_o1_label->setObjectName(QString::fromUtf8("BMS_0x458_o1_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x458_o1_label, 1, 0, 1, 1);

        BMS_0x61C_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x61C_o2_txt->setObjectName(QString::fromUtf8("BMS_0x61C_o2_txt"));
        BMS_0x61C_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61C_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61C_o2_txt, 4, 2, 1, 1);

        BMS_0x61C_o3_label = new QLabel(page_BMS);
        BMS_0x61C_o3_label->setObjectName(QString::fromUtf8("BMS_0x61C_o3_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61C_o3_label, 5, 0, 1, 1);

        BMS_0x61D_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o2_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o2_txt"));
        BMS_0x61D_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o2_txt, 7, 2, 1, 1);

        BMS_0x458_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x458_o1_txt->setObjectName(QString::fromUtf8("BMS_0x458_o1_txt"));
        BMS_0x458_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x458_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x458_o1_txt, 1, 2, 1, 1);

        BMS_0x61D_o4_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o4_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o4_txt"));
        BMS_0x61D_o4_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o4_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o4_txt, 9, 2, 1, 1);

        BMS_0x61D_o5_label = new QLabel(page_BMS);
        BMS_0x61D_o5_label->setObjectName(QString::fromUtf8("BMS_0x61D_o5_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o5_label, 10, 0, 1, 1);

        BMS_0x61D_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o3_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o3_txt"));
        BMS_0x61D_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o3_txt, 8, 2, 1, 1);

        BMS_0x61D_o9_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o9_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o9_txt"));
        BMS_0x61D_o9_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o9_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o9_txt, 14, 2, 1, 1);

        BMS_0x61D_o10_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o10_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o10_txt"));
        BMS_0x61D_o10_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o10_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o10_txt, 15, 2, 1, 1);

        BMS_0x61D_o5_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o5_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o5_txt"));
        BMS_0x61D_o5_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o5_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o5_txt, 10, 2, 1, 1);

        BMS_0x457_label = new QLabel(page_BMS);
        BMS_0x457_label->setObjectName(QString::fromUtf8("BMS_0x457_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x457_label, 0, 0, 1, 1);

        BMS_0x61D_o4_label = new QLabel(page_BMS);
        BMS_0x61D_o4_label->setObjectName(QString::fromUtf8("BMS_0x61D_o4_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o4_label, 9, 0, 1, 1);

        BMS_0x61C_o1_label = new QLabel(page_BMS);
        BMS_0x61C_o1_label->setObjectName(QString::fromUtf8("BMS_0x61C_o1_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61C_o1_label, 3, 0, 1, 1);

        BMS_0x61D_o6_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o6_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o6_txt"));
        BMS_0x61D_o6_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o6_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o6_txt, 11, 2, 1, 1);

        BMS_0x61C_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x61C_o3_txt->setObjectName(QString::fromUtf8("BMS_0x61C_o3_txt"));
        BMS_0x61C_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61C_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61C_o3_txt, 5, 2, 1, 1);

        BMS_0x61D_o9_label = new QLabel(page_BMS);
        BMS_0x61D_o9_label->setObjectName(QString::fromUtf8("BMS_0x61D_o9_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o9_label, 14, 0, 1, 1);

        BMS_0x61D_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o1_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o1_txt"));
        BMS_0x61D_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o1_txt, 6, 2, 1, 1);

        BMS_0x61D_o6_label = new QLabel(page_BMS);
        BMS_0x61D_o6_label->setObjectName(QString::fromUtf8("BMS_0x61D_o6_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o6_label, 11, 0, 1, 1);

        BMS_0x61C_o2_label = new QLabel(page_BMS);
        BMS_0x61C_o2_label->setObjectName(QString::fromUtf8("BMS_0x61C_o2_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61C_o2_label, 4, 0, 1, 1);

        BMS_0x61D_o3_label = new QLabel(page_BMS);
        BMS_0x61D_o3_label->setObjectName(QString::fromUtf8("BMS_0x61D_o3_label"));

        BMS_0x457_0x458_0x61C_0x61D->addWidget(BMS_0x61D_o3_label, 8, 0, 1, 1);


        gridLayout_9->addLayout(BMS_0x457_0x458_0x61C_0x61D, 1, 2, 1, 1);

        BMS_0x6C1 = new QGridLayout();
        BMS_0x6C1->setSpacing(10);
        BMS_0x6C1->setObjectName(QString::fromUtf8("BMS_0x6C1"));
        BMS_0x6C1->setContentsMargins(10, 10, 10, 10);
        BMS_0x6C1_o5_label = new QLabel(page_BMS);
        BMS_0x6C1_o5_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o5_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o5_label, 4, 0, 1, 1);

        BMS_0x6C1_o6_label = new QLabel(page_BMS);
        BMS_0x6C1_o6_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o6_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o6_label, 5, 0, 1, 1);

        BMS_0x6C1_o8_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o8_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o8_txt"));
        BMS_0x6C1_o8_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o8_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o8_txt, 7, 1, 1, 1);

        BMS_0x6C1_o1_label = new QLabel(page_BMS);
        BMS_0x6C1_o1_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o1_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o1_label, 0, 0, 1, 1);

        BMS_0x6C1_o2_label = new QLabel(page_BMS);
        BMS_0x6C1_o2_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o2_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o2_label, 1, 0, 1, 1);

        BMS_0x6C1_o9_label = new QLabel(page_BMS);
        BMS_0x6C1_o9_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o9_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o9_label, 8, 0, 1, 1);

        BMS_0x6C1_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o3_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o3_txt"));
        BMS_0x6C1_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o3_txt, 2, 1, 1, 1);

        BMS_0x6C1_o4_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o4_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o4_txt"));
        BMS_0x6C1_o4_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o4_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o4_txt, 3, 1, 1, 1);

        BMS_0x6C1_o10_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o10_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o10_txt"));
        BMS_0x6C1_o10_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o10_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o10_txt, 9, 1, 1, 1);

        BMS_0x6C1_o9_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o9_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o9_txt"));
        BMS_0x6C1_o9_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o9_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o9_txt, 8, 1, 1, 1);

        BMS_0x6C1_o5_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o5_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o5_txt"));
        BMS_0x6C1_o5_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o5_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o5_txt, 4, 1, 1, 1);

        BMS_0x6C1_o8_label = new QLabel(page_BMS);
        BMS_0x6C1_o8_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o8_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o8_label, 7, 0, 1, 1);

        BMS_0x6C1_o12_label = new QLabel(page_BMS);
        BMS_0x6C1_o12_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o12_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o12_label, 11, 0, 1, 1);

        BMS_0x6C1_o7_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o7_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o7_txt"));
        BMS_0x6C1_o7_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o7_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o7_txt, 6, 1, 1, 1);

        BMS_0x6C1_o3_label = new QLabel(page_BMS);
        BMS_0x6C1_o3_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o3_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o3_label, 2, 0, 1, 1);

        BMS_0x6C1_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o1_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o1_txt"));
        BMS_0x6C1_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o1_txt, 0, 1, 1, 1);

        BMS_0x6C1_o11_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o11_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o11_txt"));
        BMS_0x6C1_o11_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o11_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o11_txt, 10, 1, 1, 1);

        BMS_0x6C1_o10_label = new QLabel(page_BMS);
        BMS_0x6C1_o10_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o10_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o10_label, 9, 0, 1, 1);

        BMS_0x6C1_o7_label = new QLabel(page_BMS);
        BMS_0x6C1_o7_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o7_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o7_label, 6, 0, 1, 1);

        BMS_0x6C1_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o2_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o2_txt"));
        BMS_0x6C1_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o2_txt, 1, 1, 1, 1);

        BMS_0x6C1_o12_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o12_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o12_txt"));
        BMS_0x6C1_o12_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o12_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o12_txt, 11, 1, 1, 1);

        BMS_0x6C1_o6_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o6_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o6_txt"));
        BMS_0x6C1_o6_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o6_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1->addWidget(BMS_0x6C1_o6_txt, 5, 1, 1, 1);

        BMS_0x6C1_o11_label = new QLabel(page_BMS);
        BMS_0x6C1_o11_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o11_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o11_label, 10, 0, 1, 1);

        BMS_0x6C1_o4_label = new QLabel(page_BMS);
        BMS_0x6C1_o4_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o4_label"));

        BMS_0x6C1->addWidget(BMS_0x6C1_o4_label, 3, 0, 1, 1);


        gridLayout_9->addLayout(BMS_0x6C1, 1, 4, 1, 1);

        BMS_0x450_0x452_0x453 = new QGridLayout();
        BMS_0x450_0x452_0x453->setSpacing(10);
        BMS_0x450_0x452_0x453->setObjectName(QString::fromUtf8("BMS_0x450_0x452_0x453"));
        BMS_0x450_0x452_0x453->setContentsMargins(10, 10, 10, 10);
        BMS_0x452_o3_label = new QLabel(page_BMS);
        BMS_0x452_o3_label->setObjectName(QString::fromUtf8("BMS_0x452_o3_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x452_o3_label, 9, 0, 1, 1);

        BMS_0x453_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x453_o2_txt->setObjectName(QString::fromUtf8("BMS_0x453_o2_txt"));
        BMS_0x453_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x453_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x453_o2_txt, 12, 1, 1, 1);

        BMS_0x450_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x450_o1_txt->setObjectName(QString::fromUtf8("BMS_0x450_o1_txt"));
        BMS_0x450_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x450_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o1_txt, 0, 1, 1, 1);

        BMS_0x450_o1_label = new QLabel(page_BMS);
        BMS_0x450_o1_label->setObjectName(QString::fromUtf8("BMS_0x450_o1_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o1_label, 0, 0, 1, 1);

        BMS_0x450_o5_txt = new QTextBrowser(page_BMS);
        BMS_0x450_o5_txt->setObjectName(QString::fromUtf8("BMS_0x450_o5_txt"));
        BMS_0x450_o5_txt->setMinimumSize(QSize(0, 50));
        BMS_0x450_o5_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o5_txt, 4, 1, 1, 1);

        BMS_0x450_o6_txt = new QTextBrowser(page_BMS);
        BMS_0x450_o6_txt->setObjectName(QString::fromUtf8("BMS_0x450_o6_txt"));
        BMS_0x450_o6_txt->setMinimumSize(QSize(0, 50));
        BMS_0x450_o6_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o6_txt, 5, 1, 1, 1);

        BMS_0x452_o1_label = new QLabel(page_BMS);
        BMS_0x452_o1_label->setObjectName(QString::fromUtf8("BMS_0x452_o1_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x452_o1_label, 7, 0, 1, 1);

        BMS_0x452_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x452_o3_txt->setObjectName(QString::fromUtf8("BMS_0x452_o3_txt"));
        BMS_0x452_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x452_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x452_o3_txt, 9, 1, 1, 1);

        BMS_0x450_o4_txt = new QTextBrowser(page_BMS);
        BMS_0x450_o4_txt->setObjectName(QString::fromUtf8("BMS_0x450_o4_txt"));
        BMS_0x450_o4_txt->setMinimumSize(QSize(0, 50));
        BMS_0x450_o4_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o4_txt, 3, 1, 1, 1);

        BMS_0x452_o2_label = new QLabel(page_BMS);
        BMS_0x452_o2_label->setObjectName(QString::fromUtf8("BMS_0x452_o2_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x452_o2_label, 8, 0, 1, 1);

        BMS_0x453_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x453_o3_txt->setObjectName(QString::fromUtf8("BMS_0x453_o3_txt"));
        BMS_0x453_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x453_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x453_o3_txt, 13, 1, 1, 1);

        BMS_0x450_o6_label = new QLabel(page_BMS);
        BMS_0x450_o6_label->setObjectName(QString::fromUtf8("BMS_0x450_o6_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o6_label, 5, 0, 1, 1);

        BMS_0x452_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x452_o1_txt->setObjectName(QString::fromUtf8("BMS_0x452_o1_txt"));
        BMS_0x452_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x452_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x452_o1_txt, 7, 1, 1, 1);

        BMS_0x450_o4_label = new QLabel(page_BMS);
        BMS_0x450_o4_label->setObjectName(QString::fromUtf8("BMS_0x450_o4_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o4_label, 3, 0, 1, 1);

        BMS_0x450_o5_label = new QLabel(page_BMS);
        BMS_0x450_o5_label->setObjectName(QString::fromUtf8("BMS_0x450_o5_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o5_label, 4, 0, 1, 1);

        BMS_0x452_o4_label = new QLabel(page_BMS);
        BMS_0x452_o4_label->setObjectName(QString::fromUtf8("BMS_0x452_o4_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x452_o4_label, 10, 0, 1, 1);

        BMS_0x450_o2_label = new QLabel(page_BMS);
        BMS_0x450_o2_label->setObjectName(QString::fromUtf8("BMS_0x450_o2_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o2_label, 1, 0, 1, 1);

        BMS_0x450_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x450_o2_txt->setObjectName(QString::fromUtf8("BMS_0x450_o2_txt"));
        BMS_0x450_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x450_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o2_txt, 1, 1, 1, 1);

        BMS_0x453_o3_label = new QLabel(page_BMS);
        BMS_0x453_o3_label->setObjectName(QString::fromUtf8("BMS_0x453_o3_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x453_o3_label, 13, 0, 1, 1);

        BMS_0x450_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x450_o3_txt->setObjectName(QString::fromUtf8("BMS_0x450_o3_txt"));
        BMS_0x450_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x450_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o3_txt, 2, 1, 1, 1);

        BMS_0x450_o3_label = new QLabel(page_BMS);
        BMS_0x450_o3_label->setObjectName(QString::fromUtf8("BMS_0x450_o3_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o3_label, 2, 0, 1, 1);

        BMS_0x450_o7_txt = new QTextBrowser(page_BMS);
        BMS_0x450_o7_txt->setObjectName(QString::fromUtf8("BMS_0x450_o7_txt"));
        BMS_0x450_o7_txt->setMinimumSize(QSize(0, 50));
        BMS_0x450_o7_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o7_txt, 6, 1, 1, 1);

        BMS_0x452_o4_txt = new QTextBrowser(page_BMS);
        BMS_0x452_o4_txt->setObjectName(QString::fromUtf8("BMS_0x452_o4_txt"));
        BMS_0x452_o4_txt->setMinimumSize(QSize(0, 50));
        BMS_0x452_o4_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x452_o4_txt, 10, 1, 1, 1);

        BMS_0x453_o4_label = new QLabel(page_BMS);
        BMS_0x453_o4_label->setObjectName(QString::fromUtf8("BMS_0x453_o4_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x453_o4_label, 14, 0, 1, 1);

        BMS_0x453_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x453_o1_txt->setObjectName(QString::fromUtf8("BMS_0x453_o1_txt"));
        BMS_0x453_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x453_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x453_o1_txt, 11, 1, 1, 1);

        BMS_0x453_o2_label = new QLabel(page_BMS);
        BMS_0x453_o2_label->setObjectName(QString::fromUtf8("BMS_0x453_o2_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x453_o2_label, 12, 0, 1, 1);

        BMS_0x453_o1_label = new QLabel(page_BMS);
        BMS_0x453_o1_label->setObjectName(QString::fromUtf8("BMS_0x453_o1_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x453_o1_label, 11, 0, 1, 1);

        BMS_0x450_o7_label = new QLabel(page_BMS);
        BMS_0x450_o7_label->setObjectName(QString::fromUtf8("BMS_0x450_o7_label"));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x450_o7_label, 6, 0, 1, 1);

        BMS_0x453_o4_txt = new QTextBrowser(page_BMS);
        BMS_0x453_o4_txt->setObjectName(QString::fromUtf8("BMS_0x453_o4_txt"));
        BMS_0x453_o4_txt->setMinimumSize(QSize(0, 50));
        BMS_0x453_o4_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x453_o4_txt, 14, 1, 1, 1);

        BMS_0x452_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x452_o2_txt->setObjectName(QString::fromUtf8("BMS_0x452_o2_txt"));
        BMS_0x452_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x452_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x450_0x452_0x453->addWidget(BMS_0x452_o2_txt, 8, 1, 1, 1);


        gridLayout_9->addLayout(BMS_0x450_0x452_0x453, 1, 0, 1, 1);

        BMS_0x6C1_0x6C3 = new QGridLayout();
        BMS_0x6C1_0x6C3->setSpacing(10);
        BMS_0x6C1_0x6C3->setObjectName(QString::fromUtf8("BMS_0x6C1_0x6C3"));
        BMS_0x6C1_0x6C3->setContentsMargins(10, 10, 10, 10);
        BMS_0x6C1_o15_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o15_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o15_txt"));
        BMS_0x6C1_o15_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o15_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o15_txt, 2, 1, 1, 1);

        BMS_0x6C3_o1_label = new QLabel(page_BMS);
        BMS_0x6C3_o1_label->setObjectName(QString::fromUtf8("BMS_0x6C3_o1_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o1_label, 5, 0, 1, 1);

        BMS_0x6C1_o13_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o13_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o13_txt"));
        BMS_0x6C1_o13_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o13_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o13_txt, 0, 1, 1, 1);

        BMS_0x6C1_o14_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o14_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o14_txt"));
        BMS_0x6C1_o14_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o14_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o14_txt, 1, 1, 1, 1);

        BMS_0x6C3_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x6C3_o2_txt->setObjectName(QString::fromUtf8("BMS_0x6C3_o2_txt"));
        BMS_0x6C3_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C3_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o2_txt, 6, 1, 1, 1);

        BMS_0x6C1_o13_label = new QLabel(page_BMS);
        BMS_0x6C1_o13_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o13_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o13_label, 0, 0, 1, 1);

        BMS_0x6C1_o15_label = new QLabel(page_BMS);
        BMS_0x6C1_o15_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o15_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o15_label, 2, 0, 1, 1);

        BMS_0x6C3_o3_label = new QLabel(page_BMS);
        BMS_0x6C3_o3_label->setObjectName(QString::fromUtf8("BMS_0x6C3_o3_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o3_label, 7, 0, 1, 1);

        BMS_0x6C3_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x6C3_o1_txt->setObjectName(QString::fromUtf8("BMS_0x6C3_o1_txt"));
        BMS_0x6C3_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C3_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o1_txt, 5, 1, 1, 1);

        BMS_0x6C1_o14_label = new QLabel(page_BMS);
        BMS_0x6C1_o14_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o14_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o14_label, 1, 0, 1, 1);

        BMS_0x6C1_o16_label = new QLabel(page_BMS);
        BMS_0x6C1_o16_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o16_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o16_label, 3, 0, 1, 1);

        BMS_0x6C1_o17_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o17_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o17_txt"));
        BMS_0x6C1_o17_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o17_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o17_txt, 4, 1, 1, 1);

        BMS_0x6C1_o16_txt = new QTextBrowser(page_BMS);
        BMS_0x6C1_o16_txt->setObjectName(QString::fromUtf8("BMS_0x6C1_o16_txt"));
        BMS_0x6C1_o16_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C1_o16_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o16_txt, 3, 1, 1, 1);

        BMS_0x6C3_o4_label = new QLabel(page_BMS);
        BMS_0x6C3_o4_label->setObjectName(QString::fromUtf8("BMS_0x6C3_o4_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o4_label, 8, 0, 1, 1);

        BMS_0x6C3_o2_label = new QLabel(page_BMS);
        BMS_0x6C3_o2_label->setObjectName(QString::fromUtf8("BMS_0x6C3_o2_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o2_label, 6, 0, 1, 1);

        BMS_0x6C1_o17_label = new QLabel(page_BMS);
        BMS_0x6C1_o17_label->setObjectName(QString::fromUtf8("BMS_0x6C1_o17_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C1_o17_label, 4, 0, 1, 1);

        BMS_0x6C3_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x6C3_o3_txt->setObjectName(QString::fromUtf8("BMS_0x6C3_o3_txt"));
        BMS_0x6C3_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C3_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o3_txt, 7, 1, 1, 1);

        BMS_0x6C3_o5_label = new QLabel(page_BMS);
        BMS_0x6C3_o5_label->setObjectName(QString::fromUtf8("BMS_0x6C3_o5_label"));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o5_label, 9, 0, 1, 1);

        BMS_0x6C3_o4_txt = new QTextBrowser(page_BMS);
        BMS_0x6C3_o4_txt->setObjectName(QString::fromUtf8("BMS_0x6C3_o4_txt"));
        BMS_0x6C3_o4_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C3_o4_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o4_txt, 8, 1, 1, 1);

        BMS_0x6C3_o5_txt = new QTextBrowser(page_BMS);
        BMS_0x6C3_o5_txt->setObjectName(QString::fromUtf8("BMS_0x6C3_o5_txt"));
        BMS_0x6C3_o5_txt->setMinimumSize(QSize(0, 50));
        BMS_0x6C3_o5_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x6C1_0x6C3->addWidget(BMS_0x6C3_o5_txt, 9, 1, 1, 1);


        gridLayout_9->addLayout(BMS_0x6C1_0x6C3, 1, 5, 1, 1);

        BMS_0x61D_0x655 = new QGridLayout();
        BMS_0x61D_0x655->setSpacing(10);
        BMS_0x61D_0x655->setObjectName(QString::fromUtf8("BMS_0x61D_0x655"));
        BMS_0x61D_0x655->setContentsMargins(10, 10, 10, 10);
        BMS_0x61D_o13_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o13_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o13_txt"));
        BMS_0x61D_o13_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o13_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x61D_o13_txt, 2, 1, 1, 1);

        BMS_0x655_o4_label = new QLabel(page_BMS);
        BMS_0x655_o4_label->setObjectName(QString::fromUtf8("BMS_0x655_o4_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o4_label, 10, 0, 1, 1);

        BMS_0x655_o7_label = new QLabel(page_BMS);
        BMS_0x655_o7_label->setObjectName(QString::fromUtf8("BMS_0x655_o7_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o7_label, 13, 0, 1, 1);

        BMS_0x655_o5_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o5_txt->setObjectName(QString::fromUtf8("BMS_0x655_o5_txt"));
        BMS_0x655_o5_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o5_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o5_txt, 11, 1, 1, 1);

        BMS_0x655_o3_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o3_txt->setObjectName(QString::fromUtf8("BMS_0x655_o3_txt"));
        BMS_0x655_o3_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o3_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o3_txt, 7, 1, 1, 1);

        BMS_0x655_o9_label = new QLabel(page_BMS);
        BMS_0x655_o9_label->setObjectName(QString::fromUtf8("BMS_0x655_o9_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o9_label, 15, 0, 1, 1);

        BMS_0x655_o7_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o7_txt->setObjectName(QString::fromUtf8("BMS_0x655_o7_txt"));
        BMS_0x655_o7_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o7_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o7_txt, 13, 1, 1, 1);

        BMS_0x655_o8_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o8_txt->setObjectName(QString::fromUtf8("BMS_0x655_o8_txt"));
        BMS_0x655_o8_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o8_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o8_txt, 14, 1, 1, 1);

        BMS_0x655_o9_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o9_txt->setObjectName(QString::fromUtf8("BMS_0x655_o9_txt"));
        BMS_0x655_o9_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o9_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o9_txt, 15, 1, 1, 1);

        BMS_0x61D_o13_label = new QLabel(page_BMS);
        BMS_0x61D_o13_label->setObjectName(QString::fromUtf8("BMS_0x61D_o13_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x61D_o13_label, 2, 0, 1, 1);

        BMS_0x655_o2_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o2_txt->setObjectName(QString::fromUtf8("BMS_0x655_o2_txt"));
        BMS_0x655_o2_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o2_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o2_txt, 5, 1, 1, 1);

        BMS_0x655_o3_label = new QLabel(page_BMS);
        BMS_0x655_o3_label->setObjectName(QString::fromUtf8("BMS_0x655_o3_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o3_label, 7, 0, 1, 1);

        BMS_0x61D_o12_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o12_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o12_txt"));
        BMS_0x61D_o12_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o12_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x61D_o12_txt, 1, 1, 1, 1);

        BMS_0x655_o2_label = new QLabel(page_BMS);
        BMS_0x655_o2_label->setObjectName(QString::fromUtf8("BMS_0x655_o2_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o2_label, 5, 0, 1, 1);

        BMS_0x61D_o11_txt = new QTextBrowser(page_BMS);
        BMS_0x61D_o11_txt->setObjectName(QString::fromUtf8("BMS_0x61D_o11_txt"));
        BMS_0x61D_o11_txt->setMinimumSize(QSize(0, 50));
        BMS_0x61D_o11_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x61D_o11_txt, 0, 1, 1, 1);

        BMS_0x655_o4_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o4_txt->setObjectName(QString::fromUtf8("BMS_0x655_o4_txt"));
        BMS_0x655_o4_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o4_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o4_txt, 10, 1, 1, 1);

        BMS_0x655_o1_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o1_txt->setObjectName(QString::fromUtf8("BMS_0x655_o1_txt"));
        BMS_0x655_o1_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o1_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o1_txt, 3, 1, 1, 1);

        BMS_0x655_o8_label = new QLabel(page_BMS);
        BMS_0x655_o8_label->setObjectName(QString::fromUtf8("BMS_0x655_o8_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o8_label, 14, 0, 1, 1);

        BMS_0x61D_o11_label = new QLabel(page_BMS);
        BMS_0x61D_o11_label->setObjectName(QString::fromUtf8("BMS_0x61D_o11_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x61D_o11_label, 0, 0, 1, 1);

        BMS_0x655_o5_label = new QLabel(page_BMS);
        BMS_0x655_o5_label->setObjectName(QString::fromUtf8("BMS_0x655_o5_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o5_label, 11, 0, 1, 1);

        BMS_0x61D_o12_label = new QLabel(page_BMS);
        BMS_0x61D_o12_label->setObjectName(QString::fromUtf8("BMS_0x61D_o12_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x61D_o12_label, 1, 0, 1, 1);

        BMS_0x655_o1_label = new QLabel(page_BMS);
        BMS_0x655_o1_label->setObjectName(QString::fromUtf8("BMS_0x655_o1_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o1_label, 3, 0, 1, 1);

        BMS_0x655_o6_label = new QLabel(page_BMS);
        BMS_0x655_o6_label->setObjectName(QString::fromUtf8("BMS_0x655_o6_label"));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o6_label, 12, 0, 1, 1);

        BMS_0x655_o6_txt = new QTextBrowser(page_BMS);
        BMS_0x655_o6_txt->setObjectName(QString::fromUtf8("BMS_0x655_o6_txt"));
        BMS_0x655_o6_txt->setMinimumSize(QSize(0, 50));
        BMS_0x655_o6_txt->setMaximumSize(QSize(16777215, 60));

        BMS_0x61D_0x655->addWidget(BMS_0x655_o6_txt, 12, 1, 1, 1);


        gridLayout_9->addLayout(BMS_0x61D_0x655, 1, 3, 1, 1);

        BMSInterfaceLabel = new QLabel(page_BMS);
        BMSInterfaceLabel->setObjectName(QString::fromUtf8("BMSInterfaceLabel"));
        BMSInterfaceLabel->setMinimumSize(QSize(0, 50));
        BMSInterfaceLabel->setStyleSheet(QString::fromUtf8("font: 25 20pt \"Adobe \345\256\213\344\275\223 Std L\";"));
        BMSInterfaceLabel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(BMSInterfaceLabel, 0, 0, 1, 6);

        stackedWidget->addWidget(page_BMS);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 43));
        userManagement = new QMenu(menuBar);
        userManagement->setObjectName(QString::fromUtf8("userManagement"));
        APPfunction = new QMenu(menuBar);
        APPfunction->setObjectName(QString::fromUtf8("APPfunction"));
        Help = new QMenu(menuBar);
        Help->setObjectName(QString::fromUtf8("Help"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(userManagement->menuAction());
        menuBar->addAction(APPfunction->menuAction());
        menuBar->addAction(Help->menuAction());
        userManagement->addAction(log_action);
        userManagement->addAction(logout_action);
        userManagement->addAction(changeKey_action);
        userManagement->addSeparator();
        userManagement->addAction(browse_action);
        userManagement->addSeparator();
        userManagement->addAction(exit_action);
        APPfunction->addAction(DiagnosisMonitor);
        APPfunction->addAction(Record);
        APPfunction->addAction(Review);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);
        NetTestInitBtn->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        log_action->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        changeKey_action->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        browse_action->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210\347\224\250\346\210\267", nullptr));
        addUser_action->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
#ifndef QT_NO_TOOLTIP
        addUser_action->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
#endif // QT_NO_TOOLTIP
        logout_action->setText(QApplication::translate("MainWindow", "\346\263\250\351\224\200\347\231\273\345\275\225", nullptr));
        delUser_action->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        ProtocolSet->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\351\205\215\347\275\256", nullptr));
        ProtocolImport->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\345\257\274\345\205\245", nullptr));
        DiagnosisMonitor->setText(QApplication::translate("MainWindow", "\350\257\212\346\226\255\344\270\216\347\233\221\346\216\247", nullptr));
        Record->setText(QApplication::translate("MainWindow", "\350\256\260\345\275\225", nullptr));
        Review->setText(QApplication::translate("MainWindow", "\345\233\236\346\224\276", nullptr));
        exit_action->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        exit_action->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_NO_TOOLTIP
        TitleLabel->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\347\275\221\347\273\234\346\225\205\351\232\234\350\257\212\346\226\255\345\217\212\346\265\213\350\257\225\345\271\263\345\217\260", nullptr));
        PartTestInitBtn->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\346\265\213\350\257\225\n"
"", nullptr));
        NetTestInitBtn->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234\346\265\213\350\257\225\n"
"", nullptr));
        VehicleTestInitBtn->setText(QApplication::translate("MainWindow", "\346\225\264\350\275\246\346\265\213\350\257\225\n"
"", nullptr));
        PeriodicTestLabel->setText(QApplication::translate("MainWindow", "\345\221\250\346\234\237\346\200\247\346\265\213\350\257\225", nullptr));
        AlgorithmTestLabel->setText(QApplication::translate("MainWindow", "\347\256\227\346\263\225\346\265\213\350\257\225", nullptr));
        ResponseTestLabel->setText(QApplication::translate("MainWindow", "\345\272\224\347\255\224\346\265\213\350\257\225", nullptr));
        ProtocolTestLabel->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\346\265\213\350\257\225", nullptr));
        BitSetLabel->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\263\242\347\211\271\347\216\207", nullptr));
        DropAmountLabel->setText(QApplication::translate("MainWindow", "\346\216\211\345\214\205\351\207\217", nullptr));
        RecRateLabel->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\351\200\237\347\216\207", nullptr));
        SendRateLabel->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\351\200\237\347\216\207", nullptr));
        DropRateLabel->setText(QApplication::translate("MainWindow", "\346\216\211\345\214\205\347\216\207", nullptr));
        BitSetBtn->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        SendOnceBtn->setText(QApplication::translate("MainWindow", "\345\215\225\346\254\241\345\217\221\351\200\201", nullptr));
        SendContinuousBtn->setText(QApplication::translate("MainWindow", "\346\214\201\347\273\255\345\217\221\351\200\201", nullptr));
        RecContinuousBtn->setText(QApplication::translate("MainWindow", "\346\214\201\347\273\255\346\216\245\346\224\266", nullptr));
        ClearLogBtn->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\350\256\260\345\275\225", nullptr));
        RateTestLabel->setText(QApplication::translate("MainWindow", "\351\200\237\347\216\207\346\265\213\350\257\225", nullptr));
        PartTestLabel->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\350\257\212\346\226\255\346\265\213\350\257\225", nullptr));
        Remain1->setText(QApplication::translate("MainWindow", "\346\255\244\345\244\204\351\242\204\347\225\231\347\224\265\346\234\272\347\225\214\351\235\242\344\270\273\350\246\201\346\230\276\347\244\272\345\217\202\346\225\260", nullptr));
        Remain2->setText(QApplication::translate("MainWindow", "\346\255\244\345\244\204\351\242\204\347\225\231\347\224\265\346\261\240\347\225\214\351\235\242\344\270\273\350\246\201\346\230\276\347\244\272\345\217\202\346\225\260", nullptr));
        OBCInterfaceBtn->setText(QApplication::translate("MainWindow", "OBC", nullptr));
        BMSInterfaceBtn->setText(QApplication::translate("MainWindow", "BMS", nullptr));
        VCU_0x214_o6_label->setText(QApplication::translate("MainWindow", "VCU\345\224\244\351\206\222BMS\346\214\207\344\273\244", nullptr));
        VCU_0x214_o3_label->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\345\214\205\345\212\240\347\203\255\345\205\201\350\256\270", nullptr));
        VCU_0x214_o5_label->setText(QApplication::translate("MainWindow", "\346\205\242\345\205\205\345\224\244\351\206\222\344\277\241\345\217\267", nullptr));
        VCU_0x631_o1_label->setText(QApplication::translate("MainWindow", "\346\225\264\350\275\246\346\225\205\351\232\234\345\244\204\347\220\206\347\255\211\347\272\247", nullptr));
        VCU_0x631_o2_label->setText(QApplication::translate("MainWindow", "\346\225\264\350\275\246\346\234\200\351\253\230\346\212\245\350\255\246\347\255\211\347\272\247", nullptr));
        VCU_0x214_o2_label->setText(QApplication::translate("MainWindow", "\345\205\205\347\224\265\345\205\201\350\256\270\346\214\207\344\273\244", nullptr));
        VCU_0x214_o1_label->setText(QApplication::translate("MainWindow", "\346\225\264\350\275\246\344\270\212\351\253\230\345\216\213\346\214\207\344\273\244", nullptr));
        VCU_0x214_o4_label->setText(QApplication::translate("MainWindow", "\345\277\253\345\205\205\345\224\244\351\206\222\344\277\241\345\217\267", nullptr));
        VCU_0x701_label->setText(QApplication::translate("MainWindow", "VCU_CAN\345\224\244\351\206\222BMS\344\277\241\345\217\267", nullptr));
        VCU_Button->setText(QApplication::translate("MainWindow", "\346\225\264 \350\275\246 \346\265\213 \350\257\225", nullptr));
        dataRRInterfaceLabel->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\350\256\260\345\275\225\344\270\216\345\233\236\346\224\276     \347\225\214\351\235\242", nullptr));
        OBC_0x6D3_o3_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\344\272\244\346\265\201\347\253\257\347\224\265\346\265\201", nullptr));
        OBC_0x6D3_o5_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\345\275\223\345\211\215\347\212\266\346\200\201", nullptr));
        OBC_0x6D3_o1_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\344\272\244\346\265\201\347\253\257\347\224\265\345\216\213", nullptr));
        OBC_0x6D3_o4_label->setText(QApplication::translate("MainWindow", "\347\224\265\347\275\221\346\226\255\347\275\221\346\240\207\345\277\227\344\275\215", nullptr));
        OBC_0x6D3_o2_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\346\270\251\345\272\246", nullptr));
        OBC_0x6D7_label->setText(QApplication::translate("MainWindow", "OBC\345\217\257\350\276\223\345\207\272\346\234\200\345\244\247\345\212\237\347\216\207", nullptr));
        OBCInterfaceLabel->setText(QApplication::translate("MainWindow", "OBC", nullptr));
        OBC_0x480_o2_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\347\233\264\346\265\201\347\253\257\347\224\265\346\265\201", nullptr));
        OBC_0x480_o1_label->setText(QApplication::translate("MainWindow", "\345\205\205\346\224\276\347\224\265\346\236\252\350\277\236\347\273\255\347\212\266\346\200\201", nullptr));
        OBC_0x6D4_o1_label->setText(QApplication::translate("MainWindow", "BMS\345\224\244\351\206\222OBC\347\224\265\346\272\220\347\212\266\346\200\201", nullptr));
        OBC_0x480_o3_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\347\233\264\346\265\201\347\253\257\347\224\265\345\216\213", nullptr));
        OBC_0x480_o4_label->setText(QApplication::translate("MainWindow", "\344\276\233\347\224\265\350\256\276\345\244\207\347\212\266\346\200\201", nullptr));
        OBC_0x480_o5_label->setText(QApplication::translate("MainWindow", "S2\345\274\200\345\205\263\347\212\266\346\200\201", nullptr));
        OBC_0x6D4_o2_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\351\242\235\345\256\232\345\212\237\347\216\207", nullptr));
        BMS_0x451_o3_label->setText(QApplication::translate("MainWindow", "BMS\347\212\266\346\200\201", nullptr));
        BMS_0x451_o7_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\345\244\226\351\203\250\346\200\273\347\224\265\345\216\213V2", nullptr));
        BMS_0x451_o5_label->setText(QApplication::translate("MainWindow", "\345\205\205\347\224\265\350\257\267\346\261\202", nullptr));
        BMS_0x451_o8_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\350\264\237\350\275\275\347\253\257\346\200\273\347\224\265\345\216\213V3", nullptr));
        BMS_0x451_o2_label->setText(QApplication::translate("MainWindow", "\347\246\201\346\255\242\347\233\264\346\265\201\345\205\205\347\224\265\n"
"\346\240\207\345\277\227\344\275\215", nullptr));
        BMS_0x451_o4_label->setText(QApplication::translate("MainWindow", "\345\277\253\345\205\205\347\224\265\346\236\252\n"
"\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        BMS_0x451_o1_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\345\205\205\346\224\276\347\224\265\346\250\241\345\274\217", nullptr));
        BMS_0x451_o6_label->setText(QApplication::translate("MainWindow", "\347\246\201\346\255\242\351\253\230\345\216\213\344\270\212\347\224\265\n"
"\346\240\207\345\277\227\344\275\215", nullptr));
        BMS_0x451_o9_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\345\206\205\351\203\250\346\200\273\347\224\265\345\216\213V1", nullptr));
        BMS_0x458_o2_label->setText(QApplication::translate("MainWindow", "\351\253\230\345\216\213\344\270\213\347\224\265\350\257\267\346\261\202\n"
"\357\274\210\345\205\205\346\224\276\347\224\265\344\270\223\347\224\250\357\274\211", nullptr));
        BMS_0x61D_o10_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\345\212\240\347\203\255\344\277\235\346\270\251\351\234\200\346\261\202\n"
"\345\210\244\346\226\255\345\256\214\346\210\220", nullptr));
        BMS_0x61D_o1_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\344\277\235\346\270\251\347\212\266\346\200\201", nullptr));
        BMS_0x61D_o2_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\345\212\240\347\203\255\347\212\266\346\200\201", nullptr));
        BMS_0x61D_o8_label->setText(QApplication::translate("MainWindow", "\345\205\205\347\224\265\347\212\266\346\200\201", nullptr));
        BMS_0x61D_o7_label->setText(QApplication::translate("MainWindow", "\346\205\242\345\205\205\345\205\205\347\224\265\n"
"\347\224\265\346\265\201\351\230\266\346\256\265", nullptr));
        BMS_0x458_o1_label->setText(QApplication::translate("MainWindow", "\345\205\205\346\224\276\347\224\265\n"
"\344\270\212\347\224\265\345\207\206\345\244\207\345\260\261\347\273\252", nullptr));
        BMS_0x61C_o3_label->setText(QApplication::translate("MainWindow", "\345\277\253\345\205\205\346\241\251\n"
"\346\234\200\345\244\247\350\276\223\345\207\272\347\224\265\346\265\201", nullptr));
        BMS_0x61D_o5_label->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\351\242\204\345\212\240\347\203\255\n"
"\344\277\235\346\270\251\351\234\200\346\261\202", nullptr));
        BMS_0x457_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\345\205\205/\346\224\276\347\224\265\347\224\265\346\265\201", nullptr));
        BMS_0x61D_o4_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\345\205\205\347\224\265\351\234\200\346\261\202\347\212\266\346\200\201", nullptr));
        BMS_0x61C_o1_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\n"
"\350\276\223\345\207\272\347\224\265\345\216\213\346\214\207\344\273\244", nullptr));
        BMS_0x61D_o9_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\345\212\240\347\203\255\347\273\247\347\224\265\345\231\250\347\212\266\346\200\201", nullptr));
        BMS_0x61D_o6_label->setText(QApplication::translate("MainWindow", "\351\253\230\345\216\213\344\270\213\347\224\265\350\257\267\346\261\202\n"
"(BMS)", nullptr));
        BMS_0x61C_o2_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\n"
"\350\276\223\345\207\272\347\224\265\346\265\201\346\214\207\344\273\244", nullptr));
        BMS_0x61D_o3_label->setText(QApplication::translate("MainWindow", "\345\277\253\345\205\205\345\205\205\347\224\265\n"
"\347\224\265\346\265\201\351\230\266\346\256\265", nullptr));
        BMS_0x6C1_o5_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\351\253\230\345\216\213\346\243\200\346\265\213\347\212\266\346\200\201\350\266\205\346\227\266", nullptr));
        BMS_0x6C1_o6_label->setText(QApplication::translate("MainWindow", "\351\253\230\345\216\213\347\263\273\347\273\237\n"
"\351\242\204\345\205\205\347\224\265\347\212\266\346\200\201\350\266\205\346\227\266", nullptr));
        BMS_0x6C1_o1_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\351\253\230\345\216\213\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        BMS_0x6C1_o2_label->setText(QApplication::translate("MainWindow", "BMS\n"
"\346\234\200\351\253\230\346\212\245\350\255\246\347\255\211\347\272\247", nullptr));
        BMS_0x6C1_o9_label->setText(QApplication::translate("MainWindow", "\351\203\250\344\273\266\345\255\230\346\214\241\347\212\266\346\200\201\350\266\205\346\227\266", nullptr));
        BMS_0x6C1_o8_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\346\255\243\347\253\257\347\273\247\347\224\265\345\231\250\n"
"\346\226\255\345\274\200\347\212\266\346\200\201\350\266\205\346\227\266", nullptr));
        BMS_0x6C1_o12_label->setText(QApplication::translate("MainWindow", "\345\277\253\345\205\205CC2\347\224\265\345\216\213", nullptr));
        BMS_0x6C1_o3_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\346\270\251\345\272\246\346\214\207\347\244\272\347\201\257", nullptr));
        BMS_0x6C1_o10_label->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\345\205\205\347\224\265\n"
"\346\255\243\347\253\257\347\273\247\347\224\265\345\231\250\n"
"\346\216\247\345\210\266\346\214\207\344\273\244", nullptr));
        BMS_0x6C1_o7_label->setText(QApplication::translate("MainWindow", "\351\253\230\345\216\213\347\263\273\347\273\237\n"
"\346\243\200\346\265\213\347\212\266\346\200\201\350\266\205\346\227\266", nullptr));
        BMS_0x6C1_o11_label->setText(QApplication::translate("MainWindow", "\346\205\242\345\205\205CC\347\224\265\345\216\213", nullptr));
        BMS_0x6C1_o4_label->setText(QApplication::translate("MainWindow", "\345\277\253\346\205\242\345\205\205\n"
"\346\255\243\345\270\270\345\205\205\346\273\241\n"
"\347\273\223\346\235\237\346\240\207\345\277\227\344\275\215", nullptr));
        BMS_0x452_o3_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\346\255\243\346\236\201\345\257\271GND\n"
"\347\273\235\347\274\230\347\224\265\351\230\273", nullptr));
        BMS_0x450_o1_label->setText(QApplication::translate("MainWindow", "S1\345\274\200\345\205\263\346\214\207\344\273\244", nullptr));
        BMS_0x452_o1_label->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\345\235\207\350\241\241\346\277\200\346\264\273", nullptr));
        BMS_0x452_o2_label->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\345\217\257\347\224\250\n"
"\345\205\205\347\224\265\347\224\265\346\265\201", nullptr));
        BMS_0x450_o6_label->setText(QApplication::translate("MainWindow", "BMS\n"
"\350\207\252\346\243\200\350\256\241\346\225\260\345\231\250", nullptr));
        BMS_0x450_o4_label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\347\212\266\346\200\201\345\205\201\350\256\270\n"
"\346\234\200\345\244\247\346\224\276\347\224\265\345\212\237\347\216\207", nullptr));
        BMS_0x450_o5_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\345\211\251\344\275\231\347\224\265\351\207\217SOC", nullptr));
        BMS_0x452_o4_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\350\264\237\346\236\201\345\257\271GND\n"
"\347\273\235\347\274\230\347\224\265\351\230\273", nullptr));
        BMS_0x450_o2_label->setText(QApplication::translate("MainWindow", "SOE\345\200\274", nullptr));
        BMS_0x453_o3_label->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\223\347\224\265\350\212\257\n"
"\346\234\200\351\253\230\346\270\251\345\272\246", nullptr));
        BMS_0x450_o3_label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\347\212\266\346\200\201\345\205\201\350\256\270\n"
"\346\234\200\345\244\247\345\233\236\351\246\210\345\212\237\347\216\207", nullptr));
        BMS_0x453_o4_label->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\345\214\205\n"
"\345\271\263\345\235\207\346\270\251\345\272\246", nullptr));
        BMS_0x453_o2_label->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\223\347\224\265\350\212\257\n"
"\346\270\251\345\272\246\346\236\201\345\267\256", nullptr));
        BMS_0x453_o1_label->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\223\347\224\265\350\212\257\n"
"\346\234\200\344\275\216\346\270\251\345\272\246", nullptr));
        BMS_0x450_o7_label->setText(QApplication::translate("MainWindow", "BMS\n"
"\345\210\235\345\247\213\345\214\226\347\212\266\346\200\201", nullptr));
        BMS_0x6C3_o1_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\345\214\205\n"
"\345\212\240\347\203\255\350\257\267\346\261\202", nullptr));
        BMS_0x6C1_o13_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\350\264\237\347\253\257\347\273\247\347\224\265\345\231\250\n"
"\346\216\247\345\210\266\346\214\207\344\273\244", nullptr));
        BMS_0x6C1_o15_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\351\242\204\345\205\205\347\224\265\347\273\247\347\224\265\345\231\250\n"
"\346\216\247\345\210\266\346\214\207\344\273\244", nullptr));
        BMS_0x6C3_o3_label->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\223\347\224\265\350\212\257\n"
"\346\234\200\344\275\216\347\224\265\345\216\213", nullptr));
        BMS_0x6C1_o14_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\n"
"\346\255\243\347\253\257\347\273\247\347\224\265\345\231\250\n"
"\346\216\247\345\210\266\346\214\207\344\273\244", nullptr));
        BMS_0x6C1_o16_label->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\345\205\205\347\224\265\n"
"\350\264\237\347\253\257\347\273\247\347\224\265\345\231\250\n"
"\346\216\247\345\210\266\346\214\207\344\273\244", nullptr));
        BMS_0x6C3_o4_label->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\223\347\224\265\350\212\257\n"
"\346\234\200\351\253\230\347\224\265\345\216\213", nullptr));
        BMS_0x6C3_o2_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240SOH", nullptr));
        BMS_0x6C1_o17_label->setText(QApplication::translate("MainWindow", "\345\205\205\346\224\276\347\224\265\344\270\212\347\224\265\345\274\225\345\257\274\n"
"\347\255\211\345\276\205\350\266\205\346\227\266", nullptr));
        BMS_0x6C3_o5_label->setText(QApplication::translate("MainWindow", "\344\272\244\346\265\201\345\205\205\347\224\265\n"
"\345\211\251\344\275\231\345\205\205\347\224\265\346\227\266\351\227\264", nullptr));
        BMS_0x655_o4_label->setText(QApplication::translate("MainWindow", "\350\276\276\345\210\260\346\200\273\347\224\265\345\216\213\n"
"\350\256\276\345\256\232\345\200\274\347\212\266\346\200\201", nullptr));
        BMS_0x655_o7_label->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\345\205\205\347\224\265\n"
"\347\224\265\346\265\201\350\277\207\345\244\247", nullptr));
        BMS_0x655_o9_label->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\345\205\205\347\224\265\n"
"\345\211\251\344\275\231\345\205\205\347\224\265\346\227\266\351\227\264", nullptr));
        BMS_0x61D_o13_label->setText(QApplication::translate("MainWindow", "S2\345\274\200\345\205\263\346\216\247\345\210\266\345\221\275\344\273\244", nullptr));
        BMS_0x655_o3_label->setText(QApplication::translate("MainWindow", "\350\276\276\345\210\260\346\211\200\351\234\200\346\261\202\347\232\204\n"
"SOC\347\233\256\346\240\207\345\200\274\347\212\266\346\200\201", nullptr));
        BMS_0x655_o2_label->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\345\205\205\347\224\265\346\234\272\n"
"\344\270\273\345\212\250\350\257\267\346\261\202\345\201\234\346\255\242", nullptr));
        BMS_0x655_o8_label->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\345\205\205\347\224\265\n"
"\347\224\265\345\216\213\345\274\202\345\270\270", nullptr));
        BMS_0x61D_o11_label->setText(QApplication::translate("MainWindow", "\345\205\205\347\224\265\346\236\252\n"
"\345\206\215\346\254\241\346\217\222\345\205\245\347\212\266\346\200\201", nullptr));
        BMS_0x655_o5_label->setText(QApplication::translate("MainWindow", "\350\276\276\345\210\260\345\215\225\344\275\223\347\224\265\345\216\213\n"
"\350\256\276\345\256\232\345\200\274\347\212\266\346\200\201", nullptr));
        BMS_0x61D_o12_label->setText(QApplication::translate("MainWindow", "\350\275\246\350\275\275\345\205\205\347\224\265\346\234\272\n"
"\345\267\245\344\275\234\346\214\207\344\273\244", nullptr));
        BMS_0x655_o1_label->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\345\205\205\347\224\265\n"
"\345\205\201\350\256\270\347\212\266\346\200\201", nullptr));
        BMS_0x655_o6_label->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\346\261\240\347\273\204\n"
"\346\270\251\345\272\246\350\277\207\351\253\230", nullptr));
        BMSInterfaceLabel->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        userManagement->setTitle(QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        APPfunction->setTitle(QApplication::translate("MainWindow", "\345\212\237\350\203\275", nullptr));
        Help->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
