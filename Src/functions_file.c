/*
 * functions_file.c
 *
 *  Created on: 07.02.2026
 *      Author: Joelikane
 */

#include "main.h"

//Function to implement the delay using the SiysTick Timer in Cortex-M core
void delay_ms(const uint32_t * const ptr_countflag, uint32_t ms)
{
	for (uint32_t i = 0; i < ms; i++)
	{
		while(((*ptr_countflag) & (1 << 16)) == 0);//wait until the COUNTFLAG is set to 0
	}
}
