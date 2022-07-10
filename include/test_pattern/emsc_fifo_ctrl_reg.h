/**************************************************************
// Spec Version                  : 1.0
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/15 10:18:13
***************************************************************/


#ifndef _EMSC_FIFO_CTRL_REG_H_INCLUDED_
#define _EMSC_FIFO_CTRL_REG_H_INCLUDED_
#ifdef  _EMSC_FIFO_CTRL_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     tx_fifo_wp:6;
}EMSC_FIFO_CTRL_TX_FIFO_WP;

typedef struct 
{
unsigned int     tx_fifo_wd:32;
}EMSC_FIFO_CTRL_TX_FIFO_WD;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     tx_fifo_rp:6;
}EMSC_FIFO_CTRL_TX_FIFO_RP;

typedef struct 
{
unsigned int     tx_fifo_rd:32;
}EMSC_FIFO_CTRL_TX_FIFO_RD;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     rx_fifo_rp:6;
}EMSC_FIFO_CTRL_RX_FIFO_RP;

typedef struct 
{
unsigned int     rx_fifo_rd:32;
}EMSC_FIFO_CTRL_RX_FIFO_RD;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     rx_fifo_wp:6;
}EMSC_FIFO_CTRL_RX_FIFO_WP;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     tx_fifo_cnt:6;
unsigned int     reserved_1:10;
unsigned int     rx_fifo_cnt:6;
}EMSC_FIFO_CTRL_FIFO_CNT;

#endif

#define EMSC_FIFO_CTRL_TX_FIFO_WP                                                    0x98037E00
#define EMSC_FIFO_CTRL_TX_FIFO_WP_reg_addr                                           "0xD8037E00"
#define EMSC_FIFO_CTRL_TX_FIFO_WP_reg                                                0xD8037E00
#define set_EMSC_FIFO_CTRL_TX_FIFO_WP_reg(data)   (*((volatile unsigned int*) EMSC_FIFO_CTRL_TX_FIFO_WP_reg)=data)
#define get_EMSC_FIFO_CTRL_TX_FIFO_WP_reg   (*((volatile unsigned int*) EMSC_FIFO_CTRL_TX_FIFO_WP_reg))
#define EMSC_FIFO_CTRL_TX_FIFO_WP_inst_adr                                           "0x0080"
#define EMSC_FIFO_CTRL_TX_FIFO_WP_inst                                               0x0080
#define EMSC_FIFO_CTRL_TX_FIFO_WP_tx_fifo_wp_shift                                   (0)
#define EMSC_FIFO_CTRL_TX_FIFO_WP_tx_fifo_wp_mask                                    (0x0000003F)
#define EMSC_FIFO_CTRL_TX_FIFO_WP_tx_fifo_wp(data)                                   (0x0000003F&((data)<<0))
#define EMSC_FIFO_CTRL_TX_FIFO_WP_tx_fifo_wp_src(data)                               ((0x0000003F&(data))>>0)
#define EMSC_FIFO_CTRL_TX_FIFO_WP_get_tx_fifo_wp(data)                               ((0x0000003F&(data))>>0)


#define EMSC_FIFO_CTRL_TX_FIFO_WD                                                    0x98037E04
#define EMSC_FIFO_CTRL_TX_FIFO_WD_reg_addr                                           "0xD8037E04"
#define EMSC_FIFO_CTRL_TX_FIFO_WD_reg                                                0xD8037E04
#define set_EMSC_FIFO_CTRL_TX_FIFO_WD_reg(data)   (*((volatile unsigned int*) EMSC_FIFO_CTRL_TX_FIFO_WD_reg)=data)
#define get_EMSC_FIFO_CTRL_TX_FIFO_WD_reg   (*((volatile unsigned int*) EMSC_FIFO_CTRL_TX_FIFO_WD_reg))
#define EMSC_FIFO_CTRL_TX_FIFO_WD_inst_adr                                           "0x0081"
#define EMSC_FIFO_CTRL_TX_FIFO_WD_inst                                               0x0081
#define EMSC_FIFO_CTRL_TX_FIFO_WD_tx_fifo_wd_shift                                   (0)
#define EMSC_FIFO_CTRL_TX_FIFO_WD_tx_fifo_wd_mask                                    (0xFFFFFFFF)
#define EMSC_FIFO_CTRL_TX_FIFO_WD_tx_fifo_wd(data)                                   (0xFFFFFFFF&((data)<<0))
#define EMSC_FIFO_CTRL_TX_FIFO_WD_tx_fifo_wd_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define EMSC_FIFO_CTRL_TX_FIFO_WD_get_tx_fifo_wd(data)                               ((0xFFFFFFFF&(data))>>0)


