#include "uart.h"
#include "platform.h"


uchar32_t String_Stream[50] = "Learn-in-Depth: Salma";   //Define Global array with 50 Element

void main(void)
{
	Read_Uart_String(String_Stream);

}