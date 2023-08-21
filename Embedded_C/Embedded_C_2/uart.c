#include "uart.h"


#define UART0_DR *(volatile unsigned int*) ((unsigned int*)0x101f1000)


void Uart_TX_String(unsigned char* p_tx_string)
{
	while(*p_tx_string != '\0')
	{
		UART0_DR = (unsigned int)*p_tx_string;
		p_tx_string++;
	}
}