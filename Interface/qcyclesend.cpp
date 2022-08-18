#include "qcyclesend.h"
#include <thread>
#include <chrono>
#include "xdma_lib.h"

extern QMutex muter;
extern quint8 res[32 * 1024 * 1024];
extern uint8_t pu8Buffer[128 * 1024 * 1024];
quint64 SendDataCount;

QCycleSend::QCycleSend(int type, int size, unsigned int ui_ddrstart, int ui_frame_tick, int ui_cycle_interval, unsigned int ui_val0x80000)
{
    ddrstart = ui_ddrstart;
    frame_tick = ui_frame_tick;
    send_type = type;
    filesize = size;
    m_interval = ui_cycle_interval;
    val0x80000 = ui_val0x80000;

    bWhile = true;

    QMessageBox::information(nullptr, "cycle", "start", QMessageBox::Ok);
    SendDataCount = 0;

    //m_time.start();
    //dug_timer.Start();//定时器调试占了100us;
}

quint64 QCycleSend::GetSendNum()
{
    return send_num;
}


void QCycleSend::CycleSendDDR2FIFO()
{
#if 1
    int tmplen = filesize / frame_tick;
    qDebug() << "0910 filesize = " << filesize;
    qDebug() << "0910 tmplen = " << tmplen;
    send_num = 0;

    while(bWhile)
    {
        muter.lock();
        //dug_timer.Restart();

        if(send_type == 0)
        {
            SendTransfer(filesize, (unsigned char *)res);
        }
        else
        {
            SendTransfer(filesize, (unsigned char *)pu8Buffer);
        }

        SendDataCount += filesize;
        send_num++;
        UsSleep(m_interval);
        muter.unlock();
    }

#endif
}










////qDebug()<<"send passed time delay:"<<dug_timer.Elapsed();
//        for(int wait = 0;wait++;wait<1000)
//        {
//             for(int wait2 = 0;wait2++;wait2<100)
//             {
//                 ;
//             }
//        }
////////////////////////////////////////////////////////////////////////////注释了上面的wait
//        std::this_thread::sleep_for(std::chrono::microseconds(m_interval));
//emit(sigle_send_finshed(i++));////////////////////////////////////////主界面显示发送个数
