/*
 * App.h
 *
 * Created: 23/09/2022 12:06:31 ص
 *  Author: user
 */ 


#ifndef APP_H_
#define APP_H_

#include "../ECUAL/BUZZER/BUZZER.h"
#include "../ECUAL/LCD/LCD.h"
#include "../ECUAL/LED/led.h"
#include "../ECUAL/LM35/LM35.h"
#include "../ECUAL/MOTOR/MOTOR.h"
#define MIN_TEMP 35
#define MIN_SPEED 50
void APP_init();
void APP_start();


#endif /* APP_H_ */