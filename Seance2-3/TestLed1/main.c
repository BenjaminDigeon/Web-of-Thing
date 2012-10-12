#include <rflpc17xx/rflpc17xx.h>

int main()
{
	rflpc_led_init();

	while(1) {
		rflpc_led_set(RFLPC_LED_1);
		RFLPC_DELAY(1000000);
    	rflpc_led_clr(RFLPC_LED_1);
    	RFLPC_DELAY(1000000);
    }
    
	return 0;
}