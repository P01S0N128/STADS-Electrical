/*
 * main.c
 *
 * Created: 8/7/2021 4:00:12 PM
 *  Author: kusha
 */ 

#include <xc.h>
#include <avr/io.h>

void init_master(void){
	DDRB |= 1<<PINB1 | 1<<PINB2 | 1<<PINB0; // Sets SCK, MOSI and SS pins as outputs
	SPCR |= 1<<SPE | 1<<MSTR | 1<<SPR0;	// Enables SPI, Master mode, Pre-scaler
}

uint8_t tranceiver(uint8_t data){
	SPDR = data;
	while(!(SPSR & (1<<SPIF))); // Will wait till the data transfer is complete
	return (SPDR);
}


int main(void)
{
    while(1)
    {
        //TODO:: Please write your application code 
    }
}