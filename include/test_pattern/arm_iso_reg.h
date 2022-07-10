/**************************************************************
// Spec Version                  : unknown
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2014/3/27 17:46:20
***************************************************************/


#ifndef _ARM_ISO_REG_H_INCLUDED_
#define _ARM_ISO_REG_H_INCLUDED_
#ifdef  _ARM_ISO_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     rstn_i2c:1;
unsigned int     rstn_gpio:1;
}ARM_ISO_SOFT_RESET;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     clk_en_i2c:1;
unsigned int     clk_en_gpio:1;
}ARM_ISO_CLOCK_ENABLE;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     alarm_int_en:1;
unsigned int     I2C:1;
unsigned int     reserved_1:6;
unsigned int     GPIODA:1;
unsigned int     GPIOA:1;
}ARM_ISO_SCPU_INT_EN;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     GPIODA_INT:1;
unsigned int     GPIOA_INT:1;
unsigned int     write_data:1;
}ARM_ISO_UMSK_ISR;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     I2C0_INT:1;
unsigned int     reserved_1:5;
unsigned int     GPIODA_INT:1;
unsigned int     GPIOA_INT:1;
unsigned int     write_data:1;
}ARM_ISO_ISR;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     INT6:1;
unsigned int     INT5:1;
unsigned int     INT4:1;
unsigned int     INT3:1;
unsigned int     INT2:1;
unsigned int     INT1:1;
unsigned int     INT0:1;
unsigned int     write_data:1;
}ARM_ISO_UMSK_ISR_GP0A;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     INT6:1;
unsigned int     INT5:1;
unsigned int     INT4:1;
unsigned int     INT3:1;
unsigned int     INT2:1;
unsigned int     INT1:1;
unsigned int     INT0:1;
unsigned int     write_data:1;
}ARM_ISO_UMSK_ISR_GP0DA;

typedef struct 
{
unsigned int     dmy1:20;
unsigned int     reserved_0:3;
unsigned int     en:1;
unsigned int     reserved_1:3;
unsigned int     sel:5;
}ARM_ISO_I2C0_SDA_DEL;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     iso_ctrl_en_1:1;
unsigned int     iso_ctrl_en:1;
}ARM_ISO_CELL;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     top_vdd_on:3;
}ARM_ISO_POWER;

typedef struct 
{
unsigned int     data_0:32;
}ARM_ISO_DUMMY;

typedef struct 
{
unsigned int     data_1:32;
}ARM_ISO_DUMMY;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     GPDIR:7;
}ARM_ISO_GPDIR;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     GPDATO:7;
}ARM_ISO_GPDATO;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     GPDATI:7;
}ARM_ISO_GPDATI;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     GP:7;
}ARM_ISO_GPIE;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     GPHA:7;
}ARM_ISO_GPDP;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     write_en1:1;
unsigned int     CLK1:3;
}ARM_ISO_GPDEB;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     IC_SLAVE_DISABLE:1;
unsigned int     IC_RESTART_EN:1;
unsigned int     IC_10BITADDR_MASTER:1;
unsigned int     IC_10BITADDR_SLAVE:1;
unsigned int     SPEED:2;
unsigned int     MASTER_MODE:1;
}ARM_ISO_IC0_CON;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     IC_10BITADDR_MASTER:1;
unsigned int     SPECIAL:1;
unsigned int     GC_OR_START:1;
unsigned int     IC_TAR:10;
}ARM_ISO_IC0_TAR;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     IC_SAR:10;
}ARM_ISO_IC0_SAR;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     IC_HS_MAR:3;
}ARM_ISO_IC0_HS_MADDR;

typedef struct 
{
unsigned int     reserved_0:21;
unsigned int     RESTART:1;
unsigned int     STOP:1;
unsigned int     CMD:1;
unsigned int     DAT:8;
}ARM_ISO_IC0_DATA_CMD;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     IC_SS_SCL_HCNT:16;
}ARM_ISO_IC0_SS_SCL_HCNT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     IC_SS_SCL_LCNT:16;
}ARM_ISO_IC0_SS_SCL_LCNT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     IC_FS_SCL_HCNT:16;
}ARM_ISO_IC0_FS_SCL_HCNT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     IC_FS_SCL_LCNT:16;
}ARM_ISO_IC0_FS_SCL_LCNT;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     R_GEN_CALL:1;
unsigned int     R_START_DET:1;
unsigned int     R_STOP_DET:1;
unsigned int     R_ACTIVITY:1;
unsigned int     R_RX_DONE:1;
unsigned int     R_TX_ABRT:1;
unsigned int     R_RD_REQ:1;
unsigned int     R_TX_EMPTY:1;
unsigned int     R_TX_OVER:1;
unsigned int     R_RX_FULL:1;
unsigned int     R_RX_OVER:1;
unsigned int     R_RX_UNDER:1;
}ARM_ISO_IC0_INTR_STAT;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     M_GEN_CALL:1;
unsigned int     M_START_DET:1;
unsigned int     M_STOP_DET:1;
unsigned int     M_ACTIVITY:1;
unsigned int     M_RX_DONE:1;
unsigned int     M_TX_ABRT:1;
unsigned int     M_RD_REQ:1;
unsigned int     M_TX_EMPTY:1;
unsigned int     M_TX_OVER:1;
unsigned int     M_RX_FULL:1;
unsigned int     M_RX_OVER:1;
unsigned int     M_RX_UNDER:1;
}ARM_ISO_IC0_INTR_MASK;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     GEN_CALL:1;
unsigned int     START_DET:1;
unsigned int     STOP_DET:1;
unsigned int     ACTIVITY:1;
unsigned int     RX_DONE:1;
unsigned int     TX_ABRT:1;
unsigned int     RD_REQ:1;
unsigned int     TX_EMPTY:1;
unsigned int     TX_OVER:1;
unsigned int     RX_FULL:1;
unsigned int     RX_OVER:1;
unsigned int     RX_UNDER:1;
}ARM_ISO_IC0_RAW_INTR_STAT;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     RX_TL:8;
}ARM_ISO_IC0_RX_TL;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     TX_TL:8;
}ARM_ISO_IC0_TX_TL;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_INTR:1;
}ARM_ISO_IC0_CLR_INTR;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_RX_UNDER:1;
}ARM_ISO_IC0_CLR_RX_UNDER;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_RX_OVER:1;
}ARM_ISO_IC0_CLR_RX_OVER;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_TX_OVER:1;
}ARM_ISO_IC0_CLR_TX_OVER;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_RD_REQ:1;
}ARM_ISO_IC0_CLR_RD_REQ;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_TX_ABRT:1;
}ARM_ISO_IC0_CLR_TX_ABRT;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_RX_DONE:1;
}ARM_ISO_IC0_CLR_RX_DONE;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_ACTIVITY:1;
}ARM_ISO_IC0_CLR_ACTIVITY;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_STOP_DET:1;
}ARM_ISO_IC0_CLR_STOP_DET;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_START_DET:1;
}ARM_ISO_IC0_CLR_START_DET;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     CLR_GEN_CALL:1;
}ARM_ISO_IC0_CLR_GEN_CALL;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     ENABLE:1;
}ARM_ISO_IC0_ENABLE;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     SLV_ACTIVITY:1;
unsigned int     MST_ACTIVITY:1;
unsigned int     RFF:1;
unsigned int     RFNE:1;
unsigned int     TFE:1;
unsigned int     TFNF:1;
unsigned int     ACTIVITY:1;
}ARM_ISO_IC0_STATUS;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     TXFLR:4;
}ARM_ISO_IC0_TXFLR;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     RXFLR:4;
}ARM_ISO_IC0_RXFLR;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     IC_SDA_HOLD:16;
}ARM_ISO_IC0_SDA_HOLD;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     ABRT_SLVRD_INTX:1;
unsigned int     ABRT_SLV_ARBLOST:1;
unsigned int     ABRT_SLVFLUSH_TXFIFO:1;
unsigned int     ARB_LOST:1;
unsigned int     ARB_MASTER_DIS:1;
unsigned int     ABRT_10B_RD_NORSTRT:1;
unsigned int     ABRT_SBYTE_NORSTRT:1;
unsigned int     ABRT_HS_NORSTRT:1;
unsigned int     ABRT_SBYTE_ACKDET:1;
unsigned int     ABRT_HS_ACKDET:1;
unsigned int     ABRT_GCALL_READ:1;
unsigned int     ABRT_GCALL_NOACK:1;
unsigned int     ABRT_TXDATA_NOACK:1;
unsigned int     ABRT_10ADDR2_NOACK:1;
unsigned int     ABRT_10ADDR1_NOACK:1;
unsigned int     ABRT_7B_ADDR_NOACK:1;
}ARM_ISO_IC0_TX_ABRT_SOURCE;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     NACK:1;
}ARM_ISO_IC0_SLV_DATA_NACK_ONLY;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     TDMAE:1;
unsigned int     RDMAE:1;
}ARM_ISO_IC0_DMA_CR;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     DMATDL:3;
}ARM_ISO_IC0_DMA_TDLR;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     DMARDL:4;
}ARM_ISO_IC0_DMA_RDLR;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     SDA_SETUP:8;
}ARM_ISO_IC0_SDA_SETUP;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     ACK_GEN_CALL:1;
}ARM_ISO_IC0_ACK_GENERAL_CALL;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     SLV_RX_DATA_LOST:1;
unsigned int     SLV_DISABLED_WHI:1;
unsigned int     IC_EN:1;
}ARM_ISO_IC0_ENABLE_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     TX_BUFFER_DEPTH:8;
unsigned int     RX_BUFFER_DEPTH:8;
unsigned int     ADD_ENCODED_PARAMS:1;
unsigned int     HAS_DMA:1;
unsigned int     INTR_IO:1;
unsigned int     HC_COUNT_VALUES:1;
unsigned int     MAX_SPEED_MODE:2;
unsigned int     APB_DATA_WIDTH:2;
}ARM_ISO_IC0_COMP_PARAM_1;

typedef struct 
{
unsigned int     IC_COMP_VERSION:32;
}ARM_ISO_IC0_COMP_VERSION;

typedef struct 
{
unsigned int     IC_COMP_TYPE:32;
}ARM_ISO_IC0_COMP_TYPE;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     arm_tmx:2;
unsigned int     i2c_scl_7:2;
unsigned int     i2c_sda_7:2;
unsigned int     ej_tdo:2;
unsigned int     ej_tms:2;
unsigned int     ej_tclk:2;
unsigned int     ej_tdi:2;
unsigned int     ej_rst_n:2;
}ARM_ISO_MUXPAD;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     gpio_6_smt:1;
unsigned int     gpio_6_e2:1;
unsigned int     gpio_6_pud_en:1;
unsigned int     gpio_6_pud_sel:1;
unsigned int     gpio_5_smt:1;
unsigned int     gpio_5_e2:1;
unsigned int     gpio_5_pud_en:1;
unsigned int     gpio_5_pud_sel:1;
unsigned int     gpio_4_smt:1;
unsigned int     gpio_4_e2:1;
unsigned int     gpio_4_pud_en:1;
unsigned int     gpio_4_pud_sel:1;
unsigned int     gpio_3_smt:1;
unsigned int     gpio_3_e2:1;
unsigned int     gpio_3_pud_en:1;
unsigned int     gpio_3_pud_sel:1;
unsigned int     gpio_2_smt:1;
unsigned int     gpio_2_e2:1;
unsigned int     gpio_2_pud_en:1;
unsigned int     gpio_2_pud_sel:1;
unsigned int     gpio_1_smt:1;
unsigned int     gpio_1_e2:1;
unsigned int     gpio_1_pud_en:1;
unsigned int     gpio_1_pud_sel:1;
unsigned int     gpio_0_smt:1;
unsigned int     gpio_0_e2:1;
unsigned int     gpio_0_pud_en:1;
unsigned int     gpio_0_pud_sel:1;
}ARM_ISO_PFUNC;

#endif

#define ARM_ISO_SOFT_RESET                                                           0xFF019000
#define ARM_ISO_SOFT_RESET_reg_addr                                                  "0xFF019000"
#define ARM_ISO_SOFT_RESET_reg                                                       0xFF019000
#define set_ARM_ISO_SOFT_RESET_reg(data)   (*((volatile unsigned int*) ARM_ISO_SOFT_RESET_reg)=data)
#define get_ARM_ISO_SOFT_RESET_reg   (*((volatile unsigned int*) ARM_ISO_SOFT_RESET_reg))
#define ARM_ISO_SOFT_RESET_inst_adr                                                  "0x0000"
#define ARM_ISO_SOFT_RESET_inst                                                      0x0000
#define ARM_ISO_SOFT_RESET_rstn_i2c_shift                                            (1)
#define ARM_ISO_SOFT_RESET_rstn_i2c_mask                                             (0x00000002)
#define ARM_ISO_SOFT_RESET_rstn_i2c(data)                                            (0x00000002&((data)<<1))
#define ARM_ISO_SOFT_RESET_rstn_i2c_src(data)                                        ((0x00000002&(data))>>1)
#define ARM_ISO_SOFT_RESET_get_rstn_i2c(data)                                        ((0x00000002&(data))>>1)
#define ARM_ISO_SOFT_RESET_rstn_gpio_shift                                           (0)
#define ARM_ISO_SOFT_RESET_rstn_gpio_mask                                            (0x00000001)
#define ARM_ISO_SOFT_RESET_rstn_gpio(data)                                           (0x00000001&((data)<<0))
#define ARM_ISO_SOFT_RESET_rstn_gpio_src(data)                                       ((0x00000001&(data))>>0)
#define ARM_ISO_SOFT_RESET_get_rstn_gpio(data)                                       ((0x00000001&(data))>>0)


#define ARM_ISO_CLOCK_ENABLE                                                         0xFF019004
#define ARM_ISO_CLOCK_ENABLE_reg_addr                                                "0xFF019004"
#define ARM_ISO_CLOCK_ENABLE_reg                                                     0xFF019004
#define set_ARM_ISO_CLOCK_ENABLE_reg(data)   (*((volatile unsigned int*) ARM_ISO_CLOCK_ENABLE_reg)=data)
#define get_ARM_ISO_CLOCK_ENABLE_reg   (*((volatile unsigned int*) ARM_ISO_CLOCK_ENABLE_reg))
#define ARM_ISO_CLOCK_ENABLE_inst_adr                                                "0x0001"
#define ARM_ISO_CLOCK_ENABLE_inst                                                    0x0001
#define ARM_ISO_CLOCK_ENABLE_clk_en_i2c_shift                                        (1)
#define ARM_ISO_CLOCK_ENABLE_clk_en_i2c_mask                                         (0x00000002)
#define ARM_ISO_CLOCK_ENABLE_clk_en_i2c(data)                                        (0x00000002&((data)<<1))
#define ARM_ISO_CLOCK_ENABLE_clk_en_i2c_src(data)                                    ((0x00000002&(data))>>1)
#define ARM_ISO_CLOCK_ENABLE_get_clk_en_i2c(data)                                    ((0x00000002&(data))>>1)
#define ARM_ISO_CLOCK_ENABLE_clk_en_gpio_shift                                       (0)
#define ARM_ISO_CLOCK_ENABLE_clk_en_gpio_mask                                        (0x00000001)
#define ARM_ISO_CLOCK_ENABLE_clk_en_gpio(data)                                       (0x00000001&((data)<<0))
#define ARM_ISO_CLOCK_ENABLE_clk_en_gpio_src(data)                                   ((0x00000001&(data))>>0)
#define ARM_ISO_CLOCK_ENABLE_get_clk_en_gpio(data)                                   ((0x00000001&(data))>>0)


#define ARM_ISO_SCPU_INT_EN                                                          0xFF019008
#define ARM_ISO_SCPU_INT_EN_reg_addr                                                 "0xFF019008"
#define ARM_ISO_SCPU_INT_EN_reg                                                      0xFF019008
#define set_ARM_ISO_SCPU_INT_EN_reg(data)   (*((volatile unsigned int*) ARM_ISO_SCPU_INT_EN_reg)=data)
#define get_ARM_ISO_SCPU_INT_EN_reg   (*((volatile unsigned int*) ARM_ISO_SCPU_INT_EN_reg))
#define ARM_ISO_SCPU_INT_EN_inst_adr                                                 "0x0002"
#define ARM_ISO_SCPU_INT_EN_inst                                                     0x0002
#define ARM_ISO_SCPU_INT_EN_alarm_int_en_shift                                       (9)
#define ARM_ISO_SCPU_INT_EN_alarm_int_en_mask                                        (0x00000200)
#define ARM_ISO_SCPU_INT_EN_alarm_int_en(data)                                       (0x00000200&((data)<<9))
#define ARM_ISO_SCPU_INT_EN_alarm_int_en_src(data)                                   ((0x00000200&(data))>>9)
#define ARM_ISO_SCPU_INT_EN_get_alarm_int_en(data)                                   ((0x00000200&(data))>>9)
#define ARM_ISO_SCPU_INT_EN_I2C_shift                                                (8)
#define ARM_ISO_SCPU_INT_EN_I2C_mask                                                 (0x00000100)
#define ARM_ISO_SCPU_INT_EN_I2C(data)                                                (0x00000100&((data)<<8))
#define ARM_ISO_SCPU_INT_EN_I2C_src(data)                                            ((0x00000100&(data))>>8)
#define ARM_ISO_SCPU_INT_EN_get_I2C(data)                                            ((0x00000100&(data))>>8)
#define ARM_ISO_SCPU_INT_EN_GPIODA_shift                                             (1)
#define ARM_ISO_SCPU_INT_EN_GPIODA_mask                                              (0x00000002)
#define ARM_ISO_SCPU_INT_EN_GPIODA(data)                                             (0x00000002&((data)<<1))
#define ARM_ISO_SCPU_INT_EN_GPIODA_src(data)                                         ((0x00000002&(data))>>1)
#define ARM_ISO_SCPU_INT_EN_get_GPIODA(data)                                         ((0x00000002&(data))>>1)
#define ARM_ISO_SCPU_INT_EN_GPIOA_shift                                              (0)
#define ARM_ISO_SCPU_INT_EN_GPIOA_mask                                               (0x00000001)
#define ARM_ISO_SCPU_INT_EN_GPIOA(data)                                              (0x00000001&((data)<<0))
#define ARM_ISO_SCPU_INT_EN_GPIOA_src(data)                                          ((0x00000001&(data))>>0)
#define ARM_ISO_SCPU_INT_EN_get_GPIOA(data)                                          ((0x00000001&(data))>>0)


