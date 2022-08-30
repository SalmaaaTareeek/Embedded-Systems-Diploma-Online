/* Startup Cortex M3*/

.section .vectors          /*To Define Vector Section*/
.word 0x20001000           /*To Define SP Address */
.word _reset               /*To Define Reset Handler */
.word Vector_Handler       /* 2 NMI */
.word Vector_Handler       /* 3 Hard Fault */
.word Vector_Handler       /* 4 MM Fault */
.word Vector_Handler       /* 5 Bus Fault */
.word Vector_Handler       /* 6 Usage Fault */
.word Vector_Handler       /* 7 Reserved */
.word Vector_Handler       /* 8 Reserved */
.word Vector_Handler       /* 9 Reserved */
.word Vector_Handler       /* 10 Reserved */
.word Vector_Handler       /* 11 SV call */
.word Vector_Handler       /* 12 Debug Reserved */
.word Vector_Handler       /* 13 Reserved */
.word Vector_Handler       /* 14 PendSV */
.word Vector_Handler       /* 15 SysTick */
.word Vector_Handler       /* 16 IRQ0 */
.word Vector_Handler       /* 17 IRQ1 */
.word Vector_Handler       /* 18 IRQ2 */
.word Vector_Handler       /* 19 .... */


.section .text             /* Define Text Section*/

_reset:                    /* _reset Functionality*/ 
	bl main
	b .
.thumb_func                /* Enable Thumb Func*/

Vector_Handler:            /*Vector Handler Functionality*/
	b _reset
