#include "qcycleread.h"
#include "mainwindow.h"
#include <string.h>
#include <QFile>
#include <QDataStream>
#include <QMessageBox>
#include <QDebug>
#include <thread>
#include <chrono>
#include <QThread>
#include <QDateTime>

quint64 RecvDataCount;
QMutex muter;
bool g_bStop;

static long g_moveDDRSize;
quint32 g_cn2_22 = 0;
static QFile file;
uint8_t *pu8Buffer;

QCycleRead::QCycleRead(QString filePath, unsigned int ddrReadaddr, long moveDDRSize,bool show_rcv_on_ui)
{
    m_file_recv_name = filePath;
    m_ddrRead = ddrReadaddr;
    bShowDataOutOnUI = show_rcv_on_ui;//2021.10.11改作保存文件处理
    g_moveDDRSize = moveDDRSize;
    qDebug() << "g_moveDDRSize:" << g_moveDDRSize;

    bWhileRead = true;
    RecvDataCount = 0;
    m_debug_count = 0;

    //dugTimer.Start();
    //dugTimer2.Start();

    QDateTime time;
    QString strTime;
    time = QDateTime::currentDateTime();
    strTime = time.toString("MM-dd_hh_mm_ss");
    if(bShowDataOutOnUI ==true)
    {
        file.setFileName(strTime+".bin");
        file.open(QIODevice::WriteOnly|QIODevice::Append);
    }

    pu8Buffer = (uint8_t *)malloc(300000);
    memset(pu8Buffer,0,300000);
}

unsigned int QCycleRead::GetNewestDDRRead()
{
    if(bShowDataOutOnUI ==true)
    {
        file.close();
    }
    free(pu8Buffer);
    return m_ddrRead;
}

quint64 QCycleRead::DebugCount()
{
    return m_debug_count;
}

void QCycleRead::save_to_file(QString filename, unsigned int size)
{

}


void QCycleRead::CycleGetFiFoFrame()
{
    while(bWhileRead)
    {
        int ret = -1;

        muter.lock();
        do
        {
            ret = ReadTransfer(pu8Buffer);

            CAN_UNPACK CANUNPACK;
            Ethernet_UNPACK ETHERNETUNPACK;

            char * charBuffer = (char *)pu8Buffer;
            int buflen = strlen(charBuffer);
            int messageLen = 6+6+2+64;
            int messageNum = buflen / messageLen;
            for(int i = 0; i < messageNum; i++)
            {
                ETHERNETUNPACK.Ethernet_Division(&pu8Buffer[i*messageLen]);
                CANUNPACK.CANUNPACK();
            }

            if(ret <= 0)//-1或-2，-3，0
            {
                UsSleep(1);
                continue;
            }

            if(ret >0 && bShowDataOutOnUI ==true)
            {
                //qDebug()<<"len www"<<ret;
                file.write((char*)pu8Buffer,ret);
                file.flush();
            }

            RecvDataCount += ret;
            m_debug_count += ret;
            UsSleep(1);

        }
        while(ret > 0);

        muter.unlock();
    }
}





/*****************************************调试记录***************************************************
1.对读写寄存器不稳定问题增加握手机制，修改如下：FIFO有值时写0x60014寄存器值1，DMA Idle后写0清除；【20210917】
2.对开机后运行软件，自发自收超过1024长度后接收DMA异常问题，单次发送能恢复，修改如下：0x80000寄存器写到ddr之后；【20210917】
3.封装发送DMA work过程后还没有ok




*/

////////////////////////////////////////////////
//if(flag)
//{
//    ////dugTimer.Restart();
//    flag = false;
//      qDebug()<<"deal:"<<dugTimer.Elapsed();
//}
/////
////      user_read(0x60010,4,(unsigned char*)&val);//读清中断
////////////////////////////////////////////////////////////////
//            int res = 0;
//            int ret = 0;

//            qDebug()<<"dddddddddddddd";

//            unsigned int val = 0;

//            while(bWhileRead)
//            {
//                g_bStop = false;

//                muter.lock();

//                ret = read_fifo(m_ddrRead);

//                if(ret==-1)
//                {
//                    muter.unlock();
//                    continue;
//                }
//                else {
//                    long cnt_i =0;
//                    while(1){
//                        cnt_i ++;
//                        //读状态 xdma_rw.exe user read 0x50034 -l 4
//                        user_read(0x50034,4,(unsigned char*)&val);
//                        //qDebug()<<QString(" %1").arg(val,0,16);

//                        if(((val>>12) & 1) == 1)
//                        {
//                            val = (1<<12) | val;
//                            user_write(0x50034,4,(unsigned char*)&val);
//                            break;
//                        }
//                        if(cnt_i>50000)
//                        {
//                            qDebug()<<"read time is........"<<cnt_i;
//                            break;
//                        }
//                        UsSleep(1);
//                    }

//                    if(m_ddrRead>=(START_DDR_READ_ADDR+g_moveDDRSize))
//                    {
//                        save_to_file("",ret);
//                    }
//                    muter.unlock();

//                    m_ddrRead +=ret;
//                    RecvDataCount += ret;
//                    m_debug_count += ret;
//                }
//                UsSleep(5);
//            }
//        }
//qDebug()<<QString("0x50034 %1").arg(val,0,16);
//清除DMA中断
////////////////////////////////////////////////////////////////////file////////////////////////////////////////////
//    unsigned int allframesize = size;
//    uint8_t *pu8Buffer;


////    pu8Buffer = (uint8_t *)malloc(allframesize);
////    memset(pu8Buffer,0,allframesize);
////    Read_c2h_transfer(START_DDR_READ_ADDR, allframesize, (unsigned char *)pu8Buffer);
////    //c2h_transfer(START_DDR_READ_ADDR, allframesize, (unsigned char *)pu8Buffer);
////////    unsigned int res = c2h_status();
//////    qDebug()<<QString("c2h res %1").arg(res,0,16);

////    qDebug()<<QString("c2h addr %1").arg(START_DDR_READ_ADDR,0,16);
////    qDebug()<<"c2h size::"<<allframesize;


//    m_ddrRead = START_DDR_READ_ADDR;
//    //显示到ui
////    if(bShowDataOutOnUI == true)
////    {
////        uint8_t *pu8Buffer_cp;
////        unsigned int allframesize_cp = size;
////        pu8Buffer_cp = (uint8_t *)malloc(allframesize_cp);
////        memcpy(pu8Buffer_cp,pu8Buffer,allframesize_cp);
////        emit sig_rcv_data(pu8Buffer_cp,allframesize_cp);
////    }
