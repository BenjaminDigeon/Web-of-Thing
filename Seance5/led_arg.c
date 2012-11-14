/*
<generator>
	<handlers doGet="do_led"/>
	<args>
 		<arg name="on" type="uint8" />
 	</args>
</generator>
*/

#include <rflpc17xx/rflpc17xx.h>

static char do_led(struct args_t *args) {
	
	rflpc_led_init();
	
	if(args) {
		int rep = (int) args->on;
		
		if(rep) {
			rflpc_led_set(RFLPC_LED_1);
		} else {
			rflpc_led_clr(RFLPC_LED_1);
		}
	}
	
 	return 1;
}

/* Adresse pour allumer : 192.168.1.2/led?on=1 */