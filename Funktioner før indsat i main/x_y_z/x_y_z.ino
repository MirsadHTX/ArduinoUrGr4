#include <Wire.h>
#include "MMA7660.h"
#include "rgb_lcd.h"

bool stadieFlag1X = 0;
bool stadieFlag2X = 0;
float x, y, z;
MMA7660 accelmeter;
rgb_lcd lcd;
float stadieGravity;
long stadieCountX = 1;

bool stadieFlag1Y = 0;
bool stadieFlag2Y = 0;
//float x, y, z;
//float stadieGravity;
long stadieCountY = 1;

void setup() 
{
    lcd.begin(16, 2);
    accelmeter.init();
}

void loop() 
{

    functionGravityX(4);
    functionGravityY(3); //skal ikke forblive her
    
}


int functionGravityX(int stadieX)
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
      stadieFlag1X = 0;
    }
    
    if(x > 0.6 && stadieFlag1X == 0)
    {
      stadieCountX = stadieCountX + 1;
      stadieFlag1X = 1;
    }


        if(x > -0.6)
    {
      stadieFlag2X = 0;
    }
    
    if(x < -0.6 && stadieFlag2X == 0)
    {
      stadieCountX = stadieCountX - 1;
      stadieFlag2X = 1;
    }


      //flag sørger for at vi skal give slip på knappen før der kan lægges 1 til count igen
     lcd.setCursor(0, 1);
   lcd.print(" " );
      //lcd.print(stadieCountx);
     delay(100);


    if(stadieCountX < 1)
    {
      stadieCountX = stadieX;
    }

    if(stadieCountX > stadieX)
    {
      stadieCountX = 1;
    }

    return stadieCountX;
    
}



int functionGravityY(int stadieY) //stadieY er 3 ved stopur og 2 ved ur, hvis altså ur har ringetider
{

    stadieGravity = accelmeter.getAcceleration(&x, &y, &z); // Tager memory address som input
    lcd.clear();
    lcd.print(x);
    lcd.print(" ");
    lcd.print(y);
    lcd.print(" ");
    lcd.print(z);
    delay(50);
    //slet print senere, også i anden funktion


    if(y < 0.6)
    {
      stadieFlag1Y = 0;
    }
    
    if(y > 0.6 && stadieFlag1Y == 0)
    {
      stadieCountY = stadieCountY + 1;
      stadieFlag1Y = 1;
    }


        if(y > -0.6)
    {
      stadieFlag2Y = 0;
    }
    
    if(y < -0.6 && stadieFlag2Y == 0)
    {
      stadieCountY = stadieCountY - 1;
      stadieFlag2Y = 1;
    }


      //flag sørger for at vi skal give slip på knappen før der kan lægges 1 til count igen
     lcd.setCursor(0, 1);
   lcd.print(" " );
      lcd.print(stadieCountY);
     delay(100);


    if(stadieCountY < 1)
    {
      stadieCountY = stadieY;
    }

    if(stadieCountY > stadieY)
    {
      stadieCountY = 1;
    }

    return stadieCountY;
    
}