#define EMSC_FIFO_CTRL_TX_FIFO_RP                                                    0x98037E08
#define EMSC_FIFO_CTRL_TX_FIFO_RP_reg_addr                                           "0xD8037E08"
#define EMSC_FIFO_CTRL_TX_FIFO_RP_reg                                                0xD8037E08
#define set_EMSC_FIFO_CTRL_TX_FIFO_RP_reg(data)   (*((volatile unsigned int*) EMSC_FIFO_CTRL_TX_FIFO_RP_reg)=data)
#define get_EMSC_FIFO_CTRL_TX_FIFO_RP_reg   (*((volatile unsigned int*) EMSC_FIFO_CTRL_TX_FIFO_RP_reg))
#define EMSC_FIFO_CTRL_TX_FIFO_RP_inst_adr                                           "0x0082"
#define EMSC_FIFO_CTRL_TX_FIFO_RP_inst                                               0x0082
#define EMSC_FIFO_CTRL_TX_FIFO_RP_tx_fifo_rp_shift                                   (0)
#define EMSC_FIFO_CTRL_TX_FIFO_RP_tx_fifo_rp_mask                                    (0x0000003F)
#define EMSC_FIFO_CTRL_TX_FIFO_RP_tx_fifo_rp(data)                                   (0x0000003F&((data)<<0))
#define EMSC_FIFO_CTRL_TX_FIFO_RP_tx_fifo_rp_src(data)                               ((0x0000003F&(data))>>0)
#define EMSC_FIFO_CTRL_TX_FIFO_RP_get_tx_fifo_rp(data)                               ((0x0000003F&(data))>>0)


#define EMSC_FIFO_CTRL_TX_FIFO_RD                                                    0x98037E0C
#define EMSC_FIFO_CTRL_TX_FIFO_RD_reg_addr                                           "0xD8037E0C"
#define EMSC_FIFO_CTRL_TX_FIFO_RD_reg                                                0xD8037E0C
#define set_EMSC_FIFO_CTRL_TX_FIFO_RD_reg(data)   (*((volatile unsigned int*) EMSC_FIFO_CTRL_TX_FIFO_RD_reg)=data)
#define get_EMSC_FIFO_CTRL_TX_FIFO_RD_reg   (*((volatile unsigned int*) EMSC_FIFO_CTRL_TX_FIFO_RD_reg))
#define EMSC_FIFO_CTRL_TX_FIFO_RD_inst_adr                                           "0x0083"
#define EMSC_FIFO_CTRL_TX_FIFO_RD_inst                                               0x0083
#define EMSC_FIFO_CTRL_TX_FIFO_RD_tx_fifo_rd_shift                                   (0)
#define EMSC_FIFO_CTRL_TX_FIFO_RD_tx_fifo_rd_mask                                    (0xFFFFFFFF)
#define EMSC_FIFO_CTRL_TX_FIFO_RD_tx_fifo_rd(data)                                   (0xFFFFFFFF&((data)<<0))
#define EMSC_FIFO_CTRL_TX_FIFO_RD_tx_fifo_rd_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define EMSC_FIFO_CTRL_TX_FIFO_RD_get_tx_fifo_rd(data)                               ((0xFFFFFFFF&(data))>>0)


#define EMSC_FIFO_CTRL_RX_FIFO_RP                                                    0x98037E10
#define EMSC_FIFO_CTRL_RX_FIFO_RP_reg_addr                                           "0xD8037E10"
#define EMSC_FIFO_CTRL_RX_FIFO_RP_reg                                                0xD8037E10
#define set_EMSC_FIFO_CTRL_RX_FIFO_RP_reg(data)   (*((volatile unsigned int*) EMSC_FIFO_CTRL_RX_FIFO_RP_reg)=data)
#define get_EMSC_FIFO_CTRL_RX_FIFO_RP_reg   (*((volatile unsigned int*) EMSC_FIFO_CTRL_RX_FIFO_RP_reg))
#define EMSC_FIFO_CTRL_RX_FIFO_RP_inst_adr                                           "0x0084"
#define EMSC_FIFO_CTRL_RX_FIFO_RP_inst                                               0x0084
#define EMSC_FIFO_CTRL_RX_FIFO_RP_rx_fifo_rp_shift                                   (0)
#define EMSC_FIFO_CTRL_RX_FIFO_RP_rx_fifo_rp_mask                                    (0x0000003F)
#define EMSC_FIFO_CTRL_RX_FIFO_RP_rx_fifo_rp(data)                                   (0x0000003F&((data)<<0))
#define EMSC_FIFO_CTRL_RX_FIFO_RP_rx_fifo_rp_src(data)                               ((0x0000003F&(data))>>0)
#define EMSC_FIFO_CTRL_RX_FIFO_RP_get_rx_fifo_rp(data)                               ((0x0000003F&(data))>>0)


