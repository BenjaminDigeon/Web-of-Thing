/*
<generator>
	<handlers doGet="do_led"/>
	<args>
 		<arg name="led1" type="uint8" />
 		<arg name="led2" type="uint8" />
 		<arg name="led3" type="uint8" />
 		<arg name="led4" type="uint8" />
 	</args>
</generator>
*/

#include <rflpc17xx/rflpc17xx.h>

static char do_led(struct args_t *args) {
	
	rflpc_led_init();
	
	if(args) {
		int led1 = (int) args->led1;
		int led2 = (int) args->led2;
		int led3 = (int) args->led3;
		int led4 = (int) args->led4;
		
		if(led1) {
			rflpc_led_set(RFLPC_LED_1);
		} else {
			rflpc_led_clr(RFLPC_LED_1);
		}
		
		if(led2) {
			rflpc_led_set(RFLPC_LED_2);
		} else {
			rflpc_led_clr(RFLPC_LED_2);
		}
		
		if(led3) {
			rflpc_led_set(RFLPC_LED_3);
		} else {
			rflpc_led_clr(RFLPC_LED_3);
		}
		
		if(led4) {
			rflpc_led_set(RFLPC_LED_4);
		} else {
			rflpc_led_clr(RFLPC_LED_4);
		}
	}
	
 	return 1;
}

/* Adresse pour allumer : 192.168.1.2/led?led1=1 */