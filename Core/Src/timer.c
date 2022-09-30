/*
 * timer.c
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#include "timer.h"

int EN_flag = 0;

int timer_counter = 0;

void setTimer(int duration){
	timer_counter = duration;
	EN_flag = 0;
}
void timerRun(){
	if(timer_counter == 0){
		EN_flag = 1;
	}
	if(timer_counter > 0){
		timer_counter--;
	}
}
