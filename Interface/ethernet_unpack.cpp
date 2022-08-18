#include "ethernet_unpack.h"
#include "can_unpack.h"

uint8_T messageStream_Ethernet[1518] = {};   //定义以太网帧，测试使用
ETHERNET_MESSAGE ETHERNET_MESSAGE_PACK = {};   //定义解包后的以太网信息

Ethernet_UNPACK::Ethernet_UNPACK()
{

}

void Ethernet_UNPACK::EthernetUNPACK()
{
    /* 目前仅用于测试(20211031) 以太网解包直接使用Ethernet_Division(uint8_T *) */
    for (int i = 0; i < 12; ++i) messageStream_Ethernet[i] = 0xFF;
    messageStream_Ethernet[12] = 0x00;
    messageStream_Ethernet[13] = 0x0B;
    messageStream_Ethernet[14] = 0x08;
    messageStream_Ethernet[15] = 0x8A;
    messageStream_Ethernet[16] = 0x00;
    for (int i = 0; i < 8; ++i) messageStream_Ethernet[17+i] = 0xFF;

    Ethernet_UNPACK::Ethernet_Division(messageStream_Ethernet);
}

/* 对以太网帧进行解包 */
void Ethernet_UNPACK::Ethernet_Division(uint8_T *messageStream)
{
    for(int i = 0; i < 6; i++)
        ETHERNET_MESSAGE_PACK.Destination_Address[i] = messageStream[i];
    for(int i = 0; i < 6; i++)
        ETHERNET_MESSAGE_PACK.Source_Address[i] = messageStream[i+6];
    ETHERNET_MESSAGE_PACK.Length = (((uint16_T)messageStream[12]) << 8) + (uint16_T)messageStream[13];
    for(int i = 0; i < ETHERNET_MESSAGE_PACK.Length; i++)
        ETHERNET_MESSAGE_PACK.Data[i] = messageStream[i+14];
}
