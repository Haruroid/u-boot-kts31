#ifndef __POWER_H__
#define __POWER_H__

#include <config.h>

#if defined(CONFIG_BOARD_FPGA_RTD1295)
	#include "power/power_rtd1295_qa.h"
#elif defined(CONFIG_BOARD_QA_RTD1295)
	#include "power/power_rtd1295_qa.h"
#elif defined(CONFIG_BOARD_QA_RTD1295_WIFI_STORAGE)
	#include "power/power_rtd1295_wifi_storage.h"	
#elif defined(CONFIG_BOARD_FPGA_RTD1295_EMMC)
	#include "power/power_rtd1295_qa.h"
#else
	#error "power-saving does not support this board."
#endif



#endif	// __POWER_H__

