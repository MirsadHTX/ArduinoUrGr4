
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
    clock.fillByYMD(2021, 12, 24); //Jan 19,2013 //år, måned, dag
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
    
<<<<<<< Updated upstream
=======
    for (int minV = 0; minV < 25 - clock.dayOfMonth; minV = minV + 1)
    {
      Juledag(minV);
    }

  
>>>>>>> Stashed changes
    //Serial.println(" ");


    //julekalender - forsøg at sætte i funktion senere

    for (int minV = 0; minV < 25 - clock.dayOfMonth; minV = minV + 1)
    {
      Juledag(minV);
    }
    
}
<<<<<<< Updated upstream

    //flyt jul til egen klasse!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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

      /*if(clock.dayOfMonth == 25) //virker ikke, nødvendig???????????????????????????????
        {
         lcd.setCursor(0,0);
         lcd.print("igen");
        }*/

      if(clock.dayOfMonth == 24)
        {
         lcd.setCursor(0,0);
         lcd.print("God Jul");
        }
         
      }
    
=======
void Juledag(int minV)
  {
    if(clock.month == 12)
      {
         lcd.print(24-minV);
      }
>>>>>>> Stashed changes
  }
