/*
 *  Created on: Jan 18, 2022
 *      Author: Joe Krachey
 */

#ifndef LEDS_H__
#define LEDS_H__

#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"

// Pin definitions for the ECE453 Staff Dev board
#define PIN_LED_RED 		P10_3
#define PIN_LED_GREEN 	    0       // ADD CODE	
#define PIN_LED_YELLOW 		0       // ADD CODE
#define PIN_LED_BLUE 		0       // ADD CODE

/* Initializes the IO functions */
void leds_init(void);

#endif 
