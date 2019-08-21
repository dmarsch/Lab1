/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        int i=0; 
        for (i = 0; i < 255; i++) 
        {
            CNTR_Write(i);
            /*inputs[0] = i & 0x1; //https://stackoverflow.com/questions/12555538/binary-counter-in-c
            inputs[1] = i & 0x2;
            inputs[2] = i & 0x4;
            inputs[3] = i & 0x8;
            inputs[4] = i & 0x16;
            inputs[5] = i & 0x32;
            inputs[6] = i & 0x64;
            inputs[7] = i & 0x128;
            
            if (inputs[0] != 0)
            {
                CyPins_SetPin(CNTR_0);
            }
            else
            {
                CyPins_ClearPin(CNTR_0);
            }
            if (inputs[1] != 0)
            {
                CyPins_SetPin(CNTR_1);
            }
            else
            {
                CyPins_ClearPin(CNTR_1);
            }
            if (inputs[2] != 0)
            {
                CyPins_SetPin(CNTR_2);
            }
            else
            {
                CyPins_ClearPin(CNTR_2);
            }
            if (inputs[3] != 0)
            {
                CyPins_SetPin(CNTR_3);
            }
            else
            {
                CyPins_ClearPin(CNTR_3);
            }
            if (inputs[4] != 0)
            {
                CyPins_SetPin(CNTR_4);
            }
            else
            {
                CyPins_ClearPin(CNTR_4);
            }
            if (inputs[5] != 0)
            {
                CyPins_SetPin(CNTR_5);
            }
            else
            {
                CyPins_ClearPin(CNTR_5);
            }
            if (inputs[6] != 0)
            {
                CyPins_SetPin(CNTR_6);
            }
            else
            {
                CyPins_ClearPin(CNTR_6);
            }
            if (inputs[7] != 0)
            {
                CyPins_SetPin(CNTR_7);
            }
            else
            {
                CyPins_ClearPin(CNTR_7);
            }
                CyDelay(1000);
                */
            CyDelay(1000);
        }
        
    }
}

/* [] END OF FILE */
