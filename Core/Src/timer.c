/*
 * timer.c
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#include "timer.h"

int counter = 0;
int EN_flag = 0;

void setTimer(int duration){
	counter = duration / 10;
	EN_flag = 0;
}
void timerRun(){
	if(counter == 0){
		EN_flag = 1;
	}
	if(counter > 0){
		counter--;
	}
}
