#define     __REG(x)					(*(volatile unsigned int *)(x)) 
#define     BWSCON                   __REG(0x48000000)   //Bus width & wait status control 
#define     BANKCON6                 __REG(0x4800001C)   //BANK6 control                     
#define     BANKCON7                 __REG(0x48000020)   //BANK7 control       
#define     REFRESH                  __REG(0x48000024)   //DRAM/SDRAM refresh control        
#define     BANKSIZE                 __REG(0x48000028)   //Flexible bank size    
#define     MRSRB6                   __REG(0x4800002C)   //Mode register set for SDRAM BANK6 
#define     MRSRB7                   __REG(0x48000030)   //Mode register set for SDRAM BANK7 

void Init_SDRAM(){
	BWSCON = 0x22000000;

	BANKCON6 = 0x00018001;
	BANKCON7 = 0x00018001;

	REFRESH = 0x008404f5;

	BANKSIZE = 0x000000b1;

	MRSRB6 = 0x00000020;
	MRSRB7 = 0x00000020;
}
