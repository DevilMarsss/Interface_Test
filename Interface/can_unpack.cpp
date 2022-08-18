#include "can_message.h"
#include "can_unpack.h"
#include "can_unpack.h"
#include "ethernet_unpack.h"
#include <QString>
#include <QMessageBox>

uint8_T messageStream_CAN[14] = {};
B_CAN_UNPACK_T CAN_UNPACK_B = {};

CAN_UNPACK::CAN_UNPACK()
{

}

void CAN_UNPACK::CANUNPACK()
{
    CAN_UNPACK::CAN_Division_STD(ETHERNET_MESSAGE_PACK.Data);
    CAN_UNPACK::CAN_Resolution();
}

/* 对CAN帧进行解包 */
void CAN_UNPACK::CAN_Division_STD(uint8_T * messageStream)
{
    CAN_UNPACK_B.CANPack.Extended = 0U;
    CAN_UNPACK_B.CANPack.Length = messageStream[0] & 0x0F;
    CAN_UNPACK_B.CANPack.ID = (((uint32_T) messageStream[1]) << 3) + ((((uint32_T) messageStream[2]) & 0xD0) >> 5);
    for(int i = 0; i < 8; i++) {
        CAN_UNPACK_B.CANPack.Data[i] = messageStream[i+3];
    }
}

