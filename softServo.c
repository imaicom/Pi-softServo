#include <stdio.h>
#include <errno.h>
#include <string.h>

#include <wiringPi.h>
#include <softServo.h>

int main () {
	wiringPiSetup();
	softServoSetup (0, -1 , -1 , -1 , -1 , -1 , -1 , -1) ;
	softServoWrite (0,  0) ;
	sleep(1);
	softServoWrite (0,  500) ;
	sleep(1);
	softServoWrite (0,  100) ;
	sleep(1);
	softServoWrite (0,  500) ;
	sleep(1);

/*
	softServoWrite (1, 1000) ;
	softServoWrite (2, 1100) ;
	softServoWrite (3, 1200) ;
	softServoWrite (4, 1300) ;
	softServoWrite (5, 1400) ;
	softServoWrite (6, 1500) ;
	softServoWrite (7, 2200) ;
*/

}
