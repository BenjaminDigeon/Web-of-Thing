/**
  * PJE Benjamin Digeon
  * Comptage intéruptions
  */

#include <rflpc17xx/rflpc17xx.h>

int main() {

	rflpc_gpio_set_pin_mode_output(2,5);
	
	while(1) {
		rflpc_gpio_set_pin(2,5);
		RFLPC_DELAY(1000000);
    	rflpc_gpio_clr_pin(2,5);
    	RFLPC_DELAY(1000000);
    }
    
	return 0;
}