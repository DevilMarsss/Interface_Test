#include "TranslateSpeed.h"
#include "qcycleread.h"
#include "qcyclesend.h"

TranslateSpeed::TranslateSpeed(QObject *parent) : QObject(parent)
{

}

void TranslateSpeed::Init()
{
    Interval = 2000;
    connect(&Timer, SIGNAL(timeout()), this, SLOT(CalcSendSpeed()));
    connect(&Timer, SIGNAL(timeout()), this, SLOT(CalcRecvSpeed()));
    Timer.start(Interval);
}

/*
 * 重新设置间隔时间
*/
void TranslateSpeed::SetIntervalTime(int value)
{
    Timer.stop();
    Interval = value;
    Timer.start(Interval);
}

/*
 * 发送速度槽，用于累加发送字节数
*/
void TranslateSpeed::slotSendSpeed(quint64 byte_count)
{
    SendDataCount += byte_count;
}

/*
 * 接收速度槽，用于累加接收字节数
*/
void TranslateSpeed::slotRecvSpeed(quint64 byte_count)
{
    RecvDataCount += byte_count;
}

/*
 * 计算发送速度，并发射信号
*/
quint64 TranslateSpeed::CalcSendSpeed()
{
    quint64 speed = SendDataCount / (Interval / 1000);
    emit signalSendSpeed(speed);
    SendDataCount = 0;
    return speed;
}

/*
 * 计算接收速度，并发送信号
*/
quint64 TranslateSpeed::CalcRecvSpeed()
{
    quint64 speed = RecvDataCount / (Interval / 1000);
    RecvDataCount = 0;
    emit signalRecvSpeed(speed);
    return speed;
}
