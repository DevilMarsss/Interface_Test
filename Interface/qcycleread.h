#ifndef QCYCLEREAD_H
#define QCYCLEREAD_H

#include <QObject>
#include <QWidget>
#include <QThread>
#include <QMutex>
#include "pcie_fun.h"
#include "TimeCounter.h"
#include "public.h"
#include "xdma_lib.h"

#define MAX_RECV_BUFF_SIZE 0x10000    //0x1000//0x400000//
#define START_DDR_READ_ADDR 0x08000000

extern quint64 RecvDataCount;    //统计时间内接收的总字节数

class QCycleRead : public QObject
{
    Q_OBJECT

public:
    QCycleRead(QString filePath, unsigned int ddrReadaddr, long moveDDRSize ,bool show_rcv_on_ui);

    bool bWhileRead = true;

    TimeCounter dugTimer;

    TimeCounter dugTimer2;

    unsigned int GetNewestDDRRead();

    quint64 DebugCount();

    void save_to_file(QString, unsigned int);

public slots:
    void CycleGetFiFoFrame();

signals:
    void sig_size_over1280(unsigned int size);

    void sig_rcv_data(uint8_t *buf,unsigned int size);

private:
    QString m_file_recv_name;
    quint64 m_debug_count;
    unsigned int m_ddrRead;
    bool bShowDataOutOnUI = false;
};

#endif // QCYCLEREAD_H
