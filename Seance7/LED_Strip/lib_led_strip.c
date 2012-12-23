/**
 * Librairie de commande du LED Strip
 * Benjamin Digeon
 * Florent David
 */

#include "lib_led_strip.h"

void defilement_led() {
	int i;
	for(i=0;i<NLED;i++) {
		SPI_WRITE(vert);
		RFLPC_DELAY(2000000);
	}
}

void clear_led(){
	int i;
	for(i = 0; i<NLED;i++) {
        SPI_WRITE(clear);        
    }
}