#define ARM_ISO_UMSK_ISR                                                             0xFF019010
#define ARM_ISO_UMSK_ISR_reg_addr                                                    "0xFF019010"
#define ARM_ISO_UMSK_ISR_reg                                                         0xFF019010
#define set_ARM_ISO_UMSK_ISR_reg(data)   (*((volatile unsigned int*) ARM_ISO_UMSK_ISR_reg)=data)
#define get_ARM_ISO_UMSK_ISR_reg   (*((volatile unsigned int*) ARM_ISO_UMSK_ISR_reg))
#define ARM_ISO_UMSK_ISR_inst_adr                                                    "0x0004"
#define ARM_ISO_UMSK_ISR_inst                                                        0x0004
#define ARM_ISO_UMSK_ISR_GPIODA_INT_shift                                            (2)
#define ARM_ISO_UMSK_ISR_GPIODA_INT_mask                                             (0x00000004)
#define ARM_ISO_UMSK_ISR_GPIODA_INT(data)                                            (0x00000004&((data)<<2))
#define ARM_ISO_UMSK_ISR_GPIODA_INT_src(data)                                        ((0x00000004&(data))>>2)
#define ARM_ISO_UMSK_ISR_get_GPIODA_INT(data)                                        ((0x00000004&(data))>>2)
#define ARM_ISO_UMSK_ISR_GPIOA_INT_shift                                             (1)
#define ARM_ISO_UMSK_ISR_GPIOA_INT_mask                                              (0x00000002)
#define ARM_ISO_UMSK_ISR_GPIOA_INT(data)                                             (0x00000002&((data)<<1))
#define ARM_ISO_UMSK_ISR_GPIOA_INT_src(data)                                         ((0x00000002&(data))>>1)
#define ARM_ISO_UMSK_ISR_get_GPIOA_INT(data)                                         ((0x00000002&(data))>>1)
#define ARM_ISO_UMSK_ISR_write_data_shift                                            (0)
#define ARM_ISO_UMSK_ISR_write_data_mask                                             (0x00000001)
#define ARM_ISO_UMSK_ISR_write_data(data)                                            (0x00000001&((data)<<0))
#define ARM_ISO_UMSK_ISR_write_data_src(data)                                        ((0x00000001&(data))>>0)
#define ARM_ISO_UMSK_ISR_get_write_data(data)                                        ((0x00000001&(data))>>0)


#define ARM_ISO_ISR                                                                  0xFF019014
#define ARM_ISO_ISR_reg_addr                                                         "0xFF019014"
#define ARM_ISO_ISR_reg                                                              0xFF019014
#define set_ARM_ISO_ISR_reg(data)   (*((volatile unsigned int*) ARM_ISO_ISR_reg)=data)
#define get_ARM_ISO_ISR_reg   (*((volatile unsigned int*) ARM_ISO_ISR_reg))
#define ARM_ISO_ISR_inst_adr                                                         "0x0005"
#define ARM_ISO_ISR_inst                                                             0x0005
#define ARM_ISO_ISR_I2C0_INT_shift                                                   (8)
#define ARM_ISO_ISR_I2C0_INT_mask                                                    (0x00000100)
#define ARM_ISO_ISR_I2C0_INT(data)                                                   (0x00000100&((data)<<8))
#define ARM_ISO_ISR_I2C0_INT_src(data)                                               ((0x00000100&(data))>>8)
#define ARM_ISO_ISR_get_I2C0_INT(data)                                               ((0x00000100&(data))>>8)
#define ARM_ISO_ISR_GPIODA_INT_shift                                                 (2)
#define ARM_ISO_ISR_GPIODA_INT_mask                                                  (0x00000004)
#define ARM_ISO_ISR_GPIODA_INT(data)                                                 (0x00000004&((data)<<2))
#define ARM_ISO_ISR_GPIODA_INT_src(data)                                             ((0x00000004&(data))>>2)
#define ARM_ISO_ISR_get_GPIODA_INT(data)                                             ((0x00000004&(data))>>2)
#define ARM_ISO_ISR_GPIOA_INT_shift                                                  (1)
#define ARM_ISO_ISR_GPIOA_INT_mask                                                   (0x00000002)
#define ARM_ISO_ISR_GPIOA_INT(data)                                                  (0x00000002&((data)<<1))
#define ARM_ISO_ISR_GPIOA_INT_src(data)                                              ((0x00000002&(data))>>1)
#define ARM_ISO_ISR_get_GPIOA_INT(data)                                              ((0x00000002&(data))>>1)
#define ARM_ISO_ISR_write_data_shift                                                 (0)
#define ARM_ISO_ISR_write_data_mask                                                  (0x00000001)
#define ARM_ISO_ISR_write_data(data)                                                 (0x00000001&((data)<<0))
#define ARM_ISO_ISR_write_data_src(data)                                             ((0x00000001&(data))>>0)
#define ARM_ISO_ISR_get_write_data(data)                                             ((0x00000001&(data))>>0)


#define ARM_ISO_UMSK_ISR_GP0A                                                        0xFF019018
#define ARM_ISO_UMSK_ISR_GP0A_reg_addr                                               "0xFF019018"
#define ARM_ISO_UMSK_ISR_GP0A_reg                                                    0xFF019018
#define set_ARM_ISO_UMSK_ISR_GP0A_reg(data)   (*((volatile unsigned int*) ARM_ISO_UMSK_ISR_GP0A_reg)=data)
#define get_ARM_ISO_UMSK_ISR_GP0A_reg   (*((volatile unsigned int*) ARM_ISO_UMSK_ISR_GP0A_reg))
#define ARM_ISO_UMSK_ISR_GP0A_inst_adr                                               "0x0006"
#define ARM_ISO_UMSK_ISR_GP0A_inst                                                   0x0006
#define ARM_ISO_UMSK_ISR_GP0A_INT6_shift                                             (7)
#define ARM_ISO_UMSK_ISR_GP0A_INT6_mask                                              (0x00000080)
#define ARM_ISO_UMSK_ISR_GP0A_INT6(data)                                             (0x00000080&((data)<<7))
#define ARM_ISO_UMSK_ISR_GP0A_INT6_src(data)                                         ((0x00000080&(data))>>7)
#define ARM_ISO_UMSK_ISR_GP0A_get_INT6(data)                                         ((0x00000080&(data))>>7)
#define ARM_ISO_UMSK_ISR_GP0A_INT5_shift                                             (6)
#define ARM_ISO_UMSK_ISR_GP0A_INT5_mask                                              (0x00000040)
#define ARM_ISO_UMSK_ISR_GP0A_INT5(data)                                             (0x00000040&((data)<<6))
#define ARM_ISO_UMSK_ISR_GP0A_INT5_src(data)                                         ((0x00000040&(data))>>6)
#define ARM_ISO_UMSK_ISR_GP0A_get_INT5(data)                                         ((0x00000040&(data))>>6)
#define ARM_ISO_UMSK_ISR_GP0A_INT4_shift                                             (5)
#define ARM_ISO_UMSK_ISR_GP0A_INT4_mask                                              (0x00000020)
#define ARM_ISO_UMSK_ISR_GP0A_INT4(data)                                             (0x00000020&((data)<<5))
#define ARM_ISO_UMSK_ISR_GP0A_INT4_src(data)                                         ((0x00000020&(data))>>5)
#define ARM_ISO_UMSK_ISR_GP0A_get_INT4(data)                                         ((0x00000020&(data))>>5)
#define ARM_ISO_UMSK_ISR_GP0A_INT3_shift                                             (4)
#define ARM_ISO_UMSK_ISR_GP0A_INT3_mask                                              (0x00000010)
#define ARM_ISO_UMSK_ISR_GP0A_INT3(data)                                             (0x00000010&((data)<<4))
#define ARM_ISO_UMSK_ISR_GP0A_INT3_src(data)                                         ((0x00000010&(data))>>4)
#define ARM_ISO_UMSK_ISR_GP0A_get_INT3(data)                                         ((0x00000010&(data))>>4)
#define ARM_ISO_UMSK_ISR_GP0A_INT2_shift                                             (3)
#define ARM_ISO_UMSK_ISR_GP0A_INT2_mask                                              (0x00000008)
#define ARM_ISO_UMSK_ISR_GP0A_INT2(data)                                             (0x00000008&((data)<<3))
#define ARM_ISO_UMSK_ISR_GP0A_INT2_src(data)                                         ((0x00000008&(data))>>3)
#define ARM_ISO_UMSK_ISR_GP0A_get_INT2(data)                                         ((0x00000008&(data))>>3)
#define ARM_ISO_UMSK_ISR_GP0A_INT1_shift                                             (2)
#define ARM_ISO_UMSK_ISR_GP0A_INT1_mask                                              (0x00000004)
#define ARM_ISO_UMSK_ISR_GP0A_INT1(data)                                             (0x00000004&((data)<<2))
#define ARM_ISO_UMSK_ISR_GP0A_INT1_src(data)                                         ((0x00000004&(data))>>2)
#define ARM_ISO_UMSK_ISR_GP0A_get_INT1(data)                                         ((0x00000004&(data))>>2)
#define ARM_ISO_UMSK_ISR_GP0A_INT0_shift                                             (1)
#define ARM_ISO_UMSK_ISR_GP0A_INT0_mask                                              (0x00000002)
#define ARM_ISO_UMSK_ISR_GP0A_INT0(data)                                             (0x00000002&((data)<<1))
#define ARM_ISO_UMSK_ISR_GP0A_INT0_src(data)                                         ((0x00000002&(data))>>1)
#define ARM_ISO_UMSK_ISR_GP0A_get_INT0(data)                                         ((0x00000002&(data))>>1)
#define ARM_ISO_UMSK_ISR_GP0A_write_data_shift                                       (0)
#define ARM_ISO_UMSK_ISR_GP0A_write_data_mask                                        (0x00000001)
#define ARM_ISO_UMSK_ISR_GP0A_write_data(data)                                       (0x00000001&((data)<<0))
#define ARM_ISO_UMSK_ISR_GP0A_write_data_src(data)                                   ((0x00000001&(data))>>0)
#define ARM_ISO_UMSK_ISR_GP0A_get_write_data(data)                                   ((0x00000001&(data))>>0)


#define ARM_ISO_UMSK_ISR_GP0DA                                                       0xFF01901C
#define ARM_ISO_UMSK_ISR_GP0DA_reg_addr                                              "0xFF01901C"
#define ARM_ISO_UMSK_ISR_GP0DA_reg                                                   0xFF01901C
#define set_ARM_ISO_UMSK_ISR_GP0DA_reg(data)   (*((volatile unsigned int*) ARM_ISO_UMSK_ISR_GP0DA_reg)=data)
#define get_ARM_ISO_UMSK_ISR_GP0DA_reg   (*((volatile unsigned int*) ARM_ISO_UMSK_ISR_GP0DA_reg))
#define ARM_ISO_UMSK_ISR_GP0DA_inst_adr                                              "0x0007"
#define ARM_ISO_UMSK_ISR_GP0DA_inst                                                  0x0007
#define ARM_ISO_UMSK_ISR_GP0DA_INT6_shift                                            (7)
#define ARM_ISO_UMSK_ISR_GP0DA_INT6_mask                                             (0x00000080)
#define ARM_ISO_UMSK_ISR_GP0DA_INT6(data)                                            (0x00000080&((data)<<7))
#define ARM_ISO_UMSK_ISR_GP0DA_INT6_src(data)                                        ((0x00000080&(data))>>7)
#define ARM_ISO_UMSK_ISR_GP0DA_get_INT6(data)                                        ((0x00000080&(data))>>7)
#define ARM_ISO_UMSK_ISR_GP0DA_INT5_shift                                            (6)
#define ARM_ISO_UMSK_ISR_GP0DA_INT5_mask                                             (0x00000040)
#define ARM_ISO_UMSK_ISR_GP0DA_INT5(data)                                            (0x00000040&((data)<<6))
#define ARM_ISO_UMSK_ISR_GP0DA_INT5_src(data)                                        ((0x00000040&(data))>>6)
#define ARM_ISO_UMSK_ISR_GP0DA_get_INT5(data)                                        ((0x00000040&(data))>>6)
#define ARM_ISO_UMSK_ISR_GP0DA_INT4_shift                                            (5)
#define ARM_ISO_UMSK_ISR_GP0DA_INT4_mask                                             (0x00000020)
#define ARM_ISO_UMSK_ISR_GP0DA_INT4(data)                                            (0x00000020&((data)<<5))
#define ARM_ISO_UMSK_ISR_GP0DA_INT4_src(data)                                        ((0x00000020&(data))>>5)
#define ARM_ISO_UMSK_ISR_GP0DA_get_INT4(data)                                        ((0x00000020&(data))>>5)
#define ARM_ISO_UMSK_ISR_GP0DA_INT3_shift                                            (4)
#define ARM_ISO_UMSK_ISR_GP0DA_INT3_mask                                             (0x00000010)
#define ARM_ISO_UMSK_ISR_GP0DA_INT3(data)                                            (0x00000010&((data)<<4))
#define ARM_ISO_UMSK_ISR_GP0DA_INT3_src(data)                                        ((0x00000010&(data))>>4)
#define ARM_ISO_UMSK_ISR_GP0DA_get_INT3(data)                                        ((0x00000010&(data))>>4)
#define ARM_ISO_UMSK_ISR_GP0DA_INT2_shift                                            (3)
#define ARM_ISO_UMSK_ISR_GP0DA_INT2_mask                                             (0x00000008)
#define ARM_ISO_UMSK_ISR_GP0DA_INT2(data)                                            (0x00000008&((data)<<3))
#define ARM_ISO_UMSK_ISR_GP0DA_INT2_src(data)                                        ((0x00000008&(data))>>3)
#define ARM_ISO_UMSK_ISR_GP0DA_get_INT2(data)                                        ((0x00000008&(data))>>3)
#define ARM_ISO_UMSK_ISR_GP0DA_INT1_shift                                            (2)
#define ARM_ISO_UMSK_ISR_GP0DA_INT1_mask                                             (0x00000004)
#define ARM_ISO_UMSK_ISR_GP0DA_INT1(data)                                            (0x00000004&((data)<<2))
#define ARM_ISO_UMSK_ISR_GP0DA_INT1_src(data)                                        ((0x00000004&(data))>>2)
#define ARM_ISO_UMSK_ISR_GP0DA_get_INT1(data)                                        ((0x00000004&(data))>>2)
#define ARM_ISO_UMSK_ISR_GP0DA_INT0_shift                                            (1)
#define ARM_ISO_UMSK_ISR_GP0DA_INT0_mask                                             (0x00000002)
#define ARM_ISO_UMSK_ISR_GP0DA_INT0(data)                                            (0x00000002&((data)<<1))
#define ARM_ISO_UMSK_ISR_GP0DA_INT0_src(data)                                        ((0x00000002&(data))>>1)
#define ARM_ISO_UMSK_ISR_GP0DA_get_INT0(data)                                        ((0x00000002&(data))>>1)
#define ARM_ISO_UMSK_ISR_GP0DA_write_data_shift                                      (0)
#define ARM_ISO_UMSK_ISR_GP0DA_write_data_mask                                       (0x00000001)
#define ARM_ISO_UMSK_ISR_GP0DA_write_data(data)                                      (0x00000001&((data)<<0))
#define ARM_ISO_UMSK_ISR_GP0DA_write_data_src(data)                                  ((0x00000001&(data))>>0)
#define ARM_ISO_UMSK_ISR_GP0DA_get_write_data(data)                                  ((0x00000001&(data))>>0)


#define ARM_ISO_I2C0_SDA_DEL                                                         0xFF019020
#define ARM_ISO_I2C0_SDA_DEL_reg_addr                                                "0xFF019020"
#define ARM_ISO_I2C0_SDA_DEL_reg                                                     0xFF019020
#define set_ARM_ISO_I2C0_SDA_DEL_reg(data)   (*((volatile unsigned int*) ARM_ISO_I2C0_SDA_DEL_reg)=data)
#define get_ARM_ISO_I2C0_SDA_DEL_reg   (*((volatile unsigned int*) ARM_ISO_I2C0_SDA_DEL_reg))
#define ARM_ISO_I2C0_SDA_DEL_inst_adr                                                "0x0008"
#define ARM_ISO_I2C0_SDA_DEL_inst                                                    0x0008
#define ARM_ISO_I2C0_SDA_DEL_dmy1_shift                                              (12)
#define ARM_ISO_I2C0_SDA_DEL_dmy1_mask                                               (0xFFFFF000)
#define ARM_ISO_I2C0_SDA_DEL_dmy1(data)                                              (0xFFFFF000&((data)<<12))
#define ARM_ISO_I2C0_SDA_DEL_dmy1_src(data)                                          ((0xFFFFF000&(data))>>12)
#define ARM_ISO_I2C0_SDA_DEL_get_dmy1(data)                                          ((0xFFFFF000&(data))>>12)
#define ARM_ISO_I2C0_SDA_DEL_en_shift                                                (8)
#define ARM_ISO_I2C0_SDA_DEL_en_mask                                                 (0x00000100)
#define ARM_ISO_I2C0_SDA_DEL_en(data)                                                (0x00000100&((data)<<8))
#define ARM_ISO_I2C0_SDA_DEL_en_src(data)                                            ((0x00000100&(data))>>8)
#define ARM_ISO_I2C0_SDA_DEL_get_en(data)                                            ((0x00000100&(data))>>8)
#define ARM_ISO_I2C0_SDA_DEL_sel_shift                                               (0)
#define ARM_ISO_I2C0_SDA_DEL_sel_mask                                                (0x0000001F)
#define ARM_ISO_I2C0_SDA_DEL_sel(data)                                               (0x0000001F&((data)<<0))
#define ARM_ISO_I2C0_SDA_DEL_sel_src(data)                                           ((0x0000001F&(data))>>0)
#define ARM_ISO_I2C0_SDA_DEL_get_sel(data)                                           ((0x0000001F&(data))>>0)


#define ARM_ISO_CELL                                                                 0xFF019030
#define ARM_ISO_CELL_reg_addr                                                        "0xFF019030"
#define ARM_ISO_CELL_reg                                                             0xFF019030
#define set_ARM_ISO_CELL_reg(data)   (*((volatile unsigned int*) ARM_ISO_CELL_reg)=data)
#define get_ARM_ISO_CELL_reg   (*((volatile unsigned int*) ARM_ISO_CELL_reg))
#define ARM_ISO_CELL_inst_adr                                                        "0x000C"
#define ARM_ISO_CELL_inst                                                            0x000C
#define ARM_ISO_CELL_iso_ctrl_en_1_shift                                             (1)
#define ARM_ISO_CELL_iso_ctrl_en_1_mask                                              (0x00000002)
#define ARM_ISO_CELL_iso_ctrl_en_1(data)                                             (0x00000002&((data)<<1))
#define ARM_ISO_CELL_iso_ctrl_en_1_src(data)                                         ((0x00000002&(data))>>1)
#define ARM_ISO_CELL_get_iso_ctrl_en_1(data)                                         ((0x00000002&(data))>>1)
#define ARM_ISO_CELL_iso_ctrl_en_shift                                               (0)
#define ARM_ISO_CELL_iso_ctrl_en_mask                                                (0x00000001)
#define ARM_ISO_CELL_iso_ctrl_en(data)                                               (0x00000001&((data)<<0))
#define ARM_ISO_CELL_iso_ctrl_en_src(data)                                           ((0x00000001&(data))>>0)
#define ARM_ISO_CELL_get_iso_ctrl_en(data)                                           ((0x00000001&(data))>>0)


