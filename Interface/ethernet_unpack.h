#ifndef ETHERNET_UNPACK_H
#define ETHERNET_UNPACK_H

#include <math.h>
#include "tmwtypes.h"

extern uint8_T messageStream_Ethernet[1518];

typedef struct
{
    /* Destination Address */
    uint8_T Destination_Address[6];

    /* Source Address */
    uint8_T Source_Address[6];

    /* Length */
    uint16_T Length;

    /* Data field */
    uint8_T Data[1500];

    /* CRC */
    uint32_T CRC;

}  ETHERNET_MESSAGE;

extern ETHERNET_MESSAGE ETHERNET_MESSAGE_PACK;

class Ethernet_UNPACK
{
public:
    Ethernet_UNPACK();

    void EthernetUNPACK();

    void Ethernet_Division(uint8_T * messageStream);

private:

};

#endif // ETHERNET_UNPACK_H
