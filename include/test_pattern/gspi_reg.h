/**************************************************************
// Spec Version                  : 0.0.4
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/4/22 14:17:4
***************************************************************/


#ifndef _GSPI_REG_H_INCLUDED_
#define _GSPI_REG_H_INCLUDED_
#ifdef  _GSPI_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sck_divider:8;
unsigned int     reserved_1:7;
unsigned int     Phase_adjust:1;
unsigned int     reserved_2:6;
unsigned int     phase:1;
unsigned int     polarity:1;
}SCK_CTRL;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     CS_O_VAL:1;
unsigned int     CS_OE_VAL:1;
unsigned int     CS_SEL:1;
unsigned int     reserved_1:4;
unsigned int     Tcs_high:8;
unsigned int     Tcs_end:8;
unsigned int     Tcs_start:8;
}CS_TIMING;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     SLAVE_MODE_ENABLE:1;
unsigned int     reserved_1:6;
unsigned int     CS_1_ENABLE:1;
unsigned int     CS_0_ENABLE:1;
}AUX_CTRL;

typedef struct 
{
unsigned int     reserved_0:9;
unsigned int     CMD_LEN:7;
unsigned int     reserved_1:10;
unsigned int     DMY_LEN:6;
}CMD_DUMMY;

typedef struct 
{
unsigned int     RWCMD:1;
unsigned int     Master_Full_duplex:1;
unsigned int     ADDR_LEN:8;
unsigned int     LSBfirst:1;
unsigned int     Dual_mode_sel:2;
unsigned int     First_bit_sel:1;
unsigned int     reserved_0:1;
unsigned int     Slave_Full_duplex:1;
unsigned int     WR_LEN:16;
}MOSI_CTRL;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     LSBfirst:1;
unsigned int     reserved_1:12;
unsigned int     RD_LEN:16;
}MISO_CTRL;

typedef struct 
{
unsigned int     W_FIFO:32;
}W_FIFO;

typedef struct 
{
unsigned int     R_FIFO:32;
}R_FIFO;

typedef struct 
{
unsigned int     SPI_INS:32;
}INSTRUCTION;

typedef struct 
{
unsigned int     SPI_ADDR:32;
}ADDR;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     CAL_SEL:2;
unsigned int     reserved_1:2;
unsigned int     R_FIFO_ALMOST_FULL_SEL:1;
unsigned int     W_FIFO_ALMOST_FULL_SEL:1;
unsigned int     reserved_2:7;
unsigned int     FIFO_PTR_RST:1;
unsigned int     RDFIFO_BSWAP:1;
unsigned int     CONTI_TRANS_EN:1;
unsigned int     CONTI_TRANS_LAST:1;
unsigned int     DES_MODE_ENABLE:1;
unsigned int     reserved_3:2;
unsigned int     DMA_MODE_ENABLE:1;
unsigned int     CMD_ENABLE:1;
}SPI_CTRL;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     R_FIFO_PTR:5;
unsigned int     reserved_1:3;
unsigned int     W_FIFO_PTR:5;
unsigned int     reserved_2:8;
unsigned int     reserved_3:6;
unsigned int     MD_empty:1;
unsigned int     SFC_BUSY:1;
}SPI_STATUS;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     R_FIFO_ALMOST_FULL:1;
unsigned int     R_FIFO_FULL:1;
unsigned int     reserved_1:6;
unsigned int     W_FIFO_ALMOST_EMPTY:1;
unsigned int     W_FIFO_EMPTY:1;
unsigned int     reserved_2:8;
unsigned int     reserved_3:5;
unsigned int     SYN_CODE_ERR:1;
unsigned int     DES_MODE_DONE:1;
unsigned int     CMD_DONE:1;
}SPI_INT;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     R_FIFO_ALMOST_FULL:1;
unsigned int     R_FIFO_FULL:1;
unsigned int     reserved_1:6;
unsigned int     W_FIFO_ALMOST_EMPTY:1;
unsigned int     W_FIFO_EMPTY:1;
unsigned int     reserved_2:8;
unsigned int     reserved_3:5;
unsigned int     SYN_CODE_ERR_IE:1;
unsigned int     DES_MODE_DONE_IE:1;
unsigned int     CMD_DONE_IE:1;
}SPI_INT_EN;

typedef struct 
{
unsigned int     SYN_MODE_EN:1;
unsigned int     reserved_0:17;
unsigned int     SYN_CODE_LENGTH:6;
unsigned int     reserved_1:2;
unsigned int     RESPONSE_LENGTH:6;
}SPI_SYN_CTRL;

typedef struct 
{
unsigned int     SYN_CODE:32;
}SYN_CODE;

typedef struct 
{
unsigned int     SYN_CODE_MASK:32;
}SYN_CODE_MASK;

typedef struct 
{
unsigned int     SYN_CODE_VAL:32;
}SYN_CODE_VAL;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     gating_en:1;
}POWER;

typedef struct 
{
unsigned int     dummy1:32;
}DUMMY1;

typedef struct 
{
unsigned int     dummy2:32;
}DUMMY2;

#endif

