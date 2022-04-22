/*
 * GccApplication2.c
 *
 * Created: 22-04-2022 15:17:45
 * Author : harshitha
 */ 

#include <avr/io.h>
int main(void)
{
	DDRB=DDRB&0b11111101;//fd
	DDRC=DDRC|0b01000000;//40
	while(1)
	{
		if(PINB & 0b00000010)//02
		PORTC=PORTC|0b01000000;//40
		else
		PORTC=PORTC&0b10111111;//bf
	}
	return 0;
}