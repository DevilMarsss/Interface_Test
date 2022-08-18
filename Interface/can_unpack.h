#ifndef CAN_UNPACK_H
#define CAN_UNPACK_H

/*
 * CAN_UNPACK.h
 *
 * Code generation for model "CAN_UNPACK".
 *
 * Model version              : 1.15
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Tue Oct 12 11:18:01 2021
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CAN_UNPACK_h_
#define RTW_HEADER_CAN_UNPACK_h_
#include <string.h>
#include <math.h>
#ifndef CAN_UNPACK_COMMON_INCLUDES_
#define CAN_UNPACK_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "tmwtypes.h"
#endif                                 /* CAN_UNPACK_COMMON_INCLUDES_ */

/* Shared type includes */
#include "multiword_types.h"

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals (default storage) */
typedef struct {
  CAN_DATATYPE CANPack;                /* '<Root>/CAN Pack' */
  real_T VCU_0x214_o1;                 /* '<Root>/VCU_0x214' */
  real_T VCU_0x214_o2;                 /* '<Root>/VCU_0x214' */
  real_T VCU_0x214_o3;                 /* '<Root>/VCU_0x214' */
  real_T VCU_0x214_o4;                 /* '<Root>/VCU_0x214' */
  real_T VCU_0x214_o5;                 /* '<Root>/VCU_0x214' */
  real_T VCU_0x214_o6;                 /* '<Root>/VCU_0x214' */
  real_T BMS_0x450_o1;                 /* '<Root>/BMS_0x450' */
  real_T BMS_0x450_o2;                 /* '<Root>/BMS_0x450' */
  real_T BMS_0x450_o3;                 /* '<Root>/BMS_0x450' */
  real_T BMS_0x450_o4;                 /* '<Root>/BMS_0x450' */
  real_T BMS_0x450_o5;                 /* '<Root>/BMS_0x450' */
  real_T BMS_0x450_o6;                 /* '<Root>/BMS_0x450' */
  real_T BMS_0x450_o7;                 /* '<Root>/BMS_0x450' */
  real_T BMS_0x451_o1;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x451_o2;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x451_o3;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x451_o4;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x451_o5;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x451_o6;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x451_o7;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x451_o8;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x451_o9;                 /* '<Root>/BMS_0x451' */
  real_T BMS_0x452_o1;                 /* '<Root>/BMS_0x452' */
  real_T BMS_0x452_o2;                 /* '<Root>/BMS_0x452' */
  real_T BMS_0x452_o3;                 /* '<Root>/BMS_0x452' */
  real_T BMS_0x452_o4;                 /* '<Root>/BMS_0x452' */
  real_T BMS_0x453_o1;                 /* '<Root>/BMS_0x453' */
  real_T BMS_0x453_o2;                 /* '<Root>/BMS_0x453' */
  real_T BMS_0x453_o3;                 /* '<Root>/BMS_0x453' */
  real_T BMS_0x453_o4;                 /* '<Root>/BMS_0x453' */
  real_T BMS_0x457;                    /* '<Root>/BMS_0x457' */
  real_T BMS_0x458_o1;                 /* '<Root>/BMS_0x458' */
  real_T BMS_0x458_o2;                 /* '<Root>/BMS_0x458' */
  real_T OBC_0x480_o1;                 /* '<Root>/OBC_0x480' */
  real_T OBC_0x480_o2;                 /* '<Root>/OBC_0x480' */
  real_T OBC_0x480_o3;                 /* '<Root>/OBC_0x480' */
  real_T OBC_0x480_o4;                 /* '<Root>/OBC_0x480' */
  real_T OBC_0x480_o5;                 /* '<Root>/OBC_0x480' */
  real_T BMS_0x61C_o1;                 /* '<Root>/BMS_0x61C' */
  real_T BMS_0x61C_o2;                 /* '<Root>/BMS_0x61C' */
  real_T BMS_0x61C_o3;                 /* '<Root>/BMS_0x61C' */
  real_T BMS_0x61D_o1;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o2;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o3;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o4;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o5;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o6;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o7;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o8;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o9;                 /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o10;                /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o11;                /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o12;                /* '<Root>/BMS_0x61D' */
  real_T BMS_0x61D_o13;                /* '<Root>/BMS_0x61D' */
  real_T VCU_0x631_o1;                 /* '<Root>/VCU_0x631' */
  real_T VCU_0x631_o2;                 /* '<Root>/VCU_0x631' */
  real_T VCU_0x701;                    /* '<Root>/VCU_0x701' */
  real_T BMS_0x655_o1;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x655_o2;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x655_o3;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x655_o4;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x655_o5;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x655_o6;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x655_o7;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x655_o8;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x655_o9;                 /* '<Root>/BMS_0x655' */
  real_T BMS_0x6C1_o1;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o2;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o3;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o4;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o5;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o6;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o7;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o8;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o9;                 /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o10;                /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o11;                /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o12;                /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o13;                /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o14;                /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o15;                /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o16;                /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C1_o17;                /* '<Root>/BMS_0x6C1' */
  real_T BMS_0x6C3_o1;                 /* '<Root>/BMS_0x6C3' */
  real_T BMS_0x6C3_o2;                 /* '<Root>/BMS_0x6C3' */
  real_T BMS_0x6C3_o3;                 /* '<Root>/BMS_0x6C3' */
  real_T BMS_0x6C3_o4;                 /* '<Root>/BMS_0x6C3' */
  real_T BMS_0x6C3_o5;                 /* '<Root>/BMS_0x6C3' */
  real_T OBC_0x6D3_o1;                 /* '<Root>/OBC_0x6D3' */
  real_T OBC_0x6D3_o2;                 /* '<Root>/OBC_0x6D3' */
  real_T OBC_0x6D3_o3;                 /* '<Root>/OBC_0x6D3' */
  real_T OBC_0x6D3_o4;                 /* '<Root>/OBC_0x6D3' */
  real_T OBC_0x6D3_o5;                 /* '<Root>/OBC_0x6D3' */
  real_T OBC_0x6D4_o1;                 /* '<Root>/OBC_0x6D4' */
  real_T OBC_0x6D4_o2;                 /* '<Root>/OBC_0x6D4' */
  real_T OBC_0x6D7;                    /* '<Root>/OBC_0x6D7' */
} B_CAN_UNPACK_T;

/* Backward compatible GRT Identifiers */
#define CAN_UNPACK_MESSAGE             CAN_UNPACK_B
#define CAN_IO_MESSAGE                 B_CAN_UNPACK_T

/* Block signals (default storage) */
extern B_CAN_UNPACK_T CAN_UNPACK_B;

#endif

extern uint8_T messageStream_CAN[14];

class CAN_UNPACK
{
public:
    CAN_UNPACK();

    void CANUNPACK();

private:
    void CAN_Division_STD(uint8_T * messageStream);

    void CAN_Resolution();

    B_CAN_UNPACK_T UNPACK_0x214(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x450(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x451(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x452(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x453(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x457(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x458(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x480(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x61C(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x61D(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x631(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x701(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x655(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x6C1(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x6C3(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x6D3(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x6D4(B_CAN_UNPACK_T CAN_UNPACK_B);

    B_CAN_UNPACK_T UNPACK_0x6D7(B_CAN_UNPACK_T CAN_UNPACK_B);
};

#endif // CAN_UNPACK_H