#define ARM_ISO_POWER                                                                0xFF019034
#define ARM_ISO_POWER_reg_addr                                                       "0xFF019034"
#define ARM_ISO_POWER_reg                                                            0xFF019034
#define set_ARM_ISO_POWER_reg(data)   (*((volatile unsigned int*) ARM_ISO_POWER_reg)=data)
#define get_ARM_ISO_POWER_reg   (*((volatile unsigned int*) ARM_ISO_POWER_reg))
#define ARM_ISO_POWER_inst_adr                                                       "0x000D"
#define ARM_ISO_POWER_inst                                                           0x000D
#define ARM_ISO_POWER_top_vdd_on_shift                                               (0)
#define ARM_ISO_POWER_top_vdd_on_mask                                                (0x00000007)
#define ARM_ISO_POWER_top_vdd_on(data)                                               (0x00000007&((data)<<0))
#define ARM_ISO_POWER_top_vdd_on_src(data)                                           ((0x00000007&(data))>>0)
#define ARM_ISO_POWER_get_top_vdd_on(data)                                           ((0x00000007&(data))>>0)


#define ARM_ISO_DUMMY0_0                                                             0xFF019040
#define ARM_ISO_DUMMY0_1                                                             0xFF019044
#define ARM_ISO_DUMMY0_0_reg_addr                                                    "0xFF019040"
#define ARM_ISO_DUMMY0_1_reg_addr                                                    "0xFF019044"
#define ARM_ISO_DUMMY0_0_reg                                                         0xFF019040
#define ARM_ISO_DUMMY0_1_reg                                                         0xFF019044
#define set_ARM_ISO_DUMMY0_0_reg(data)   (*((volatile unsigned int*) ARM_ISO_DUMMY0_0_reg)=data)
#define set_ARM_ISO_DUMMY0_1_reg(data)   (*((volatile unsigned int*) ARM_ISO_DUMMY0_1_reg)=data)
#define get_ARM_ISO_DUMMY0_0_reg   (*((volatile unsigned int*) ARM_ISO_DUMMY0_0_reg))
#define get_ARM_ISO_DUMMY0_1_reg   (*((volatile unsigned int*) ARM_ISO_DUMMY0_1_reg))
#define ARM_ISO_DUMMY0_0_inst_adr                                                    "0x0010"
#define ARM_ISO_DUMMY0_1_inst_adr                                                    "0x0011"
#define ARM_ISO_DUMMY0_0_inst                                                        0x0010
#define ARM_ISO_DUMMY0_1_inst                                                        0x0011
#define ARM_ISO_DUMMY0_data_0_shift                                                  (0)
#define ARM_ISO_DUMMY0_data_0_mask                                                   (0xFFFFFFFF)
#define ARM_ISO_DUMMY0_data_0(data)                                                  (0xFFFFFFFF&((data)<<0))
#define ARM_ISO_DUMMY0_data_0_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define ARM_ISO_DUMMY0_get_data_0(data)                                              ((0xFFFFFFFF&(data))>>0)


#define ARM_ISO_DUMMY1_0                                                             0xFF019048
#define ARM_ISO_DUMMY1_1                                                             0xFF01904C
#define ARM_ISO_DUMMY1_0_reg_addr                                                    "0xFF019048"
#define ARM_ISO_DUMMY1_1_reg_addr                                                    "0xFF01904C"
#define ARM_ISO_DUMMY1_0_reg                                                         0xFF019048
#define ARM_ISO_DUMMY1_1_reg                                                         0xFF01904C
#define set_ARM_ISO_DUMMY1_0_reg(data)   (*((volatile unsigned int*) ARM_ISO_DUMMY1_0_reg)=data)
#define set_ARM_ISO_DUMMY1_1_reg(data)   (*((volatile unsigned int*) ARM_ISO_DUMMY1_1_reg)=data)
#define get_ARM_ISO_DUMMY1_0_reg   (*((volatile unsigned int*) ARM_ISO_DUMMY1_0_reg))
#define get_ARM_ISO_DUMMY1_1_reg   (*((volatile unsigned int*) ARM_ISO_DUMMY1_1_reg))
#define ARM_ISO_DUMMY1_0_inst_adr                                                    "0x0012"
#define ARM_ISO_DUMMY1_1_inst_adr                                                    "0x0013"
#define ARM_ISO_DUMMY1_0_inst                                                        0x0012
#define ARM_ISO_DUMMY1_1_inst                                                        0x0013
#define ARM_ISO_DUMMY1_data_1_shift                                                  (0)
#define ARM_ISO_DUMMY1_data_1_mask                                                   (0xFFFFFFFF)
#define ARM_ISO_DUMMY1_data_1(data)                                                  (0xFFFFFFFF&((data)<<0))
#define ARM_ISO_DUMMY1_data_1_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define ARM_ISO_DUMMY1_get_data_1(data)                                              ((0xFFFFFFFF&(data))>>0)


#define ARM_ISO_GPDIR                                                                0xFF019100
#define ARM_ISO_GPDIR_reg_addr                                                       "0xFF019100"
#define ARM_ISO_GPDIR_reg                                                            0xFF019100
#define set_ARM_ISO_GPDIR_reg(data)   (*((volatile unsigned int*) ARM_ISO_GPDIR_reg)=data)
#define get_ARM_ISO_GPDIR_reg   (*((volatile unsigned int*) ARM_ISO_GPDIR_reg))
#define ARM_ISO_GPDIR_inst_adr                                                       "0x0040"
#define ARM_ISO_GPDIR_inst                                                           0x0040
#define ARM_ISO_GPDIR_GPDIR_shift                                                    (0)
#define ARM_ISO_GPDIR_GPDIR_mask                                                     (0x0000007F)
#define ARM_ISO_GPDIR_GPDIR(data)                                                    (0x0000007F&((data)<<0))
#define ARM_ISO_GPDIR_GPDIR_src(data)                                                ((0x0000007F&(data))>>0)
#define ARM_ISO_GPDIR_get_GPDIR(data)                                                ((0x0000007F&(data))>>0)


#define ARM_ISO_GPDATO                                                               0xFF019104
#define ARM_ISO_GPDATO_reg_addr                                                      "0xFF019104"
#define ARM_ISO_GPDATO_reg                                                           0xFF019104
#define set_ARM_ISO_GPDATO_reg(data)   (*((volatile unsigned int*) ARM_ISO_GPDATO_reg)=data)
#define get_ARM_ISO_GPDATO_reg   (*((volatile unsigned int*) ARM_ISO_GPDATO_reg))
#define ARM_ISO_GPDATO_inst_adr                                                      "0x0041"
#define ARM_ISO_GPDATO_inst                                                          0x0041
#define ARM_ISO_GPDATO_GPDATO_shift                                                  (0)
#define ARM_ISO_GPDATO_GPDATO_mask                                                   (0x0000007F)
#define ARM_ISO_GPDATO_GPDATO(data)                                                  (0x0000007F&((data)<<0))
#define ARM_ISO_GPDATO_GPDATO_src(data)                                              ((0x0000007F&(data))>>0)
#define ARM_ISO_GPDATO_get_GPDATO(data)                                              ((0x0000007F&(data))>>0)


#define ARM_ISO_GPDATI                                                               0xFF019108
#define ARM_ISO_GPDATI_reg_addr                                                      "0xFF019108"
#define ARM_ISO_GPDATI_reg                                                           0xFF019108
#define set_ARM_ISO_GPDATI_reg(data)   (*((volatile unsigned int*) ARM_ISO_GPDATI_reg)=data)
#define get_ARM_ISO_GPDATI_reg   (*((volatile unsigned int*) ARM_ISO_GPDATI_reg))
#define ARM_ISO_GPDATI_inst_adr                                                      "0x0042"
#define ARM_ISO_GPDATI_inst                                                          0x0042
#define ARM_ISO_GPDATI_GPDATI_shift                                                  (0)
#define ARM_ISO_GPDATI_GPDATI_mask                                                   (0x0000007F)
#define ARM_ISO_GPDATI_GPDATI(data)                                                  (0x0000007F&((data)<<0))
#define ARM_ISO_GPDATI_GPDATI_src(data)                                              ((0x0000007F&(data))>>0)
#define ARM_ISO_GPDATI_get_GPDATI(data)                                              ((0x0000007F&(data))>>0)


#define ARM_ISO_GPIE                                                                 0xFF01910C
#define ARM_ISO_GPIE_reg_addr                                                        "0xFF01910C"
#define ARM_ISO_GPIE_reg                                                             0xFF01910C
#define set_ARM_ISO_GPIE_reg(data)   (*((volatile unsigned int*) ARM_ISO_GPIE_reg)=data)
#define get_ARM_ISO_GPIE_reg   (*((volatile unsigned int*) ARM_ISO_GPIE_reg))
#define ARM_ISO_GPIE_inst_adr                                                        "0x0043"
#define ARM_ISO_GPIE_inst                                                            0x0043
#define ARM_ISO_GPIE_GP_shift                                                        (0)
#define ARM_ISO_GPIE_GP_mask                                                         (0x0000007F)
#define ARM_ISO_GPIE_GP(data)                                                        (0x0000007F&((data)<<0))
#define ARM_ISO_GPIE_GP_src(data)                                                    ((0x0000007F&(data))>>0)
#define ARM_ISO_GPIE_get_GP(data)                                                    ((0x0000007F&(data))>>0)


#define ARM_ISO_GPDP                                                                 0xFF019110
#define ARM_ISO_GPDP_reg_addr                                                        "0xFF019110"
#define ARM_ISO_GPDP_reg                                                             0xFF019110
#define set_ARM_ISO_GPDP_reg(data)   (*((volatile unsigned int*) ARM_ISO_GPDP_reg)=data)
#define get_ARM_ISO_GPDP_reg   (*((volatile unsigned int*) ARM_ISO_GPDP_reg))
#define ARM_ISO_GPDP_inst_adr                                                        "0x0044"
#define ARM_ISO_GPDP_inst                                                            0x0044
#define ARM_ISO_GPDP_GPHA_shift                                                      (0)
#define ARM_ISO_GPDP_GPHA_mask                                                       (0x0000007F)
#define ARM_ISO_GPDP_GPHA(data)                                                      (0x0000007F&((data)<<0))
#define ARM_ISO_GPDP_GPHA_src(data)                                                  ((0x0000007F&(data))>>0)
#define ARM_ISO_GPDP_get_GPHA(data)                                                  ((0x0000007F&(data))>>0)


#define ARM_ISO_GPDEB                                                                0xFF019114
#define ARM_ISO_GPDEB_reg_addr                                                       "0xFF019114"
#define ARM_ISO_GPDEB_reg                                                            0xFF019114
#define set_ARM_ISO_GPDEB_reg(data)   (*((volatile unsigned int*) ARM_ISO_GPDEB_reg)=data)
#define get_ARM_ISO_GPDEB_reg   (*((volatile unsigned int*) ARM_ISO_GPDEB_reg))
#define ARM_ISO_GPDEB_inst_adr                                                       "0x0045"
#define ARM_ISO_GPDEB_inst                                                           0x0045
#define ARM_ISO_GPDEB_write_en1_shift                                                (3)
#define ARM_ISO_GPDEB_write_en1_mask                                                 (0x00000008)
#define ARM_ISO_GPDEB_write_en1(data)                                                (0x00000008&((data)<<3))
#define ARM_ISO_GPDEB_write_en1_src(data)                                            ((0x00000008&(data))>>3)
#define ARM_ISO_GPDEB_get_write_en1(data)                                            ((0x00000008&(data))>>3)
#define ARM_ISO_GPDEB_CLK1_shift                                                     (0)
#define ARM_ISO_GPDEB_CLK1_mask                                                      (0x00000007)
#define ARM_ISO_GPDEB_CLK1(data)                                                     (0x00000007&((data)<<0))
#define ARM_ISO_GPDEB_CLK1_src(data)                                                 ((0x00000007&(data))>>0)
#define ARM_ISO_GPDEB_get_CLK1(data)                                                 ((0x00000007&(data))>>0)


#define ARM_ISO_IC0_CON                                                              0xFF019200
#define ARM_ISO_IC0_CON_reg_addr                                                     "0xFF019200"
#define ARM_ISO_IC0_CON_reg                                                          0xFF019200
#define set_ARM_ISO_IC0_CON_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CON_reg)=data)
#define get_ARM_ISO_IC0_CON_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CON_reg))
#define ARM_ISO_IC0_CON_inst_adr                                                     "0x0080"
#define ARM_ISO_IC0_CON_inst                                                         0x0080
#define ARM_ISO_IC0_CON_IC_SLAVE_DISABLE_shift                                       (6)
#define ARM_ISO_IC0_CON_IC_SLAVE_DISABLE_mask                                        (0x00000040)
#define ARM_ISO_IC0_CON_IC_SLAVE_DISABLE(data)                                       (0x00000040&((data)<<6))
#define ARM_ISO_IC0_CON_IC_SLAVE_DISABLE_src(data)                                   ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_CON_get_IC_SLAVE_DISABLE(data)                                   ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_CON_IC_RESTART_EN_shift                                          (5)
#define ARM_ISO_IC0_CON_IC_RESTART_EN_mask                                           (0x00000020)
#define ARM_ISO_IC0_CON_IC_RESTART_EN(data)                                          (0x00000020&((data)<<5))
#define ARM_ISO_IC0_CON_IC_RESTART_EN_src(data)                                      ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_CON_get_IC_RESTART_EN(data)                                      ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_CON_IC_10BITADDR_MASTER_shift                                    (4)
#define ARM_ISO_IC0_CON_IC_10BITADDR_MASTER_mask                                     (0x00000010)
#define ARM_ISO_IC0_CON_IC_10BITADDR_MASTER(data)                                    (0x00000010&((data)<<4))
#define ARM_ISO_IC0_CON_IC_10BITADDR_MASTER_src(data)                                ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_CON_get_IC_10BITADDR_MASTER(data)                                ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_CON_IC_10BITADDR_SLAVE_shift                                     (3)
#define ARM_ISO_IC0_CON_IC_10BITADDR_SLAVE_mask                                      (0x00000008)
#define ARM_ISO_IC0_CON_IC_10BITADDR_SLAVE(data)                                     (0x00000008&((data)<<3))
#define ARM_ISO_IC0_CON_IC_10BITADDR_SLAVE_src(data)                                 ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_CON_get_IC_10BITADDR_SLAVE(data)                                 ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_CON_SPEED_shift                                                  (1)
#define ARM_ISO_IC0_CON_SPEED_mask                                                   (0x00000006)
#define ARM_ISO_IC0_CON_SPEED(data)                                                  (0x00000006&((data)<<1))
#define ARM_ISO_IC0_CON_SPEED_src(data)                                              ((0x00000006&(data))>>1)
#define ARM_ISO_IC0_CON_get_SPEED(data)                                              ((0x00000006&(data))>>1)
#define ARM_ISO_IC0_CON_MASTER_MODE_shift                                            (0)
#define ARM_ISO_IC0_CON_MASTER_MODE_mask                                             (0x00000001)
#define ARM_ISO_IC0_CON_MASTER_MODE(data)                                            (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CON_MASTER_MODE_src(data)                                        ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CON_get_MASTER_MODE(data)                                        ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_TAR                                                              0xFF019204
#define ARM_ISO_IC0_TAR_reg_addr                                                     "0xFF019204"
#define ARM_ISO_IC0_TAR_reg                                                          0xFF019204
#define set_ARM_ISO_IC0_TAR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_TAR_reg)=data)
#define get_ARM_ISO_IC0_TAR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_TAR_reg))
#define ARM_ISO_IC0_TAR_inst_adr                                                     "0x0081"
#define ARM_ISO_IC0_TAR_inst                                                         0x0081
#define ARM_ISO_IC0_TAR_IC_10BITADDR_MASTER_shift                                    (12)
#define ARM_ISO_IC0_TAR_IC_10BITADDR_MASTER_mask                                     (0x00001000)
#define ARM_ISO_IC0_TAR_IC_10BITADDR_MASTER(data)                                    (0x00001000&((data)<<12))
#define ARM_ISO_IC0_TAR_IC_10BITADDR_MASTER_src(data)                                ((0x00001000&(data))>>12)
#define ARM_ISO_IC0_TAR_get_IC_10BITADDR_MASTER(data)                                ((0x00001000&(data))>>12)
#define ARM_ISO_IC0_TAR_SPECIAL_shift                                                (11)
#define ARM_ISO_IC0_TAR_SPECIAL_mask                                                 (0x00000800)
#define ARM_ISO_IC0_TAR_SPECIAL(data)                                                (0x00000800&((data)<<11))
#define ARM_ISO_IC0_TAR_SPECIAL_src(data)                                            ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_TAR_get_SPECIAL(data)                                            ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_TAR_GC_OR_START_shift                                            (10)
#define ARM_ISO_IC0_TAR_GC_OR_START_mask                                             (0x00000400)
#define ARM_ISO_IC0_TAR_GC_OR_START(data)                                            (0x00000400&((data)<<10))
#define ARM_ISO_IC0_TAR_GC_OR_START_src(data)                                        ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_TAR_get_GC_OR_START(data)                                        ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_TAR_IC_TAR_shift                                                 (0)
#define ARM_ISO_IC0_TAR_IC_TAR_mask                                                  (0x000003FF)
#define ARM_ISO_IC0_TAR_IC_TAR(data)                                                 (0x000003FF&((data)<<0))
#define ARM_ISO_IC0_TAR_IC_TAR_src(data)                                             ((0x000003FF&(data))>>0)
#define ARM_ISO_IC0_TAR_get_IC_TAR(data)                                             ((0x000003FF&(data))>>0)


#define ARM_ISO_IC0_SAR                                                              0xFF019208
#define ARM_ISO_IC0_SAR_reg_addr                                                     "0xFF019208"
#define ARM_ISO_IC0_SAR_reg                                                          0xFF019208
#define set_ARM_ISO_IC0_SAR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_SAR_reg)=data)
#define get_ARM_ISO_IC0_SAR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_SAR_reg))
#define ARM_ISO_IC0_SAR_inst_adr                                                     "0x0082"
#define ARM_ISO_IC0_SAR_inst                                                         0x0082
#define ARM_ISO_IC0_SAR_IC_SAR_shift                                                 (0)
#define ARM_ISO_IC0_SAR_IC_SAR_mask                                                  (0x000003FF)
#define ARM_ISO_IC0_SAR_IC_SAR(data)                                                 (0x000003FF&((data)<<0))
#define ARM_ISO_IC0_SAR_IC_SAR_src(data)                                             ((0x000003FF&(data))>>0)
#define ARM_ISO_IC0_SAR_get_IC_SAR(data)                                             ((0x000003FF&(data))>>0)