#define EMSC_FIFO_CTRL_RX_FIFO_RD                                                    0x98037E14
#define EMSC_FIFO_CTRL_RX_FIFO_RD_reg_addr                                           "0xD8037E14"
#define EMSC_FIFO_CTRL_RX_FIFO_RD_reg                                                0xD8037E14
#define set_EMSC_FIFO_CTRL_RX_FIFO_RD_reg(data)   (*((volatile unsigned int*) EMSC_FIFO_CTRL_RX_FIFO_RD_reg)=data)
#define get_EMSC_FIFO_CTRL_RX_FIFO_RD_reg   (*((volatile unsigned int*) EMSC_FIFO_CTRL_RX_FIFO_RD_reg))
#define EMSC_FIFO_CTRL_RX_FIFO_RD_inst_adr                                           "0x0085"
#define EMSC_FIFO_CTRL_RX_FIFO_RD_inst                                               0x0085
#define EMSC_FIFO_CTRL_RX_FIFO_RD_rx_fifo_rd_shift                                   (0)
#define EMSC_FIFO_CTRL_RX_FIFO_RD_rx_fifo_rd_mask                                    (0xFFFFFFFF)
#define EMSC_FIFO_CTRL_RX_FIFO_RD_rx_fifo_rd(data)                                   (0xFFFFFFFF&((data)<<0))
#define EMSC_FIFO_CTRL_RX_FIFO_RD_rx_fifo_rd_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define EMSC_FIFO_CTRL_RX_FIFO_RD_get_rx_fifo_rd(data)                               ((0xFFFFFFFF&(data))>>0)


#define EMSC_FIFO_CTRL_RX_FIFO_WP                                                    0x98037E18
#define EMSC_FIFO_CTRL_RX_FIFO_WP_reg_addr                                           "0xD8037E18"
#define EMSC_FIFO_CTRL_RX_FIFO_WP_reg                                                0xD8037E18
#define set_EMSC_FIFO_CTRL_RX_FIFO_WP_reg(data)   (*((volatile unsigned int*) EMSC_FIFO_CTRL_RX_FIFO_WP_reg)=data)
#define get_EMSC_FIFO_CTRL_RX_FIFO_WP_reg   (*((volatile unsigned int*) EMSC_FIFO_CTRL_RX_FIFO_WP_reg))
#define EMSC_FIFO_CTRL_RX_FIFO_WP_inst_adr                                           "0x0086"
#define EMSC_FIFO_CTRL_RX_FIFO_WP_inst                                               0x0086
#define EMSC_FIFO_CTRL_RX_FIFO_WP_rx_fifo_wp_shift                                   (0)
#define EMSC_FIFO_CTRL_RX_FIFO_WP_rx_fifo_wp_mask                                    (0x0000003F)
#define EMSC_FIFO_CTRL_RX_FIFO_WP_rx_fifo_wp(data)                                   (0x0000003F&((data)<<0))
#define EMSC_FIFO_CTRL_RX_FIFO_WP_rx_fifo_wp_src(data)                               ((0x0000003F&(data))>>0)
#define EMSC_FIFO_CTRL_RX_FIFO_WP_get_rx_fifo_wp(data)                               ((0x0000003F&(data))>>0)


#define EMSC_FIFO_CTRL_FIFO_CNT                                                      0x98037E1C
#define EMSC_FIFO_CTRL_FIFO_CNT_reg_addr                                             "0xD8037E1C"
#define EMSC_FIFO_CTRL_FIFO_CNT_reg                                                  0xD8037E1C
#define set_EMSC_FIFO_CTRL_FIFO_CNT_reg(data)   (*((volatile unsigned int*) EMSC_FIFO_CTRL_FIFO_CNT_reg)=data)
#define get_EMSC_FIFO_CTRL_FIFO_CNT_reg   (*((volatile unsigned int*) EMSC_FIFO_CTRL_FIFO_CNT_reg))
#define EMSC_FIFO_CTRL_FIFO_CNT_inst_adr                                             "0x0087"
#define EMSC_FIFO_CTRL_FIFO_CNT_inst                                                 0x0087
#define EMSC_FIFO_CTRL_FIFO_CNT_tx_fifo_cnt_shift                                    (16)
#define EMSC_FIFO_CTRL_FIFO_CNT_tx_fifo_cnt_mask                                     (0x003F0000)
#define EMSC_FIFO_CTRL_FIFO_CNT_tx_fifo_cnt(data)                                    (0x003F0000&((data)<<16))
#define EMSC_FIFO_CTRL_FIFO_CNT_tx_fifo_cnt_src(data)                                ((0x003F0000&(data))>>16)
#define EMSC_FIFO_CTRL_FIFO_CNT_get_tx_fifo_cnt(data)                                ((0x003F0000&(data))>>16)
#define EMSC_FIFO_CTRL_FIFO_CNT_rx_fifo_cnt_shift                                    (0)
#define EMSC_FIFO_CTRL_FIFO_CNT_rx_fifo_cnt_mask                                     (0x0000003F)
#define EMSC_FIFO_CTRL_FIFO_CNT_rx_fifo_cnt(data)                                    (0x0000003F&((data)<<0))
#define EMSC_FIFO_CTRL_FIFO_CNT_rx_fifo_cnt_src(data)                                ((0x0000003F&(data))>>0)
#define EMSC_FIFO_CTRL_FIFO_CNT_get_rx_fifo_cnt(data)                                ((0x0000003F&(data))>>0)


#endif
