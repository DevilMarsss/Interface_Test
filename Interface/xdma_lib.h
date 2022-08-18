#ifndef XDMA_LIB_H
#define XDMA_LIB_H

#include "xdma_lib_global.h"
#include "pcie_fun.h"

#define START_DDR_READ_ADDR 0x08000000

extern "C" XDMA_LIBSHARED_EXPORT int InitXDMA();

extern "C" XDMA_LIBSHARED_EXPORT int UninitXDMA();

extern "C" XDMA_LIBSHARED_EXPORT int SendTransfer(unsigned int size,unsigned char *buff);//buff空间用户指定；

extern "C" XDMA_LIBSHARED_EXPORT int ReadTransfer(unsigned char *pu8Buffer);//要求pu8Buffer空间大于32K；//返回值大于0可返回pu8Buffer；

extern "C" XDMA_LIBSHARED_EXPORT void ReadReg(unsigned int addr,unsigned int *val);

extern "C" XDMA_LIBSHARED_EXPORT void WriteReg(unsigned int addr,unsigned int val);

#endif // XDMA_LIB_H
