#include "rgb_lcd.h"
#include "MMA7660.h"
#include <Wire.h>
#include "DS1307.h"

//int tilstand;
rgb_lcd lcd;
MMA7660 accelmeter;

//ur
DS1307 clock;

//variabel til random elev
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

//varibler til stopur funktion
bool urStop;
int tidFoer;
int count;
int trykFoer;


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

  //tid til ur funktionen
  clock.begin();
    clock.fillByYMD(2021, 11,23); //Jan 19,2013 //år, måned, dag    //KAN DETTE EVT SLETTES, SÅ LÆNGE BATTERIET ER SAT TIL?
    clock.fillByHMS(9, 14, 55); //15:28 30"
    clock.fillDayOfWeek(THU);//Saturday
    clock.setTime();//write time to the RTC chip

}

void loop() 
{
  //Temperatur();
  //RandomElev(); //Test
  //functionGravity(4);
    //RandomElev();
  functionGravity(6);

  lcd.clear();
  
  if (stadieCount == 1)
  {
    Ur();
  }
    
  if (stadieCount == 2)
  {
    Stopur();
  }
  
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
}
