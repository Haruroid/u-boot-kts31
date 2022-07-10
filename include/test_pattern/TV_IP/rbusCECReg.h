/**
* @file rbusCECReg.h
* RBus systemc program.
*
* @author Yu-Cheng Huang
* @email timhuang@realtek.com.tw
* @date 2015/5/19
* @version 802
* @ingroup model_rbus
*
*/

#ifndef _RBUS_CEC_REG_H_
#define _RBUS_CEC_REG_H_

#include "rbus/rbusTypes.h"




// CEC Register Address



#define CEC_CEC_CR0_ADDR                          (0x98037200)
#define CEC_CEC_RTCR0_ADDR                        (0x98037204)
#define CEC_CEC_RXCR0_ADDR                        (0x98037208)
#define CEC_CEC_TXCR0_ADDR                        (0x9803720c)
#define CEC_CEC_TXDR0_ADDR                        (0x98037210)
#define CEC_CEC_TXDR1_ADDR                        (0x98037214)
#define CEC_CEC_TXDR2_ADDR                        (0x98037218)
#define CEC_CEC_TXDR3_ADDR                        (0x9803721c)
#define CEC_CEC_TXDR4_ADDR                        (0x98037220)
#define CEC_CEC_RXDR1_ADDR                        (0x98037224)
#define CEC_CEC_RXDR2_ADDR                        (0x98037228)
#define CEC_CEC_RXDR3_ADDR                        (0x9803722c)
#define CEC_CEC_RXDR4_ADDR                        (0x98037230)
#define CEC_CEC_RXTCR0_ADDR                       (0x98037234)
#define CEC_CEC_TXTCR0_ADDR                       (0x98037238)
#define CEC_CEC_TXTCR1_ADDR                       (0x9803723c)
#define CEC_GDI_CEC_COMPARE_OPCODE_01_ADDR        (0x98037240)
#define CEC_GDI_CEC_SEND_OPCODE_01_ADDR           (0x98037244)
#define CEC_GDI_CEC_SEND_OPERAND_NUMBER_01_ADDR   (0x98037248)
#define CEC_GDI_CEC_OPERAND_01_ADDR               (0x9803724c)
#define CEC_GDI_CEC_OPERAND_02_ADDR               (0x98037250)
#define CEC_GDI_CEC_OPERAND_03_ADDR               (0x98037254)
#define CEC_GDI_CEC_COMPARE_OPCODE_02_ADDR        (0x98037258)
#define CEC_GDI_CEC_SEND_OPCODE_02_ADDR           (0x9803725c)
#define CEC_GDI_CEC_SEND_OPERAND_NUMBER_02_ADDR   (0x98037260)
#define CEC_GDI_CEC_OPERAND_04_ADDR               (0x98037264)
#define CEC_GDI_CEC_OPERAND_05_ADDR               (0x98037268)
#define CEC_GDI_CEC_OPERAND_06_ADDR               (0x9803726c)
#define CEC_GDI_CEC_COMPARE_OPCODE_03_ADDR        (0x98037270)
#define CEC_GDI_CEC_SEND_OPCODE_03_ADDR           (0x98037274)
#define CEC_GDI_CEC_SEND_OPERAND_NUMBER_03_ADDR   (0x98037278)
#define CEC_GDI_CEC_OPERAND_07_ADDR               (0x9803727c)
#define CEC_GDI_CEC_OPERAND_08_ADDR               (0x98037280)
#define CEC_GDI_CEC_OPERAND_09_ADDR               (0x98037284)
#define CEC_GDI_CEC_COMPARE_OPCODE_04_ADDR        (0x98037288)
#define CEC_GDI_CEC_SEND_OPCODE_04_ADDR           (0x9803728c)
#define CEC_GDI_CEC_SEND_OPERAND_NUMBER_04_ADDR   (0x98037290)
#define CEC_GDI_CEC_OPERAND_10_ADDR               (0x98037294)
#define CEC_GDI_CEC_OPERAND_11_ADDR               (0x98037298)
#define CEC_GDI_CEC_OPERAND_12_ADDR               (0x9803729c)
#define CEC_GDI_CEC_COMPARE_OPCODE_05_ADDR        (0x980372a0)
#define CEC_GDI_CEC_COMPARE_OPCODE_06_ADDR        (0x980372a4)
#define CEC_GDI_CEC_COMPARE_OPCODE_07_ADDR        (0x980372a8)
#define CEC_GDI_CEC_COMPARE_OPCODE_08_ADDR        (0x980372ac)
#define CEC_GDI_CEC_COMPARE_OPCODE_09_ADDR        (0x980372b0)
#define CEC_GDI_CEC_COMPARE_OPCODE_10_ADDR        (0x980372b4)
#define CEC_GDI_CEC_COMPARE_OPCODE_11_ADDR        (0x980372b8)
#define CEC_GDI_CEC_COMPARE_OPCODE_12_ADDR        (0x980372bc)
#define CEC_GDI_CEC_COMPARE_OPCODE_13_ADDR        (0x980372c0)
#define CEC_GDI_CEC_COMPARE_OPCODE_14_ADDR        (0x980372c4)
#define CEC_GDI_CEC_COMPARE_OPCODE_15_ADDR        (0x980372c8)
#define CEC_GDI_CEC_OPCODE_ENABLE_ADDR            (0x980372cc)
#define CEC_GDI_POWER_SAVING_MODE_ADDR            (0x980372d0)
#define CEC_CEC_RXACKTCR0_ADDR                    (0x980372d4)
#define CEC_CEC_RXACKTCR1_ADDR                    (0x980372d8)
#define CEC_CEC_TXRXACKOPTION_ADDR                (0x980372dc)

