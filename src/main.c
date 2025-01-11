/*
 * HelloWorld.c
 *
 * Created: 11/9/2023 10:43:27 AM
 * Author : Alin
 */ 



#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

#include "lcd.h"
#include "lm75.h"
#include "i2cmaster.h"

#include "usart.h"

int main(void) {    

  i2c_init();
  LCD_init();
  LCD_set_cursor(0,0);
  lm75_init();
  
  //uart_init(); // open the communication to the microcontroller NOT USED FOR LCD
  //io_redirect(); // redirect input and output to the communication NOT USED FOR LCD

  return 0;
}
