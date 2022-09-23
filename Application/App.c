/*
 * APP.c
 *
 * Created: 23/09/2022 12:06:04 ص
 *  Author: user
 */ 
#include "App.h"
uint8_t temprature[] = "Temperature : ";
uint8_t motor[] = "Motor speed : ";
uint8_t temp = 0;
uint8_t MotorSpeed = 0;
void APP_init()
{
	LM35_Init(PORT_A , PIN0);
	LCD_4BIT_inti();
	LED_init(PORT_B , PIN0);
	BUZZER_Init(PORT_B , PIN1);
	MOTOR_Init();
}
void APP_start()
{
	temp = LM35_Read(PIN0) / 2;
	if(temp < 35)
	{
		LED_off(PORT_B , PIN0); /*LED off.*/
		BUZZER_off(PORT_B , PIN1); /*Buzzer off.*/
		MOTOR_Speed(0); /*Motor off.*/
		/*Display the data on the LCD.*/
		LCD_Write_4BIT_Command(LINE_ONE);
		LCD_Write_String(temprature); 
		LCD_Display_Number(temp);
		LCD_Write_4BIT_Command(LINE_TWO);
		LCD_Write_String(motor);
		LCD_Write_Number(0);
	}
	else if((temp >= 35) && temp <= 50)
	{
		LED_on(PORT_B , PIN0);
		BUZZER_on(PORT_B , PIN1);
		MotorSpeed = (((temp - MIN_TEMP)*3) + MIN_SPEED);
		MOTOR_Speed(MotorSpeed);
		/*Display the data on the LCD.*/
		LCD_Write_4BIT_Command(LINE_ONE);
		LCD_Write_String(temprature);
		LCD_Display_Number(temp);
		LCD_Write_4BIT_Command(LINE_TWO);
		LCD_Write_String(motor);
		LCD_Write_Number(MotorSpeed);
	}
}