#define CEC_CEC_CR0_VADDR                          (0xd8037200)
#define CEC_CEC_RTCR0_VADDR                        (0xd8037204)
#define CEC_CEC_RXCR0_VADDR                        (0xd8037208)
#define CEC_CEC_TXCR0_VADDR                        (0xd803720c)
#define CEC_CEC_TXDR0_VADDR                        (0xd8037210)
#define CEC_CEC_TXDR1_VADDR                        (0xd8037214)
#define CEC_CEC_TXDR2_VADDR                        (0xd8037218)
#define CEC_CEC_TXDR3_VADDR                        (0xd803721c)
#define CEC_CEC_TXDR4_VADDR                        (0xd8037220)
#define CEC_CEC_RXDR1_VADDR                        (0xd8037224)
#define CEC_CEC_RXDR2_VADDR                        (0xd8037228)
#define CEC_CEC_RXDR3_VADDR                        (0xd803722c)
#define CEC_CEC_RXDR4_VADDR                        (0xd8037230)
#define CEC_CEC_RXTCR0_VADDR                       (0xd8037234)
#define CEC_CEC_TXTCR0_VADDR                       (0xd8037238)
#define CEC_CEC_TXTCR1_VADDR                       (0xd803723c)
#define CEC_GDI_CEC_COMPARE_OPCODE_01_VADDR        (0xd8037240)
#define CEC_GDI_CEC_SEND_OPCODE_01_VADDR           (0xd8037244)
#define CEC_GDI_CEC_SEND_OPERAND_NUMBER_01_VADDR   (0xd8037248)
#define CEC_GDI_CEC_OPERAND_01_VADDR               (0xd803724c)
#define CEC_GDI_CEC_OPERAND_02_VADDR               (0xd8037250)
#define CEC_GDI_CEC_OPERAND_03_VADDR               (0xd8037254)
#define CEC_GDI_CEC_COMPARE_OPCODE_02_VADDR        (0xd8037258)
#define CEC_GDI_CEC_SEND_OPCODE_02_VADDR           (0xd803725c)
#define CEC_GDI_CEC_SEND_OPERAND_NUMBER_02_VADDR   (0xd8037260)
#define CEC_GDI_CEC_OPERAND_04_VADDR               (0xd8037264)
#define CEC_GDI_CEC_OPERAND_05_VADDR               (0xd8037268)
#define CEC_GDI_CEC_OPERAND_06_VADDR               (0xd803726c)
#define CEC_GDI_CEC_COMPARE_OPCODE_03_VADDR        (0xd8037270)
#define CEC_GDI_CEC_SEND_OPCODE_03_VADDR           (0xd8037274)
#define CEC_GDI_CEC_SEND_OPERAND_NUMBER_03_VADDR   (0xd8037278)
#define CEC_GDI_CEC_OPERAND_07_VADDR               (0xd803727c)
#define CEC_GDI_CEC_OPERAND_08_VADDR               (0xd8037280)
#define CEC_GDI_CEC_OPERAND_09_VADDR               (0xd8037284)
#define CEC_GDI_CEC_COMPARE_OPCODE_04_VADDR        (0xd8037288)
#define CEC_GDI_CEC_SEND_OPCODE_04_VADDR           (0xd803728c)
#define CEC_GDI_CEC_SEND_OPERAND_NUMBER_04_VADDR   (0xd8037290)
#define CEC_GDI_CEC_OPERAND_10_VADDR               (0xd8037294)
#define CEC_GDI_CEC_OPERAND_11_VADDR               (0xd8037298)
#define CEC_GDI_CEC_OPERAND_12_VADDR               (0xd803729c)
#define CEC_GDI_CEC_COMPARE_OPCODE_05_VADDR        (0xd80372a0)
#define CEC_GDI_CEC_COMPARE_OPCODE_06_VADDR        (0xd80372a4)
#define CEC_GDI_CEC_COMPARE_OPCODE_07_VADDR        (0xd80372a8)
#define CEC_GDI_CEC_COMPARE_OPCODE_08_VADDR        (0xd80372ac)
#define CEC_GDI_CEC_COMPARE_OPCODE_09_VADDR        (0xd80372b0)
#define CEC_GDI_CEC_COMPARE_OPCODE_10_VADDR        (0xd80372b4)
#define CEC_GDI_CEC_COMPARE_OPCODE_11_VADDR        (0xd80372b8)
#define CEC_GDI_CEC_COMPARE_OPCODE_12_VADDR        (0xd80372bc)
#define CEC_GDI_CEC_COMPARE_OPCODE_13_VADDR        (0xd80372c0)
#define CEC_GDI_CEC_COMPARE_OPCODE_14_VADDR        (0xd80372c4)
#define CEC_GDI_CEC_COMPARE_OPCODE_15_VADDR        (0xd80372c8)
#define CEC_GDI_CEC_OPCODE_ENABLE_VADDR            (0xd80372cc)
#define CEC_GDI_POWER_SAVING_MODE_VADDR            (0xd80372d0)
#define CEC_CEC_RXACKTCR0_VADDR                    (0xd80372d4)
#define CEC_CEC_RXACKTCR1_VADDR                    (0xd80372d8)
#define CEC_CEC_TXRXACKOPTION_VADDR                (0xd80372dc)




