#include "uart.h"
#include "platform.h"


// Define the Base Address of UART0DR
#define UART0DR *((vuint32_t * const)((uint32_t*) 0x101f1000))

void Read_Uart_String(uchar32_t *Tx_String)
{
	while(*Tx_String != '\0')
	{
		UART0DR = (uint32_t)(*Tx_String);
		Tx_String ++;

	}

}