#define SCK_CTRL                                                                     0x9801BD00
#define SCK_CTRL_reg_addr                                                            "0xD801BD00"
#define SCK_CTRL_reg                                                                 0xD801BD00
#define set_SCK_CTRL_reg(data)   (*((volatile unsigned int*) SCK_CTRL_reg)=data)
#define get_SCK_CTRL_reg   (*((volatile unsigned int*) SCK_CTRL_reg))
#define SCK_CTRL_inst_adr                                                            "0x0040"
#define SCK_CTRL_inst                                                                0x0040
#define SCK_CTRL_sck_divider_shift                                                   (16)
#define SCK_CTRL_sck_divider_mask                                                    (0x00FF0000)
#define SCK_CTRL_sck_divider(data)                                                   (0x00FF0000&((data)<<16))
#define SCK_CTRL_sck_divider_src(data)                                               ((0x00FF0000&(data))>>16)
#define SCK_CTRL_get_sck_divider(data)                                               ((0x00FF0000&(data))>>16)
#define SCK_CTRL_Phase_adjust_shift                                                  (8)
#define SCK_CTRL_Phase_adjust_mask                                                   (0x00000100)
#define SCK_CTRL_Phase_adjust(data)                                                  (0x00000100&((data)<<8))
#define SCK_CTRL_Phase_adjust_src(data)                                              ((0x00000100&(data))>>8)
#define SCK_CTRL_get_Phase_adjust(data)                                              ((0x00000100&(data))>>8)
#define SCK_CTRL_phase_shift                                                         (1)
#define SCK_CTRL_phase_mask                                                          (0x00000002)
#define SCK_CTRL_phase(data)                                                         (0x00000002&((data)<<1))
#define SCK_CTRL_phase_src(data)                                                     ((0x00000002&(data))>>1)
#define SCK_CTRL_get_phase(data)                                                     ((0x00000002&(data))>>1)
#define SCK_CTRL_polarity_shift                                                      (0)
#define SCK_CTRL_polarity_mask                                                       (0x00000001)
#define SCK_CTRL_polarity(data)                                                      (0x00000001&((data)<<0))
#define SCK_CTRL_polarity_src(data)                                                  ((0x00000001&(data))>>0)
#define SCK_CTRL_get_polarity(data)                                                  ((0x00000001&(data))>>0)


#define CS_TIMING                                                                    0x9801BD04
#define CS_TIMING_reg_addr                                                           "0xD801BD04"
#define CS_TIMING_reg                                                                0xD801BD04
#define set_CS_TIMING_reg(data)   (*((volatile unsigned int*) CS_TIMING_reg)=data)
#define get_CS_TIMING_reg   (*((volatile unsigned int*) CS_TIMING_reg))
#define CS_TIMING_inst_adr                                                           "0x0041"
#define CS_TIMING_inst                                                               0x0041
#define CS_TIMING_CS_O_VAL_shift                                                     (30)
#define CS_TIMING_CS_O_VAL_mask                                                      (0x40000000)
#define CS_TIMING_CS_O_VAL(data)                                                     (0x40000000&((data)<<30))
#define CS_TIMING_CS_O_VAL_src(data)                                                 ((0x40000000&(data))>>30)
#define CS_TIMING_get_CS_O_VAL(data)                                                 ((0x40000000&(data))>>30)
#define CS_TIMING_CS_OE_VAL_shift                                                    (29)
#define CS_TIMING_CS_OE_VAL_mask                                                     (0x20000000)
#define CS_TIMING_CS_OE_VAL(data)                                                    (0x20000000&((data)<<29))
#define CS_TIMING_CS_OE_VAL_src(data)                                                ((0x20000000&(data))>>29)
#define CS_TIMING_get_CS_OE_VAL(data)                                                ((0x20000000&(data))>>29)
#define CS_TIMING_CS_SEL_shift                                                       (28)
#define CS_TIMING_CS_SEL_mask                                                        (0x10000000)
#define CS_TIMING_CS_SEL(data)                                                       (0x10000000&((data)<<28))
#define CS_TIMING_CS_SEL_src(data)                                                   ((0x10000000&(data))>>28)
#define CS_TIMING_get_CS_SEL(data)                                                   ((0x10000000&(data))>>28)
#define CS_TIMING_Tcs_high_shift                                                     (16)
#define CS_TIMING_Tcs_high_mask                                                      (0x00FF0000)
#define CS_TIMING_Tcs_high(data)                                                     (0x00FF0000&((data)<<16))
#define CS_TIMING_Tcs_high_src(data)                                                 ((0x00FF0000&(data))>>16)
#define CS_TIMING_get_Tcs_high(data)                                                 ((0x00FF0000&(data))>>16)
#define CS_TIMING_Tcs_end_shift                                                      (8)
#define CS_TIMING_Tcs_end_mask                                                       (0x0000FF00)
#define CS_TIMING_Tcs_end(data)                                                      (0x0000FF00&((data)<<8))
#define CS_TIMING_Tcs_end_src(data)                                                  ((0x0000FF00&(data))>>8)
#define CS_TIMING_get_Tcs_end(data)                                                  ((0x0000FF00&(data))>>8)
#define CS_TIMING_Tcs_start_shift                                                    (0)
#define CS_TIMING_Tcs_start_mask                                                     (0x000000FF)
#define CS_TIMING_Tcs_start(data)                                                    (0x000000FF&((data)<<0))
#define CS_TIMING_Tcs_start_src(data)                                                ((0x000000FF&(data))>>0)
#define CS_TIMING_get_Tcs_start(data)                                                ((0x000000FF&(data))>>0)


#define AUX_CTRL                                                                     0x9801BD08
#define AUX_CTRL_reg_addr                                                            "0xD801BD08"
#define AUX_CTRL_reg                                                                 0xD801BD08
#define set_AUX_CTRL_reg(data)   (*((volatile unsigned int*) AUX_CTRL_reg)=data)
#define get_AUX_CTRL_reg   (*((volatile unsigned int*) AUX_CTRL_reg))
#define AUX_CTRL_inst_adr                                                            "0x0042"
#define AUX_CTRL_inst                                                                0x0042
#define AUX_CTRL_SLAVE_MODE_ENABLE_shift                                             (8)
#define AUX_CTRL_SLAVE_MODE_ENABLE_mask                                              (0x00000100)
#define AUX_CTRL_SLAVE_MODE_ENABLE(data)                                             (0x00000100&((data)<<8))
#define AUX_CTRL_SLAVE_MODE_ENABLE_src(data)                                         ((0x00000100&(data))>>8)
#define AUX_CTRL_get_SLAVE_MODE_ENABLE(data)                                         ((0x00000100&(data))>>8)
#define AUX_CTRL_CS_1_ENABLE_shift                                                   (1)
#define AUX_CTRL_CS_1_ENABLE_mask                                                    (0x00000002)
#define AUX_CTRL_CS_1_ENABLE(data)                                                   (0x00000002&((data)<<1))
#define AUX_CTRL_CS_1_ENABLE_src(data)                                               ((0x00000002&(data))>>1)
#define AUX_CTRL_get_CS_1_ENABLE(data)                                               ((0x00000002&(data))>>1)
#define AUX_CTRL_CS_0_ENABLE_shift                                                   (0)
#define AUX_CTRL_CS_0_ENABLE_mask                                                    (0x00000001)
#define AUX_CTRL_CS_0_ENABLE(data)                                                   (0x00000001&((data)<<0))
#define AUX_CTRL_CS_0_ENABLE_src(data)                                               ((0x00000001&(data))>>0)
#define AUX_CTRL_get_CS_0_ENABLE(data)                                               ((0x00000001&(data))>>0)


