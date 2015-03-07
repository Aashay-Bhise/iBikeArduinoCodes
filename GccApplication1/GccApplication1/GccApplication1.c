/*
 * GccApplication1.c
 *
 * Created: 02-12-2014 06:28:34
 *  Author: Aashay
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	
DDRB=255;
    while(1)
    {
     PORTB=0b10000001;
	 _delay_ms(500);
	 PORTB=0b00011000;
	 _delay_ms(500);
	 PORTB=0b01000010;
	 _delay_ms(500);
	 PORTB=0b00100100;
	 _delay_ms(500);
	 PORTB=0b01010101;
	 _delay_ms(500);
	 PORTB=0b10101010;
	 _delay_ms(500);
    }
	return 0; 
}
