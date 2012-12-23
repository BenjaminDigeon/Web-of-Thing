/**
 * Benjamin Digeon
 * Florent David
 */

#include "lib_led_strip.h"

int main() {    
    INIT_WAIT;
    SPI_INIT;
     
	while(1){
	defilement_led();
	RFLPC_DELAY(2000000);   
	clear_led();
	RFLPC_DELAY(2000000);
   	}
   	return 0;    
}