#define ARM_ISO_IC0_HS_MADDR                                                         0xFF01920C
#define ARM_ISO_IC0_HS_MADDR_reg_addr                                                "0xFF01920C"
#define ARM_ISO_IC0_HS_MADDR_reg                                                     0xFF01920C
#define set_ARM_ISO_IC0_HS_MADDR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_HS_MADDR_reg)=data)
#define get_ARM_ISO_IC0_HS_MADDR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_HS_MADDR_reg))
#define ARM_ISO_IC0_HS_MADDR_inst_adr                                                "0x0083"
#define ARM_ISO_IC0_HS_MADDR_inst                                                    0x0083
#define ARM_ISO_IC0_HS_MADDR_IC_HS_MAR_shift                                         (0)
#define ARM_ISO_IC0_HS_MADDR_IC_HS_MAR_mask                                          (0x00000007)
#define ARM_ISO_IC0_HS_MADDR_IC_HS_MAR(data)                                         (0x00000007&((data)<<0))
#define ARM_ISO_IC0_HS_MADDR_IC_HS_MAR_src(data)                                     ((0x00000007&(data))>>0)
#define ARM_ISO_IC0_HS_MADDR_get_IC_HS_MAR(data)                                     ((0x00000007&(data))>>0)


#define ARM_ISO_IC0_DATA_CMD                                                         0xFF019210
#define ARM_ISO_IC0_DATA_CMD_reg_addr                                                "0xFF019210"
#define ARM_ISO_IC0_DATA_CMD_reg                                                     0xFF019210
#define set_ARM_ISO_IC0_DATA_CMD_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_DATA_CMD_reg)=data)
#define get_ARM_ISO_IC0_DATA_CMD_reg   (*((volatile unsigned int*) ARM_ISO_IC0_DATA_CMD_reg))
#define ARM_ISO_IC0_DATA_CMD_inst_adr                                                "0x0084"
#define ARM_ISO_IC0_DATA_CMD_inst                                                    0x0084
#define ARM_ISO_IC0_DATA_CMD_RESTART_shift                                           (10)
#define ARM_ISO_IC0_DATA_CMD_RESTART_mask                                            (0x00000400)
#define ARM_ISO_IC0_DATA_CMD_RESTART(data)                                           (0x00000400&((data)<<10))
#define ARM_ISO_IC0_DATA_CMD_RESTART_src(data)                                       ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_DATA_CMD_get_RESTART(data)                                       ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_DATA_CMD_STOP_shift                                              (9)
#define ARM_ISO_IC0_DATA_CMD_STOP_mask                                               (0x00000200)
#define ARM_ISO_IC0_DATA_CMD_STOP(data)                                              (0x00000200&((data)<<9))
#define ARM_ISO_IC0_DATA_CMD_STOP_src(data)                                          ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_DATA_CMD_get_STOP(data)                                          ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_DATA_CMD_CMD_shift                                               (8)
#define ARM_ISO_IC0_DATA_CMD_CMD_mask                                                (0x00000100)
#define ARM_ISO_IC0_DATA_CMD_CMD(data)                                               (0x00000100&((data)<<8))
#define ARM_ISO_IC0_DATA_CMD_CMD_src(data)                                           ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_DATA_CMD_get_CMD(data)                                           ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_DATA_CMD_DAT_shift                                               (0)
#define ARM_ISO_IC0_DATA_CMD_DAT_mask                                                (0x000000FF)
#define ARM_ISO_IC0_DATA_CMD_DAT(data)                                               (0x000000FF&((data)<<0))
#define ARM_ISO_IC0_DATA_CMD_DAT_src(data)                                           ((0x000000FF&(data))>>0)
#define ARM_ISO_IC0_DATA_CMD_get_DAT(data)                                           ((0x000000FF&(data))>>0)


#define ARM_ISO_IC0_SS_SCL_HCNT                                                      0xFF019214
#define ARM_ISO_IC0_SS_SCL_HCNT_reg_addr                                             "0xFF019214"
#define ARM_ISO_IC0_SS_SCL_HCNT_reg                                                  0xFF019214
#define set_ARM_ISO_IC0_SS_SCL_HCNT_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_SS_SCL_HCNT_reg)=data)
#define get_ARM_ISO_IC0_SS_SCL_HCNT_reg   (*((volatile unsigned int*) ARM_ISO_IC0_SS_SCL_HCNT_reg))
#define ARM_ISO_IC0_SS_SCL_HCNT_inst_adr                                             "0x0085"
#define ARM_ISO_IC0_SS_SCL_HCNT_inst                                                 0x0085
#define ARM_ISO_IC0_SS_SCL_HCNT_IC_SS_SCL_HCNT_shift                                 (0)
#define ARM_ISO_IC0_SS_SCL_HCNT_IC_SS_SCL_HCNT_mask                                  (0x0000FFFF)
#define ARM_ISO_IC0_SS_SCL_HCNT_IC_SS_SCL_HCNT(data)                                 (0x0000FFFF&((data)<<0))
#define ARM_ISO_IC0_SS_SCL_HCNT_IC_SS_SCL_HCNT_src(data)                             ((0x0000FFFF&(data))>>0)
#define ARM_ISO_IC0_SS_SCL_HCNT_get_IC_SS_SCL_HCNT(data)                             ((0x0000FFFF&(data))>>0)


#define ARM_ISO_IC0_SS_SCL_LCNT                                                      0xFF019218
#define ARM_ISO_IC0_SS_SCL_LCNT_reg_addr                                             "0xFF019218"
#define ARM_ISO_IC0_SS_SCL_LCNT_reg                                                  0xFF019218
#define set_ARM_ISO_IC0_SS_SCL_LCNT_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_SS_SCL_LCNT_reg)=data)
#define get_ARM_ISO_IC0_SS_SCL_LCNT_reg   (*((volatile unsigned int*) ARM_ISO_IC0_SS_SCL_LCNT_reg))
#define ARM_ISO_IC0_SS_SCL_LCNT_inst_adr                                             "0x0086"
#define ARM_ISO_IC0_SS_SCL_LCNT_inst                                                 0x0086
#define ARM_ISO_IC0_SS_SCL_LCNT_IC_SS_SCL_LCNT_shift                                 (0)
#define ARM_ISO_IC0_SS_SCL_LCNT_IC_SS_SCL_LCNT_mask                                  (0x0000FFFF)
#define ARM_ISO_IC0_SS_SCL_LCNT_IC_SS_SCL_LCNT(data)                                 (0x0000FFFF&((data)<<0))
#define ARM_ISO_IC0_SS_SCL_LCNT_IC_SS_SCL_LCNT_src(data)                             ((0x0000FFFF&(data))>>0)
#define ARM_ISO_IC0_SS_SCL_LCNT_get_IC_SS_SCL_LCNT(data)                             ((0x0000FFFF&(data))>>0)


#define ARM_ISO_IC0_FS_SCL_HCNT                                                      0xFF01921C
#define ARM_ISO_IC0_FS_SCL_HCNT_reg_addr                                             "0xFF01921C"
#define ARM_ISO_IC0_FS_SCL_HCNT_reg                                                  0xFF01921C
#define set_ARM_ISO_IC0_FS_SCL_HCNT_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_FS_SCL_HCNT_reg)=data)
#define get_ARM_ISO_IC0_FS_SCL_HCNT_reg   (*((volatile unsigned int*) ARM_ISO_IC0_FS_SCL_HCNT_reg))
#define ARM_ISO_IC0_FS_SCL_HCNT_inst_adr                                             "0x0087"
#define ARM_ISO_IC0_FS_SCL_HCNT_inst                                                 0x0087
#define ARM_ISO_IC0_FS_SCL_HCNT_IC_FS_SCL_HCNT_shift                                 (0)
#define ARM_ISO_IC0_FS_SCL_HCNT_IC_FS_SCL_HCNT_mask                                  (0x0000FFFF)
#define ARM_ISO_IC0_FS_SCL_HCNT_IC_FS_SCL_HCNT(data)                                 (0x0000FFFF&((data)<<0))
#define ARM_ISO_IC0_FS_SCL_HCNT_IC_FS_SCL_HCNT_src(data)                             ((0x0000FFFF&(data))>>0)
#define ARM_ISO_IC0_FS_SCL_HCNT_get_IC_FS_SCL_HCNT(data)                             ((0x0000FFFF&(data))>>0)


#define ARM_ISO_IC0_FS_SCL_LCNT                                                      0xFF019220
#define ARM_ISO_IC0_FS_SCL_LCNT_reg_addr                                             "0xFF019220"
#define ARM_ISO_IC0_FS_SCL_LCNT_reg                                                  0xFF019220
#define set_ARM_ISO_IC0_FS_SCL_LCNT_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_FS_SCL_LCNT_reg)=data)
#define get_ARM_ISO_IC0_FS_SCL_LCNT_reg   (*((volatile unsigned int*) ARM_ISO_IC0_FS_SCL_LCNT_reg))
#define ARM_ISO_IC0_FS_SCL_LCNT_inst_adr                                             "0x0088"
#define ARM_ISO_IC0_FS_SCL_LCNT_inst                                                 0x0088
#define ARM_ISO_IC0_FS_SCL_LCNT_IC_FS_SCL_LCNT_shift                                 (0)
#define ARM_ISO_IC0_FS_SCL_LCNT_IC_FS_SCL_LCNT_mask                                  (0x0000FFFF)
#define ARM_ISO_IC0_FS_SCL_LCNT_IC_FS_SCL_LCNT(data)                                 (0x0000FFFF&((data)<<0))
#define ARM_ISO_IC0_FS_SCL_LCNT_IC_FS_SCL_LCNT_src(data)                             ((0x0000FFFF&(data))>>0)
#define ARM_ISO_IC0_FS_SCL_LCNT_get_IC_FS_SCL_LCNT(data)                             ((0x0000FFFF&(data))>>0)


