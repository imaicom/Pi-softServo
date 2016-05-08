#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>
#include <softServo.h>

int main () {
	
	wiringPiSetup();
	softServoSetup (5, -1 , -1 , -1 , -1 , -1 , -1 , -1) ;
	softServoWrite (5,  0) ;
	sleep(1);
	softServoWrite (5,  500) ;
	sleep(1);
	softServoWrite (5,  100) ;
	sleep(1);
	softServoWrite (5,  500) ;
	sleep(1);
}
