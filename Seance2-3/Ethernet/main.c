/**
  * PJE Benjamin Digeon
  * Test ethernet avec LED interne et externe
  */

#include <rflpc17xx/rflpc17xx.h>

int main() {

	rflpc_led_init();
	rflpc_eth_init();
	rflpc_gpio_set_pin_mode_output(2,5);
		
	while(1) {
		if(rflpc_eth_link_state()) {
			rflpc_led_set(RFLPC_LED_1);
			rflpc_gpio_set_pin(2,5);
		} else {
			rflpc_led_clr(RFLPC_LED_1);
			rflpc_gpio_clr_pin(2,5);
		}
		RFLPC_DELAY(1000000);
    }
    
	return 0;
}