#define ARM_ISO_IC0_INTR_STAT                                                        0xFF01922C
#define ARM_ISO_IC0_INTR_STAT_reg_addr                                               "0xFF01922C"
#define ARM_ISO_IC0_INTR_STAT_reg                                                    0xFF01922C
#define set_ARM_ISO_IC0_INTR_STAT_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_INTR_STAT_reg)=data)
#define get_ARM_ISO_IC0_INTR_STAT_reg   (*((volatile unsigned int*) ARM_ISO_IC0_INTR_STAT_reg))
#define ARM_ISO_IC0_INTR_STAT_inst_adr                                               "0x008B"
#define ARM_ISO_IC0_INTR_STAT_inst                                                   0x008B
#define ARM_ISO_IC0_INTR_STAT_R_GEN_CALL_shift                                       (11)
#define ARM_ISO_IC0_INTR_STAT_R_GEN_CALL_mask                                        (0x00000800)
#define ARM_ISO_IC0_INTR_STAT_R_GEN_CALL(data)                                       (0x00000800&((data)<<11))
#define ARM_ISO_IC0_INTR_STAT_R_GEN_CALL_src(data)                                   ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_INTR_STAT_get_R_GEN_CALL(data)                                   ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_INTR_STAT_R_START_DET_shift                                      (10)
#define ARM_ISO_IC0_INTR_STAT_R_START_DET_mask                                       (0x00000400)
#define ARM_ISO_IC0_INTR_STAT_R_START_DET(data)                                      (0x00000400&((data)<<10))
#define ARM_ISO_IC0_INTR_STAT_R_START_DET_src(data)                                  ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_INTR_STAT_get_R_START_DET(data)                                  ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_INTR_STAT_R_STOP_DET_shift                                       (9)
#define ARM_ISO_IC0_INTR_STAT_R_STOP_DET_mask                                        (0x00000200)
#define ARM_ISO_IC0_INTR_STAT_R_STOP_DET(data)                                       (0x00000200&((data)<<9))
#define ARM_ISO_IC0_INTR_STAT_R_STOP_DET_src(data)                                   ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_INTR_STAT_get_R_STOP_DET(data)                                   ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_INTR_STAT_R_ACTIVITY_shift                                       (8)
#define ARM_ISO_IC0_INTR_STAT_R_ACTIVITY_mask                                        (0x00000100)
#define ARM_ISO_IC0_INTR_STAT_R_ACTIVITY(data)                                       (0x00000100&((data)<<8))
#define ARM_ISO_IC0_INTR_STAT_R_ACTIVITY_src(data)                                   ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_INTR_STAT_get_R_ACTIVITY(data)                                   ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_INTR_STAT_R_RX_DONE_shift                                        (7)
#define ARM_ISO_IC0_INTR_STAT_R_RX_DONE_mask                                         (0x00000080)
#define ARM_ISO_IC0_INTR_STAT_R_RX_DONE(data)                                        (0x00000080&((data)<<7))
#define ARM_ISO_IC0_INTR_STAT_R_RX_DONE_src(data)                                    ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_INTR_STAT_get_R_RX_DONE(data)                                    ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_INTR_STAT_R_TX_ABRT_shift                                        (6)
#define ARM_ISO_IC0_INTR_STAT_R_TX_ABRT_mask                                         (0x00000040)
#define ARM_ISO_IC0_INTR_STAT_R_TX_ABRT(data)                                        (0x00000040&((data)<<6))
#define ARM_ISO_IC0_INTR_STAT_R_TX_ABRT_src(data)                                    ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_INTR_STAT_get_R_TX_ABRT(data)                                    ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_INTR_STAT_R_RD_REQ_shift                                         (5)
#define ARM_ISO_IC0_INTR_STAT_R_RD_REQ_mask                                          (0x00000020)
#define ARM_ISO_IC0_INTR_STAT_R_RD_REQ(data)                                         (0x00000020&((data)<<5))
#define ARM_ISO_IC0_INTR_STAT_R_RD_REQ_src(data)                                     ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_INTR_STAT_get_R_RD_REQ(data)                                     ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_INTR_STAT_R_TX_EMPTY_shift                                       (4)
#define ARM_ISO_IC0_INTR_STAT_R_TX_EMPTY_mask                                        (0x00000010)
#define ARM_ISO_IC0_INTR_STAT_R_TX_EMPTY(data)                                       (0x00000010&((data)<<4))
#define ARM_ISO_IC0_INTR_STAT_R_TX_EMPTY_src(data)                                   ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_INTR_STAT_get_R_TX_EMPTY(data)                                   ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_INTR_STAT_R_TX_OVER_shift                                        (3)
#define ARM_ISO_IC0_INTR_STAT_R_TX_OVER_mask                                         (0x00000008)
#define ARM_ISO_IC0_INTR_STAT_R_TX_OVER(data)                                        (0x00000008&((data)<<3))
#define ARM_ISO_IC0_INTR_STAT_R_TX_OVER_src(data)                                    ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_INTR_STAT_get_R_TX_OVER(data)                                    ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_INTR_STAT_R_RX_FULL_shift                                        (2)
#define ARM_ISO_IC0_INTR_STAT_R_RX_FULL_mask                                         (0x00000004)
#define ARM_ISO_IC0_INTR_STAT_R_RX_FULL(data)                                        (0x00000004&((data)<<2))
#define ARM_ISO_IC0_INTR_STAT_R_RX_FULL_src(data)                                    ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_INTR_STAT_get_R_RX_FULL(data)                                    ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_INTR_STAT_R_RX_OVER_shift                                        (1)
#define ARM_ISO_IC0_INTR_STAT_R_RX_OVER_mask                                         (0x00000002)
#define ARM_ISO_IC0_INTR_STAT_R_RX_OVER(data)                                        (0x00000002&((data)<<1))
#define ARM_ISO_IC0_INTR_STAT_R_RX_OVER_src(data)                                    ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_INTR_STAT_get_R_RX_OVER(data)                                    ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_INTR_STAT_R_RX_UNDER_shift                                       (0)
#define ARM_ISO_IC0_INTR_STAT_R_RX_UNDER_mask                                        (0x00000001)
#define ARM_ISO_IC0_INTR_STAT_R_RX_UNDER(data)                                       (0x00000001&((data)<<0))
#define ARM_ISO_IC0_INTR_STAT_R_RX_UNDER_src(data)                                   ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_INTR_STAT_get_R_RX_UNDER(data)                                   ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_INTR_MASK                                                        0xFF019230
#define ARM_ISO_IC0_INTR_MASK_reg_addr                                               "0xFF019230"
#define ARM_ISO_IC0_INTR_MASK_reg                                                    0xFF019230
#define set_ARM_ISO_IC0_INTR_MASK_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_INTR_MASK_reg)=data)
#define get_ARM_ISO_IC0_INTR_MASK_reg   (*((volatile unsigned int*) ARM_ISO_IC0_INTR_MASK_reg))
#define ARM_ISO_IC0_INTR_MASK_inst_adr                                               "0x008C"
#define ARM_ISO_IC0_INTR_MASK_inst                                                   0x008C
#define ARM_ISO_IC0_INTR_MASK_M_GEN_CALL_shift                                       (11)
#define ARM_ISO_IC0_INTR_MASK_M_GEN_CALL_mask                                        (0x00000800)
#define ARM_ISO_IC0_INTR_MASK_M_GEN_CALL(data)                                       (0x00000800&((data)<<11))
#define ARM_ISO_IC0_INTR_MASK_M_GEN_CALL_src(data)                                   ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_INTR_MASK_get_M_GEN_CALL(data)                                   ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_INTR_MASK_M_START_DET_shift                                      (10)
#define ARM_ISO_IC0_INTR_MASK_M_START_DET_mask                                       (0x00000400)
#define ARM_ISO_IC0_INTR_MASK_M_START_DET(data)                                      (0x00000400&((data)<<10))
#define ARM_ISO_IC0_INTR_MASK_M_START_DET_src(data)                                  ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_INTR_MASK_get_M_START_DET(data)                                  ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_INTR_MASK_M_STOP_DET_shift                                       (9)
#define ARM_ISO_IC0_INTR_MASK_M_STOP_DET_mask                                        (0x00000200)
#define ARM_ISO_IC0_INTR_MASK_M_STOP_DET(data)                                       (0x00000200&((data)<<9))
#define ARM_ISO_IC0_INTR_MASK_M_STOP_DET_src(data)                                   ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_INTR_MASK_get_M_STOP_DET(data)                                   ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_INTR_MASK_M_ACTIVITY_shift                                       (8)
#define ARM_ISO_IC0_INTR_MASK_M_ACTIVITY_mask                                        (0x00000100)
#define ARM_ISO_IC0_INTR_MASK_M_ACTIVITY(data)                                       (0x00000100&((data)<<8))
#define ARM_ISO_IC0_INTR_MASK_M_ACTIVITY_src(data)                                   ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_INTR_MASK_get_M_ACTIVITY(data)                                   ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_INTR_MASK_M_RX_DONE_shift                                        (7)
#define ARM_ISO_IC0_INTR_MASK_M_RX_DONE_mask                                         (0x00000080)
#define ARM_ISO_IC0_INTR_MASK_M_RX_DONE(data)                                        (0x00000080&((data)<<7))
#define ARM_ISO_IC0_INTR_MASK_M_RX_DONE_src(data)                                    ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_INTR_MASK_get_M_RX_DONE(data)                                    ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_INTR_MASK_M_TX_ABRT_shift                                        (6)
#define ARM_ISO_IC0_INTR_MASK_M_TX_ABRT_mask                                         (0x00000040)
#define ARM_ISO_IC0_INTR_MASK_M_TX_ABRT(data)                                        (0x00000040&((data)<<6))
#define ARM_ISO_IC0_INTR_MASK_M_TX_ABRT_src(data)                                    ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_INTR_MASK_get_M_TX_ABRT(data)                                    ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_INTR_MASK_M_RD_REQ_shift                                         (5)
#define ARM_ISO_IC0_INTR_MASK_M_RD_REQ_mask                                          (0x00000020)
#define ARM_ISO_IC0_INTR_MASK_M_RD_REQ(data)                                         (0x00000020&((data)<<5))
#define ARM_ISO_IC0_INTR_MASK_M_RD_REQ_src(data)                                     ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_INTR_MASK_get_M_RD_REQ(data)                                     ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_INTR_MASK_M_TX_EMPTY_shift                                       (4)
#define ARM_ISO_IC0_INTR_MASK_M_TX_EMPTY_mask                                        (0x00000010)
#define ARM_ISO_IC0_INTR_MASK_M_TX_EMPTY(data)                                       (0x00000010&((data)<<4))
#define ARM_ISO_IC0_INTR_MASK_M_TX_EMPTY_src(data)                                   ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_INTR_MASK_get_M_TX_EMPTY(data)                                   ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_INTR_MASK_M_TX_OVER_shift                                        (3)
#define ARM_ISO_IC0_INTR_MASK_M_TX_OVER_mask                                         (0x00000008)
#define ARM_ISO_IC0_INTR_MASK_M_TX_OVER(data)                                        (0x00000008&((data)<<3))
#define ARM_ISO_IC0_INTR_MASK_M_TX_OVER_src(data)                                    ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_INTR_MASK_get_M_TX_OVER(data)                                    ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_INTR_MASK_M_RX_FULL_shift                                        (2)
#define ARM_ISO_IC0_INTR_MASK_M_RX_FULL_mask                                         (0x00000004)
#define ARM_ISO_IC0_INTR_MASK_M_RX_FULL(data)                                        (0x00000004&((data)<<2))
#define ARM_ISO_IC0_INTR_MASK_M_RX_FULL_src(data)                                    ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_INTR_MASK_get_M_RX_FULL(data)                                    ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_INTR_MASK_M_RX_OVER_shift                                        (1)
#define ARM_ISO_IC0_INTR_MASK_M_RX_OVER_mask                                         (0x00000002)
#define ARM_ISO_IC0_INTR_MASK_M_RX_OVER(data)                                        (0x00000002&((data)<<1))
#define ARM_ISO_IC0_INTR_MASK_M_RX_OVER_src(data)                                    ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_INTR_MASK_get_M_RX_OVER(data)                                    ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_INTR_MASK_M_RX_UNDER_shift                                       (0)
#define ARM_ISO_IC0_INTR_MASK_M_RX_UNDER_mask                                        (0x00000001)
#define ARM_ISO_IC0_INTR_MASK_M_RX_UNDER(data)                                       (0x00000001&((data)<<0))
#define ARM_ISO_IC0_INTR_MASK_M_RX_UNDER_src(data)                                   ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_INTR_MASK_get_M_RX_UNDER(data)                                   ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_RAW_INTR_STAT                                                    0xFF019234
#define ARM_ISO_IC0_RAW_INTR_STAT_reg_addr                                           "0xFF019234"
#define ARM_ISO_IC0_RAW_INTR_STAT_reg                                                0xFF019234
#define set_ARM_ISO_IC0_RAW_INTR_STAT_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_RAW_INTR_STAT_reg)=data)
#define get_ARM_ISO_IC0_RAW_INTR_STAT_reg   (*((volatile unsigned int*) ARM_ISO_IC0_RAW_INTR_STAT_reg))
#define ARM_ISO_IC0_RAW_INTR_STAT_inst_adr                                           "0x008D"
#define ARM_ISO_IC0_RAW_INTR_STAT_inst                                               0x008D
#define ARM_ISO_IC0_RAW_INTR_STAT_GEN_CALL_shift                                     (11)
#define ARM_ISO_IC0_RAW_INTR_STAT_GEN_CALL_mask                                      (0x00000800)
#define ARM_ISO_IC0_RAW_INTR_STAT_GEN_CALL(data)                                     (0x00000800&((data)<<11))
#define ARM_ISO_IC0_RAW_INTR_STAT_GEN_CALL_src(data)                                 ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_GEN_CALL(data)                                 ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_RAW_INTR_STAT_START_DET_shift                                    (10)
#define ARM_ISO_IC0_RAW_INTR_STAT_START_DET_mask                                     (0x00000400)
#define ARM_ISO_IC0_RAW_INTR_STAT_START_DET(data)                                    (0x00000400&((data)<<10))
#define ARM_ISO_IC0_RAW_INTR_STAT_START_DET_src(data)                                ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_START_DET(data)                                ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_RAW_INTR_STAT_STOP_DET_shift                                     (9)
#define ARM_ISO_IC0_RAW_INTR_STAT_STOP_DET_mask                                      (0x00000200)
#define ARM_ISO_IC0_RAW_INTR_STAT_STOP_DET(data)                                     (0x00000200&((data)<<9))
#define ARM_ISO_IC0_RAW_INTR_STAT_STOP_DET_src(data)                                 ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_STOP_DET(data)                                 ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_RAW_INTR_STAT_ACTIVITY_shift                                     (8)
#define ARM_ISO_IC0_RAW_INTR_STAT_ACTIVITY_mask                                      (0x00000100)
#define ARM_ISO_IC0_RAW_INTR_STAT_ACTIVITY(data)                                     (0x00000100&((data)<<8))
#define ARM_ISO_IC0_RAW_INTR_STAT_ACTIVITY_src(data)                                 ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_ACTIVITY(data)                                 ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_DONE_shift                                      (7)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_DONE_mask                                       (0x00000080)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_DONE(data)                                      (0x00000080&((data)<<7))
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_DONE_src(data)                                  ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_RX_DONE(data)                                  ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_ABRT_shift                                      (6)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_ABRT_mask                                       (0x00000040)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_ABRT(data)                                      (0x00000040&((data)<<6))
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_ABRT_src(data)                                  ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_TX_ABRT(data)                                  ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_RAW_INTR_STAT_RD_REQ_shift                                       (5)
#define ARM_ISO_IC0_RAW_INTR_STAT_RD_REQ_mask                                        (0x00000020)
#define ARM_ISO_IC0_RAW_INTR_STAT_RD_REQ(data)                                       (0x00000020&((data)<<5))
#define ARM_ISO_IC0_RAW_INTR_STAT_RD_REQ_src(data)                                   ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_RD_REQ(data)                                   ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_EMPTY_shift                                     (4)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_EMPTY_mask                                      (0x00000010)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_EMPTY(data)                                     (0x00000010&((data)<<4))
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_EMPTY_src(data)                                 ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_TX_EMPTY(data)                                 ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_OVER_shift                                      (3)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_OVER_mask                                       (0x00000008)
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_OVER(data)                                      (0x00000008&((data)<<3))
#define ARM_ISO_IC0_RAW_INTR_STAT_TX_OVER_src(data)                                  ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_TX_OVER(data)                                  ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_FULL_shift                                      (2)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_FULL_mask                                       (0x00000004)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_FULL(data)                                      (0x00000004&((data)<<2))
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_FULL_src(data)                                  ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_RX_FULL(data)                                  ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_OVER_shift                                      (1)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_OVER_mask                                       (0x00000002)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_OVER(data)                                      (0x00000002&((data)<<1))
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_OVER_src(data)                                  ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_RX_OVER(data)                                  ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_UNDER_shift                                     (0)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_UNDER_mask                                      (0x00000001)
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_UNDER(data)                                     (0x00000001&((data)<<0))
#define ARM_ISO_IC0_RAW_INTR_STAT_RX_UNDER_src(data)                                 ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_RAW_INTR_STAT_get_RX_UNDER(data)                                 ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_RX_TL                                                            0xFF019238
#define ARM_ISO_IC0_RX_TL_reg_addr                                                   "0xFF019238"
#define ARM_ISO_IC0_RX_TL_reg                                                        0xFF019238
#define set_ARM_ISO_IC0_RX_TL_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_RX_TL_reg)=data)
#define get_ARM_ISO_IC0_RX_TL_reg   (*((volatile unsigned int*) ARM_ISO_IC0_RX_TL_reg))
#define ARM_ISO_IC0_RX_TL_inst_adr                                                   "0x008E"
#define ARM_ISO_IC0_RX_TL_inst                                                       0x008E
#define ARM_ISO_IC0_RX_TL_RX_TL_shift                                                (0)
#define ARM_ISO_IC0_RX_TL_RX_TL_mask                                                 (0x000000FF)
#define ARM_ISO_IC0_RX_TL_RX_TL(data)                                                (0x000000FF&((data)<<0))
#define ARM_ISO_IC0_RX_TL_RX_TL_src(data)                                            ((0x000000FF&(data))>>0)
#define ARM_ISO_IC0_RX_TL_get_RX_TL(data)                                            ((0x000000FF&(data))>>0)


#define ARM_ISO_IC0_TX_TL                                                            0xFF01923C
#define ARM_ISO_IC0_TX_TL_reg_addr                                                   "0xFF01923C"
#define ARM_ISO_IC0_TX_TL_reg                                                        0xFF01923C
#define set_ARM_ISO_IC0_TX_TL_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_TX_TL_reg)=data)
#define get_ARM_ISO_IC0_TX_TL_reg   (*((volatile unsigned int*) ARM_ISO_IC0_TX_TL_reg))
#define ARM_ISO_IC0_TX_TL_inst_adr                                                   "0x008F"
#define ARM_ISO_IC0_TX_TL_inst                                                       0x008F
#define ARM_ISO_IC0_TX_TL_TX_TL_shift                                                (0)
#define ARM_ISO_IC0_TX_TL_TX_TL_mask                                                 (0x000000FF)
#define ARM_ISO_IC0_TX_TL_TX_TL(data)                                                (0x000000FF&((data)<<0))
#define ARM_ISO_IC0_TX_TL_TX_TL_src(data)                                            ((0x000000FF&(data))>>0)
#define ARM_ISO_IC0_TX_TL_get_TX_TL(data)                                            ((0x000000FF&(data))>>0)