#define CMD_DUMMY                                                                    0x9801BD0C
#define CMD_DUMMY_reg_addr                                                           "0xD801BD0C"
#define CMD_DUMMY_reg                                                                0xD801BD0C
#define set_CMD_DUMMY_reg(data)   (*((volatile unsigned int*) CMD_DUMMY_reg)=data)
#define get_CMD_DUMMY_reg   (*((volatile unsigned int*) CMD_DUMMY_reg))
#define CMD_DUMMY_inst_adr                                                           "0x0043"
#define CMD_DUMMY_inst                                                               0x0043
#define CMD_DUMMY_CMD_LEN_shift                                                      (16)
#define CMD_DUMMY_CMD_LEN_mask                                                       (0x007F0000)
#define CMD_DUMMY_CMD_LEN(data)                                                      (0x007F0000&((data)<<16))
#define CMD_DUMMY_CMD_LEN_src(data)                                                  ((0x007F0000&(data))>>16)
#define CMD_DUMMY_get_CMD_LEN(data)                                                  ((0x007F0000&(data))>>16)
#define CMD_DUMMY_DMY_LEN_shift                                                      (0)
#define CMD_DUMMY_DMY_LEN_mask                                                       (0x0000003F)
#define CMD_DUMMY_DMY_LEN(data)                                                      (0x0000003F&((data)<<0))
#define CMD_DUMMY_DMY_LEN_src(data)                                                  ((0x0000003F&(data))>>0)
#define CMD_DUMMY_get_DMY_LEN(data)                                                  ((0x0000003F&(data))>>0)


#define MOSI_CTRL                                                                    0x9801BD10
#define MOSI_CTRL_reg_addr                                                           "0xD801BD10"
#define MOSI_CTRL_reg                                                                0xD801BD10
#define set_MOSI_CTRL_reg(data)   (*((volatile unsigned int*) MOSI_CTRL_reg)=data)
#define get_MOSI_CTRL_reg   (*((volatile unsigned int*) MOSI_CTRL_reg))
#define MOSI_CTRL_inst_adr                                                           "0x0044"
#define MOSI_CTRL_inst                                                               0x0044
#define MOSI_CTRL_RWCMD_shift                                                        (31)
#define MOSI_CTRL_RWCMD_mask                                                         (0x80000000)
#define MOSI_CTRL_RWCMD(data)                                                        (0x80000000&((data)<<31))
#define MOSI_CTRL_RWCMD_src(data)                                                    ((0x80000000&(data))>>31)
#define MOSI_CTRL_get_RWCMD(data)                                                    ((0x80000000&(data))>>31)
#define MOSI_CTRL_Master_Full_duplex_shift                                           (30)
#define MOSI_CTRL_Master_Full_duplex_mask                                            (0x40000000)
#define MOSI_CTRL_Master_Full_duplex(data)                                           (0x40000000&((data)<<30))
#define MOSI_CTRL_Master_Full_duplex_src(data)                                       ((0x40000000&(data))>>30)
#define MOSI_CTRL_get_Master_Full_duplex(data)                                       ((0x40000000&(data))>>30)
#define MOSI_CTRL_ADDR_LEN_shift                                                     (22)
#define MOSI_CTRL_ADDR_LEN_mask                                                      (0x3FC00000)
#define MOSI_CTRL_ADDR_LEN(data)                                                     (0x3FC00000&((data)<<22))
#define MOSI_CTRL_ADDR_LEN_src(data)                                                 ((0x3FC00000&(data))>>22)
#define MOSI_CTRL_get_ADDR_LEN(data)                                                 ((0x3FC00000&(data))>>22)
#define MOSI_CTRL_LSBfirst_shift                                                     (21)
#define MOSI_CTRL_LSBfirst_mask                                                      (0x00200000)
#define MOSI_CTRL_LSBfirst(data)                                                     (0x00200000&((data)<<21))
#define MOSI_CTRL_LSBfirst_src(data)                                                 ((0x00200000&(data))>>21)
#define MOSI_CTRL_get_LSBfirst(data)                                                 ((0x00200000&(data))>>21)
#define MOSI_CTRL_Dual_mode_sel_shift                                                (19)
#define MOSI_CTRL_Dual_mode_sel_mask                                                 (0x00180000)
#define MOSI_CTRL_Dual_mode_sel(data)                                                (0x00180000&((data)<<19))
#define MOSI_CTRL_Dual_mode_sel_src(data)                                            ((0x00180000&(data))>>19)
#define MOSI_CTRL_get_Dual_mode_sel(data)                                            ((0x00180000&(data))>>19)
#define MOSI_CTRL_First_bit_sel_shift                                                (18)
#define MOSI_CTRL_First_bit_sel_mask                                                 (0x00040000)
#define MOSI_CTRL_First_bit_sel(data)                                                (0x00040000&((data)<<18))
#define MOSI_CTRL_First_bit_sel_src(data)                                            ((0x00040000&(data))>>18)
#define MOSI_CTRL_get_First_bit_sel(data)                                            ((0x00040000&(data))>>18)
#define MOSI_CTRL_Slave_Full_duplex_shift                                            (16)
#define MOSI_CTRL_Slave_Full_duplex_mask                                             (0x00010000)
#define MOSI_CTRL_Slave_Full_duplex(data)                                            (0x00010000&((data)<<16))
#define MOSI_CTRL_Slave_Full_duplex_src(data)                                        ((0x00010000&(data))>>16)
#define MOSI_CTRL_get_Slave_Full_duplex(data)                                        ((0x00010000&(data))>>16)
#define MOSI_CTRL_WR_LEN_shift                                                       (0)
#define MOSI_CTRL_WR_LEN_mask                                                        (0x0000FFFF)
#define MOSI_CTRL_WR_LEN(data)                                                       (0x0000FFFF&((data)<<0))
#define MOSI_CTRL_WR_LEN_src(data)                                                   ((0x0000FFFF&(data))>>0)
#define MOSI_CTRL_get_WR_LEN(data)                                                   ((0x0000FFFF&(data))>>0)


