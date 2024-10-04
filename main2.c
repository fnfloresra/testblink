/*
 * File:   main2.c
 * Author: fnflo
 *
 * Created on August 22, 2024, 1:03 PM
 */

#include "xc.h"
#include "libpic30.h"

//#define _XTAL_FREQ 8000000  // Define the operating frequency (8 MHz)

int main(void) {
    // Set Port B as output
    TRISB = 0x00; // Configure all pins of Port B as output

    while (1) {
        // Write 01010101 to Port B
        PORTB = 0xAA; // 0xAA = 10101010 in binary
          // Write 10101010 to Port B
        PORTB = 0x55; // 0x55 = 01010101 in binary
        }

    return 0; // Should never reach here
}