#define ARM_ISO_IC0_CLR_INTR                                                         0xFF019240
#define ARM_ISO_IC0_CLR_INTR_reg_addr                                                "0xFF019240"
#define ARM_ISO_IC0_CLR_INTR_reg                                                     0xFF019240
#define set_ARM_ISO_IC0_CLR_INTR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_INTR_reg)=data)
#define get_ARM_ISO_IC0_CLR_INTR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_INTR_reg))
#define ARM_ISO_IC0_CLR_INTR_inst_adr                                                "0x0090"
#define ARM_ISO_IC0_CLR_INTR_inst                                                    0x0090
#define ARM_ISO_IC0_CLR_INTR_CLR_INTR_shift                                          (0)
#define ARM_ISO_IC0_CLR_INTR_CLR_INTR_mask                                           (0x00000001)
#define ARM_ISO_IC0_CLR_INTR_CLR_INTR(data)                                          (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_INTR_CLR_INTR_src(data)                                      ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_INTR_get_CLR_INTR(data)                                      ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_RX_UNDER                                                     0xFF019244
#define ARM_ISO_IC0_CLR_RX_UNDER_reg_addr                                            "0xFF019244"
#define ARM_ISO_IC0_CLR_RX_UNDER_reg                                                 0xFF019244
#define set_ARM_ISO_IC0_CLR_RX_UNDER_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_RX_UNDER_reg)=data)
#define get_ARM_ISO_IC0_CLR_RX_UNDER_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_RX_UNDER_reg))
#define ARM_ISO_IC0_CLR_RX_UNDER_inst_adr                                            "0x0091"
#define ARM_ISO_IC0_CLR_RX_UNDER_inst                                                0x0091
#define ARM_ISO_IC0_CLR_RX_UNDER_CLR_RX_UNDER_shift                                  (0)
#define ARM_ISO_IC0_CLR_RX_UNDER_CLR_RX_UNDER_mask                                   (0x00000001)
#define ARM_ISO_IC0_CLR_RX_UNDER_CLR_RX_UNDER(data)                                  (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_RX_UNDER_CLR_RX_UNDER_src(data)                              ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_RX_UNDER_get_CLR_RX_UNDER(data)                              ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_RX_OVER                                                      0xFF019248
#define ARM_ISO_IC0_CLR_RX_OVER_reg_addr                                             "0xFF019248"
#define ARM_ISO_IC0_CLR_RX_OVER_reg                                                  0xFF019248
#define set_ARM_ISO_IC0_CLR_RX_OVER_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_RX_OVER_reg)=data)
#define get_ARM_ISO_IC0_CLR_RX_OVER_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_RX_OVER_reg))
#define ARM_ISO_IC0_CLR_RX_OVER_inst_adr                                             "0x0092"
#define ARM_ISO_IC0_CLR_RX_OVER_inst                                                 0x0092
#define ARM_ISO_IC0_CLR_RX_OVER_CLR_RX_OVER_shift                                    (0)
#define ARM_ISO_IC0_CLR_RX_OVER_CLR_RX_OVER_mask                                     (0x00000001)
#define ARM_ISO_IC0_CLR_RX_OVER_CLR_RX_OVER(data)                                    (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_RX_OVER_CLR_RX_OVER_src(data)                                ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_RX_OVER_get_CLR_RX_OVER(data)                                ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_TX_OVER                                                      0xFF01924C
#define ARM_ISO_IC0_CLR_TX_OVER_reg_addr                                             "0xFF01924C"
#define ARM_ISO_IC0_CLR_TX_OVER_reg                                                  0xFF01924C
#define set_ARM_ISO_IC0_CLR_TX_OVER_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_TX_OVER_reg)=data)
#define get_ARM_ISO_IC0_CLR_TX_OVER_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_TX_OVER_reg))
#define ARM_ISO_IC0_CLR_TX_OVER_inst_adr                                             "0x0093"
#define ARM_ISO_IC0_CLR_TX_OVER_inst                                                 0x0093
#define ARM_ISO_IC0_CLR_TX_OVER_CLR_TX_OVER_shift                                    (0)
#define ARM_ISO_IC0_CLR_TX_OVER_CLR_TX_OVER_mask                                     (0x00000001)
#define ARM_ISO_IC0_CLR_TX_OVER_CLR_TX_OVER(data)                                    (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_TX_OVER_CLR_TX_OVER_src(data)                                ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_TX_OVER_get_CLR_TX_OVER(data)                                ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_RD_REQ                                                       0xFF019250
#define ARM_ISO_IC0_CLR_RD_REQ_reg_addr                                              "0xFF019250"
#define ARM_ISO_IC0_CLR_RD_REQ_reg                                                   0xFF019250
#define set_ARM_ISO_IC0_CLR_RD_REQ_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_RD_REQ_reg)=data)
#define get_ARM_ISO_IC0_CLR_RD_REQ_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_RD_REQ_reg))
#define ARM_ISO_IC0_CLR_RD_REQ_inst_adr                                              "0x0094"
#define ARM_ISO_IC0_CLR_RD_REQ_inst                                                  0x0094
#define ARM_ISO_IC0_CLR_RD_REQ_CLR_RD_REQ_shift                                      (0)
#define ARM_ISO_IC0_CLR_RD_REQ_CLR_RD_REQ_mask                                       (0x00000001)
#define ARM_ISO_IC0_CLR_RD_REQ_CLR_RD_REQ(data)                                      (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_RD_REQ_CLR_RD_REQ_src(data)                                  ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_RD_REQ_get_CLR_RD_REQ(data)                                  ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_TX_ABRT                                                      0xFF019254
#define ARM_ISO_IC0_CLR_TX_ABRT_reg_addr                                             "0xFF019254"
#define ARM_ISO_IC0_CLR_TX_ABRT_reg                                                  0xFF019254
#define set_ARM_ISO_IC0_CLR_TX_ABRT_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_TX_ABRT_reg)=data)
#define get_ARM_ISO_IC0_CLR_TX_ABRT_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_TX_ABRT_reg))
#define ARM_ISO_IC0_CLR_TX_ABRT_inst_adr                                             "0x0095"
#define ARM_ISO_IC0_CLR_TX_ABRT_inst                                                 0x0095
#define ARM_ISO_IC0_CLR_TX_ABRT_CLR_TX_ABRT_shift                                    (0)
#define ARM_ISO_IC0_CLR_TX_ABRT_CLR_TX_ABRT_mask                                     (0x00000001)
#define ARM_ISO_IC0_CLR_TX_ABRT_CLR_TX_ABRT(data)                                    (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_TX_ABRT_CLR_TX_ABRT_src(data)                                ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_TX_ABRT_get_CLR_TX_ABRT(data)                                ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_RX_DONE                                                      0xFF019258
#define ARM_ISO_IC0_CLR_RX_DONE_reg_addr                                             "0xFF019258"
#define ARM_ISO_IC0_CLR_RX_DONE_reg                                                  0xFF019258
#define set_ARM_ISO_IC0_CLR_RX_DONE_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_RX_DONE_reg)=data)
#define get_ARM_ISO_IC0_CLR_RX_DONE_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_RX_DONE_reg))
#define ARM_ISO_IC0_CLR_RX_DONE_inst_adr                                             "0x0096"
#define ARM_ISO_IC0_CLR_RX_DONE_inst                                                 0x0096
#define ARM_ISO_IC0_CLR_RX_DONE_CLR_RX_DONE_shift                                    (0)
#define ARM_ISO_IC0_CLR_RX_DONE_CLR_RX_DONE_mask                                     (0x00000001)
#define ARM_ISO_IC0_CLR_RX_DONE_CLR_RX_DONE(data)                                    (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_RX_DONE_CLR_RX_DONE_src(data)                                ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_RX_DONE_get_CLR_RX_DONE(data)                                ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_ACTIVITY                                                     0xFF01925C
#define ARM_ISO_IC0_CLR_ACTIVITY_reg_addr                                            "0xFF01925C"
#define ARM_ISO_IC0_CLR_ACTIVITY_reg                                                 0xFF01925C
#define set_ARM_ISO_IC0_CLR_ACTIVITY_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_ACTIVITY_reg)=data)
#define get_ARM_ISO_IC0_CLR_ACTIVITY_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_ACTIVITY_reg))
#define ARM_ISO_IC0_CLR_ACTIVITY_inst_adr                                            "0x0097"
#define ARM_ISO_IC0_CLR_ACTIVITY_inst                                                0x0097
#define ARM_ISO_IC0_CLR_ACTIVITY_CLR_ACTIVITY_shift                                  (0)
#define ARM_ISO_IC0_CLR_ACTIVITY_CLR_ACTIVITY_mask                                   (0x00000001)
#define ARM_ISO_IC0_CLR_ACTIVITY_CLR_ACTIVITY(data)                                  (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_ACTIVITY_CLR_ACTIVITY_src(data)                              ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_ACTIVITY_get_CLR_ACTIVITY(data)                              ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_STOP_DET                                                     0xFF019260
#define ARM_ISO_IC0_CLR_STOP_DET_reg_addr                                            "0xFF019260"
#define ARM_ISO_IC0_CLR_STOP_DET_reg                                                 0xFF019260
#define set_ARM_ISO_IC0_CLR_STOP_DET_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_STOP_DET_reg)=data)
#define get_ARM_ISO_IC0_CLR_STOP_DET_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_STOP_DET_reg))
#define ARM_ISO_IC0_CLR_STOP_DET_inst_adr                                            "0x0098"
#define ARM_ISO_IC0_CLR_STOP_DET_inst                                                0x0098
#define ARM_ISO_IC0_CLR_STOP_DET_CLR_STOP_DET_shift                                  (0)
#define ARM_ISO_IC0_CLR_STOP_DET_CLR_STOP_DET_mask                                   (0x00000001)
#define ARM_ISO_IC0_CLR_STOP_DET_CLR_STOP_DET(data)                                  (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_STOP_DET_CLR_STOP_DET_src(data)                              ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_STOP_DET_get_CLR_STOP_DET(data)                              ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_START_DET                                                    0xFF019264
#define ARM_ISO_IC0_CLR_START_DET_reg_addr                                           "0xFF019264"
#define ARM_ISO_IC0_CLR_START_DET_reg                                                0xFF019264
#define set_ARM_ISO_IC0_CLR_START_DET_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_START_DET_reg)=data)
#define get_ARM_ISO_IC0_CLR_START_DET_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_START_DET_reg))
#define ARM_ISO_IC0_CLR_START_DET_inst_adr                                           "0x0099"
#define ARM_ISO_IC0_CLR_START_DET_inst                                               0x0099
#define ARM_ISO_IC0_CLR_START_DET_CLR_START_DET_shift                                (0)
#define ARM_ISO_IC0_CLR_START_DET_CLR_START_DET_mask                                 (0x00000001)
#define ARM_ISO_IC0_CLR_START_DET_CLR_START_DET(data)                                (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_START_DET_CLR_START_DET_src(data)                            ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_START_DET_get_CLR_START_DET(data)                            ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_CLR_GEN_CALL                                                     0xFF019268
#define ARM_ISO_IC0_CLR_GEN_CALL_reg_addr                                            "0xFF019268"
#define ARM_ISO_IC0_CLR_GEN_CALL_reg                                                 0xFF019268
#define set_ARM_ISO_IC0_CLR_GEN_CALL_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_GEN_CALL_reg)=data)
#define get_ARM_ISO_IC0_CLR_GEN_CALL_reg   (*((volatile unsigned int*) ARM_ISO_IC0_CLR_GEN_CALL_reg))
#define ARM_ISO_IC0_CLR_GEN_CALL_inst_adr                                            "0x009A"
#define ARM_ISO_IC0_CLR_GEN_CALL_inst                                                0x009A
#define ARM_ISO_IC0_CLR_GEN_CALL_CLR_GEN_CALL_shift                                  (0)
#define ARM_ISO_IC0_CLR_GEN_CALL_CLR_GEN_CALL_mask                                   (0x00000001)
#define ARM_ISO_IC0_CLR_GEN_CALL_CLR_GEN_CALL(data)                                  (0x00000001&((data)<<0))
#define ARM_ISO_IC0_CLR_GEN_CALL_CLR_GEN_CALL_src(data)                              ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_CLR_GEN_CALL_get_CLR_GEN_CALL(data)                              ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_ENABLE                                                           0xFF01926C
#define ARM_ISO_IC0_ENABLE_reg_addr                                                  "0xFF01926C"
#define ARM_ISO_IC0_ENABLE_reg                                                       0xFF01926C
#define set_ARM_ISO_IC0_ENABLE_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_ENABLE_reg)=data)
#define get_ARM_ISO_IC0_ENABLE_reg   (*((volatile unsigned int*) ARM_ISO_IC0_ENABLE_reg))
#define ARM_ISO_IC0_ENABLE_inst_adr                                                  "0x009B"
#define ARM_ISO_IC0_ENABLE_inst                                                      0x009B
#define ARM_ISO_IC0_ENABLE_ENABLE_shift                                              (0)
#define ARM_ISO_IC0_ENABLE_ENABLE_mask                                               (0x00000001)
#define ARM_ISO_IC0_ENABLE_ENABLE(data)                                              (0x00000001&((data)<<0))
#define ARM_ISO_IC0_ENABLE_ENABLE_src(data)                                          ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_ENABLE_get_ENABLE(data)                                          ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_STATUS                                                           0xFF019270
#define ARM_ISO_IC0_STATUS_reg_addr                                                  "0xFF019270"
#define ARM_ISO_IC0_STATUS_reg                                                       0xFF019270
#define set_ARM_ISO_IC0_STATUS_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_STATUS_reg)=data)
#define get_ARM_ISO_IC0_STATUS_reg   (*((volatile unsigned int*) ARM_ISO_IC0_STATUS_reg))
#define ARM_ISO_IC0_STATUS_inst_adr                                                  "0x009C"
#define ARM_ISO_IC0_STATUS_inst                                                      0x009C
#define ARM_ISO_IC0_STATUS_SLV_ACTIVITY_shift                                        (6)
#define ARM_ISO_IC0_STATUS_SLV_ACTIVITY_mask                                         (0x00000040)
#define ARM_ISO_IC0_STATUS_SLV_ACTIVITY(data)                                        (0x00000040&((data)<<6))
#define ARM_ISO_IC0_STATUS_SLV_ACTIVITY_src(data)                                    ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_STATUS_get_SLV_ACTIVITY(data)                                    ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_STATUS_MST_ACTIVITY_shift                                        (5)
#define ARM_ISO_IC0_STATUS_MST_ACTIVITY_mask                                         (0x00000020)
#define ARM_ISO_IC0_STATUS_MST_ACTIVITY(data)                                        (0x00000020&((data)<<5))
#define ARM_ISO_IC0_STATUS_MST_ACTIVITY_src(data)                                    ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_STATUS_get_MST_ACTIVITY(data)                                    ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_STATUS_RFF_shift                                                 (4)
#define ARM_ISO_IC0_STATUS_RFF_mask                                                  (0x00000010)
#define ARM_ISO_IC0_STATUS_RFF(data)                                                 (0x00000010&((data)<<4))
#define ARM_ISO_IC0_STATUS_RFF_src(data)                                             ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_STATUS_get_RFF(data)                                             ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_STATUS_RFNE_shift                                                (3)
#define ARM_ISO_IC0_STATUS_RFNE_mask                                                 (0x00000008)
#define ARM_ISO_IC0_STATUS_RFNE(data)                                                (0x00000008&((data)<<3))
#define ARM_ISO_IC0_STATUS_RFNE_src(data)                                            ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_STATUS_get_RFNE(data)                                            ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_STATUS_TFE_shift                                                 (2)
#define ARM_ISO_IC0_STATUS_TFE_mask                                                  (0x00000004)
#define ARM_ISO_IC0_STATUS_TFE(data)                                                 (0x00000004&((data)<<2))
#define ARM_ISO_IC0_STATUS_TFE_src(data)                                             ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_STATUS_get_TFE(data)                                             ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_STATUS_TFNF_shift                                                (1)
#define ARM_ISO_IC0_STATUS_TFNF_mask                                                 (0x00000002)
#define ARM_ISO_IC0_STATUS_TFNF(data)                                                (0x00000002&((data)<<1))
#define ARM_ISO_IC0_STATUS_TFNF_src(data)                                            ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_STATUS_get_TFNF(data)                                            ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_STATUS_ACTIVITY_shift                                            (0)
#define ARM_ISO_IC0_STATUS_ACTIVITY_mask                                             (0x00000001)
#define ARM_ISO_IC0_STATUS_ACTIVITY(data)                                            (0x00000001&((data)<<0))
#define ARM_ISO_IC0_STATUS_ACTIVITY_src(data)                                        ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_STATUS_get_ACTIVITY(data)                                        ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_TXFLR                                                            0xFF019274
#define ARM_ISO_IC0_TXFLR_reg_addr                                                   "0xFF019274"
#define ARM_ISO_IC0_TXFLR_reg                                                        0xFF019274
#define set_ARM_ISO_IC0_TXFLR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_TXFLR_reg)=data)
#define get_ARM_ISO_IC0_TXFLR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_TXFLR_reg))
#define ARM_ISO_IC0_TXFLR_inst_adr                                                   "0x009D"
#define ARM_ISO_IC0_TXFLR_inst                                                       0x009D
#define ARM_ISO_IC0_TXFLR_TXFLR_shift                                                (0)
#define ARM_ISO_IC0_TXFLR_TXFLR_mask                                                 (0x0000000F)
#define ARM_ISO_IC0_TXFLR_TXFLR(data)                                                (0x0000000F&((data)<<0))
#define ARM_ISO_IC0_TXFLR_TXFLR_src(data)                                            ((0x0000000F&(data))>>0)
#define ARM_ISO_IC0_TXFLR_get_TXFLR(data)                                            ((0x0000000F&(data))>>0)


#define ARM_ISO_IC0_RXFLR                                                            0xFF019278
#define ARM_ISO_IC0_RXFLR_reg_addr                                                   "0xFF019278"
#define ARM_ISO_IC0_RXFLR_reg                                                        0xFF019278
#define set_ARM_ISO_IC0_RXFLR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_RXFLR_reg)=data)
#define get_ARM_ISO_IC0_RXFLR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_RXFLR_reg))
#define ARM_ISO_IC0_RXFLR_inst_adr                                                   "0x009E"
#define ARM_ISO_IC0_RXFLR_inst                                                       0x009E
#define ARM_ISO_IC0_RXFLR_RXFLR_shift                                                (0)
#define ARM_ISO_IC0_RXFLR_RXFLR_mask                                                 (0x0000000F)
#define ARM_ISO_IC0_RXFLR_RXFLR(data)                                                (0x0000000F&((data)<<0))
#define ARM_ISO_IC0_RXFLR_RXFLR_src(data)                                            ((0x0000000F&(data))>>0)
#define ARM_ISO_IC0_RXFLR_get_RXFLR(data)                                            ((0x0000000F&(data))>>0)


#define ARM_ISO_IC0_SDA_HOLD                                                         0xFF01927C
#define ARM_ISO_IC0_SDA_HOLD_reg_addr                                                "0xFF01927C"
#define ARM_ISO_IC0_SDA_HOLD_reg                                                     0xFF01927C
#define set_ARM_ISO_IC0_SDA_HOLD_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_SDA_HOLD_reg)=data)
#define get_ARM_ISO_IC0_SDA_HOLD_reg   (*((volatile unsigned int*) ARM_ISO_IC0_SDA_HOLD_reg))
#define ARM_ISO_IC0_SDA_HOLD_inst_adr                                                "0x009F"
#define ARM_ISO_IC0_SDA_HOLD_inst                                                    0x009F
#define ARM_ISO_IC0_SDA_HOLD_IC_SDA_HOLD_shift                                       (0)
#define ARM_ISO_IC0_SDA_HOLD_IC_SDA_HOLD_mask                                        (0x0000FFFF)
#define ARM_ISO_IC0_SDA_HOLD_IC_SDA_HOLD(data)                                       (0x0000FFFF&((data)<<0))
#define ARM_ISO_IC0_SDA_HOLD_IC_SDA_HOLD_src(data)                                   ((0x0000FFFF&(data))>>0)
#define ARM_ISO_IC0_SDA_HOLD_get_IC_SDA_HOLD(data)                                   ((0x0000FFFF&(data))>>0)


#define ARM_ISO_IC0_TX_ABRT_SOURCE                                                   0xFF019280
#define ARM_ISO_IC0_TX_ABRT_SOURCE_reg_addr                                          "0xFF019280"
#define ARM_ISO_IC0_TX_ABRT_SOURCE_reg                                               0xFF019280
#define set_ARM_ISO_IC0_TX_ABRT_SOURCE_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_TX_ABRT_SOURCE_reg)=data)
#define get_ARM_ISO_IC0_TX_ABRT_SOURCE_reg   (*((volatile unsigned int*) ARM_ISO_IC0_TX_ABRT_SOURCE_reg))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_inst_adr                                          "0x00A0"
#define ARM_ISO_IC0_TX_ABRT_SOURCE_inst                                              0x00A0
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_shift                             (15)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_mask                              (0x00008000)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(data)                             (0x00008000&((data)<<15))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_src(data)                         ((0x00008000&(data))>>15)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_SLVRD_INTX(data)                         ((0x00008000&(data))>>15)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_shift                            (14)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_mask                             (0x00004000)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(data)                            (0x00004000&((data)<<14))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_src(data)                        ((0x00004000&(data))>>14)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_SLV_ARBLOST(data)                        ((0x00004000&(data))>>14)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_shift                        (13)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_mask                         (0x00002000)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(data)                        (0x00002000&((data)<<13))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_src(data)                    ((0x00002000&(data))>>13)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_SLVFLUSH_TXFIFO(data)                    ((0x00002000&(data))>>13)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ARB_LOST_shift                                    (12)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ARB_LOST_mask                                     (0x00001000)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ARB_LOST(data)                                    (0x00001000&((data)<<12))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ARB_LOST_src(data)                                ((0x00001000&(data))>>12)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ARB_LOST(data)                                ((0x00001000&(data))>>12)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ARB_MASTER_DIS_shift                              (11)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ARB_MASTER_DIS_mask                               (0x00000800)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ARB_MASTER_DIS(data)                              (0x00000800&((data)<<11))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ARB_MASTER_DIS_src(data)                          ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ARB_MASTER_DIS(data)                          ((0x00000800&(data))>>11)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_shift                         (10)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_mask                          (0x00000400)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(data)                         (0x00000400&((data)<<10))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_src(data)                     ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_10B_RD_NORSTRT(data)                     ((0x00000400&(data))>>10)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_shift                          (9)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_mask                           (0x00000200)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(data)                          (0x00000200&((data)<<9))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_src(data)                      ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_SBYTE_NORSTRT(data)                      ((0x00000200&(data))>>9)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_shift                             (8)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_mask                              (0x00000100)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(data)                             (0x00000100&((data)<<8))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_src(data)                         ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_HS_NORSTRT(data)                         ((0x00000100&(data))>>8)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_shift                           (7)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_mask                            (0x00000080)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(data)                           (0x00000080&((data)<<7))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_src(data)                       ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_SBYTE_ACKDET(data)                       ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_HS_ACKDET_shift                              (6)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_HS_ACKDET_mask                               (0x00000040)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_HS_ACKDET(data)                              (0x00000040&((data)<<6))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_HS_ACKDET_src(data)                          ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_HS_ACKDET(data)                          ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_GCALL_READ_shift                             (5)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_GCALL_READ_mask                              (0x00000020)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_GCALL_READ(data)                             (0x00000020&((data)<<5))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_GCALL_READ_src(data)                         ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_GCALL_READ(data)                         ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_shift                            (4)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_mask                             (0x00000010)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(data)                            (0x00000010&((data)<<4))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_src(data)                        ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_GCALL_NOACK(data)                        ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_shift                           (3)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_mask                            (0x00000008)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(data)                           (0x00000008&((data)<<3))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_src(data)                       ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_TXDATA_NOACK(data)                       ((0x00000008&(data))>>3)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_shift                          (2)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_mask                           (0x00000004)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(data)                          (0x00000004&((data)<<2))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_src(data)                      ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_10ADDR2_NOACK(data)                      ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_shift                          (1)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_mask                           (0x00000002)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(data)                          (0x00000002&((data)<<1))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_src(data)                      ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_10ADDR1_NOACK(data)                      ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_shift                          (0)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_mask                           (0x00000001)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(data)                          (0x00000001&((data)<<0))
#define ARM_ISO_IC0_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_src(data)                      ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_TX_ABRT_SOURCE_get_ABRT_7B_ADDR_NOACK(data)                      ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY                                               0xFF019284
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_reg_addr                                      "0xFF019284"
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_reg                                           0xFF019284
#define set_ARM_ISO_IC0_SLV_DATA_NACK_ONLY_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_SLV_DATA_NACK_ONLY_reg)=data)
#define get_ARM_ISO_IC0_SLV_DATA_NACK_ONLY_reg   (*((volatile unsigned int*) ARM_ISO_IC0_SLV_DATA_NACK_ONLY_reg))
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_inst_adr                                      "0x00A1"
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_inst                                          0x00A1
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_NACK_shift                                    (0)
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_NACK_mask                                     (0x00000001)
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_NACK(data)                                    (0x00000001&((data)<<0))
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_NACK_src(data)                                ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_SLV_DATA_NACK_ONLY_get_NACK(data)                                ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_DMA_CR                                                           0xFF019288
#define ARM_ISO_IC0_DMA_CR_reg_addr                                                  "0xFF019288"
#define ARM_ISO_IC0_DMA_CR_reg                                                       0xFF019288
#define set_ARM_ISO_IC0_DMA_CR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_DMA_CR_reg)=data)
#define get_ARM_ISO_IC0_DMA_CR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_DMA_CR_reg))
#define ARM_ISO_IC0_DMA_CR_inst_adr                                                  "0x00A2"
#define ARM_ISO_IC0_DMA_CR_inst                                                      0x00A2
#define ARM_ISO_IC0_DMA_CR_TDMAE_shift                                               (1)
#define ARM_ISO_IC0_DMA_CR_TDMAE_mask                                                (0x00000002)
#define ARM_ISO_IC0_DMA_CR_TDMAE(data)                                               (0x00000002&((data)<<1))
#define ARM_ISO_IC0_DMA_CR_TDMAE_src(data)                                           ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_DMA_CR_get_TDMAE(data)                                           ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_DMA_CR_RDMAE_shift                                               (0)
#define ARM_ISO_IC0_DMA_CR_RDMAE_mask                                                (0x00000001)
#define ARM_ISO_IC0_DMA_CR_RDMAE(data)                                               (0x00000001&((data)<<0))
#define ARM_ISO_IC0_DMA_CR_RDMAE_src(data)                                           ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_DMA_CR_get_RDMAE(data)                                           ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_DMA_TDLR                                                         0xFF01928C
#define ARM_ISO_IC0_DMA_TDLR_reg_addr                                                "0xFF01928C"
#define ARM_ISO_IC0_DMA_TDLR_reg                                                     0xFF01928C
#define set_ARM_ISO_IC0_DMA_TDLR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_DMA_TDLR_reg)=data)
#define get_ARM_ISO_IC0_DMA_TDLR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_DMA_TDLR_reg))
#define ARM_ISO_IC0_DMA_TDLR_inst_adr                                                "0x00A3"
#define ARM_ISO_IC0_DMA_TDLR_inst                                                    0x00A3
#define ARM_ISO_IC0_DMA_TDLR_DMATDL_shift                                            (0)
#define ARM_ISO_IC0_DMA_TDLR_DMATDL_mask                                             (0x00000007)
#define ARM_ISO_IC0_DMA_TDLR_DMATDL(data)                                            (0x00000007&((data)<<0))
#define ARM_ISO_IC0_DMA_TDLR_DMATDL_src(data)                                        ((0x00000007&(data))>>0)
#define ARM_ISO_IC0_DMA_TDLR_get_DMATDL(data)                                        ((0x00000007&(data))>>0)