#define MISO_CTRL                                                                    0x9801BD14
#define MISO_CTRL_reg_addr                                                           "0xD801BD14"
#define MISO_CTRL_reg                                                                0xD801BD14
#define set_MISO_CTRL_reg(data)   (*((volatile unsigned int*) MISO_CTRL_reg)=data)
#define get_MISO_CTRL_reg   (*((volatile unsigned int*) MISO_CTRL_reg))
#define MISO_CTRL_inst_adr                                                           "0x0045"
#define MISO_CTRL_inst                                                               0x0045
#define MISO_CTRL_LSBfirst_shift                                                     (28)
#define MISO_CTRL_LSBfirst_mask                                                      (0x10000000)
#define MISO_CTRL_LSBfirst(data)                                                     (0x10000000&((data)<<28))
#define MISO_CTRL_LSBfirst_src(data)                                                 ((0x10000000&(data))>>28)
#define MISO_CTRL_get_LSBfirst(data)                                                 ((0x10000000&(data))>>28)
#define MISO_CTRL_RD_LEN_shift                                                       (0)
#define MISO_CTRL_RD_LEN_mask                                                        (0x0000FFFF)
#define MISO_CTRL_RD_LEN(data)                                                       (0x0000FFFF&((data)<<0))
#define MISO_CTRL_RD_LEN_src(data)                                                   ((0x0000FFFF&(data))>>0)
#define MISO_CTRL_get_RD_LEN(data)                                                   ((0x0000FFFF&(data))>>0)


#define W_FIFO                                                                       0x9801BD18
#define W_FIFO_reg_addr                                                              "0xD801BD18"
#define W_FIFO_reg                                                                   0xD801BD18
#define set_W_FIFO_reg(data)   (*((volatile unsigned int*) W_FIFO_reg)=data)
#define get_W_FIFO_reg   (*((volatile unsigned int*) W_FIFO_reg))
#define W_FIFO_inst_adr                                                              "0x0046"
#define W_FIFO_inst                                                                  0x0046
#define W_FIFO_W_FIFO_shift                                                          (0)
#define W_FIFO_W_FIFO_mask                                                           (0xFFFFFFFF)
#define W_FIFO_W_FIFO(data)                                                          (0xFFFFFFFF&((data)<<0))
#define W_FIFO_W_FIFO_src(data)                                                      ((0xFFFFFFFF&(data))>>0)
#define W_FIFO_get_W_FIFO(data)                                                      ((0xFFFFFFFF&(data))>>0)


#define R_FIFO                                                                       0x9801BD1C
#define R_FIFO_reg_addr                                                              "0xD801BD1C"
#define R_FIFO_reg                                                                   0xD801BD1C
#define set_R_FIFO_reg(data)   (*((volatile unsigned int*) R_FIFO_reg)=data)
#define get_R_FIFO_reg   (*((volatile unsigned int*) R_FIFO_reg))
#define R_FIFO_inst_adr                                                              "0x0047"
#define R_FIFO_inst                                                                  0x0047
#define R_FIFO_R_FIFO_shift                                                          (0)
#define R_FIFO_R_FIFO_mask                                                           (0xFFFFFFFF)
#define R_FIFO_R_FIFO(data)                                                          (0xFFFFFFFF&((data)<<0))
#define R_FIFO_R_FIFO_src(data)                                                      ((0xFFFFFFFF&(data))>>0)
#define R_FIFO_get_R_FIFO(data)                                                      ((0xFFFFFFFF&(data))>>0)


#define INSTRUCTION                                                                  0x9801BD20
#define INSTRUCTION_reg_addr                                                         "0xD801BD20"
#define INSTRUCTION_reg                                                              0xD801BD20
#define set_INSTRUCTION_reg(data)   (*((volatile unsigned int*) INSTRUCTION_reg)=data)
#define get_INSTRUCTION_reg   (*((volatile unsigned int*) INSTRUCTION_reg))
#define INSTRUCTION_inst_adr                                                         "0x0048"
#define INSTRUCTION_inst                                                             0x0048
#define INSTRUCTION_SPI_INS_shift                                                    (0)
#define INSTRUCTION_SPI_INS_mask                                                     (0xFFFFFFFF)
#define INSTRUCTION_SPI_INS(data)                                                    (0xFFFFFFFF&((data)<<0))
#define INSTRUCTION_SPI_INS_src(data)                                                ((0xFFFFFFFF&(data))>>0)
#define INSTRUCTION_get_SPI_INS(data)                                                ((0xFFFFFFFF&(data))>>0)


#define ADDR                                                                         0x9801BD24
#define ADDR_reg_addr                                                                "0xD801BD24"
#define ADDR_reg                                                                     0xD801BD24
#define set_ADDR_reg(data)   (*((volatile unsigned int*) ADDR_reg)=data)
#define get_ADDR_reg   (*((volatile unsigned int*) ADDR_reg))
#define ADDR_inst_adr                                                                "0x0049"
#define ADDR_inst                                                                    0x0049
#define ADDR_SPI_ADDR_shift                                                          (0)
#define ADDR_SPI_ADDR_mask                                                           (0xFFFFFFFF)
#define ADDR_SPI_ADDR(data)                                                          (0xFFFFFFFF&((data)<<0))
#define ADDR_SPI_ADDR_src(data)                                                      ((0xFFFFFFFF&(data))>>0)
#define ADDR_get_SPI_ADDR(data)                                                      ((0xFFFFFFFF&(data))>>0)


