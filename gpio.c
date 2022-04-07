#include "gpio.h"


void gpio_init(){
	GPIO0->PIN_CNF[23] = 0; // button B

	// Configure leds (earth)
	GPIO0->PIN_CNF[28] = 1; //Col 1
	GPIO0->PIN_CNF[11] = 1; //Col 2
	GPIO0->PIN_CNF[31] = 1; //Col 3
	GPIO1->PIN_CNF[5] = 1;  //Col 4
	GPIO0->PIN_CNF[30] = 1; //Col 5 
    
    //logic zero
    GPIO0->OUTCLR = (1<<28);
    GPIO0->OUTCLR = (1<<11);
    GPIO0->OUTCLR = (1<<31);
    GPIO1->OUTCLR = (1<<5);
    GPIO0->OUTCLR = (1<<30);
};

void gpio_lights_on(){
   GPIO0->OUTSET = (1<<21);
   GPIO0->OUTSET = (1<<22);
   GPIO0->OUTSET = (1<<15);
   GPIO0->OUTSET = (1<<24);
   GPIO0->OUTSET = (1<<19);
};

void gpio_lights_off(){
   GPIO0->OUTCLR = (1<<21);
   GPIO0->OUTCLR = (1<<22);
   GPIO0->OUTCLR = (1<<15);
   GPIO0->OUTCLR = (1<<24);
   GPIO0->OUTCLR = (1<<19);
};