#define ARM_ISO_IC0_DMA_RDLR                                                         0xFF019290
#define ARM_ISO_IC0_DMA_RDLR_reg_addr                                                "0xFF019290"
#define ARM_ISO_IC0_DMA_RDLR_reg                                                     0xFF019290
#define set_ARM_ISO_IC0_DMA_RDLR_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_DMA_RDLR_reg)=data)
#define get_ARM_ISO_IC0_DMA_RDLR_reg   (*((volatile unsigned int*) ARM_ISO_IC0_DMA_RDLR_reg))
#define ARM_ISO_IC0_DMA_RDLR_inst_adr                                                "0x00A4"
#define ARM_ISO_IC0_DMA_RDLR_inst                                                    0x00A4
#define ARM_ISO_IC0_DMA_RDLR_DMARDL_shift                                            (0)
#define ARM_ISO_IC0_DMA_RDLR_DMARDL_mask                                             (0x0000000F)
#define ARM_ISO_IC0_DMA_RDLR_DMARDL(data)                                            (0x0000000F&((data)<<0))
#define ARM_ISO_IC0_DMA_RDLR_DMARDL_src(data)                                        ((0x0000000F&(data))>>0)
#define ARM_ISO_IC0_DMA_RDLR_get_DMARDL(data)                                        ((0x0000000F&(data))>>0)


#define ARM_ISO_IC0_SDA_SETUP                                                        0xFF019294
#define ARM_ISO_IC0_SDA_SETUP_reg_addr                                               "0xFF019294"
#define ARM_ISO_IC0_SDA_SETUP_reg                                                    0xFF019294
#define set_ARM_ISO_IC0_SDA_SETUP_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_SDA_SETUP_reg)=data)
#define get_ARM_ISO_IC0_SDA_SETUP_reg   (*((volatile unsigned int*) ARM_ISO_IC0_SDA_SETUP_reg))
#define ARM_ISO_IC0_SDA_SETUP_inst_adr                                               "0x00A5"
#define ARM_ISO_IC0_SDA_SETUP_inst                                                   0x00A5
#define ARM_ISO_IC0_SDA_SETUP_SDA_SETUP_shift                                        (0)
#define ARM_ISO_IC0_SDA_SETUP_SDA_SETUP_mask                                         (0x000000FF)
#define ARM_ISO_IC0_SDA_SETUP_SDA_SETUP(data)                                        (0x000000FF&((data)<<0))
#define ARM_ISO_IC0_SDA_SETUP_SDA_SETUP_src(data)                                    ((0x000000FF&(data))>>0)
#define ARM_ISO_IC0_SDA_SETUP_get_SDA_SETUP(data)                                    ((0x000000FF&(data))>>0)


#define ARM_ISO_IC0_ACK_GENERAL_CALL                                                 0xFF019298
#define ARM_ISO_IC0_ACK_GENERAL_CALL_reg_addr                                        "0xFF019298"
#define ARM_ISO_IC0_ACK_GENERAL_CALL_reg                                             0xFF019298
#define set_ARM_ISO_IC0_ACK_GENERAL_CALL_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_ACK_GENERAL_CALL_reg)=data)
#define get_ARM_ISO_IC0_ACK_GENERAL_CALL_reg   (*((volatile unsigned int*) ARM_ISO_IC0_ACK_GENERAL_CALL_reg))
#define ARM_ISO_IC0_ACK_GENERAL_CALL_inst_adr                                        "0x00A6"
#define ARM_ISO_IC0_ACK_GENERAL_CALL_inst                                            0x00A6
#define ARM_ISO_IC0_ACK_GENERAL_CALL_ACK_GEN_CALL_shift                              (0)
#define ARM_ISO_IC0_ACK_GENERAL_CALL_ACK_GEN_CALL_mask                               (0x00000001)
#define ARM_ISO_IC0_ACK_GENERAL_CALL_ACK_GEN_CALL(data)                              (0x00000001&((data)<<0))
#define ARM_ISO_IC0_ACK_GENERAL_CALL_ACK_GEN_CALL_src(data)                          ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_ACK_GENERAL_CALL_get_ACK_GEN_CALL(data)                          ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_ENABLE_STATUS                                                    0xFF01929C
#define ARM_ISO_IC0_ENABLE_STATUS_reg_addr                                           "0xFF01929C"
#define ARM_ISO_IC0_ENABLE_STATUS_reg                                                0xFF01929C
#define set_ARM_ISO_IC0_ENABLE_STATUS_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_ENABLE_STATUS_reg)=data)
#define get_ARM_ISO_IC0_ENABLE_STATUS_reg   (*((volatile unsigned int*) ARM_ISO_IC0_ENABLE_STATUS_reg))
#define ARM_ISO_IC0_ENABLE_STATUS_inst_adr                                           "0x00A7"
#define ARM_ISO_IC0_ENABLE_STATUS_inst                                               0x00A7
#define ARM_ISO_IC0_ENABLE_STATUS_SLV_RX_DATA_LOST_shift                             (2)
#define ARM_ISO_IC0_ENABLE_STATUS_SLV_RX_DATA_LOST_mask                              (0x00000004)
#define ARM_ISO_IC0_ENABLE_STATUS_SLV_RX_DATA_LOST(data)                             (0x00000004&((data)<<2))
#define ARM_ISO_IC0_ENABLE_STATUS_SLV_RX_DATA_LOST_src(data)                         ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_ENABLE_STATUS_get_SLV_RX_DATA_LOST(data)                         ((0x00000004&(data))>>2)
#define ARM_ISO_IC0_ENABLE_STATUS_SLV_DISABLED_WHI_shift                             (1)
#define ARM_ISO_IC0_ENABLE_STATUS_SLV_DISABLED_WHI_mask                              (0x00000002)
#define ARM_ISO_IC0_ENABLE_STATUS_SLV_DISABLED_WHI(data)                             (0x00000002&((data)<<1))
#define ARM_ISO_IC0_ENABLE_STATUS_SLV_DISABLED_WHI_src(data)                         ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_ENABLE_STATUS_get_SLV_DISABLED_WHI(data)                         ((0x00000002&(data))>>1)
#define ARM_ISO_IC0_ENABLE_STATUS_IC_EN_shift                                        (0)
#define ARM_ISO_IC0_ENABLE_STATUS_IC_EN_mask                                         (0x00000001)
#define ARM_ISO_IC0_ENABLE_STATUS_IC_EN(data)                                        (0x00000001&((data)<<0))
#define ARM_ISO_IC0_ENABLE_STATUS_IC_EN_src(data)                                    ((0x00000001&(data))>>0)
#define ARM_ISO_IC0_ENABLE_STATUS_get_IC_EN(data)                                    ((0x00000001&(data))>>0)


#define ARM_ISO_IC0_COMP_PARAM_1                                                     0xFF0192F4
#define ARM_ISO_IC0_COMP_PARAM_1_reg_addr                                            "0xFF0192F4"
#define ARM_ISO_IC0_COMP_PARAM_1_reg                                                 0xFF0192F4
#define set_ARM_ISO_IC0_COMP_PARAM_1_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_COMP_PARAM_1_reg)=data)
#define get_ARM_ISO_IC0_COMP_PARAM_1_reg   (*((volatile unsigned int*) ARM_ISO_IC0_COMP_PARAM_1_reg))
#define ARM_ISO_IC0_COMP_PARAM_1_inst_adr                                            "0x00BD"
#define ARM_ISO_IC0_COMP_PARAM_1_inst                                                0x00BD
#define ARM_ISO_IC0_COMP_PARAM_1_TX_BUFFER_DEPTH_shift                               (16)
#define ARM_ISO_IC0_COMP_PARAM_1_TX_BUFFER_DEPTH_mask                                (0x00FF0000)
#define ARM_ISO_IC0_COMP_PARAM_1_TX_BUFFER_DEPTH(data)                               (0x00FF0000&((data)<<16))
#define ARM_ISO_IC0_COMP_PARAM_1_TX_BUFFER_DEPTH_src(data)                           ((0x00FF0000&(data))>>16)
#define ARM_ISO_IC0_COMP_PARAM_1_get_TX_BUFFER_DEPTH(data)                           ((0x00FF0000&(data))>>16)
#define ARM_ISO_IC0_COMP_PARAM_1_RX_BUFFER_DEPTH_shift                               (8)
#define ARM_ISO_IC0_COMP_PARAM_1_RX_BUFFER_DEPTH_mask                                (0x0000FF00)
#define ARM_ISO_IC0_COMP_PARAM_1_RX_BUFFER_DEPTH(data)                               (0x0000FF00&((data)<<8))
#define ARM_ISO_IC0_COMP_PARAM_1_RX_BUFFER_DEPTH_src(data)                           ((0x0000FF00&(data))>>8)
#define ARM_ISO_IC0_COMP_PARAM_1_get_RX_BUFFER_DEPTH(data)                           ((0x0000FF00&(data))>>8)
#define ARM_ISO_IC0_COMP_PARAM_1_ADD_ENCODED_PARAMS_shift                            (7)
#define ARM_ISO_IC0_COMP_PARAM_1_ADD_ENCODED_PARAMS_mask                             (0x00000080)
#define ARM_ISO_IC0_COMP_PARAM_1_ADD_ENCODED_PARAMS(data)                            (0x00000080&((data)<<7))
#define ARM_ISO_IC0_COMP_PARAM_1_ADD_ENCODED_PARAMS_src(data)                        ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_COMP_PARAM_1_get_ADD_ENCODED_PARAMS(data)                        ((0x00000080&(data))>>7)
#define ARM_ISO_IC0_COMP_PARAM_1_HAS_DMA_shift                                       (6)
#define ARM_ISO_IC0_COMP_PARAM_1_HAS_DMA_mask                                        (0x00000040)
#define ARM_ISO_IC0_COMP_PARAM_1_HAS_DMA(data)                                       (0x00000040&((data)<<6))
#define ARM_ISO_IC0_COMP_PARAM_1_HAS_DMA_src(data)                                   ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_COMP_PARAM_1_get_HAS_DMA(data)                                   ((0x00000040&(data))>>6)
#define ARM_ISO_IC0_COMP_PARAM_1_INTR_IO_shift                                       (5)
#define ARM_ISO_IC0_COMP_PARAM_1_INTR_IO_mask                                        (0x00000020)
#define ARM_ISO_IC0_COMP_PARAM_1_INTR_IO(data)                                       (0x00000020&((data)<<5))
#define ARM_ISO_IC0_COMP_PARAM_1_INTR_IO_src(data)                                   ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_COMP_PARAM_1_get_INTR_IO(data)                                   ((0x00000020&(data))>>5)
#define ARM_ISO_IC0_COMP_PARAM_1_HC_COUNT_VALUES_shift                               (4)
#define ARM_ISO_IC0_COMP_PARAM_1_HC_COUNT_VALUES_mask                                (0x00000010)
#define ARM_ISO_IC0_COMP_PARAM_1_HC_COUNT_VALUES(data)                               (0x00000010&((data)<<4))
#define ARM_ISO_IC0_COMP_PARAM_1_HC_COUNT_VALUES_src(data)                           ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_COMP_PARAM_1_get_HC_COUNT_VALUES(data)                           ((0x00000010&(data))>>4)
#define ARM_ISO_IC0_COMP_PARAM_1_MAX_SPEED_MODE_shift                                (2)
#define ARM_ISO_IC0_COMP_PARAM_1_MAX_SPEED_MODE_mask                                 (0x0000000C)
#define ARM_ISO_IC0_COMP_PARAM_1_MAX_SPEED_MODE(data)                                (0x0000000C&((data)<<2))
#define ARM_ISO_IC0_COMP_PARAM_1_MAX_SPEED_MODE_src(data)                            ((0x0000000C&(data))>>2)
#define ARM_ISO_IC0_COMP_PARAM_1_get_MAX_SPEED_MODE(data)                            ((0x0000000C&(data))>>2)
#define ARM_ISO_IC0_COMP_PARAM_1_APB_DATA_WIDTH_shift                                (0)
#define ARM_ISO_IC0_COMP_PARAM_1_APB_DATA_WIDTH_mask                                 (0x00000003)
#define ARM_ISO_IC0_COMP_PARAM_1_APB_DATA_WIDTH(data)                                (0x00000003&((data)<<0))
#define ARM_ISO_IC0_COMP_PARAM_1_APB_DATA_WIDTH_src(data)                            ((0x00000003&(data))>>0)
#define ARM_ISO_IC0_COMP_PARAM_1_get_APB_DATA_WIDTH(data)                            ((0x00000003&(data))>>0)


#define ARM_ISO_IC0_COMP_VERSION                                                     0xFF0192F8
#define ARM_ISO_IC0_COMP_VERSION_reg_addr                                            "0xFF0192F8"
#define ARM_ISO_IC0_COMP_VERSION_reg                                                 0xFF0192F8
#define set_ARM_ISO_IC0_COMP_VERSION_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_COMP_VERSION_reg)=data)
#define get_ARM_ISO_IC0_COMP_VERSION_reg   (*((volatile unsigned int*) ARM_ISO_IC0_COMP_VERSION_reg))
#define ARM_ISO_IC0_COMP_VERSION_inst_adr                                            "0x00BE"
#define ARM_ISO_IC0_COMP_VERSION_inst                                                0x00BE
#define ARM_ISO_IC0_COMP_VERSION_IC_COMP_VERSION_shift                               (0)
#define ARM_ISO_IC0_COMP_VERSION_IC_COMP_VERSION_mask                                (0xFFFFFFFF)
#define ARM_ISO_IC0_COMP_VERSION_IC_COMP_VERSION(data)                               (0xFFFFFFFF&((data)<<0))
#define ARM_ISO_IC0_COMP_VERSION_IC_COMP_VERSION_src(data)                           ((0xFFFFFFFF&(data))>>0)
#define ARM_ISO_IC0_COMP_VERSION_get_IC_COMP_VERSION(data)                           ((0xFFFFFFFF&(data))>>0)


#define ARM_ISO_IC0_COMP_TYPE                                                        0xFF0192FC
#define ARM_ISO_IC0_COMP_TYPE_reg_addr                                               "0xFF0192FC"
#define ARM_ISO_IC0_COMP_TYPE_reg                                                    0xFF0192FC
#define set_ARM_ISO_IC0_COMP_TYPE_reg(data)   (*((volatile unsigned int*) ARM_ISO_IC0_COMP_TYPE_reg)=data)
#define get_ARM_ISO_IC0_COMP_TYPE_reg   (*((volatile unsigned int*) ARM_ISO_IC0_COMP_TYPE_reg))
#define ARM_ISO_IC0_COMP_TYPE_inst_adr                                               "0x00BF"
#define ARM_ISO_IC0_COMP_TYPE_inst                                                   0x00BF
#define ARM_ISO_IC0_COMP_TYPE_IC_COMP_TYPE_shift                                     (0)
#define ARM_ISO_IC0_COMP_TYPE_IC_COMP_TYPE_mask                                      (0xFFFFFFFF)
#define ARM_ISO_IC0_COMP_TYPE_IC_COMP_TYPE(data)                                     (0xFFFFFFFF&((data)<<0))
#define ARM_ISO_IC0_COMP_TYPE_IC_COMP_TYPE_src(data)                                 ((0xFFFFFFFF&(data))>>0)
#define ARM_ISO_IC0_COMP_TYPE_get_IC_COMP_TYPE(data)                                 ((0xFFFFFFFF&(data))>>0)