#define SPI_CTRL                                                                     0x9801BD28
#define SPI_CTRL_reg_addr                                                            "0xD801BD28"
#define SPI_CTRL_reg                                                                 0xD801BD28
#define set_SPI_CTRL_reg(data)   (*((volatile unsigned int*) SPI_CTRL_reg)=data)
#define get_SPI_CTRL_reg   (*((volatile unsigned int*) SPI_CTRL_reg))
#define SPI_CTRL_inst_adr                                                            "0x004A"
#define SPI_CTRL_inst                                                                0x004A
#define SPI_CTRL_CAL_SEL_shift                                                       (20)
#define SPI_CTRL_CAL_SEL_mask                                                        (0x00300000)
#define SPI_CTRL_CAL_SEL(data)                                                       (0x00300000&((data)<<20))
#define SPI_CTRL_CAL_SEL_src(data)                                                   ((0x00300000&(data))>>20)
#define SPI_CTRL_get_CAL_SEL(data)                                                   ((0x00300000&(data))>>20)
#define SPI_CTRL_R_FIFO_ALMOST_FULL_SEL_shift                                        (17)
#define SPI_CTRL_R_FIFO_ALMOST_FULL_SEL_mask                                         (0x00020000)
#define SPI_CTRL_R_FIFO_ALMOST_FULL_SEL(data)                                        (0x00020000&((data)<<17))
#define SPI_CTRL_R_FIFO_ALMOST_FULL_SEL_src(data)                                    ((0x00020000&(data))>>17)
#define SPI_CTRL_get_R_FIFO_ALMOST_FULL_SEL(data)                                    ((0x00020000&(data))>>17)
#define SPI_CTRL_W_FIFO_ALMOST_FULL_SEL_shift                                        (16)
#define SPI_CTRL_W_FIFO_ALMOST_FULL_SEL_mask                                         (0x00010000)
#define SPI_CTRL_W_FIFO_ALMOST_FULL_SEL(data)                                        (0x00010000&((data)<<16))
#define SPI_CTRL_W_FIFO_ALMOST_FULL_SEL_src(data)                                    ((0x00010000&(data))>>16)
#define SPI_CTRL_get_W_FIFO_ALMOST_FULL_SEL(data)                                    ((0x00010000&(data))>>16)
#define SPI_CTRL_FIFO_PTR_RST_shift                                                  (8)
#define SPI_CTRL_FIFO_PTR_RST_mask                                                   (0x00000100)
#define SPI_CTRL_FIFO_PTR_RST(data)                                                  (0x00000100&((data)<<8))
#define SPI_CTRL_FIFO_PTR_RST_src(data)                                              ((0x00000100&(data))>>8)
#define SPI_CTRL_get_FIFO_PTR_RST(data)                                              ((0x00000100&(data))>>8)
#define SPI_CTRL_RDFIFO_BSWAP_shift                                                  (7)
#define SPI_CTRL_RDFIFO_BSWAP_mask                                                   (0x00000080)
#define SPI_CTRL_RDFIFO_BSWAP(data)                                                  (0x00000080&((data)<<7))
#define SPI_CTRL_RDFIFO_BSWAP_src(data)                                              ((0x00000080&(data))>>7)
#define SPI_CTRL_get_RDFIFO_BSWAP(data)                                              ((0x00000080&(data))>>7)
#define SPI_CTRL_CONTI_TRANS_EN_shift                                                (6)
#define SPI_CTRL_CONTI_TRANS_EN_mask                                                 (0x00000040)
#define SPI_CTRL_CONTI_TRANS_EN(data)                                                (0x00000040&((data)<<6))
#define SPI_CTRL_CONTI_TRANS_EN_src(data)                                            ((0x00000040&(data))>>6)
#define SPI_CTRL_get_CONTI_TRANS_EN(data)                                            ((0x00000040&(data))>>6)
#define SPI_CTRL_CONTI_TRANS_LAST_shift                                              (5)
#define SPI_CTRL_CONTI_TRANS_LAST_mask                                               (0x00000020)
#define SPI_CTRL_CONTI_TRANS_LAST(data)                                              (0x00000020&((data)<<5))
#define SPI_CTRL_CONTI_TRANS_LAST_src(data)                                          ((0x00000020&(data))>>5)
#define SPI_CTRL_get_CONTI_TRANS_LAST(data)                                          ((0x00000020&(data))>>5)
#define SPI_CTRL_DES_MODE_ENABLE_shift                                               (4)
#define SPI_CTRL_DES_MODE_ENABLE_mask                                                (0x00000010)
#define SPI_CTRL_DES_MODE_ENABLE(data)                                               (0x00000010&((data)<<4))
#define SPI_CTRL_DES_MODE_ENABLE_src(data)                                           ((0x00000010&(data))>>4)
#define SPI_CTRL_get_DES_MODE_ENABLE(data)                                           ((0x00000010&(data))>>4)
#define SPI_CTRL_DMA_MODE_ENABLE_shift                                               (1)
#define SPI_CTRL_DMA_MODE_ENABLE_mask                                                (0x00000002)
#define SPI_CTRL_DMA_MODE_ENABLE(data)                                               (0x00000002&((data)<<1))
#define SPI_CTRL_DMA_MODE_ENABLE_src(data)                                           ((0x00000002&(data))>>1)
#define SPI_CTRL_get_DMA_MODE_ENABLE(data)                                           ((0x00000002&(data))>>1)
#define SPI_CTRL_CMD_ENABLE_shift                                                    (0)
#define SPI_CTRL_CMD_ENABLE_mask                                                     (0x00000001)
#define SPI_CTRL_CMD_ENABLE(data)                                                    (0x00000001&((data)<<0))
#define SPI_CTRL_CMD_ENABLE_src(data)                                                ((0x00000001&(data))>>0)
#define SPI_CTRL_get_CMD_ENABLE(data)                                                ((0x00000001&(data))>>0)


