#include "rgb_lcd.h"
#include "MMA7660.h"
#include <Wire.h>

//int tilstand;
rgb_lcd lcd;
MMA7660 accelmeter;

long randomElevR;


// Variabler til functionGravity
bool stadieFlag1 = 0;
bool stadieFlag2 = 0;
float x, y, z;
float stadieGravity;
long stadieCount = 1;

//variabler til Spil
int spilValue;
int randomNummer = random (50,973);
bool knap;

void setup() 
{
  lcd.begin(16, 2);
  lcd.setCursor(16, 2);
  lcd.setRGB(255, 255, 255);

  //starter positionsmåledimsen
  accelmeter.init();

  //random seed til randomelev
  randomSeed(analogRead(1));

  //Pinmodes til peripherals
  pinMode(4,INPUT); //Det er temp

}

void loop() 
{
  //Temperatur();
  //RandomElev(); //Test
  //functionGravity(4);
    //RandomElev();
  functionGravity(4);

  if (stadieCount == 3)
  {
    Temperatur();
  }

  if (stadieCount == 4)
  {
    RandomElev();
  }

  if (stadieCount == 5)
  {
    Spil();
  }

  if (stadieCount == x)
  {
    
  }
}
