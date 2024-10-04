/*
 * File:   main.c
 * Author: fnflo
 *
 * Created on August 21, 2024, 8:38 PM
 */

#include <xc.h>
#include "configuration.h"

void setupPorts() {
    // Set all bits of TRISB to 0 to configure Port B as output
    TRISB = 0x0000;
    
    // Set all bits of TRISC to 1 to configure Port C as input
    TRISC = 0xFFFF;
}

int main(void) {
    // Call the setup function to configure the ports
    setupPorts();
    
    // Main loop
    while(1) {
        // Read the state of Port C
        unsigned int portCValue = PORTC;
        
        // Write the state of Port C to Port B
        LATB = portCValue;
    }
    
    return 0;
}