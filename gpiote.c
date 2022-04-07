#include "gpiote.h"

void gpiote_init(){
    //Knapp A hendelse
    GPIOTE->CONFIG[0] = (2<<16)|(14 << 8)| 1; //0001 0010 0010 1110 0000 0001
    //Oppgaver koblet til forsyningspinne for LED-matrisen 
    //GPIOTE->CONFIG[1] = 0x031503; //0000 0011 0001 0101 0000 0011
    GPIOTE->CONFIG[1] = (1<<15) | (1<<12) | (1<<11) | (1<<9) | (1<<8) | (1<<1) | 1;
    GPIOTE->CONFIG[2] = 0x031603; //0000 0011 0001 0110 0000 0011
    GPIOTE->CONFIG[3] = 0x030F03; //0000 0001 0000 1111 0000 0011
    GPIOTE->CONFIG[4] = 0x031803; //0000 0001 0001 1000 0000 0011
    GPIOTE->CONFIG[5] = 0x031303; //0000 0001 0001 0011 0000 0011
}