#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN


//======CEC register structure define==========
typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cec_mode:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  test_mode_pad_en:1;
        RBus_UInt32  logical_addr:4;
        RBus_UInt32  timer_div:8;
        RBus_UInt32  pre_div:8;
        RBus_UInt32  unreg_ack_en:1;
        RBus_UInt32  cec_in_deb_mode:1;
        RBus_UInt32  cdc_arbitration_en:1;
        RBus_UInt32  test_mode_pad_data:5;
    };
}cec_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cec_pad_in:1;
        RBus_UInt32  dummy98037204_30_18:13;
        RBus_UInt32  cec_pad_en:1;
        RBus_UInt32  cec_pad_en_mode:1;
        RBus_UInt32  dummy98037204_15_14:2;
        RBus_UInt32  cec_hw_retry_mode:1;
        RBus_UInt32  cec_hw_retry_en:1;
        RBus_UInt32  clear_cec_int:1;
        RBus_UInt32  wt_cnt:6;
        RBus_UInt32  lattest:1;
        RBus_UInt32  retry_no:4;
    };
}cec_rtcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  broadcast_addr:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  rx_same_la_direct_nack:1;
        RBus_UInt32  rx_no_accept_command_data:1;
        RBus_UInt32  rx_same_la_ack:1;
        RBus_UInt32  rx_clear_fifo_data_en:1;
        RBus_UInt32  rx_clear_fifo_data_mode:1;
        RBus_UInt32  rx_clear_fifo_data_fw:1;
        RBus_UInt32  standby_addr_sel:1;
        RBus_UInt32  standby_init_addr:4;
        RBus_UInt32  rx_en:1;
        RBus_UInt32  rx_rst:1;
        RBus_UInt32  rx_continuous:1;
        RBus_UInt32  rx_int_en:1;
        RBus_UInt32  init_addr:4;
        RBus_UInt32  rx_eom:1;
        RBus_UInt32  rx_int:1;
        RBus_UInt32  rx_fifo_ov:1;
        RBus_UInt32  rx_fifo_cnt:5;
    };
}cec_rxcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  tx_addr_en:1;
        RBus_UInt32  tx_addr:4;
        RBus_UInt32  tx_en:1;
        RBus_UInt32  tx_rst:1;
        RBus_UInt32  tx_continuous:1;
        RBus_UInt32  tx_int_en:1;
        RBus_UInt32  dest_addr:4;
        RBus_UInt32  tx_eom:1;
        RBus_UInt32  tx_int:1;
        RBus_UInt32  tx_fifo_ud:1;
        RBus_UInt32  tx_fifo_cnt:5;
    };
}cec_txcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  tx_add_cnt:1;
        RBus_UInt32  rx_sub_cnt:1;
        RBus_UInt32  fifo_cnt:5;
    };
}cec_txdr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_0:8;
        RBus_UInt32  tx_fifo_1:8;
        RBus_UInt32  tx_fifo_2:8;
        RBus_UInt32  tx_fifo_3:8;
    };
}cec_txdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_4:8;
        RBus_UInt32  tx_fifo_5:8;
        RBus_UInt32  tx_fifo_6:8;
        RBus_UInt32  tx_fifo_7:8;
    };
}cec_txdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_8:8;
        RBus_UInt32  tx_fifo_9:8;
        RBus_UInt32  tx_fifo_a:8;
        RBus_UInt32  tx_fifo_b:8;
    };
}cec_txdr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_c:8;
        RBus_UInt32  tx_fifo_d:8;
        RBus_UInt32  tx_fifo_e:8;
        RBus_UInt32  tx_fifo_f:8;
    };
}cec_txdr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_0:8;
        RBus_UInt32  rx_fifo_1:8;
        RBus_UInt32  rx_fifo_2:8;
        RBus_UInt32  rx_fifo_3:8;
    };
}cec_rxdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_4:8;
        RBus_UInt32  rx_fifo_5:8;
        RBus_UInt32  rx_fifo_6:8;
        RBus_UInt32  rx_fifo_7:8;
    };
}cec_rxdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_8:8;
        RBus_UInt32  rx_fifo_9:8;
        RBus_UInt32  rx_fifo_a:8;
        RBus_UInt32  rx_fifo_b:8;
    };
}cec_rxdr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_c:8;
        RBus_UInt32  rx_fifo_d:8;
        RBus_UInt32  rx_fifo_e:8;
        RBus_UInt32  rx_fifo_f:8;
    };
}cec_rxdr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_start_low:8;
        RBus_UInt32  rx_start_period:8;
        RBus_UInt32  rx_data_sample:8;
        RBus_UInt32  rx_data_period:8;
    };
}cec_rxtcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tx_start_low:8;
        RBus_UInt32  tx_start_high:8;
    };
}cec_txtcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  tx_data_low:8;
        RBus_UInt32  tx_data_01:8;
        RBus_UInt32  tx_data_high:8;
    };
}cec_txtcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_01:8;
    };
}gdi_cec_compare_opcode_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  send_init_address_01:1;
        RBus_UInt32  init_address_01:4;
        RBus_UInt32  send_opcode_01:8;
    };
}gdi_cec_send_opcode_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:6;
        RBus_UInt32  operand_number_01:2;
    };
}gdi_cec_send_operand_number_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_01:8;
    };
}gdi_cec_operand_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_02:8;
    };
}gdi_cec_operand_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_03:8;
    };
}gdi_cec_operand_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_02:8;
    };
}gdi_cec_compare_opcode_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  send_init_address_02:1;
        RBus_UInt32  init_address_02:4;
        RBus_UInt32  send_opcode_02:8;
    };
}gdi_cec_send_opcode_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:6;
        RBus_UInt32  operand_number_02:2;
    };
}gdi_cec_send_operand_number_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_04:8;
    };
}gdi_cec_operand_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_05:8;
    };
}gdi_cec_operand_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_06:8;
    };
}gdi_cec_operand_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_03:8;
    };
}gdi_cec_compare_opcode_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  send_init_address_03:1;
        RBus_UInt32  init_address_03:4;
        RBus_UInt32  send_opcode_03:8;
    };
}gdi_cec_send_opcode_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:6;
        RBus_UInt32  operand_number_03:2;
    };
}gdi_cec_send_operand_number_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_07:8;
    };
}gdi_cec_operand_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_08:8;
    };
}gdi_cec_operand_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_09:8;
    };
}gdi_cec_operand_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_04:8;
    };
}gdi_cec_compare_opcode_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  send_init_address_04:1;
        RBus_UInt32  init_address_04:4;
        RBus_UInt32  send_opcode_04:8;
    };
}gdi_cec_send_opcode_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:6;
        RBus_UInt32  operand_number_04:2;
    };
}gdi_cec_send_operand_number_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_10:8;
    };
}gdi_cec_operand_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_11:8;
    };
}gdi_cec_operand_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  operand_12:8;
    };
}gdi_cec_operand_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_05:8;
    };
}gdi_cec_compare_opcode_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_06:8;
    };
}gdi_cec_compare_opcode_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_07:8;
    };
}gdi_cec_compare_opcode_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_08:8;
    };
}gdi_cec_compare_opcode_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_09:8;
    };
}gdi_cec_compare_opcode_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_10:8;
    };
}gdi_cec_compare_opcode_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_11:8;
    };
}gdi_cec_compare_opcode_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_12:8;
    };
}gdi_cec_compare_opcode_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_13:8;
    };
}gdi_cec_compare_opcode_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_14:8;
    };
}gdi_cec_compare_opcode_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  compare_opcode_15:8;
    };
}gdi_cec_compare_opcode_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  en_compare_opcode_15:1;
        RBus_UInt32  en_compare_opcode_14:1;
        RBus_UInt32  en_compare_opcode_13:1;
        RBus_UInt32  en_compare_opcode_12:1;
        RBus_UInt32  en_compare_opcode_11:1;
        RBus_UInt32  en_compare_opcode_10:1;
        RBus_UInt32  en_compare_opcode_09:1;
        RBus_UInt32  en_compare_opcode_08:1;
        RBus_UInt32  en_compare_opcode_07:1;
        RBus_UInt32  en_compare_opcode_06:1;
        RBus_UInt32  en_compare_opcode_05:1;
        RBus_UInt32  en_compare_opcode_04:1;
        RBus_UInt32  en_compare_opcode_03:1;
        RBus_UInt32  en_compare_opcode_02:1;
        RBus_UInt32  en_compare_opcode_01:1;
    };
}gdi_cec_opcode_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_pending:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  cec_msg_status_01:1;
        RBus_UInt32  cec_msg_status_02:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  irq_by_cec_receive_special_cmd:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  cec_rpu_en:1;
        RBus_UInt32  cec_rsel:5;
    };
}gdi_power_saving_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  rx_ack_wait_1_sel:1;
        RBus_UInt32  rx_ack_wait_2_sel:1;
        RBus_UInt32  rx_ack_wait_3_sel:1;
        RBus_UInt32  rx_ack_wait_1:8;
        RBus_UInt32  rx_ack_wait_2:8;
        RBus_UInt32  rx_ack_wait_3:8;
    };
}cec_rxacktcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  rx_ack_low_sel:1;
        RBus_UInt32  rx_ack_bit_sel:1;
        RBus_UInt32  rx_ack_line_err_sel:1;
        RBus_UInt32  rx_ack_low:8;
        RBus_UInt32  rx_ack_bit:8;
        RBus_UInt32  rx_ack_line_err:8;
    };
}cec_rxacktcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  tx_send_another:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  other_device_access_after_ack:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  tx_re_send:4;
    };
}cec_txrxackoption_RBUS;





