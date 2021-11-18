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

void setup() 
{
  lcd.begin(16, 2);
  lcd.setCursor(16, 2);

  //starter positionsmåledimsen
  accelmeter.init();
 
}

void loop() 
{
  //Temperatur();
  //RandomElev(); //Test
  functionGravity(4);
}
