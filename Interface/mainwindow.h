#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "qcycleread.h"
#include "TranslateSpeed.h"
#include "can_message.h"
#include "can_unpack.h"
#include "ethernet_unpack.h"
#include "pcie_fun.h"
#include "xdma_lib.h"

#define START_DDR_READ_ADDR 0x08000000

extern bool isLogIn;
extern bool isAdministrator;
extern int UserSequence;
extern QString UserName;
extern QString UserKey;
extern QString UserIsAdministrator;
extern QString excel_path;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString file_name;
    QString file_recv_name;
    int filesize;
    unsigned int readframesize;
    unsigned int readframetick;
    unsigned int ddrRead;
    unsigned int ddrstart;
    bool isWaitingRecv;
    bool isCycleSending;

    QTimer *Recv_timer;

    TranslateSpeed TransSpeed;

    void TransSpeedInit(void);

private slots:
    void on_log_action_triggered();

    void on_logout_action_triggered();

    void on_changeKey_action_triggered();

    void on_browse_action_triggered();

    void on_exit_action_triggered();

    void on_DiagnosisMonitor_triggered();

    void on_NetTestInitBtn_clicked();

    void on_VehicleTestInitBtn_clicked();

    void on_PartTestInitBtn_clicked();

    void on_OBCInterfaceBtn_clicked();

    void on_BMSInterfaceBtn_clicked();

    void on_Record_triggered();

    void on_Review_triggered();

    void on_VCU_Button_clicked();

    void on_BitSetBtn_clicked();

    void on_SendOnceBtn_clicked();

    void on_SendContinuousBtn_clicked();

    void on_RecContinuousBtn_clicked();

    void on_ClearLogBtn_clicked();

    void get_fifo_frame();

    void save_to_file(QString fname);

    void setRecvFileName();

    void SendSpeed(quint64 value);

    void RecvSpeed(quint64 value);

    void display_Interface();

private:
    Ui::MainWindow *ui;

    QCycleRead *m_cycle_read;

    QThread thread_cycle_read;

    QTimer *displaytimer;
};
#endif // MAINWINDOW_H
