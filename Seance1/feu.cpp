#include "mbed.h"

DigitalOut rouge(p5);
DigitalOut jaune(p6);
DigitalOut vert(p7);

int main() {
    while(1) {
		vert = 0;
		jaune = 0;
		rouge = 1;
		wait(5);
		rouge = 0;
		jaune = 1;
		wait(5);
		jaune = 0;
		vert = 1;
		wait(5);
	}
}
