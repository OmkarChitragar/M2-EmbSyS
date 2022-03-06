/**
 * @file Project_main.c
 * @author omkar chitragar 
 * @brief 
 * @version 0.2
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <avr/io.h>
#include"Led.h"
#include"Lcd.h"
#include"Display.h"
#include<util/delay.h>
int main(void)
{
    LCD_INITIALIZATION();
    while(1)
    {
        led(); 
        lcd(); 
        display(); 
    }
  return 0;
}
