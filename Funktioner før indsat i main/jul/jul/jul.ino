
#include <Wire.h>
#include "MMA7660.h"
#include "rgb_lcd.h"
#include "DS1307.h"

DS1307 clock;//variable til clock
rgb_lcd lcd;

void setup() 
{
    lcd.begin(16, 2);
    Serial.begin(9600);
    
    clock.begin();
    clock.fillByYMD(2021, 11,24); //Jan 19,2013 //år, måned, dag
    clock.fillByHMS(23, 59, 55); //15:28 30"
    clock.fillDayOfWeek(THU);//Saturday
    clock.setTime();//write time to the RTC chip
}
void loop() 
{
    Ur();
}

//Function: Display time on the serial monitor
void Ur() 
{
    clock.getTime();
    Serial.print(clock.hour, DEC);
    Serial.print(":");
    Serial.print(clock.minute, DEC);
    Serial.print(":");
    Serial.print(clock.second, DEC);
    Serial.print("  ");
    Serial.print(clock.month, DEC);
    Serial.print("/");
    Serial.print(clock.dayOfMonth, DEC);
    Serial.print("/");
    Serial.print(clock.year + 2000, DEC);
    Serial.print(" ");
    Serial.print(clock.dayOfMonth);
    Serial.print("*");

      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print(" " );
      lcd.print(clock.hour);
      lcd.print(":");
      lcd.print(clock.minute);
      lcd.print(":");
      lcd.print(clock.second);
    
    switch (clock.dayOfWeek) 
    {

        case MON:
            break;

        case TUE:
            break;
            
        case WED:
            break;
            
        case THU:
            break;
            
        case FRI:
            break;
            
        case SAT:
            break;
            
        case SUN:
            break;
    }

    int minV = 0;
    minV = minV + 1;
    
         if(minV = 25)
        {
         minV = 0;
        }

    Juledag(minV);
    
}

  void Juledag(int minV)
  {
    if(clock.month == 12)
      {
         if(clock.dayOfMonth < 24)
        {
         lcd.setCursor(0,0);
         lcd.print(minV);
         lcd.print(" dage til jul");
        }

      if(clock.dayOfMonth == 24)
        {
         lcd.setCursor(0,0);
         lcd.print("God Jul");
        }

         if(clock.dayOfMonth > 24)
        {
         lcd.setCursor(0,0);
         lcd.print("Jul kommer igen");
        }
      }

         if(clock.month != 12)
        {
         lcd.setCursor(0,0);
         lcd.print("Jul kommer igen");
        }
    
  }
