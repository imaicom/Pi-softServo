// cc -o softServo softServo.c  -lwiringPi -lm

#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>
#include "softServo.h"

int main () {
	
	wiringPiSetup();
	softServoSetup (5, -1 , -1 , -1 , -1 , -1 , -1 , -1) ; // Pin number of each of the servo, "-1" Missing servo
	// The pin number details -> https://github.com/imaicom/Pi-pin-Finder/blob/master/raspi-pin.pdf
	// You can control the servo motor up to 8 in this program.
	softServoWrite (5,  0) ;
	sleep(1);
	softServoWrite (5,  500) ;
	sleep(1);
	softServoWrite (5,  100) ;
	sleep(1);
	softServoWrite (5,  500) ;
	sleep(1);
}
