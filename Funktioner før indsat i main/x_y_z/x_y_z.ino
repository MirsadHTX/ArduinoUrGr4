#include <Wire.h>
#include "MMA7660.h"
#include "rgb_lcd.h"

bool stadieFlag1 = 0;
bool stadieFlag2 = 0;
float x, y, z;
MMA7660 accelmeter;
rgb_lcd lcd;
float stadieGravity;
long stadieCount = 1;

void setup() 
{
    lcd.begin(16, 2);
    accelmeter.init();
}

void loop() 
{

    functionGravity(4);
    
}


int functionGravity(int stadie)
{

    stadieGravity = accelmeter.getAcceleration(&x, &y, &z); // Tager memory address som input
    lcd.clear();
    lcd.print(x);
    lcd.print(" ");
    lcd.print(y);
    lcd.print(" ");
    lcd.print(z);
    delay(50);


    if(x < 0.6)
    {
      stadieFlag1 = 0;
    }
    
    if(x > 0.6 && stadieFlag1 == 0)
    {
      stadieCount = stadieCount + 1;
      stadieFlag1 = 1;
    }


        if(x > -0.6)
    {
      stadieFlag2 = 0;
    }
    
    if(x < -0.6 && stadieFlag2 == 0)
    {
      stadieCount = stadieCount - 1;
      stadieFlag2 = 1;
    }


      //flag sørger for at vi skal give slip på knappen før der kan lægges 1 til count igen
     lcd.setCursor(0, 1);
   lcd.print(" " );
      lcd.print(stadieCount);
     delay(100);


    if(stadieCount < 1)
    {
      stadieCount = stadie;
    }

    if(stadieCount > stadie)
    {
      stadieCount = 1;
    }

    return stadieCount;
    
}
