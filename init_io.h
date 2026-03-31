#ifndef INIT_IO_
#define INIT_IO_

#include <stdint.h>

#define PIN 0 // LED connected to P1.0
#define SWITCH_PIN 7 // Switch connected to 3.7
#define LOW 0
#define PRESSED LOW
// Register Definitions for Port 3
#define GPIO_PORT3_PC ((volatile uint32_t *)0x40040308) // Port 3 configuration register
#define GPIO_PORT3_DR ((volatile uint32_t *)0x40040300) // Port 3 output data register
#define GPIO_PORT3_PS ((volatile uint32_t *)0x40040304) // Port 3 pin status register
// Register Definitions for Port 1
#define GPIO_PORT1_PC ((volatile uint32_t *)0x40040108) // Port 1 configuration register
#define GPIO_PORT1_DR ((volatile uint32_t *)0x40040100) // Port 1 output data register

void init_LED_and_Switch(void);
void toggle_LED_on_SwitchPress(void);
#endif
