// cc -o "softServo" "softServo.c" ~/wiringPi/wiringPi/softServo.c -IwiringPi/wiringPi -lwiringPi -lm -lpthread

#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>
#include "softServo.h"

int main () {
	
	wiringPiSetup();
	softServoSetup (23, -1 , -1 , -1 , -1 , -1 , -1 , -1) ; // Pin number of each of the servo, "-1" Missing servo
	// The pin number details -> https://github.com/imaicom/Pi-pin-Finder/blob/master/raspi-pin.pdf
	// You can control the servo motor up to 8 in this program.
	softServoWrite (23,  0) ;
	sleep(3);
	softServoWrite (23,  500) ;
	sleep(3);
	softServoWrite (23,  1000) ;
	sleep(3);
	softServoWrite (23,  500) ;
	sleep(3);
	softServoWrite (23,  0) ;
	sleep(3);
}
