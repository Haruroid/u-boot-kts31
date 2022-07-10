#define ETN_BASE_ADDR  0xB8016000

#define ETN_IO_MACID0             ETN_BASE_ADDR + 0x00
#define ETN_IO_MACID2             ETN_BASE_ADDR + 0x04
#define ETN_IO_MAR6               ETN_BASE_ADDR + 0x08
#define ETN_IO_MAR2               ETN_BASE_ADDR + 0x0c
#define ETN_IO_DTCCR0             ETN_BASE_ADDR + 0x10
#define ETN_IO_DTCCR2             ETN_BASE_ADDR + 0x14
#define ETN_IO_LEDSEL             ETN_BASE_ADDR + 0x18
#define ETN_IO_TCTR3              ETN_BASE_ADDR + 0x1c
#define ETN_IO_TXQ0_DSC_ADDR0     ETN_BASE_ADDR + 0x20
#define ETN_IO_TXQ0_DSC_ADDR1     ETN_BASE_ADDR + 0x24
#define ETN_IO_TXQ1_DSC_ADDR0     ETN_BASE_ADDR + 0x28
#define ETN_IO_TXQ1_DSC_ADDR1     ETN_BASE_ADDR + 0x2c
#define ETN_IO_RIT                ETN_BASE_ADDR + 0x30
#define ETN_IO_CR                 ETN_BASE_ADDR + 0x34
#define ETN_IO_IMR4               ETN_BASE_ADDR + 0x38
#define ETN_IO_IMR0               ETN_BASE_ADDR + 0x3c
#define ETN_IO_TCR0               ETN_BASE_ADDR + 0x40
#define ETN_IO_RCR0               ETN_BASE_ADDR + 0x44
#define ETN_IO_TCTR0              ETN_BASE_ADDR + 0x48
#define ETN_IO_TCTR1              ETN_BASE_ADDR + 0x4c
#define ETN_IO_CONFIG0            ETN_BASE_ADDR + 0x50
#define ETN_IO_CONFIG4            ETN_BASE_ADDR + 0x54
#define ETN_IO_TIMERINT0          ETN_BASE_ADDR + 0x58
#define ETN_IO_TIMERINT1          ETN_BASE_ADDR + 0x5c
#define ETN_IO_GPHY_MDIO          ETN_BASE_ADDR + 0x60
#define ETN_IO_CSIDR              ETN_BASE_ADDR + 0x64
#define ETN_IO_CSIAR              ETN_BASE_ADDR + 0x68
#define ETN_IO_ISR5               ETN_BASE_ADDR + 0x6c
#define ETN_IO_ERIDR              ETN_BASE_ADDR + 0x70
#define ETN_IO_ERIAR              ETN_BASE_ADDR + 0x74
#define ETN_IO_CONFIG7            ETN_BASE_ADDR + 0x78

#define ETN_IO_PATCH_DBG          ETN_BASE_ADDR + 0xb0           

#define ETN_IO_PHY_PWR_DUNC       ETN_BASE_ADDR + 0xd0
#define ETN_IO_MACDBG             ETN_BASE_ADDR + 0xd4
#define ETN_IO_RMS                ETN_BASE_ADDR + 0xd8
#define ETN_IO_EFUSE              ETN_BASE_ADDR + 0xdc
#define ETN_IO_CCR                ETN_BASE_ADDR + 0xe0
#define ETN_IO_RDSAR0             ETN_BASE_ADDR + 0xe4
#define ETN_IO_RDSAR2             ETN_BASE_ADDR + 0xe8
#define ETN_IO_MTPS               ETN_BASE_ADDR + 0xec


//eri
#define ETN_ERI_FIFOFULL_TH       0xc8 
#define ETN_ERI_RFIFONFULL_TH     0xcc 
#define ETN_ERI_RFIFOEMPTY_TH     0xd0 

#define ETN_ERI_FTR_MCU_CTRL      0xdc 

#define ETN_ERI_TFIFOFULL_TH      0xe8
 
#define ETN_ERI_MACID_VLAN0_0      0xf0 
#define ETN_ERI_MACID_VLAN0_2      0xf4 

#define ETN_ERI_LWAKE_CTRL_REG      0x1ac


//ocp
#define ETN_OCP_FPGA_GPHY0        0xde40

#define ETN_OCP_DW_SEMA_SR        0xe410

#define ETN_OCP_RMII_REG          0xea30
#define ETN_OCP_RGMII_REG         0xea34
