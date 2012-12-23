/*
<generator>
	<handlers doGet="do_led"/>
	<args>
 		<arg name="ledIndex" type="uint8" />
 		<arg name="state" type="uint8" />
 	</args>
</generator>
*/

#include <rflpc17xx/rflpc17xx.h>

static char do_led(struct args_t *args) {


	if(args) {
		int ledIndex = (int) args->ledIndex;
		int state = (int) args->state;

		

		rflpc_led_init();
	
		switch(ledIndex){
	
			case 1:
			ledIndex = RFLPC_LED_1;
			break;

			case 2:
			ledIndex = RFLPC_LED_2;
			break;

			case 3:
			ledIndex = RFLPC_LED_3;
			break;

			case 4:
			ledIndex = RFLPC_LED_4;
			break;

			default:
			break;
		}


		if(state) {
			rflpc_led_set(ledIndex);
		} else {
			rflpc_led_clr(ledIndex);
		}
	}

 	return 1;
}

/* Adresse pour allumer : 192.168.1.2/led?led1=1 */
