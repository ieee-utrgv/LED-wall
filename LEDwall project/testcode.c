/* 
 * File:   testcode.c
 * Author: palom
 *
 * Created on September 27, 2017, 5:17 PM
 */

#include <xc.h>
#pragma config FOSC = INTOSC
#pragma config WDTE = OFF
#pragma config CP = OFF
#pragma config MCLRE = ON

main()
{
    OSCCON = 0b00010000;
    ANSELC = 0b00000000;
    TRISC = 0b00000000;
    PORTC = 0b00000000;
    
    while(1)
    {
        int x;
        for(x=0;x<=15;x++)
        {
            PORTC = x;
            NOP();
            
        }
    }
}
