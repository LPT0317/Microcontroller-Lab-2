/*
 * led.c
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#include "led.h"

/*Code for 7 SEGMENT LED */
void clear7SEG(){
	HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
			SEG3_Pin | SEG4_Pin | SEG5_Pin | SEG6_Pin, 1);
}
void display7SEG(int num){
	if(num >= 0 && num < 10){
		switch (num) {
			case 0:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG4_Pin | SEG5_Pin, 0);
				break;
			case 1:
				HAL_GPIO_WritePin(GPIOB, SEG1_Pin | SEG2_Pin, 0);
				break;
			case 2:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG3_Pin |
										 SEG4_Pin | SEG6_Pin, 0);
				break;
			case 3:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG6_Pin, 0);
				break;
			case 4:
				HAL_GPIO_WritePin(GPIOB, SEG1_Pin | SEG2_Pin |
										 SEG5_Pin | SEG6_Pin, 0);
				break;
			case 5:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG2_Pin |
										 SEG3_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 6:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG2_Pin | SEG3_Pin |
										 SEG4_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 7:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin, 0);
				break;
			case 8:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG4_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 9:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
		}
	}
}
/* END CODE */

/* Code for digital clock */
  /* Init variable */
int EN_state = 0;
const int MAX_LED = 4;
int index_led = 0;
int led_buffer [4] = {1 , 2 , 3 , 4};
int hour = 15, minute = 8, second = 50;
  /* Function for EN GPIO */
void initState(){
	EN_state = 0;
}
void openEN(int state){
	if(state == 0){
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, 0);
	}
	if(state == 1){
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, 0);
	}
	if(state == 2){
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, 0);
	}
	if(state == 3){
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, 0);
	}
}
void clearEN(){
	HAL_GPIO_WritePin(GPIOA, EN0_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, EN1_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, EN2_Pin, 1);
	HAL_GPIO_WritePin(GPIOA, EN3_Pin, 1);
}
  /* Function for dislay 7 SEG LED using buffer */
void update7SEG(int index){
	switch(index){
		case 0:
			// Display the first 7 SEG with led_buffer [0]
			clear7SEG();
			clearEN();
			openEN(index);
			display7SEG(led_buffer[index]);
			break ;
		case 1:
			// Display the second 7 SEG with led_buffer [1]
			clear7SEG();
			clearEN();
			openEN(index);
			display7SEG(led_buffer[index]);
			break ;
		case 2:
			// Display the third 7 SEG with led_buffer [2]
			clear7SEG();
			clearEN();
			openEN(index);
			display7SEG(led_buffer[index]);
			break ;
		case 3:
			// Display the forth 7 SEG with led_buffer [3]
			clear7SEG();
			clearEN();
			openEN(index);
			display7SEG(led_buffer[index]);
			break ;
		default :
			break ;
	}
}
  /* Function for update buffer */
void updateClockBuffer(){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}
/* END CODE */

/* Code for blink LED */
void blinkLED(){
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
	HAL_GPIO_TogglePin(GPIOA, DOT_Pin);
}
/* END CODE */

/* Code LED Matrix */
  /* Init variable */
  const int MAX_LED_MATRIX = 8;
  int index_led_matrix = 0;
  uint8_t matrix_buffer[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};

  /* Function update LED Matrix */
  void updateLEDMatrix(int index)
  {
    switch(index)
    {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    default:
      break;
    }
  }
