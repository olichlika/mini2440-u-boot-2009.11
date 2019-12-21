#define     __REG(x)					(*(volatile unsigned int *)(x)) 
#define     BWSCON                   __REG(0x48000000)   //Bus width & wait status control
#define     BANKCON4                 __REG(0x48000014)   //BANK4 control
#define     BANKCON6                 __REG(0x4800001C)   //BANK6 control                     
#define     BANKCON7                 __REG(0x48000020)   //BANK7 control       
#define     REFRESH                  __REG(0x48000024)   //DRAM/SDRAM refresh control        
#define     BANKSIZE                 __REG(0x48000028)   //Flexible bank size    
#define     MRSRB6                   __REG(0x4800002C)   //Mode register set for SDRAM BANK6 
#define     MRSRB7                   __REG(0x48000030)   //Mode register set for SDRAM BANK7 


#define B4_Tacs			0x0
#define B4_Tcos			0x0
#define B4_Tacc			0x7
#define B4_Tcoh			0x0
#define B4_Tah			0x0
#define B4_Tacp			0x0
#define B4_PMC			0x0


void Init_SDRAM(){
	BWSCON = 0x22000000;

	BANKCON6 = 0x00018001;
	BANKCON7 = 0x00018001;

	REFRESH = 0x008404f5;

	BANKSIZE = 0x000000b1;

	MRSRB6 = 0x00000020;
	MRSRB7 = 0x00000020;
}


void Init_DM9000(){
	BANKCON4 = 0x00000740;
	//BANKCON4 = ((B4_Tacs<<13)+(B4_Tcos<<11)+(B4_Tacc<<8)+(B4_Tcoh<<6)+(B4_Tah<<4)+(B4_Tacp<<2)+(B4_PMC));
}