#define SPI_STATUS                                                                   0x9801BD2C
#define SPI_STATUS_reg_addr                                                          "0xD801BD2C"
#define SPI_STATUS_reg                                                               0xD801BD2C
#define set_SPI_STATUS_reg(data)   (*((volatile unsigned int*) SPI_STATUS_reg)=data)
#define get_SPI_STATUS_reg   (*((volatile unsigned int*) SPI_STATUS_reg))
#define SPI_STATUS_inst_adr                                                          "0x004B"
#define SPI_STATUS_inst                                                              0x004B
#define SPI_STATUS_R_FIFO_PTR_shift                                                  (24)
#define SPI_STATUS_R_FIFO_PTR_mask                                                   (0x1F000000)
#define SPI_STATUS_R_FIFO_PTR(data)                                                  (0x1F000000&((data)<<24))
#define SPI_STATUS_R_FIFO_PTR_src(data)                                              ((0x1F000000&(data))>>24)
#define SPI_STATUS_get_R_FIFO_PTR(data)                                              ((0x1F000000&(data))>>24)
#define SPI_STATUS_W_FIFO_PTR_shift                                                  (16)
#define SPI_STATUS_W_FIFO_PTR_mask                                                   (0x001F0000)
#define SPI_STATUS_W_FIFO_PTR(data)                                                  (0x001F0000&((data)<<16))
#define SPI_STATUS_W_FIFO_PTR_src(data)                                              ((0x001F0000&(data))>>16)
#define SPI_STATUS_get_W_FIFO_PTR(data)                                              ((0x001F0000&(data))>>16)
#define SPI_STATUS_MD_empty_shift                                                    (1)
#define SPI_STATUS_MD_empty_mask                                                     (0x00000002)
#define SPI_STATUS_MD_empty(data)                                                    (0x00000002&((data)<<1))
#define SPI_STATUS_MD_empty_src(data)                                                ((0x00000002&(data))>>1)
#define SPI_STATUS_get_MD_empty(data)                                                ((0x00000002&(data))>>1)
#define SPI_STATUS_SFC_BUSY_shift                                                    (0)
#define SPI_STATUS_SFC_BUSY_mask                                                     (0x00000001)
#define SPI_STATUS_SFC_BUSY(data)                                                    (0x00000001&((data)<<0))
#define SPI_STATUS_SFC_BUSY_src(data)                                                ((0x00000001&(data))>>0)
#define SPI_STATUS_get_SFC_BUSY(data)                                                ((0x00000001&(data))>>0)


#define SPI_INT                                                                      0x9801BD30
#define SPI_INT_reg_addr                                                             "0xD801BD30"
#define SPI_INT_reg                                                                  0xD801BD30
#define set_SPI_INT_reg(data)   (*((volatile unsigned int*) SPI_INT_reg)=data)
#define get_SPI_INT_reg   (*((volatile unsigned int*) SPI_INT_reg))
#define SPI_INT_inst_adr                                                             "0x004C"
#define SPI_INT_inst                                                                 0x004C
#define SPI_INT_R_FIFO_ALMOST_FULL_shift                                             (25)
#define SPI_INT_R_FIFO_ALMOST_FULL_mask                                              (0x02000000)
#define SPI_INT_R_FIFO_ALMOST_FULL(data)                                             (0x02000000&((data)<<25))
#define SPI_INT_R_FIFO_ALMOST_FULL_src(data)                                         ((0x02000000&(data))>>25)
#define SPI_INT_get_R_FIFO_ALMOST_FULL(data)                                         ((0x02000000&(data))>>25)
#define SPI_INT_R_FIFO_FULL_shift                                                    (24)
#define SPI_INT_R_FIFO_FULL_mask                                                     (0x01000000)
#define SPI_INT_R_FIFO_FULL(data)                                                    (0x01000000&((data)<<24))
#define SPI_INT_R_FIFO_FULL_src(data)                                                ((0x01000000&(data))>>24)
#define SPI_INT_get_R_FIFO_FULL(data)                                                ((0x01000000&(data))>>24)
#define SPI_INT_W_FIFO_ALMOST_EMPTY_shift                                            (17)
#define SPI_INT_W_FIFO_ALMOST_EMPTY_mask                                             (0x00020000)
#define SPI_INT_W_FIFO_ALMOST_EMPTY(data)                                            (0x00020000&((data)<<17))
#define SPI_INT_W_FIFO_ALMOST_EMPTY_src(data)                                        ((0x00020000&(data))>>17)
#define SPI_INT_get_W_FIFO_ALMOST_EMPTY(data)                                        ((0x00020000&(data))>>17)
#define SPI_INT_W_FIFO_EMPTY_shift                                                   (16)
#define SPI_INT_W_FIFO_EMPTY_mask                                                    (0x00010000)
#define SPI_INT_W_FIFO_EMPTY(data)                                                   (0x00010000&((data)<<16))
#define SPI_INT_W_FIFO_EMPTY_src(data)                                               ((0x00010000&(data))>>16)
#define SPI_INT_get_W_FIFO_EMPTY(data)                                               ((0x00010000&(data))>>16)
#define SPI_INT_SYN_CODE_ERR_shift                                                   (2)
#define SPI_INT_SYN_CODE_ERR_mask                                                    (0x00000004)
#define SPI_INT_SYN_CODE_ERR(data)                                                   (0x00000004&((data)<<2))
#define SPI_INT_SYN_CODE_ERR_src(data)                                               ((0x00000004&(data))>>2)
#define SPI_INT_get_SYN_CODE_ERR(data)                                               ((0x00000004&(data))>>2)
#define SPI_INT_DES_MODE_DONE_shift                                                  (1)
#define SPI_INT_DES_MODE_DONE_mask                                                   (0x00000002)
#define SPI_INT_DES_MODE_DONE(data)                                                  (0x00000002&((data)<<1))
#define SPI_INT_DES_MODE_DONE_src(data)                                              ((0x00000002&(data))>>1)
#define SPI_INT_get_DES_MODE_DONE(data)                                              ((0x00000002&(data))>>1)
#define SPI_INT_CMD_DONE_shift                                                       (0)
#define SPI_INT_CMD_DONE_mask                                                        (0x00000001)
#define SPI_INT_CMD_DONE(data)                                                       (0x00000001&((data)<<0))
#define SPI_INT_CMD_DONE_src(data)                                                   ((0x00000001&(data))>>0)
#define SPI_INT_get_CMD_DONE(data)                                                   ((0x00000001&(data))>>0)


