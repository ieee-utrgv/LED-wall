/* 
 * File:   test.c
 * Author: palom
 *
 * Created on September 29, 2017, 9:39 AM
 */

#pragma config FOSC = INTOSC
#pragma config WDTE = OFF
#pragma config MCLRE = ON
#pragma config CP = OFF
#define _XTAL_FREQ 16000000      //defines frequency to use delay function
#include <xc.h>

/*
 * 
 */


int main() {
    
    OSCCON = 0b01111010;        //frequency
    ANSELA = 0b00000000;        //setting port A to digital outputs
    TRISA = 0b00000000;
    PORTA = 0b00000001;
    
    while(1)
    {
        
        int i;
        int x;
        
//        for (i=0;i<8;i++){
//            ///CODE FOR A 0///////////
//            PORTA = 0b00000000;
//            PORTA = 0b00000001;
//            __delay_us(.1);
//            //////////////////////////
//        }
   
        for (x=0;x<8;x++){
            /////CODE FOR A 1//////////
            PORTA = 0b00000000; 
            NOP();
            PORTA = 0b00000001;
            NOP();
            ///////////////////////////
        }
    
    return 0;
    }
}