#define ARM_ISO_MUXPAD                                                               0xFF019300
#define ARM_ISO_MUXPAD_reg_addr                                                      "0xFF019300"
#define ARM_ISO_MUXPAD_reg                                                           0xFF019300
#define set_ARM_ISO_MUXPAD_reg(data)   (*((volatile unsigned int*) ARM_ISO_MUXPAD_reg)=data)
#define get_ARM_ISO_MUXPAD_reg   (*((volatile unsigned int*) ARM_ISO_MUXPAD_reg))
#define ARM_ISO_MUXPAD_inst_adr                                                      "0x00C0"
#define ARM_ISO_MUXPAD_inst                                                          0x00C0
#define ARM_ISO_MUXPAD_arm_tmx_shift                                                 (14)
#define ARM_ISO_MUXPAD_arm_tmx_mask                                                  (0x0000C000)
#define ARM_ISO_MUXPAD_arm_tmx(data)                                                 (0x0000C000&((data)<<14))
#define ARM_ISO_MUXPAD_arm_tmx_src(data)                                             ((0x0000C000&(data))>>14)
#define ARM_ISO_MUXPAD_get_arm_tmx(data)                                             ((0x0000C000&(data))>>14)
#define ARM_ISO_MUXPAD_i2c_scl_7_shift                                               (12)
#define ARM_ISO_MUXPAD_i2c_scl_7_mask                                                (0x00003000)
#define ARM_ISO_MUXPAD_i2c_scl_7(data)                                               (0x00003000&((data)<<12))
#define ARM_ISO_MUXPAD_i2c_scl_7_src(data)                                           ((0x00003000&(data))>>12)
#define ARM_ISO_MUXPAD_get_i2c_scl_7(data)                                           ((0x00003000&(data))>>12)
#define ARM_ISO_MUXPAD_i2c_sda_7_shift                                               (10)
#define ARM_ISO_MUXPAD_i2c_sda_7_mask                                                (0x00000C00)
#define ARM_ISO_MUXPAD_i2c_sda_7(data)                                               (0x00000C00&((data)<<10))
#define ARM_ISO_MUXPAD_i2c_sda_7_src(data)                                           ((0x00000C00&(data))>>10)
#define ARM_ISO_MUXPAD_get_i2c_sda_7(data)                                           ((0x00000C00&(data))>>10)
#define ARM_ISO_MUXPAD_ej_tdo_shift                                                  (8)
#define ARM_ISO_MUXPAD_ej_tdo_mask                                                   (0x00000300)
#define ARM_ISO_MUXPAD_ej_tdo(data)                                                  (0x00000300&((data)<<8))
#define ARM_ISO_MUXPAD_ej_tdo_src(data)                                              ((0x00000300&(data))>>8)
#define ARM_ISO_MUXPAD_get_ej_tdo(data)                                              ((0x00000300&(data))>>8)
#define ARM_ISO_MUXPAD_ej_tms_shift                                                  (6)
#define ARM_ISO_MUXPAD_ej_tms_mask                                                   (0x000000C0)
#define ARM_ISO_MUXPAD_ej_tms(data)                                                  (0x000000C0&((data)<<6))
#define ARM_ISO_MUXPAD_ej_tms_src(data)                                              ((0x000000C0&(data))>>6)
#define ARM_ISO_MUXPAD_get_ej_tms(data)                                              ((0x000000C0&(data))>>6)
#define ARM_ISO_MUXPAD_ej_tclk_shift                                                 (4)
#define ARM_ISO_MUXPAD_ej_tclk_mask                                                  (0x00000030)
#define ARM_ISO_MUXPAD_ej_tclk(data)                                                 (0x00000030&((data)<<4))
#define ARM_ISO_MUXPAD_ej_tclk_src(data)                                             ((0x00000030&(data))>>4)
#define ARM_ISO_MUXPAD_get_ej_tclk(data)                                             ((0x00000030&(data))>>4)
#define ARM_ISO_MUXPAD_ej_tdi_shift                                                  (2)
#define ARM_ISO_MUXPAD_ej_tdi_mask                                                   (0x0000000C)
#define ARM_ISO_MUXPAD_ej_tdi(data)                                                  (0x0000000C&((data)<<2))
#define ARM_ISO_MUXPAD_ej_tdi_src(data)                                              ((0x0000000C&(data))>>2)
#define ARM_ISO_MUXPAD_get_ej_tdi(data)                                              ((0x0000000C&(data))>>2)
#define ARM_ISO_MUXPAD_ej_rst_n_shift                                                (0)
#define ARM_ISO_MUXPAD_ej_rst_n_mask                                                 (0x00000003)
#define ARM_ISO_MUXPAD_ej_rst_n(data)                                                (0x00000003&((data)<<0))
#define ARM_ISO_MUXPAD_ej_rst_n_src(data)                                            ((0x00000003&(data))>>0)
#define ARM_ISO_MUXPAD_get_ej_rst_n(data)                                            ((0x00000003&(data))>>0)


#define ARM_ISO_PFUNC                                                                0xFF019304
#define ARM_ISO_PFUNC_reg_addr                                                       "0xFF019304"
#define ARM_ISO_PFUNC_reg                                                            0xFF019304
#define set_ARM_ISO_PFUNC_reg(data)   (*((volatile unsigned int*) ARM_ISO_PFUNC_reg)=data)
#define get_ARM_ISO_PFUNC_reg   (*((volatile unsigned int*) ARM_ISO_PFUNC_reg))
#define ARM_ISO_PFUNC_inst_adr                                                       "0x00C1"
#define ARM_ISO_PFUNC_inst                                                           0x00C1
#define ARM_ISO_PFUNC_gpio_6_smt_shift                                               (27)
#define ARM_ISO_PFUNC_gpio_6_smt_mask                                                (0x08000000)
#define ARM_ISO_PFUNC_gpio_6_smt(data)                                               (0x08000000&((data)<<27))
#define ARM_ISO_PFUNC_gpio_6_smt_src(data)                                           ((0x08000000&(data))>>27)
#define ARM_ISO_PFUNC_get_gpio_6_smt(data)                                           ((0x08000000&(data))>>27)
#define ARM_ISO_PFUNC_gpio_6_e2_shift                                                (26)
#define ARM_ISO_PFUNC_gpio_6_e2_mask                                                 (0x04000000)
#define ARM_ISO_PFUNC_gpio_6_e2(data)                                                (0x04000000&((data)<<26))
#define ARM_ISO_PFUNC_gpio_6_e2_src(data)                                            ((0x04000000&(data))>>26)
#define ARM_ISO_PFUNC_get_gpio_6_e2(data)                                            ((0x04000000&(data))>>26)
#define ARM_ISO_PFUNC_gpio_6_pud_en_shift                                            (25)
#define ARM_ISO_PFUNC_gpio_6_pud_en_mask                                             (0x02000000)
#define ARM_ISO_PFUNC_gpio_6_pud_en(data)                                            (0x02000000&((data)<<25))
#define ARM_ISO_PFUNC_gpio_6_pud_en_src(data)                                        ((0x02000000&(data))>>25)
#define ARM_ISO_PFUNC_get_gpio_6_pud_en(data)                                        ((0x02000000&(data))>>25)
#define ARM_ISO_PFUNC_gpio_6_pud_sel_shift                                           (24)
#define ARM_ISO_PFUNC_gpio_6_pud_sel_mask                                            (0x01000000)
#define ARM_ISO_PFUNC_gpio_6_pud_sel(data)                                           (0x01000000&((data)<<24))
#define ARM_ISO_PFUNC_gpio_6_pud_sel_src(data)                                       ((0x01000000&(data))>>24)
#define ARM_ISO_PFUNC_get_gpio_6_pud_sel(data)                                       ((0x01000000&(data))>>24)
#define ARM_ISO_PFUNC_gpio_5_smt_shift                                               (23)
#define ARM_ISO_PFUNC_gpio_5_smt_mask                                                (0x00800000)
#define ARM_ISO_PFUNC_gpio_5_smt(data)                                               (0x00800000&((data)<<23))
#define ARM_ISO_PFUNC_gpio_5_smt_src(data)                                           ((0x00800000&(data))>>23)
#define ARM_ISO_PFUNC_get_gpio_5_smt(data)                                           ((0x00800000&(data))>>23)
#define ARM_ISO_PFUNC_gpio_5_e2_shift                                                (22)
#define ARM_ISO_PFUNC_gpio_5_e2_mask                                                 (0x00400000)
#define ARM_ISO_PFUNC_gpio_5_e2(data)                                                (0x00400000&((data)<<22))
#define ARM_ISO_PFUNC_gpio_5_e2_src(data)                                            ((0x00400000&(data))>>22)
#define ARM_ISO_PFUNC_get_gpio_5_e2(data)                                            ((0x00400000&(data))>>22)
#define ARM_ISO_PFUNC_gpio_5_pud_en_shift                                            (21)
#define ARM_ISO_PFUNC_gpio_5_pud_en_mask                                             (0x00200000)
#define ARM_ISO_PFUNC_gpio_5_pud_en(data)                                            (0x00200000&((data)<<21))
#define ARM_ISO_PFUNC_gpio_5_pud_en_src(data)                                        ((0x00200000&(data))>>21)
#define ARM_ISO_PFUNC_get_gpio_5_pud_en(data)                                        ((0x00200000&(data))>>21)
#define ARM_ISO_PFUNC_gpio_5_pud_sel_shift                                           (20)
#define ARM_ISO_PFUNC_gpio_5_pud_sel_mask                                            (0x00100000)
#define ARM_ISO_PFUNC_gpio_5_pud_sel(data)                                           (0x00100000&((data)<<20))
#define ARM_ISO_PFUNC_gpio_5_pud_sel_src(data)                                       ((0x00100000&(data))>>20)
#define ARM_ISO_PFUNC_get_gpio_5_pud_sel(data)                                       ((0x00100000&(data))>>20)
#define ARM_ISO_PFUNC_gpio_4_smt_shift                                               (19)
#define ARM_ISO_PFUNC_gpio_4_smt_mask                                                (0x00080000)
#define ARM_ISO_PFUNC_gpio_4_smt(data)                                               (0x00080000&((data)<<19))
#define ARM_ISO_PFUNC_gpio_4_smt_src(data)                                           ((0x00080000&(data))>>19)
#define ARM_ISO_PFUNC_get_gpio_4_smt(data)                                           ((0x00080000&(data))>>19)
#define ARM_ISO_PFUNC_gpio_4_e2_shift                                                (18)
#define ARM_ISO_PFUNC_gpio_4_e2_mask                                                 (0x00040000)
#define ARM_ISO_PFUNC_gpio_4_e2(data)                                                (0x00040000&((data)<<18))
#define ARM_ISO_PFUNC_gpio_4_e2_src(data)                                            ((0x00040000&(data))>>18)
#define ARM_ISO_PFUNC_get_gpio_4_e2(data)                                            ((0x00040000&(data))>>18)
#define ARM_ISO_PFUNC_gpio_4_pud_en_shift                                            (17)
#define ARM_ISO_PFUNC_gpio_4_pud_en_mask                                             (0x00020000)
#define ARM_ISO_PFUNC_gpio_4_pud_en(data)                                            (0x00020000&((data)<<17))
#define ARM_ISO_PFUNC_gpio_4_pud_en_src(data)                                        ((0x00020000&(data))>>17)
#define ARM_ISO_PFUNC_get_gpio_4_pud_en(data)                                        ((0x00020000&(data))>>17)
#define ARM_ISO_PFUNC_gpio_4_pud_sel_shift                                           (16)
#define ARM_ISO_PFUNC_gpio_4_pud_sel_mask                                            (0x00010000)
#define ARM_ISO_PFUNC_gpio_4_pud_sel(data)                                           (0x00010000&((data)<<16))
#define ARM_ISO_PFUNC_gpio_4_pud_sel_src(data)                                       ((0x00010000&(data))>>16)
#define ARM_ISO_PFUNC_get_gpio_4_pud_sel(data)                                       ((0x00010000&(data))>>16)
#define ARM_ISO_PFUNC_gpio_3_smt_shift                                               (15)
#define ARM_ISO_PFUNC_gpio_3_smt_mask                                                (0x00008000)
#define ARM_ISO_PFUNC_gpio_3_smt(data)                                               (0x00008000&((data)<<15))
#define ARM_ISO_PFUNC_gpio_3_smt_src(data)                                           ((0x00008000&(data))>>15)
#define ARM_ISO_PFUNC_get_gpio_3_smt(data)                                           ((0x00008000&(data))>>15)
#define ARM_ISO_PFUNC_gpio_3_e2_shift                                                (14)
#define ARM_ISO_PFUNC_gpio_3_e2_mask                                                 (0x00004000)
#define ARM_ISO_PFUNC_gpio_3_e2(data)                                                (0x00004000&((data)<<14))
#define ARM_ISO_PFUNC_gpio_3_e2_src(data)                                            ((0x00004000&(data))>>14)
#define ARM_ISO_PFUNC_get_gpio_3_e2(data)                                            ((0x00004000&(data))>>14)
#define ARM_ISO_PFUNC_gpio_3_pud_en_shift                                            (13)
#define ARM_ISO_PFUNC_gpio_3_pud_en_mask                                             (0x00002000)
#define ARM_ISO_PFUNC_gpio_3_pud_en(data)                                            (0x00002000&((data)<<13))
#define ARM_ISO_PFUNC_gpio_3_pud_en_src(data)                                        ((0x00002000&(data))>>13)
#define ARM_ISO_PFUNC_get_gpio_3_pud_en(data)                                        ((0x00002000&(data))>>13)
#define ARM_ISO_PFUNC_gpio_3_pud_sel_shift                                           (12)
#define ARM_ISO_PFUNC_gpio_3_pud_sel_mask                                            (0x00001000)
#define ARM_ISO_PFUNC_gpio_3_pud_sel(data)                                           (0x00001000&((data)<<12))
#define ARM_ISO_PFUNC_gpio_3_pud_sel_src(data)                                       ((0x00001000&(data))>>12)
#define ARM_ISO_PFUNC_get_gpio_3_pud_sel(data)                                       ((0x00001000&(data))>>12)
#define ARM_ISO_PFUNC_gpio_2_smt_shift                                               (11)
#define ARM_ISO_PFUNC_gpio_2_smt_mask                                                (0x00000800)
#define ARM_ISO_PFUNC_gpio_2_smt(data)                                               (0x00000800&((data)<<11))
#define ARM_ISO_PFUNC_gpio_2_smt_src(data)                                           ((0x00000800&(data))>>11)
#define ARM_ISO_PFUNC_get_gpio_2_smt(data)                                           ((0x00000800&(data))>>11)
#define ARM_ISO_PFUNC_gpio_2_e2_shift                                                (10)
#define ARM_ISO_PFUNC_gpio_2_e2_mask                                                 (0x00000400)
#define ARM_ISO_PFUNC_gpio_2_e2(data)                                                (0x00000400&((data)<<10))
#define ARM_ISO_PFUNC_gpio_2_e2_src(data)                                            ((0x00000400&(data))>>10)
#define ARM_ISO_PFUNC_get_gpio_2_e2(data)                                            ((0x00000400&(data))>>10)
#define ARM_ISO_PFUNC_gpio_2_pud_en_shift                                            (9)
#define ARM_ISO_PFUNC_gpio_2_pud_en_mask                                             (0x00000200)
#define ARM_ISO_PFUNC_gpio_2_pud_en(data)                                            (0x00000200&((data)<<9))
#define ARM_ISO_PFUNC_gpio_2_pud_en_src(data)                                        ((0x00000200&(data))>>9)
#define ARM_ISO_PFUNC_get_gpio_2_pud_en(data)                                        ((0x00000200&(data))>>9)
#define ARM_ISO_PFUNC_gpio_2_pud_sel_shift                                           (8)
#define ARM_ISO_PFUNC_gpio_2_pud_sel_mask                                            (0x00000100)
#define ARM_ISO_PFUNC_gpio_2_pud_sel(data)                                           (0x00000100&((data)<<8))
#define ARM_ISO_PFUNC_gpio_2_pud_sel_src(data)                                       ((0x00000100&(data))>>8)
#define ARM_ISO_PFUNC_get_gpio_2_pud_sel(data)                                       ((0x00000100&(data))>>8)
#define ARM_ISO_PFUNC_gpio_1_smt_shift                                               (7)
#define ARM_ISO_PFUNC_gpio_1_smt_mask                                                (0x00000080)
#define ARM_ISO_PFUNC_gpio_1_smt(data)                                               (0x00000080&((data)<<7))
#define ARM_ISO_PFUNC_gpio_1_smt_src(data)                                           ((0x00000080&(data))>>7)
#define ARM_ISO_PFUNC_get_gpio_1_smt(data)                                           ((0x00000080&(data))>>7)
#define ARM_ISO_PFUNC_gpio_1_e2_shift                                                (6)
#define ARM_ISO_PFUNC_gpio_1_e2_mask                                                 (0x00000040)
#define ARM_ISO_PFUNC_gpio_1_e2(data)                                                (0x00000040&((data)<<6))
#define ARM_ISO_PFUNC_gpio_1_e2_src(data)                                            ((0x00000040&(data))>>6)
#define ARM_ISO_PFUNC_get_gpio_1_e2(data)                                            ((0x00000040&(data))>>6)
#define ARM_ISO_PFUNC_gpio_1_pud_en_shift                                            (5)
#define ARM_ISO_PFUNC_gpio_1_pud_en_mask                                             (0x00000020)
#define ARM_ISO_PFUNC_gpio_1_pud_en(data)                                            (0x00000020&((data)<<5))
#define ARM_ISO_PFUNC_gpio_1_pud_en_src(data)                                        ((0x00000020&(data))>>5)
#define ARM_ISO_PFUNC_get_gpio_1_pud_en(data)                                        ((0x00000020&(data))>>5)
#define ARM_ISO_PFUNC_gpio_1_pud_sel_shift                                           (4)
#define ARM_ISO_PFUNC_gpio_1_pud_sel_mask                                            (0x00000010)
#define ARM_ISO_PFUNC_gpio_1_pud_sel(data)                                           (0x00000010&((data)<<4))
#define ARM_ISO_PFUNC_gpio_1_pud_sel_src(data)                                       ((0x00000010&(data))>>4)
#define ARM_ISO_PFUNC_get_gpio_1_pud_sel(data)                                       ((0x00000010&(data))>>4)
#define ARM_ISO_PFUNC_gpio_0_smt_shift                                               (3)
#define ARM_ISO_PFUNC_gpio_0_smt_mask                                                (0x00000008)
#define ARM_ISO_PFUNC_gpio_0_smt(data)                                               (0x00000008&((data)<<3))
#define ARM_ISO_PFUNC_gpio_0_smt_src(data)                                           ((0x00000008&(data))>>3)
#define ARM_ISO_PFUNC_get_gpio_0_smt(data)                                           ((0x00000008&(data))>>3)
#define ARM_ISO_PFUNC_gpio_0_e2_shift                                                (2)
#define ARM_ISO_PFUNC_gpio_0_e2_mask                                                 (0x00000004)
#define ARM_ISO_PFUNC_gpio_0_e2(data)                                                (0x00000004&((data)<<2))
#define ARM_ISO_PFUNC_gpio_0_e2_src(data)                                            ((0x00000004&(data))>>2)
#define ARM_ISO_PFUNC_get_gpio_0_e2(data)                                            ((0x00000004&(data))>>2)
#define ARM_ISO_PFUNC_gpio_0_pud_en_shift                                            (1)
#define ARM_ISO_PFUNC_gpio_0_pud_en_mask                                             (0x00000002)
#define ARM_ISO_PFUNC_gpio_0_pud_en(data)                                            (0x00000002&((data)<<1))
#define ARM_ISO_PFUNC_gpio_0_pud_en_src(data)                                        ((0x00000002&(data))>>1)
#define ARM_ISO_PFUNC_get_gpio_0_pud_en(data)                                        ((0x00000002&(data))>>1)
#define ARM_ISO_PFUNC_gpio_0_pud_sel_shift                                           (0)
#define ARM_ISO_PFUNC_gpio_0_pud_sel_mask                                            (0x00000001)
#define ARM_ISO_PFUNC_gpio_0_pud_sel(data)                                           (0x00000001&((data)<<0))
#define ARM_ISO_PFUNC_gpio_0_pud_sel_src(data)                                       ((0x00000001&(data))>>0)
#define ARM_ISO_PFUNC_get_gpio_0_pud_sel(data)                                       ((0x00000001&(data))>>0)


#endif
