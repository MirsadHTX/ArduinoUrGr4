
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
    clock.fillByYMD(2021, 11, 18); //Jan 19,2013
    clock.fillByHMS(23, 59, 0); //15:28 30"
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
      lcd.setCursor(0,1); //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
      lcd.print(" " );
      lcd.print(clock.hour);
      lcd.print(":");
      lcd.print(clock.minute);
      lcd.print(":");
      lcd.print(clock.second);
    
    switch (clock.dayOfWeek) 
    { // Friendly printout the weekday

      
        case MON:
            lcd.setCursor(1, 0);
            lcd.print("MON");
            break;

        case TUE:
            lcd.setCursor(1, 0);
            lcd.print("TUE");
            break;
            
        case WED:
            lcd.setCursor(1, 0);
            lcd.print("WED");
            break;
            
        case THU:
            lcd.setCursor(1, 0);
            lcd.print("THU");
            break;
            
        case FRI:
            lcd.setCursor(1, 0);
            lcd.print("FRI");
            break;
            
        case SAT:
            lcd.setCursor(1, 0);
            lcd.print("SAT");
            break;
            
        case SUN:
            lcd.print("SUN");
            break; 
    }

     if(clock.dayOfMonth == 11)
    {
       lcd.print("foedselsdag");
    }
    
    //Serial.println(" ");
}
