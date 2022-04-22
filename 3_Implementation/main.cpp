/* A Program to turn the LED on as the door opens*/
#include<avr/io.h>
int main(void)                       
{
	DDRB&=~(1<<PB1);               //setting data direction port B1 to 1
	DDRD|=(1<<PD0);                //setting data direction port D0 to 1
	while(1)                       //for putting infinite loop
	{
if(PINB&0b00000010)              //setting condition for blinking LED at the door opens
	PORTD|=(1<<PD0)                //setting port D0 to pass 5V  so as to turn on the LED
		else
		PORTD&=~(1<<PD0);            //for turning off the LED as the door closes
	}
	return 0;
	}