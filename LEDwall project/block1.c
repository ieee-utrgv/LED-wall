/* 
 * File:   block1.c
 * Author: palom
 *
 * Created on September 22, 2017, 3:32 PM
 */


#pragma config FOSC = INTOSC
#pragma config WDTE = OFF
#pragma config MCLRE = ON
#pragma config CP = OFF
#define _XTAL_FREQ 16000000      //defines frequency to use delay function
#include <xc.h>

//use this function to give a "Zero Pulse"
void runZero() {
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //__delay_us(.1);
}

//Use this function to give a "One Pulse"
void runOne() {
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
}

//Call this function to make the strip BLUE
void runBlue() {
    //Code for 8 zeroes
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //Code for 8 more zeroes
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    //Code for 8 one's
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
    //
    PORTA = 0b00000001;
    PORTA = 0b00000000;
    __delay_us(1);
    //
}

void reset() {
    //Code for 8 zeroes
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    //Code for 8 zeroes
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    //Code for 8 zeroes
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
    runZero();
}
main()
{
    OSCCON = 0b01111010;        //frequency
    ANSELA = 0b00000000;        //setting port A to digital outputs
    TRISA = 0b00000000;
   // PORTA = 0b00000001;


    while(1)
    {
        //////////////////////////BLUE//////////////////////////////////////////
        //PORTA = 0b00000001; 
        //PORTA = 0b00000000;
        //Testing a ONE Pulse:
        PORTA = 0b00000001;
        __delay_us(.45);
        PORTA = 0b00000000;
         //
        //__delay_us(60);
                
//                ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        
//
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        ///CODE FOR A 0
//        PORTA = 0b00000000;
//        PORTA = 0b00000001;
//        __delay_us(.1);
//        //////////////////////////
//        
//
//        /////CODE FOR A 1
//        PORTA = 0b00000000; 
//        NOP();
//        PORTA = 0b00000001;
//        NOP();
//        ///////////////////////////
//        /////CODE FOR A 1
//        PORTA = 0b00000000; 
//        NOP();
//        PORTA = 0b00000001;
//        NOP();
//        ///////////////////////////
//        /////CODE FOR A 1
//        PORTA = 0b00000000; 
//        NOP();
//        PORTA = 0b00000001;
//        NOP();
//        ///////////////////////////
//        /////CODE FOR A 1
//        PORTA = 0b00000000; 
//        NOP();
//        PORTA = 0b00000001;
//        NOP();
//        ///////////////////////////
//        /////CODE FOR A 1
//        PORTA = 0b00000000; 
//        NOP();
//        PORTA = 0b00000001;
//        NOP();
//        ///////////////////////////
//        /////CODE FOR A 1
//        PORTA = 0b00000000; 
//        NOP();
//        PORTA = 0b00000001;
//        NOP();
//        ///////////////////////////
//        /////CODE FOR A 1
//        PORTA = 0b00000000; 
//        NOP();
//        PORTA = 0b00000001;
//        NOP();
//        ///////////////////////////
//        /////CODE FOR A 1
//        PORTA = 0b00000000; 
//        NOP();
//        PORTA = 0b00000001;
//        NOP();
        ///////////////////////////
        //////////////////////////BLUE//////////////////////////////////////////
          
    }
}
