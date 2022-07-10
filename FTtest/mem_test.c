#include <asm/io.h>
#include <asm/arch/io.h>
#include <asm/arch/system.h>
#include <asm/system.h>
#include <common.h>
#include <asm/arch/rbus/misc_reg.h>
#include <ft_test.h>

#define MEM_DEBUG 1

#if MEM_DEBUG
#define DBG(format, ...) printf(format , ## __VA_ARGS__)
#else
#define DBG(format, ...) 
#endif

/* Set the data bus width to 32 bits. */
typedef unsigned int datum;

/* Set the data bus width to 64 bits. */
typedef unsigned long long datum64;

/* DRAM Data Bus Test */
int mem_test_data_bus(datum *pAddr, datum **ppFailAddr)
{
	datum pattern;

	*ppFailAddr = NULL;

	/* Perform a walking 1's test at the given address. */
	for (pattern = 1; pattern != 0; pattern <<= 1)
	{
		/* Write the test pattern. */
		*pAddr = pattern;

		/* Read back the test pattern. */
		if (*pAddr != pattern)
		{
			*ppFailAddr = pAddr;
			DBG("Data bit probably exists open-short fault.");
			return 0;
		}
	}

	return 1;
}

/* DRAM Address Bus Test */
int mem_test_addr_bus(datum baseAddr, unsigned int numBytes, datum *pFailAddr)
{
	unsigned int addrMask = numBytes - 1;
	unsigned int offset, testOffset;
	datum pattern = 0xAAAAAAAA, antipattern = ~pattern;

	pFailAddr = NULL;

	/* Write the default pattern at each of the power-of-two offsets. */
	for (offset = sizeof(datum); (offset & addrMask) != 0; offset <<= 1)
		*(datum *)(baseAddr | offset) = pattern;

	/* Check for address bits stuck at high. */
	*(datum *)baseAddr = antipattern;

	for (offset = sizeof(datum); offset & addrMask; offset <<= 1)
	{
		if (*(datum *)(baseAddr | offset) != pattern)
		{
			*pFailAddr = (datum *)(baseAddr | offset);
			DBG("Address bit occurs stuck-at-high fault.");
			return 0;
		}
	}

	*(datum *)baseAddr = pattern;

	/* Check for address bits suck at low or short to ecah other. */
	for (testOffset = sizeof(datum); testOffset & addrMask; testOffset <<= 1)
	{
		*(datum *)(baseAddr | testOffset) = antipattern;

		if (*(datum *)baseAddr != pattern)
		{
			*pFailAddr = (datum *)(baseAddr | testOffset);
			DBG("Address bit occurs stuck-at-low fault.");
			return 0;
		}

		for (offset = sizeof(datum); offset & addrMask; offset <<= 1)
		{
			if ((*(datum *)(baseAddr | offset) != pattern) && (offset != testOffset))
			{
				*pFailAddr = (datum *)(baseAddr | offset);
				DBG("Address bits are probably shorted to each other.");
				return 0;
			}
		}

		*(datum *)(baseAddr | testOffset) = pattern;
	}

	return 1;
}

void mem_test_entry2(void)
{
	/* 1GB DDR Settings */
	datum baseAddr = 0x10000000;
	datum numBytes = 0x10000000;

	/* 2GB DDR Settings */
	//datum baseAddr = 0x20000000;
	//datum numBytes = 0x20000000;

	datum *pFailAddr;

	/* DDR Data Bus Test */
	if (!mem_test_data_bus(0x1f000, pFailAddr)) {
		DBG("fail address = %x\n", pFailAddr);
		return;
	}
	else DBG("DRAM data bus test pass.\n");

	/* DDR Address Bus Test */
	if (!mem_test_addr_bus(baseAddr, numBytes, pFailAddr)) {
		DBG("fail address = %x\n", pFailAddr);
		return;
	}
	else DBG("DRAM address bus test pass.\n");
	
	ft_diag_pass();
}
