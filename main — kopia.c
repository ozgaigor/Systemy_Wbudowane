/*******************************************************************************
Explorer 16 Demo Main File

Company:
Microchip Technology Inc.

File Name:
main.c

Summary:
Explorer 16 Demo Main File.

Description:
This is the main file for the Explorer 16 Demo. It contains the main demo
flow and calls processor specific files for processor specific
implementations.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc. All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

#include "app.h"
#include <p24fj128ga010.h> //z zad 1

#define ONE_VOLT 310
#define ONE_TENTH_VOLT 31
#define ONE_HUNDREDTH_VOLT 3


// *****************************************************************************
// *****************************************************************************
// Section: File Scope Variables and Functions
// *****************************************************************************
// *****************************************************************************


void Update_LCD(void);
void SYS_Initialize(void);
extern void ConvertADCVoltage(unsigned int);
extern void Hex2Dec(unsigned char);


APP_DATA appData = {
    .messageLine1 = "Explorer 16 Demo",
    .messageLine2 = "Press S3 to cont",
    .messageTime = "Time 00: 00: 00 ",
    .messageADC = " Pot = 0.00 Vdc "
};

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

void delay(unsigned int ms) {
    unsigned int i;
    unsigned char j;

    for (i = 0; i < ms; i++) {

        for (j = 0; j < 200; j++) {
            Nop();
            Nop();
            Nop();
            Nop();
            Nop();
        }
    }
}

int main(void) {

    SYS_Initialize();

    TIMER_SetConfiguration(TIMER_CONFIGURATION_RTCC);

    /*Initialize ADC configure it as 10 bit interrupt driven mode*/
    ADC_SetConfiguration(ADC_CONFIGURATION_AUTO_SAMPLE_CONVERT);

    while (1) {
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(0xAF);
        LCD_PutChar(' ');
        LCD_PutChar('U');
        LCD_PutChar('W');
        LCD_PutChar('M');
        LCD_PutChar(' ');
        LCD_PutChar(0xAF);
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');


        LCD_PutChar(' ');
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);

        delay(1000);
        LCD_ClearScreen();
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(0xEB);
        LCD_PutChar(' ');
        LCD_PutChar('K');
        LCD_PutChar('O');
        LCD_PutChar('R');
        LCD_PutChar('T');
        LCD_PutChar('O');
        LCD_PutChar('W');
        LCD_PutChar('O');
        LCD_PutChar(' ');
        LCD_PutChar(0xEB);
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');


        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);

        delay(1000);
        LCD_ClearScreen();
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');

        LCD_PutChar('N');
        delay(50);
        LCD_PutChar('A');
        delay(50);
        LCD_PutChar('J');
        delay(50);
        LCD_PutChar('L');
        delay(50);
        LCD_PutChar('E');
        delay(50);
        LCD_PutChar('P');
        delay(50);
        LCD_PutChar('S');
        delay(50);
        LCD_PutChar('Z');
        delay(50);
        LCD_PutChar('E');
        delay(50);
        LCD_PutChar('!');
        delay(250);
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');

        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);

        delay(1000);
        LCD_ClearScreen();
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar('J');
        delay(50);
        LCD_PutChar('U');
        delay(50);
        LCD_PutChar('W');
        delay(50);
        LCD_PutChar('E');
        delay(50);
        LCD_PutChar('N');
        delay(50);
        LCD_PutChar('A');
        delay(50);
        LCD_PutChar('L');
        delay(50);
        LCD_PutChar('I');
        delay(50);
        LCD_PutChar('A');
        delay(50);
        LCD_PutChar('!');
        LCD_PutChar(' ');
        delay(250);
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');

        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(100);
        LCD_PutChar(0xA1);
        delay(100);
        LCD_PutChar(0xDF);
        delay(1000);
        LCD_ClearScreen();
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar('W');
        delay(50);
        LCD_PutChar(' ');
        delay(50);
        LCD_PutChar('P');
        delay(50);
        LCD_PutChar('O');
        delay(50);
        LCD_PutChar('L');
        delay(50);
        LCD_PutChar('S');
        delay(50);
        LCD_PutChar('C');
        delay(50);
        LCD_PutChar('E');
        delay(50);
        LCD_PutChar('!');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        delay(250);
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar('2');
        LCD_PutChar('5');
        LCD_PutChar('-');
        LCD_PutChar('2');
        LCD_PutChar('7');
        LCD_PutChar('M');
        LCD_PutChar('A');
        LCD_PutChar('J');
        LCD_PutChar('A');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        LCD_PutChar(' ');
        delay(1000);
        LCD_ClearScreen();

        appData.adc_lcd_update = 0;
    }
}

