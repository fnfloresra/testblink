
#include <xc.h>
#include"configuration.h"
#include <libpic30.h>

int main(void) {
    ADPCFG = 0x1FFF;
    TRISB = 0;
    LATB = 0;
  
    while (1) {
       LATBbits.LATB0 = 1;
       __delay_ms(1000);

       LATBbits.LATB0 = 0;
       __delay_ms(1000);
    }
}
