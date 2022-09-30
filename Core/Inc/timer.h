/*
 * timer.h
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int SEG1_flag;
extern int SEG2_flag;

void setTimerSEG1(int duration);
void setTimerSEG2(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
