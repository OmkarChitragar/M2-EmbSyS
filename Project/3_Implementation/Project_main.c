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
