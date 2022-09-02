#include "platform.h"

#define RCC_BaseAddress 0x40021000                     //RCC Base Address
#define GPIO_Port_A 0x40010800                         //GPIO Port A Base Address  
#define APB2ENR *((vuint32_t*)RCC_BaseAddress+0x18)    //RCC->APB2ENR Reg Address
#define CRH *((vuint32_t*)GPIO_Port_A+0x04)            //GPIO->CRH Reg Address
#define ODR *((vuint32_t*)GPIO_Port_A+0x0c)            //GPIO->ODR Reg Address
#define RCC_IOPAEN (1<<2)                              //RCC_IOPAEN Shift Pin 2
#define GPIO13 (1UL<<13)                               //GPIO Shift Pin 13

typedef union {
	vuint32_t all_fields;
	struct 
	{
		vuint32_t reserved:13;
		vuint32_t P_13:1;

		
	}Pin;


}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t *)(GPIO_Port_A+0x0c);
int main(void)
{
	APB2ENR |= RCC_IOPAEN;
	CRH &= 0xFF0FFFFF;  //Saving the Bit Values By & then |
	CRH |= 0x00200000;
	while(1)
	{
		R_ODR->Pin.P_13 = 1;
		for(volatile int i ; i<5000 ; i++);
		R_ODR->Pin.P_13 = 0;
		for(volatile int i ; i<5000 ; i++);

	}
}