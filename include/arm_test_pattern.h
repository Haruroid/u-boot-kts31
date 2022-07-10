#ifndef __ARM_TEST_PATTERN_H_
#define __ARM_TEST_PATTERN_H_	

void mcm_init_gpio(void);
void sd_init_gpio(void);

void mem_test_entry(void);
void mem_test_entry2(void);
void enter_ddr_self_refresh_mode(void);
void GPHY_test_entry(void);


#endif	/* __ARM_TEST_PATTERN_H_ */