#else //apply LITTLE_ENDIAN


//======CEC register structure define==========
typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_mode_pad_data:5;
        RBus_UInt32  cdc_arbitration_en:1;
        RBus_UInt32  cec_in_deb_mode:1;
        RBus_UInt32  unreg_ack_en:1;
        RBus_UInt32  pre_div:8;
        RBus_UInt32  timer_div:8;
        RBus_UInt32  logical_addr:4;
        RBus_UInt32  test_mode_pad_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cec_mode:2;
    };
}cec_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  retry_no:4;
        RBus_UInt32  lattest:1;
        RBus_UInt32  wt_cnt:6;
        RBus_UInt32  clear_cec_int:1;
        RBus_UInt32  cec_hw_retry_en:1;
        RBus_UInt32  cec_hw_retry_mode:1;
        RBus_UInt32  dummy98037204_15_14:2;
        RBus_UInt32  cec_pad_en_mode:1;
        RBus_UInt32  cec_pad_en:1;
        RBus_UInt32  dummy98037204_30_18:13;
        RBus_UInt32  cec_pad_in:1;
    };
}cec_rtcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_cnt:5;
        RBus_UInt32  rx_fifo_ov:1;
        RBus_UInt32  rx_int:1;
        RBus_UInt32  rx_eom:1;
        RBus_UInt32  init_addr:4;
        RBus_UInt32  rx_int_en:1;
        RBus_UInt32  rx_continuous:1;
        RBus_UInt32  rx_rst:1;
        RBus_UInt32  rx_en:1;
        RBus_UInt32  standby_init_addr:4;
        RBus_UInt32  standby_addr_sel:1;
        RBus_UInt32  rx_clear_fifo_data_fw:1;
        RBus_UInt32  rx_clear_fifo_data_mode:1;
        RBus_UInt32  rx_clear_fifo_data_en:1;
        RBus_UInt32  rx_same_la_ack:1;
        RBus_UInt32  rx_no_accept_command_data:1;
        RBus_UInt32  rx_same_la_direct_nack:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  broadcast_addr:1;
    };
}cec_rxcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_cnt:5;
        RBus_UInt32  tx_fifo_ud:1;
        RBus_UInt32  tx_int:1;
        RBus_UInt32  tx_eom:1;
        RBus_UInt32  dest_addr:4;
        RBus_UInt32  tx_int_en:1;
        RBus_UInt32  tx_continuous:1;
        RBus_UInt32  tx_rst:1;
        RBus_UInt32  tx_en:1;
        RBus_UInt32  tx_addr:4;
        RBus_UInt32  tx_addr_en:1;
        RBus_UInt32  res1:11;
    };
}cec_txcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fifo_cnt:5;
        RBus_UInt32  rx_sub_cnt:1;
        RBus_UInt32  tx_add_cnt:1;
        RBus_UInt32  res1:25;
    };
}cec_txdr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_3:8;
        RBus_UInt32  tx_fifo_2:8;
        RBus_UInt32  tx_fifo_1:8;
        RBus_UInt32  tx_fifo_0:8;
    };
}cec_txdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_7:8;
        RBus_UInt32  tx_fifo_6:8;
        RBus_UInt32  tx_fifo_5:8;
        RBus_UInt32  tx_fifo_4:8;
    };
}cec_txdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_b:8;
        RBus_UInt32  tx_fifo_a:8;
        RBus_UInt32  tx_fifo_9:8;
        RBus_UInt32  tx_fifo_8:8;
    };
}cec_txdr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_fifo_f:8;
        RBus_UInt32  tx_fifo_e:8;
        RBus_UInt32  tx_fifo_d:8;
        RBus_UInt32  tx_fifo_c:8;
    };
}cec_txdr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_3:8;
        RBus_UInt32  rx_fifo_2:8;
        RBus_UInt32  rx_fifo_1:8;
        RBus_UInt32  rx_fifo_0:8;
    };
}cec_rxdr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_7:8;
        RBus_UInt32  rx_fifo_6:8;
        RBus_UInt32  rx_fifo_5:8;
        RBus_UInt32  rx_fifo_4:8;
    };
}cec_rxdr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_b:8;
        RBus_UInt32  rx_fifo_a:8;
        RBus_UInt32  rx_fifo_9:8;
        RBus_UInt32  rx_fifo_8:8;
    };
}cec_rxdr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_fifo_f:8;
        RBus_UInt32  rx_fifo_e:8;
        RBus_UInt32  rx_fifo_d:8;
        RBus_UInt32  rx_fifo_c:8;
    };
}cec_rxdr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_data_period:8;
        RBus_UInt32  rx_data_sample:8;
        RBus_UInt32  rx_start_period:8;
        RBus_UInt32  rx_start_low:8;
    };
}cec_rxtcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_start_high:8;
        RBus_UInt32  tx_start_low:8;
        RBus_UInt32  res1:16;
    };
}cec_txtcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_data_high:8;
        RBus_UInt32  tx_data_01:8;
        RBus_UInt32  tx_data_low:8;
        RBus_UInt32  res1:8;
    };
}cec_txtcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_01:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  send_opcode_01:8;
        RBus_UInt32  init_address_01:4;
        RBus_UInt32  send_init_address_01:1;
        RBus_UInt32  res1:19;
    };
}gdi_cec_send_opcode_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_number_01:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  res1:24;
    };
}gdi_cec_send_operand_number_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_01:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_02:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_03:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_02:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  send_opcode_02:8;
        RBus_UInt32  init_address_02:4;
        RBus_UInt32  send_init_address_02:1;
        RBus_UInt32  res1:19;
    };
}gdi_cec_send_opcode_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_number_02:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  res1:24;
    };
}gdi_cec_send_operand_number_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_04:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_05:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_06:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_03:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  send_opcode_03:8;
        RBus_UInt32  init_address_03:4;
        RBus_UInt32  send_init_address_03:1;
        RBus_UInt32  res1:19;
    };
}gdi_cec_send_opcode_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_number_03:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  res1:24;
    };
}gdi_cec_send_operand_number_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_07:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_08:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_09:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_04:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  send_opcode_04:8;
        RBus_UInt32  init_address_04:4;
        RBus_UInt32  send_init_address_04:1;
        RBus_UInt32  res1:19;
    };
}gdi_cec_send_opcode_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_number_04:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  res1:24;
    };
}gdi_cec_send_operand_number_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_10:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_11:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  operand_12:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_operand_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_05:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_06:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_07:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_08:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_09:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_10:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_11:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_12:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_13:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_14:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  compare_opcode_15:8;
        RBus_UInt32  res1:24;
    };
}gdi_cec_compare_opcode_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_compare_opcode_01:1;
        RBus_UInt32  en_compare_opcode_02:1;
        RBus_UInt32  en_compare_opcode_03:1;
        RBus_UInt32  en_compare_opcode_04:1;
        RBus_UInt32  en_compare_opcode_05:1;
        RBus_UInt32  en_compare_opcode_06:1;
        RBus_UInt32  en_compare_opcode_07:1;
        RBus_UInt32  en_compare_opcode_08:1;
        RBus_UInt32  en_compare_opcode_09:1;
        RBus_UInt32  en_compare_opcode_10:1;
        RBus_UInt32  en_compare_opcode_11:1;
        RBus_UInt32  en_compare_opcode_12:1;
        RBus_UInt32  en_compare_opcode_13:1;
        RBus_UInt32  en_compare_opcode_14:1;
        RBus_UInt32  en_compare_opcode_15:1;
        RBus_UInt32  res1:17;
    };
}gdi_cec_opcode_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cec_rsel:5;
        RBus_UInt32  cec_rpu_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  irq_by_cec_receive_special_cmd:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  cec_msg_status_02:1;
        RBus_UInt32  cec_msg_status_01:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  irq_pending:1;
    };
}gdi_power_saving_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_ack_wait_3:8;
        RBus_UInt32  rx_ack_wait_2:8;
        RBus_UInt32  rx_ack_wait_1:8;
        RBus_UInt32  rx_ack_wait_3_sel:1;
        RBus_UInt32  rx_ack_wait_2_sel:1;
        RBus_UInt32  rx_ack_wait_1_sel:1;
        RBus_UInt32  res1:5;
    };
}cec_rxacktcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_ack_line_err:8;
        RBus_UInt32  rx_ack_bit:8;
        RBus_UInt32  rx_ack_low:8;
        RBus_UInt32  rx_ack_line_err_sel:1;
        RBus_UInt32  rx_ack_bit_sel:1;
        RBus_UInt32  rx_ack_low_sel:1;
        RBus_UInt32  res1:5;
    };
}cec_rxacktcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_re_send:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  other_device_access_after_ack:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  tx_send_another:4;
        RBus_UInt32  res1:12;
    };
}cec_txrxackoption_RBUS;


#endif







#endif //_RBUS_CEC_REG_H_

