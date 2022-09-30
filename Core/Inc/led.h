/*
 * led.h
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"

extern int EN_state;

void clear7SEG();
void display7SEG(int num);
void switchState();

#endif /* INC_LED_H_ */
