/*
 * GccApplication1.c
 *
 * Created: 19/09/2022 09:48:49 م
 * Author : user
 */ 
#define F_CPU 1000000UL
#include <util/delay.h>
#include "Application/App.h"
int main(void)
{
    /* Replace with your application code */
   	APP_init();
	while (1) 
    {
		APP_start();
    }
}

