#include "../flash_writer_u/include/project_config_f.h"
#include "dvrboot_inc/util.h"
#include "dvrboot_inc/string.h"
#include "otp_reg.h"
#include "dvrboot_inc/io.h"

extern unsigned char rsa_pub_key[];
extern unsigned char rsa_pub_key_end;
extern unsigned char aes_key[];
extern unsigned char aes_key_end;
extern unsigned char aes_key1[];
extern unsigned char aes_key1_end;
extern unsigned char aes_key2[];
extern unsigned char aes_key2_end;
extern unsigned char aes_key3[];
extern unsigned char aes_key3_end;
extern unsigned char aes_seed[];
extern unsigned char aes_seed_end;
extern unsigned char cust_data[];
extern unsigned char cust_data_end;

//#define DEBUG_PRT	1
#define TEST_MODE
__align__ unsigned char dec_array[32*2]={0};
__align__ unsigned char v_array[1024]={0};
__align__ unsigned char otp_retry_cnt=0;

/************************************************************************
 *  Public variables
 ************************************************************************/

int printf(const char *fmt, ...);
int obfuse_getset(otp_method_enum_t type, unsigned char* enc_array, unsigned char* enc_array1, unsigned char* enc_array2, unsigned char* enc_array3, unsigned int len);

//-----------------------------------------------------------------------------
// dummy function
//-----------------------------------------------------------------------------
int ctrlc()
{
	return 0;
}

int printf(const char *fmt, ...)
{
	return 1;
}
//-----------------------------------------------------------------------------
void* memcpy(void* dest, const void* src, size_t count) {
    char* dst8 = (char*)dest;
    char* src8 = (char*)src;

    while (count--) {
        *dst8++ = *src8++;
    }
    return dest;
}

/**
 *  * memcmp - Compare two areas of memory
 *   * @cs: One area of memory
 *    * @ct: Another area of memory
 *     * @count: The size of the area.
 *      */
int memcmp(const void * cs,const void * ct,size_t count)
{
        const unsigned char *su1, *su2;
        int res = 0;

        for( su1 = cs, su2 = ct; 0 < count; ++su1, ++su2, count--)
                if ((res = *su1 - *su2) != 0)
                        break;
        return res;
}
//-----------------------------------------------------------------------------
int do_program(void)
{
 	UINT32	rsa_pub_key_size  = (unsigned int )(&rsa_pub_key_end  - rsa_pub_key);
    	UINT32	aes_key_size = (unsigned int )(&aes_key_end - aes_key);
    	UINT32	aes_key1_size = (unsigned int )(&aes_key1_end - aes_key1);
    	UINT32	aes_key2_size = (unsigned int )(&aes_key2_end - aes_key2);
    	UINT32	aes_key3_size = (unsigned int )(&aes_key3_end - aes_key3);
    	UINT32	aes_seed_size = (unsigned int )(&aes_seed_end - aes_seed);
    	UINT32	cust_data_size = (unsigned int )(&cust_data_end - cust_data);
	int res = -1;

	prints("\nefuse programmer v1.05 start....\n");

#ifdef Config_Secure_Key_TRUE
//#if 1
	prints("\tfor secure boot platform, \n");
	prints("\t-w rsa \n");

	//0. judge go or not
	if (obfuse_judge())
	{
		prints("judge fail \n");
		return 0;
	}
	sync();
	//1. burn the rsa public key directly
	start_program(0, rsa_pub_key_size, rsa_pub_key);
	
	//2.1 write aes
	prints("\t-w key \n");
	#ifdef DEBUG_PRT
	hexdump("aes_key :", aes_key, 16);
	#endif
	res = obfuse_getset(ENUM_TYPE_AES_KEY,aes_seed,aes_key,NULL,NULL,aes_key_size);
	sync();	
	#ifndef TEST_MODE 
	if (res)
		return res;
	#endif
	//2.2 write seed
	prints("\t-w seed \n");
	#ifdef DEBUG_PRT
	hexdump("aes_seed :", aes_seed, 16);
	#endif
	otp_retry_cnt=0;
	res = obfuse_getset(ENUM_TYPE_AES_SEED,aes_seed,aes_key1,aes_key2,aes_key3,aes_seed_size);
	sync();	
        #ifdef TEST_MODE
	res = obfuse_getset(ENUM_TYPE_AES_DEC_KEY,aes_seed,aes_key1,aes_key2,aes_key3,aes_seed_size);
	sync();	
	res = obfuse_getset(ENUM_TYPE_AES_DEC_SEED,aes_seed,aes_key1,aes_key2,aes_key3,aes_seed_size);
	sync();	
	#endif
	#ifndef TEST_MODE 
	if (res)
		return res;
	#endif
	prints("\t-w cust\n");

	//3. secure burn
	do_burn_mp_efuse_bits();
	sync();
#else
	prints("\tfor non-secure boot platform, \n");
#endif
	if (cust_data_size > 0)
	{
		if (cust_data_size > 16)
		{
			prints("\tmax. cust_data length is 16B\n");
			res = 0;
			return res;
	        }	
		prints("\t-w cust_data\n");
		#ifdef DEBUG_PRT
		hexdump("cust_data :", cust_data, cust_data_size);
		#endif
		otp_retry_cnt=0;
        	res = obfuse_getset(ENUM_TYPE_UNKNOWN,cust_data,NULL,NULL,NULL,cust_data_size);
        	sync();
        	if (!res)
                	return res;
		sync();
	}
	else
		prints("\tno cust_data\n");

	res = 0;	// complete without failure

	return res;
}

/************************************************************************
 *
 *                          efusemain
 *  Description :
 *  -------------
 *  main function of efuse programmer
 *
 *  Parameters :
 *  ------------
 *
 *
 *
 *  Return values :
 *  ---------------
 *
 *
 *
 *
 ************************************************************************/
int efusemain (int argc, char * const argv[])
{
	int		ret = -1;
	extern unsigned int mcp_dscpt_addr;

	mcp_dscpt_addr = 0;
	otp_retry_cnt = 0;
	init_uart();
	set_focus_uart(0);
	ret = do_program();

	if (ret == 0)
		prints("program OTP OKOKOKOKOKOK!!!!!!!\n");
	else
		prints("program OTP failfailfail!!!!!!!\n");
    	return 0;
}