/* 对解包后的CAN帧中的Data进行解析 */
void CAN_UNPACK::CAN_Resolution()
{
    if ((CAN_UNPACK_B.CANPack.Length == 8) && (CAN_UNPACK_B.CANPack.ID != INVALID_CAN_ID)
            && (CAN_UNPACK_B.CANPack.Extended == 0U))
    {
        switch (CAN_UNPACK_B.CANPack.ID)
        {
        case 532:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x214(CAN_UNPACK_B);
            break;
        case 1104:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x450(CAN_UNPACK_B);
            break;
        case 1105:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x451(CAN_UNPACK_B);
            break;
        case 1106:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x452(CAN_UNPACK_B);
            break;
        case 1107:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x453(CAN_UNPACK_B);
            break;
        case 1111:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x457(CAN_UNPACK_B);
            break;
        case 1112:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x458(CAN_UNPACK_B);
            break;
        case 1152:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x480(CAN_UNPACK_B);
            break;
        case 1564:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x61C(CAN_UNPACK_B);
            break;
        case 1565:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x61D(CAN_UNPACK_B);
            break;
        case 1585:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x631(CAN_UNPACK_B);
            break;
        case 1793:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x701(CAN_UNPACK_B);
            break;
        case 1621:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x655(CAN_UNPACK_B);
            break;
        case 1729:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x6C1(CAN_UNPACK_B);
            break;
        case 1731:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x6C3(CAN_UNPACK_B);
            break;
        case 1747:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x6D3(CAN_UNPACK_B);
            break;
        case 1748:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x6D4(CAN_UNPACK_B);
            break;
        case 1751:
            CAN_UNPACK_B = CAN_UNPACK::UNPACK_0x6D7(CAN_UNPACK_B);
            break;
        }
    }
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x214(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* '<Root>/VCU_0x214' */

    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 8
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x214_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 10
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x214_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 12
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x10U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x214_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 17
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[2]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x214_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 18
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[2]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x214_o5 = result;
        }
    }

    /* --------------- START Unpacking signal 5 ------------------
               *  startBit                = 21
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[2]) & (uint8_T)(0x20U)) >> 5);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x214_o6 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x450(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* '<Root>/BMS_0x450' */

    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 6
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[0]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x450_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 8
               *  length                  = 11
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.1
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[1]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                                                                  (CAN_UNPACK_B.CANPack.Data[0]) & (uint16_T)(0x7U)) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.1;
            CAN_UNPACK_B.BMS_0x450_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 24
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.01
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[2]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.01;
            CAN_UNPACK_B.BMS_0x450_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 40
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.01
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[4]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.01;
            CAN_UNPACK_B.BMS_0x450_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 48
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.4
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[6]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.4;
            CAN_UNPACK_B.BMS_0x450_o5 = result;
        }
    }

    /* --------------- START Unpacking signal 5 ------------------
               *  startBit                = 56
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[7]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x450_o6 = result;
        }
    }

    /* --------------- START Unpacking signal 6 ------------------
               *  startBit                = 60
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[7]) & (uint8_T)(0x10U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x450_o7 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x451(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* '<Root>/BMS_0x451' */

    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 0
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[0]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x451_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 4
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[0]) & (uint8_T)(0x10U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x451_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 8
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x451_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 12
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x30U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x451_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 14
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x40U)) >> 6);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x451_o5 = result;
        }
    }

    /* --------------- START Unpacking signal 5 ------------------
               *  startBit                = 15
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x80U)) >> 7);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x451_o6 = result;
        }
    }

    /* --------------- START Unpacking signal 6 ------------------
               *  startBit                = 24
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[2]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.02;
            CAN_UNPACK_B.BMS_0x451_o7 = result;
        }
    }

    /* --------------- START Unpacking signal 7 ------------------
               *  startBit                = 40
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[4]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.02;
            CAN_UNPACK_B.BMS_0x451_o8 = result;
        }
    }

    /* --------------- START Unpacking signal 8 ------------------
               *  startBit                = 56
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[7]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[6]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.02;
            CAN_UNPACK_B.BMS_0x451_o9 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x452(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 8
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x452_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 24
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[2]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x452_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 40
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[4]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x452_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 56
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[7]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[6]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x452_o4 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x453(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 16
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = -48.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[2]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result + -48.0;
            CAN_UNPACK_B.BMS_0x453_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 24
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[3]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x453_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 48
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = -48.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[6]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result + -48.0;
            CAN_UNPACK_B.BMS_0x453_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 56
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = -48.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[7]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result + -48.0;
            CAN_UNPACK_B.BMS_0x453_o4 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x457(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 24
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = -400.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[2]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = (result * 0.02) + -400.0;
            CAN_UNPACK_B.BMS_0x457 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x458(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 53
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0xE0U)) >> 5);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x458_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 56
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[7]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x458_o2 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x480(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 21
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[2]) & (uint8_T)(0xE0U)) >> 5);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.OBC_0x480_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 32
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[3]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.02;
            CAN_UNPACK_B.OBC_0x480_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 48
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[5]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.02;
            CAN_UNPACK_B.OBC_0x480_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 56
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[7]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.OBC_0x480_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 62
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[7]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.OBC_0x480_o5 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x61C(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 24
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[2]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.02;
            CAN_UNPACK_B.BMS_0x61C_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 40
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[4]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.02;
            CAN_UNPACK_B.BMS_0x61C_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 48
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[6]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61C_o3 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x61D(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 16
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 18
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[2]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 20
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[2]) & (uint8_T)(0xF0U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 24
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 26
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x1CU)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o5 = result;
        }
    }

    /* --------------- START Unpacking signal 5 ------------------
               *  startBit                = 29
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x60U)) >> 5);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o6 = result;
        }
    }

    /* --------------- START Unpacking signal 6 ------------------
               *  startBit                = 36
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[4]) & (uint8_T)(0xF0U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o7 = result;
        }
    }

    /* --------------- START Unpacking signal 7 ------------------
               *  startBit                = 40
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[5]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o8 = result;
        }
    }

    /* --------------- START Unpacking signal 8 ------------------
               *  startBit                = 46
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[5]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o9 = result;
        }
    }

    /* --------------- START Unpacking signal 9 ------------------
               *  startBit                = 48
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o10 = result;
        }
    }

    /* --------------- START Unpacking signal 10 ------------------
               *  startBit                = 49
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0x6U)) >> 1);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o11 = result;
        }
    }

    /* --------------- START Unpacking signal 11 ------------------
               *  startBit                = 51
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0x38U)) >> 3);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o12 = result;
        }
    }

    /* --------------- START Unpacking signal 12 ------------------
               *  startBit                = 54
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x61D_o13 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x631(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 16
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[2]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x631_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 36
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[4]) & (uint8_T)(0x30U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x631_o2 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x701(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 24
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.VCU_0x701 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x655(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 0
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 8
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 10
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 12
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x30U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 14
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o5 = result;
        }
    }

    /* --------------- START Unpacking signal 5 ------------------
               *  startBit                = 24
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o6 = result;
        }
    }

    /* --------------- START Unpacking signal 6 ------------------
               *  startBit                = 26
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o7 = result;
        }
    }

    /* --------------- START Unpacking signal 7 ------------------
               *  startBit                = 28
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x30U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o8 = result;
        }
    }

    /* --------------- START Unpacking signal 8 ------------------
               *  startBit                = 56
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[7]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[6]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x655_o9 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x6C1(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 8
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 9
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x6U)) >> 1);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 11
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x38U)) >> 3);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 24
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 25
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o5 = result;
        }
    }

    /* --------------- START Unpacking signal 5 ------------------
               *  startBit                = 26
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o6 = result;
        }
    }

    /* --------------- START Unpacking signal 6 ------------------
               *  startBit                = 27
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o7 = result;
        }
    }

    /* --------------- START Unpacking signal 7 ------------------
               *  startBit                = 28
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x10U)) >> 4);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o8 = result;
        }
    }

    /* --------------- START Unpacking signal 8 ------------------
               *  startBit                = 30
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x40U)) >> 6);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o9 = result;
        }
    }

    /* --------------- START Unpacking signal 9 ------------------
               *  startBit                = 31
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[3]) & (uint8_T)(0x80U)) >> 7);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o10 = result;
        }
    }

    /* --------------- START Unpacking signal 10 ------------------
               *  startBit                = 32
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.1
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[4]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.1;
            CAN_UNPACK_B.BMS_0x6C1_o11 = result;
        }
    }

    /* --------------- START Unpacking signal 11 ------------------
               *  startBit                = 40
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.1
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[5]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.1;
            CAN_UNPACK_B.BMS_0x6C1_o12 = result;
        }
    }

    /* --------------- START Unpacking signal 12 ------------------
               *  startBit                = 49
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o13 = result;
        }
    }

    /* --------------- START Unpacking signal 13 ------------------
               *  startBit                = 50
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o14 = result;
        }
    }

    /* --------------- START Unpacking signal 14 ------------------
               *  startBit                = 51
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o15 = result;
        }
    }

    /* --------------- START Unpacking signal 15 ------------------
               *  startBit                = 53
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0x20U)) >> 5);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o16 = result;
        }
    }

    /* --------------- START Unpacking signal 16 ------------------
               *  startBit                = 61
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[7]) & (uint8_T)(0xE0U)) >> 5);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C1_o17 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x6C3(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 0
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C3_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 8
               *  length                  = 7
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.01
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[1]) & (uint8_T)(0x7FU));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.01;
            CAN_UNPACK_B.BMS_0x6C3_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 24
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.0001
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[2]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.0001;
            CAN_UNPACK_B.BMS_0x6C3_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 40
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.0001
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[4]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.0001;
            CAN_UNPACK_B.BMS_0x6C3_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 56
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[7]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[6]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.BMS_0x6C3_o5 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x6D3(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 24
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.02
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                                                       (CAN_UNPACK_B.CANPack.Data[2]) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.02;
            CAN_UNPACK_B.OBC_0x6D3_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 40
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = -48.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[5]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result + -48.0;
            CAN_UNPACK_B.OBC_0x6D3_o2 = result;
        }
    }

    /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 48
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.5
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)(CAN_UNPACK_B.CANPack.Data[6]);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.5;
            CAN_UNPACK_B.OBC_0x6D3_o3 = result;
        }
    }

    /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 58
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[7]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.OBC_0x6D3_o4 = result;
        }
    }

    /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 59
               *  length                  = 3
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[7]) & (uint8_T)(0x38U)) >> 3);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.OBC_0x6D3_o5 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x6D4(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 0
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                                                      (CAN_UNPACK_B.CANPack.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.OBC_0x6D4_o1 = result;
        }
    }

    /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 54
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
    * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint8_T unpackedValue = 0;

            {
                uint8_T tempValue = (uint8_T) (0);

                {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                                                                (CAN_UNPACK_B.CANPack.Data[6]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            CAN_UNPACK_B.OBC_0x6D4_o2 = result;
        }
    }

    return CAN_UNPACK_B;
}

B_CAN_UNPACK_T CAN_UNPACK::UNPACK_0x6D7(B_CAN_UNPACK_T CAN_UNPACK_B)
{
    /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 56
               *  length                  = 12
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.01
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
    {
        real64_T outValue = 0;

        {
            uint16_T unpackedValue = 0;

            {
                uint16_T tempValue = (uint16_T) (0);

                {
                    tempValue = tempValue | (uint16_T)(CAN_UNPACK_B.CANPack.Data[7]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                                                                  (CAN_UNPACK_B.CANPack.Data[6]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
            }

            outValue = (real64_T) (unpackedValue);
        }

        {
            real64_T result = (real64_T) outValue;
            result = result * 0.01;
            CAN_UNPACK_B.OBC_0x6D7 = result;
        }
    }

    return CAN_UNPACK_B;
}
