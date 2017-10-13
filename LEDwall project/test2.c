/* 
 * File:   test2.c
 * Author: palom
 *
 * Created on October 13, 2017, 1:50 PM
 */

#pragma config FOSC = INTOSC
#pragma config WDTE = OFF
#pragma config MCLRE = ON
#pragma config CP = OFF
#define _XTAL_FREQ 16000000      //defines frequency to use delay function
#include <xc.h>

main()
{
    OSCCON = 0b01111010;        //frequency
    ANSELA = 0b00000000;        //setting port A to digital outputs
    TRISA = 0b00000000;
    PORTA = 0b00000001;
    
    while(1)
    {
        ///CODE FOR A 0////////////
        PORTA = 0b00000000;
        PORTA = 0b00000001;
        __delay_us(.1);
        ///////////////////////////
        
        /////CODE FOR A 1//////////
        PORTA = 0b00000000; 
        NOP();
        PORTA = 0b00000001;
        NOP();
        ///////////////////////////
        
    }
