#ifndef QCYCLESEND_H
#define QCYCLESEND_H

#include <QObject>
#include <QWidget>
#include "pcie_fun.h"
#include <QFile>
#include <QMessageBox>
#include <QThread>
#include <QTime>
#include <QDebug>
#include "TimeCounter.h"
#include <QMutex>
#include "public.h"

extern quint64 SendDataCount;    //统计时间内发送的总字节数

class QCycleSend : public QObject
{
    Q_OBJECT

public:
    QCycleSend(int type, int size, unsigned int ui_ddrstart, int ui_frame_tick, int ui_cycle_interval, unsigned int ui_val0x80000);

    int filesize;
    uint8_t *m_pu8Buffer;
    unsigned int ddrstart;
    int frame_tick;
    bool bWhile = true;
    int send_type;
    int m_interval;
    unsigned int val0x80000;

    QTime m_time;

    TimeCounter dug_timer;

    quint64 send_num = 0;

    quint64 GetSendNum(void);

    void startDmaWork(unsigned int addr,unsigned int len);

signals:
    void sigle_send_finshed(quint64 i);

    void sig_read_reg(unsigned int val);

    void sig_time_out();

    void sig_cnt_out();

public slots:
    void CycleSendDDR2FIFO(void);
};

#endif // QCYCLESEND_H
