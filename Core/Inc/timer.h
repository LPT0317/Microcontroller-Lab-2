/*
 * timer.h
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int EN_flag;
extern int LED_flag;

void setTimer_EN(int duration);
void setTimer_LED(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
