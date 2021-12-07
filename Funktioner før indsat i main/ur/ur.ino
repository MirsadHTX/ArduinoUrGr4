
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
    clock.fillByYMD(2021, 11,23); //Jan 19,2013 //år, måned, dag    //KAN DETTE EVT SLETTES, SÅ LÆNGE BATTERIET ER SAT TIL?
    clock.fillByHMS(9, 14, 55); //15:28 30"
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
    { // Friendly printout the weekday

        case MON:
            lcd.setCursor(1,0);
            lcd.print("MON");
            break;

        case TUE:
            lcd.setCursor(1,0);
            lcd.print("TUE");
            break;
            
        case WED:
            lcd.setCursor(1,0);
            lcd.print("WED");
            break;
            
        case THU:
            lcd.setCursor(1,0);
            //lcd.print(" " );
            lcd.print("THU");
            break;
            
        case FRI:
            lcd.setCursor(1,0);
            lcd.print("FRI");
            break;
            
        case SAT:
            lcd.setCursor(1,0);
            lcd.print("SAT");
            break;
            
        case SUN:
            lcd.setCursor(1,0);
            break;
    }
    
   //evt nyt stadie med fødselsdag eller timer

   //fødselsdage
     lcd.setCursor(0,0);
     if(clock.dayOfMonth == 16 && clock.month == 5)
    {
       lcd.print("Tillykke Nille");
    }
     if(clock.dayOfMonth == 21 && clock.month == 4)
    {
       lcd.print("Tillykke Neli");
    }
     if(clock.dayOfMonth == 5 && clock.month == 5)
    {
       lcd.print("Tillykke Mie");
    }
     if(clock.dayOfMonth == 27 && clock.month == 9)
    {
       lcd.print("Tillykke Mirsad");
    }
     if(clock.dayOfMonth == 15 && clock.month == 1)
    {
       lcd.print("Tillykke Moha");
    }
     if(clock.dayOfMonth == 15 && clock.month == 1)
    {
       lcd.print("Tillykke Moha");
    }
     if(clock.dayOfMonth == 21 && clock.month == 3)
    {
       lcd.print("Tillykke Nette");
    }
     if(clock.dayOfMonth == 6 && clock.month == 5)
    {
       lcd.print("Tillykke Bella");
    }
     if(clock.dayOfMonth == 13 && clock.month == 3)
    {
       lcd.print("Tillykke Ronja");
    }
    
     if(clock.dayOfMonth == 6 && clock.month == 8)
    {
       lcd.print("Tillykke William");
    }
     if(clock.dayOfMonth == 24 && clock.month == 12)
    {
       lcd.print("Tillykke Ludvig");
    }
     if(clock.dayOfMonth == 10 && clock.month == 4)
    {
       lcd.print("Tillykke Mathias");
    }
     if(clock.dayOfMonth == 10 && clock.month == 7)
    {
       lcd.print("Tillykke Freja");
    }
     if(clock.dayOfMonth == 19 && clock.month == 5)
    {
       lcd.print("Tillykke Lovro");
    }
     if(clock.dayOfMonth == 27 && clock.month == 7)
    {
       lcd.print("Tillykke Jacob");
    }
     if(clock.dayOfMonth == 16 && clock.month == 1)
    {
       lcd.print("Tillykke Emil");
    }
     if(clock.dayOfMonth == 31 && clock.month == 7)
    {
       lcd.print("Tillykke Anders");
    }
     if(clock.dayOfMonth == 8 && clock.month == 1)
    {
       lcd.print("Tillykke Fahmi");
    }
     if(clock.dayOfMonth == 26 && clock.month == 10)
    {
       lcd.print("Tillykke Robert");
    }
     if(clock.dayOfMonth == 29 && clock.month == 7)
    {
       lcd.print("Tillykke GuW+Kap");
    }
     if(clock.dayOfMonth == 31 && clock.month == 10)
    {
       lcd.print("Tillykke Sarah");
    }
     if(clock.dayOfMonth == 3 && clock.month == 9)
    {
       lcd.print("Tillykke Silas");
    }
     if(clock.dayOfMonth == 27 && clock.month == 1)
    {
       lcd.print("Tillykke Simon");
    }
     if(clock.dayOfMonth == 27 && clock.month == 1)
    {
       lcd.print("Tillykke GWerk");
    }
     if(clock.dayOfMonth == 1 && clock.month == 6)
    {
       lcd.print("Tillykke Haris");
    }
     if(clock.dayOfMonth == 14 && clock.month == 1)
    {
       lcd.print("Tillykke Ismail");
    }
     if(clock.dayOfMonth == 18 && clock.month == 9)
    {
       lcd.print("Tillykke Jabril");
    }
     if(clock.dayOfMonth == 25 && clock.month == 9)
    {
       lcd.print("Tillykke Jeppe");
    }
     if(clock.dayOfMonth == 25 && clock.month == 9)
    {
       lcd.print("Tillykke Jeppe");
    }
     if(clock.dayOfMonth == 8 && clock.month == 4)
    {
       lcd.print("Tillykke Tobias");
    }
     if(clock.dayOfMonth == 24 && clock.month == 5)
    {
       lcd.print("Tillykke Taaha");
    }
     if(clock.dayOfMonth == 18 && clock.month == 10)
    {
       lcd.print("Tillykke Rasmus");
    }
     if(clock.dayOfMonth == 24 && clock.month == 1)
    {
       lcd.print("Tillykke Emil");
    }
     if(clock.dayOfMonth == 25 && clock.month == 4)
    {
       lcd.print("Tillykke Thoeger");
    }
     if(clock.dayOfMonth == 6 && clock.month == 8)
    {
       lcd.print("Tillykke Nicolai");
    }
     if(clock.dayOfMonth == 1 && clock.month == 6) //jonatan
    {
       lcd.print("Tillykke Jonatan");
    }
    
    int minV = 0;
    minV = minV + 1;
    
         if(minV = 25)
        {
         minV = 0;
        }

    Juledag(minV);

    RingTime ();
    
}

  void RingTime ()
 {
     pinMode(3, OUTPUT); //lyd
     if(clock.hour == 8 && clock.minute == 15 && clock.second < 2 or clock.hour == 9 && clock.minute == 15 && clock.second < 2 or clock.hour == 9 && clock.minute == 35 && clock.second < 2 or clock.hour == 10 && clock.minute == 35 && clock.second < 2 or clock.hour == 10 && clock.minute == 45 && clock.second < 2 or clock.hour == 11 && clock.minute == 45 && clock.second < 2 or clock.hour == 12 && clock.minute == 15 && clock.second < 2 or clock.hour == 13 && clock.minute == 15 && clock.second < 2 or clock.hour == 13 && clock.minute == 25 && clock.second < 2 or clock.hour == 14 && clock.minute == 25 && clock.second < 2 or clock.hour == 14 && clock.minute == 30 && clock.second < 2 or clock.hour == 15 && clock.minute == 30 && clock.second < 2)
    {
     //lcd.setRGB(255, 10, 10);
       digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
       delay(1);
  
      digitalWrite
      (3, LOW);    // turn the LED off by making the voltage LOW
      //delay(100000);                       // wait for a second
    }
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
