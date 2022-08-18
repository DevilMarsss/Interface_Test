#ifndef TRANSLATESPEED_H
#define TRANSLATESPEED_H

#include <QObject>
#include <QTimer>
#include "qdebug.h"
#include "qcycleread.h"
#include "qcyclesend.h"

class TranslateSpeed : public QObject
{
    Q_OBJECT

public:
    explicit TranslateSpeed(QObject *parent = nullptr);
    void SetIntervalTime(int value);
    void Init();

signals:
    void signalSendSpeed(quint64);
    void signalRecvSpeed(quint64);

public slots:
    void slotSendSpeed(quint64 byte_count);     //发送速度
    void slotRecvSpeed(quint64 byte_count);     //接收速度

    quint64 CalcSendSpeed();    //计算发送速度
    quint64 CalcRecvSpeed();    //计算接收速度

private:
    QTimer Timer;           //定时器，用于定时计算

    int Interval;           //统计时间，即定时器的间隔时间，单位ms


};

#endif // TRANSLATESPEED_H
