/*
 * timer.c
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#include "timer.h"

int SEG1_flag = 0;
int SEG2_flag = 0;

int timer1_counter = 0;
int timer2_counter = 0;

void setTimerSEG1(int duration){
	timer1_counter = duration;
	SEG1_flag = 0;
}
void setTimerSEG2(int duration){
	timer2_counter = duration;
	int SEG2_flag = 0;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			SEG1_flag = 1;
		}
	}
	if(timer2_counter > 0){
		timer2_counter--;
		if(timer2_counter <= 0){
			SEG2_flag = 1;
		}
	}
}
