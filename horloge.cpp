#include "mbed.h"

//Secondes = Rouge
DigitalOut Seconde0(p9);
DigitalOut Seconde30(p10);
DigitalOut SecondeBip(p8);

//Minutes = Jaune
DigitalOut Minute1(p11);
DigitalOut Minute2(p12);
DigitalOut Minute4(p13);
DigitalOut Minute8(p14);
DigitalOut Minute16(p15);
DigitalOut Minute32(p16);

//Heure = Verte
DigitalOut Heure1(p17);
DigitalOut Heure2(p18);
DigitalOut Heure4(p19);
DigitalOut Heure8(p20);

int main() {
    //On défini l'heure
    set_time(1348667533);
    int reste_heure,reste_minute;
    
    while(1) {
        time_t seconds = time(NULL);
    	struct tm *t = localtime(&seconds);
        int heure = t->tm_hour;
        //On affiche les heures
        if((heure/8)>=1) {
        	Heure1 = 1;
        	reste_heure=heure%8;
        } else {
        	Heure1 = 0;
        	reste_heure=heure;
        }
		if((reste_heure/4)>=1) {
			Heure2 = 1;
			reste_heure=reste_heure%4;
		} else {
			Heure2 = 0;
		}
		if((reste_heure/2)>=1) {
			Heure4 = 1;
			reste_heure=reste_heure%2;
		} else {
			Heure4 = 0;
		}
		if((reste_heure/1)>=1) {
			Heure8 = 1;
			reste_heure=reste_heure%1;
		} else {
			Heure8 = 0;
		}
        
        //On affiche les minutes
        int minute = t->tm_min;
        if((minute/32)>=1) {
            Minute1 = 1;
            reste_minute=minute%32;
        } else {
            Minute1 = 0;
            reste_minute=minute;
        }
        if((reste_minute/16)>=1) {
        	Minute2 = 1;
        	reste_minute=reste_minute%16;
        } else {
        	Minute2 = 0;
        }
        if((reste_minute/8)>=1) {
        	Minute4 = 1;
        	reste_minute=reste_minute%8;
        } else {
        	Minute4 = 0;
        }
        if((reste_minute/4)>=1) {
        	Minute8 = 1;
        	reste_minute=reste_minute%4;
        } else {
        	Minute8 = 0;
        }
        if((reste_minute/2)>=1) {
        	Minute16 = 1;
        	reste_minute=reste_minute%2;
        } else {
        	Minute16 = 0;
        }
        if((reste_minute/1)>=1) {
        	Minute32 = 1;
        	reste_minute=reste_minute%1;
        } else {
        	Minute32 = 0;
        }
        //On affiche les secondes
        int second = t->tm_sec;
        if(second<30) {
            Seconde0 = 1;
            Seconde30 = 0;    
        } else {
            Seconde0 = 0;
            Seconde30 = 1;
        }
        if(second%2>0){
            SecondeBip = 1;
        } else {
            SecondeBip = 0;
        }
    }
}