#define SPI_INT_EN                                                                   0x9801BD34
#define SPI_INT_EN_reg_addr                                                          "0xD801BD34"
#define SPI_INT_EN_reg                                                               0xD801BD34
#define set_SPI_INT_EN_reg(data)   (*((volatile unsigned int*) SPI_INT_EN_reg)=data)
#define get_SPI_INT_EN_reg   (*((volatile unsigned int*) SPI_INT_EN_reg))
#define SPI_INT_EN_inst_adr                                                          "0x004D"
#define SPI_INT_EN_inst                                                              0x004D
#define SPI_INT_EN_R_FIFO_ALMOST_FULL_shift                                          (25)
#define SPI_INT_EN_R_FIFO_ALMOST_FULL_mask                                           (0x02000000)
#define SPI_INT_EN_R_FIFO_ALMOST_FULL(data)                                          (0x02000000&((data)<<25))
#define SPI_INT_EN_R_FIFO_ALMOST_FULL_src(data)                                      ((0x02000000&(data))>>25)
#define SPI_INT_EN_get_R_FIFO_ALMOST_FULL(data)                                      ((0x02000000&(data))>>25)
#define SPI_INT_EN_R_FIFO_FULL_shift                                                 (24)
#define SPI_INT_EN_R_FIFO_FULL_mask                                                  (0x01000000)
#define SPI_INT_EN_R_FIFO_FULL(data)                                                 (0x01000000&((data)<<24))
#define SPI_INT_EN_R_FIFO_FULL_src(data)                                             ((0x01000000&(data))>>24)
#define SPI_INT_EN_get_R_FIFO_FULL(data)                                             ((0x01000000&(data))>>24)
#define SPI_INT_EN_W_FIFO_ALMOST_EMPTY_shift                                         (17)
#define SPI_INT_EN_W_FIFO_ALMOST_EMPTY_mask                                          (0x00020000)
#define SPI_INT_EN_W_FIFO_ALMOST_EMPTY(data)                                         (0x00020000&((data)<<17))
#define SPI_INT_EN_W_FIFO_ALMOST_EMPTY_src(data)                                     ((0x00020000&(data))>>17)
#define SPI_INT_EN_get_W_FIFO_ALMOST_EMPTY(data)                                     ((0x00020000&(data))>>17)
#define SPI_INT_EN_W_FIFO_EMPTY_shift                                                (16)
#define SPI_INT_EN_W_FIFO_EMPTY_mask                                                 (0x00010000)
#define SPI_INT_EN_W_FIFO_EMPTY(data)                                                (0x00010000&((data)<<16))
#define SPI_INT_EN_W_FIFO_EMPTY_src(data)                                            ((0x00010000&(data))>>16)
#define SPI_INT_EN_get_W_FIFO_EMPTY(data)                                            ((0x00010000&(data))>>16)
#define SPI_INT_EN_SYN_CODE_ERR_IE_shift                                             (2)
#define SPI_INT_EN_SYN_CODE_ERR_IE_mask                                              (0x00000004)
#define SPI_INT_EN_SYN_CODE_ERR_IE(data)                                             (0x00000004&((data)<<2))
#define SPI_INT_EN_SYN_CODE_ERR_IE_src(data)                                         ((0x00000004&(data))>>2)
#define SPI_INT_EN_get_SYN_CODE_ERR_IE(data)                                         ((0x00000004&(data))>>2)
#define SPI_INT_EN_DES_MODE_DONE_IE_shift                                            (1)
#define SPI_INT_EN_DES_MODE_DONE_IE_mask                                             (0x00000002)
#define SPI_INT_EN_DES_MODE_DONE_IE(data)                                            (0x00000002&((data)<<1))
#define SPI_INT_EN_DES_MODE_DONE_IE_src(data)                                        ((0x00000002&(data))>>1)
#define SPI_INT_EN_get_DES_MODE_DONE_IE(data)                                        ((0x00000002&(data))>>1)
#define SPI_INT_EN_CMD_DONE_IE_shift                                                 (0)
#define SPI_INT_EN_CMD_DONE_IE_mask                                                  (0x00000001)
#define SPI_INT_EN_CMD_DONE_IE(data)                                                 (0x00000001&((data)<<0))
#define SPI_INT_EN_CMD_DONE_IE_src(data)                                             ((0x00000001&(data))>>0)
#define SPI_INT_EN_get_CMD_DONE_IE(data)                                             ((0x00000001&(data))>>0)


#define SPI_SYN_CTRL                                                                 0x9801BD38
#define SPI_SYN_CTRL_reg_addr                                                        "0xD801BD38"
#define SPI_SYN_CTRL_reg                                                             0xD801BD38
#define set_SPI_SYN_CTRL_reg(data)   (*((volatile unsigned int*) SPI_SYN_CTRL_reg)=data)
#define get_SPI_SYN_CTRL_reg   (*((volatile unsigned int*) SPI_SYN_CTRL_reg))
#define SPI_SYN_CTRL_inst_adr                                                        "0x004E"
#define SPI_SYN_CTRL_inst                                                            0x004E
#define SPI_SYN_CTRL_SYN_MODE_EN_shift                                               (31)
#define SPI_SYN_CTRL_SYN_MODE_EN_mask                                                (0x80000000)
#define SPI_SYN_CTRL_SYN_MODE_EN(data)                                               (0x80000000&((data)<<31))
#define SPI_SYN_CTRL_SYN_MODE_EN_src(data)                                           ((0x80000000&(data))>>31)
#define SPI_SYN_CTRL_get_SYN_MODE_EN(data)                                           ((0x80000000&(data))>>31)
#define SPI_SYN_CTRL_SYN_CODE_LENGTH_shift                                           (8)
#define SPI_SYN_CTRL_SYN_CODE_LENGTH_mask                                            (0x00003F00)
#define SPI_SYN_CTRL_SYN_CODE_LENGTH(data)                                           (0x00003F00&((data)<<8))
#define SPI_SYN_CTRL_SYN_CODE_LENGTH_src(data)                                       ((0x00003F00&(data))>>8)
#define SPI_SYN_CTRL_get_SYN_CODE_LENGTH(data)                                       ((0x00003F00&(data))>>8)
#define SPI_SYN_CTRL_RESPONSE_LENGTH_shift                                           (0)
#define SPI_SYN_CTRL_RESPONSE_LENGTH_mask                                            (0x0000003F)
#define SPI_SYN_CTRL_RESPONSE_LENGTH(data)                                           (0x0000003F&((data)<<0))
#define SPI_SYN_CTRL_RESPONSE_LENGTH_src(data)                                       ((0x0000003F&(data))>>0)
#define SPI_SYN_CTRL_get_RESPONSE_LENGTH(data)                                       ((0x0000003F&(data))>>0)


