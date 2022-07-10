#include <common.h>
#include <command.h>

static int do_uart_w(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	int addr = 0 , length =0 , option=0 ,bRes=1 , count=0;
	char * mac_value ;
	printf("argc :%d \n",argc);

	if ((argc > 4)||(argc == 1)){
		printf("argc :%d ,error!\n",argc);
		cmd_usage(cmdtp);
		return bRes;
       	}else if (argc == 2){
		option=0;
		mac_value = argv[1];
	}else if (argc == 3){
		addr = (unsigned int)simple_strtoul(argv[1], NULL, 16);
	        length = (unsigned int)simple_strtoul(argv[2], NULL, 16);
        	printf("length :%d\n",length);
	        printf("addr :%d\n",addr);
		option=1;
	}else if (argc == 4){
		mac_value = argv[1];
		addr = (unsigned int)simple_strtoul(argv[2], NULL, 16);
                length = (unsigned int)simple_strtoul(argv[3], NULL, 16);
        	printf("length :%d\n",length);
	        printf("addr :%d\n",addr);
		option=2;
	}

  	      switch(option){
		case 0:
		  bRes=do_uart_w_mac(mac_value);
		  if(bRes!=0){
			printf("only write mac fail!\n");
		  }
		 	break;
		case 1:
		  bRes=do_uart_w_sn(addr,length);
                  if(bRes!=0){
			printf("only write sn fail!\n");
                  }
			break;
		case 2:
                  bRes=do_uart_w_mac(mac_value);
		  if(bRes!=0){
                        printf("write mac fail!\n");
                  }else{
			bRes=do_uart_w_sn(addr,length);
			if(bRes!=0){
                        	printf("write sn fail!\n");
                  	}
		  }
		 break;
		default:
			printf("option fail !\n");
		 break;
	     }
	
			if(bRes != 0){
			 printf("***** FAILFAIL *****\n");
        	         printf("***** FAILFAIL *****\n");
	                 printf("***** FAILFAIL *****\n");
			}else{
			 printf("***** OKOK *****\n");
		 	 printf("***** OKOK *****\n");
			 printf("***** OKOK *****\n");
			}
 return bRes;
}
int do_uart_w_mac(char *mac_value){
 
int  bRe=1,num=0;
char * mac_check;

	printf("ethaddr:%s\n",mac_value);
		setenv("ethaddr",mac_value);
                if((mac_check = getenv("ethaddr")) == NULL)
                {
                 printf("getenv ethaddr fail !\n");
                 printf("***** FAILFAIL *****\n");
                 printf("***** FAILFAIL *****\n");
                 printf("***** FAILFAIL *****\n");
                }else{

			for(num=0;num<2;num++){		
				//Removed by Aaron==>bRe=saveenv();
#ifdef CONFIG_ENV_IS_IN_FACTORY
				bRe=saveenv();
#endif
				if(bRe!=0){
				 printf("mac envsave fail!\n");
				 break;
				}
			}
			  if( bRe==0){
                		if((strncmp(mac_value,mac_check,17))!= 0){
                	  	 printf("compare mac fail !\n");
                	   	 printf("***** FAILFAIL *****\n");
                	 	 printf("***** FAILFAIL *****\n");
                	 	 printf("***** FAILFAIL *****\n");
                		}else{
			 	 bRe=0;
				}
			  }
		}
	return bRe;
}

int do_uart_w_sn(int addr ,int len){

	int bRe=1 , num =0;

		 for(num=0;num<2;num++){
                    bRe = factory_write("tmp/factory/sn.txt", addr, len);
                     if (bRe != 0){
                        break;
                     }
                    bRe = factory_save();
                     if (bRe != 0){
                        break;
                     }
                  }

	return bRe;
}
U_BOOT_CMD(
	uart_write,	4,	0,	do_uart_w,
	"for uart mp tool burn mac and sn key\n",
	"\nonly write mac : uart_writ [mac] \n"
	"only write sn  : uart_writ [load addr] [file lenght(hex)]\n"
	"both		: uart_writ [mac] [load addr] [file lenght(hex)]\n"
);