void Update_LCD(void) {
    LCD_PutChar('T');
    LCD_PutChar('i');
    LCD_PutChar('m');
    LCD_PutChar('e');
    LCD_PutChar(' ');
    LCD_PutChar(appData.tens + 0x30);
    LCD_PutChar(appData.ones + 0x30);

    Hex2Dec(appData.minutes);
    LCD_PutChar(':');
    LCD_PutChar(' ');
    LCD_PutChar(appData.tens + 0x30);
    LCD_PutChar(appData.ones + 0x30);

    Hex2Dec(appData.seconds);
    LCD_PutChar(':');
    LCD_PutChar(' ');
    LCD_PutChar(appData.tens + 0x30);
    LCD_PutChar(appData.ones + 0x30);

}

void ConvertADCVoltage(unsigned int adc_conv_data) {
    /* reset values */
    appData.adones = 0;
    appData.adtens = 0;
    appData.adhunds = 0;
    appData.adthous = 0;

    while (adc_conv_data > 0) {
        /* test for 1 volt or greater */
        if (adc_conv_data > (ONE_VOLT - 1)) {
            /* increment 1 volt counter */
            appData.adones++;

            /* subtract 1 volt */
            adc_conv_data -= ONE_VOLT;
        }            /* test for 0.1 volt */
        else if (adc_conv_data > (ONE_TENTH_VOLT - 1)) {
            /* increment tenths */
            if (appData.adtens < 9) {
                appData.adtens++;
            } else {
                /* tenths has rolled over */
                appData.adones++;

                /* so increment ones and reset tenths */
                appData.adtens = 0;
            }

            adc_conv_data -= ONE_TENTH_VOLT;
        }/* test for 0.01 volt */
        else if (adc_conv_data > (ONE_HUNDREDTH_VOLT - 1)) {
            /* increment hundredths */
            if (appData.adhunds < 9) {
                appData.adhunds++;
            } else {
                /* hundredths has rolled over */
                appData.adtens++;

                /* so increment tenths and reset hundredths */
                appData.adhunds = 0;
            }

            adc_conv_data -= ONE_HUNDREDTH_VOLT;
        } else if (adc_conv_data <= (ONE_HUNDREDTH_VOLT - 1)) {
            appData.adthous++;
            adc_conv_data--;
        }
    }

    appData.adones += 0x30;
    appData.adtens += 0x30;
    appData.adhunds += 0x30;
    appData.adthous += 0x30;
}

/*******************************************************************************

Function:
void Hex2Dec ( unsigned char )

Summary:
Explorer 16 Demo Hex to Decimal Conversion File

Description:
This is the file for the Explorer 16 Dem that converts the hexadecimal data
into decimal format.

Precondition:
None.

Parameters:
None.

Returns:
None.

Remarks:

 */

/******************************************************************************/

void Hex2Dec(unsigned char count) {
    /* reset values */
    appData.hunds = 0;
    appData.tens = 0;
    appData.ones = 0;

    while (count >= 10) {

        if (count >= 200) {
            count -= 200;
            appData.hunds = 0x02;
        }

        if (count >= 100) {
            count -= 100;
            appData.hunds++;
        }

        if (count >= 10) {
            count -= 10;
            appData.tens++;
        }
    }

    appData.ones = count;
}