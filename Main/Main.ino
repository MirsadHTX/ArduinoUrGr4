#include "rgb_lcd.h"
#include "MMA7660.h"
#include <Wire.h>

int tilstand;
rgb_lcd lcd;
MMA7660 accelMeter;

long randomElevR;

void setup() 
{
  lcd.begin(16, 2);
  lcd.setCursor(16, 2);
  
}

void loop() 
{
  //Temperatur();
  RandomElev(); //Test
  
}
