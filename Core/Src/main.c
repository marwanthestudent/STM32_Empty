#include "stm32f446xx.h"
static void delay_ms(uint32_t ms) {
    //5 operations, 5*3200 = 16,000 cycles
    //default clock speed is 16MHz.
    while (ms--) {
        for (volatile uint32_t i = 0; i < 3200; i++) {
            __NOP();
        }
    }
}

int main(){





    return 0;
}