#define SYN_CODE                                                                     0x9801BD3C
#define SYN_CODE_reg_addr                                                            "0xD801BD3C"
#define SYN_CODE_reg                                                                 0xD801BD3C
#define set_SYN_CODE_reg(data)   (*((volatile unsigned int*) SYN_CODE_reg)=data)
#define get_SYN_CODE_reg   (*((volatile unsigned int*) SYN_CODE_reg))
#define SYN_CODE_inst_adr                                                            "0x004F"
#define SYN_CODE_inst                                                                0x004F
#define SYN_CODE_SYN_CODE_shift                                                      (0)
#define SYN_CODE_SYN_CODE_mask                                                       (0xFFFFFFFF)
#define SYN_CODE_SYN_CODE(data)                                                      (0xFFFFFFFF&((data)<<0))
#define SYN_CODE_SYN_CODE_src(data)                                                  ((0xFFFFFFFF&(data))>>0)
#define SYN_CODE_get_SYN_CODE(data)                                                  ((0xFFFFFFFF&(data))>>0)


#define SYN_CODE_MASK                                                                0x9801BD40
#define SYN_CODE_MASK_reg_addr                                                       "0xD801BD40"
#define SYN_CODE_MASK_reg                                                            0xD801BD40
#define set_SYN_CODE_MASK_reg(data)   (*((volatile unsigned int*) SYN_CODE_MASK_reg)=data)
#define get_SYN_CODE_MASK_reg   (*((volatile unsigned int*) SYN_CODE_MASK_reg))
#define SYN_CODE_MASK_inst_adr                                                       "0x0050"
#define SYN_CODE_MASK_inst                                                           0x0050
#define SYN_CODE_MASK_SYN_CODE_MASK_shift                                            (0)
#define SYN_CODE_MASK_SYN_CODE_MASK_mask                                             (0xFFFFFFFF)
#define SYN_CODE_MASK_SYN_CODE_MASK(data)                                            (0xFFFFFFFF&((data)<<0))
#define SYN_CODE_MASK_SYN_CODE_MASK_src(data)                                        ((0xFFFFFFFF&(data))>>0)
#define SYN_CODE_MASK_get_SYN_CODE_MASK(data)                                        ((0xFFFFFFFF&(data))>>0)


#define SYN_CODE_VAL                                                                 0x9801BD44
#define SYN_CODE_VAL_reg_addr                                                        "0xD801BD44"
#define SYN_CODE_VAL_reg                                                             0xD801BD44
#define set_SYN_CODE_VAL_reg(data)   (*((volatile unsigned int*) SYN_CODE_VAL_reg)=data)
#define get_SYN_CODE_VAL_reg   (*((volatile unsigned int*) SYN_CODE_VAL_reg))
#define SYN_CODE_VAL_inst_adr                                                        "0x0051"
#define SYN_CODE_VAL_inst                                                            0x0051
#define SYN_CODE_VAL_SYN_CODE_VAL_shift                                              (0)
#define SYN_CODE_VAL_SYN_CODE_VAL_mask                                               (0xFFFFFFFF)
#define SYN_CODE_VAL_SYN_CODE_VAL(data)                                              (0xFFFFFFFF&((data)<<0))
#define SYN_CODE_VAL_SYN_CODE_VAL_src(data)                                          ((0xFFFFFFFF&(data))>>0)
#define SYN_CODE_VAL_get_SYN_CODE_VAL(data)                                          ((0xFFFFFFFF&(data))>>0)


#define POWER                                                                        0x9801BD48
#define POWER_reg_addr                                                               "0xD801BD48"
#define POWER_reg                                                                    0xD801BD48
#define set_POWER_reg(data)   (*((volatile unsigned int*) POWER_reg)=data)
#define get_POWER_reg   (*((volatile unsigned int*) POWER_reg))
#define POWER_inst_adr                                                               "0x0052"
#define POWER_inst                                                                   0x0052
#define POWER_gating_en_shift                                                        (0)
#define POWER_gating_en_mask                                                         (0x00000001)
#define POWER_gating_en(data)                                                        (0x00000001&((data)<<0))
#define POWER_gating_en_src(data)                                                    ((0x00000001&(data))>>0)
#define POWER_get_gating_en(data)                                                    ((0x00000001&(data))>>0)


#define DUMMY1                                                                       0x9801BD50
#define DUMMY1_reg_addr                                                              "0xD801BD50"
#define DUMMY1_reg                                                                   0xD801BD50
#define set_DUMMY1_reg(data)   (*((volatile unsigned int*) DUMMY1_reg)=data)
#define get_DUMMY1_reg   (*((volatile unsigned int*) DUMMY1_reg))
#define DUMMY1_inst_adr                                                              "0x0054"
#define DUMMY1_inst                                                                  0x0054
#define DUMMY1_dummy1_shift                                                          (0)
#define DUMMY1_dummy1_mask                                                           (0xFFFFFFFF)
#define DUMMY1_dummy1(data)                                                          (0xFFFFFFFF&((data)<<0))
#define DUMMY1_dummy1_src(data)                                                      ((0xFFFFFFFF&(data))>>0)
#define DUMMY1_get_dummy1(data)                                                      ((0xFFFFFFFF&(data))>>0)


#define DUMMY2                                                                       0x9801BD54
#define DUMMY2_reg_addr                                                              "0xD801BD54"
#define DUMMY2_reg                                                                   0xD801BD54
#define set_DUMMY2_reg(data)   (*((volatile unsigned int*) DUMMY2_reg)=data)
#define get_DUMMY2_reg   (*((volatile unsigned int*) DUMMY2_reg))
#define DUMMY2_inst_adr                                                              "0x0055"
#define DUMMY2_inst                                                                  0x0055
#define DUMMY2_dummy2_shift                                                          (0)
#define DUMMY2_dummy2_mask                                                           (0xFFFFFFFF)
#define DUMMY2_dummy2(data)                                                          (0xFFFFFFFF&((data)<<0))
#define DUMMY2_dummy2_src(data)                                                      ((0xFFFFFFFF&(data))>>0)
#define DUMMY2_get_dummy2(data)                                                      ((0xFFFFFFFF&(data))>>0)


#endif
