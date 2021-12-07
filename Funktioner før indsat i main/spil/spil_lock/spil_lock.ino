#include <DS1307.h>
#include <rgb_lcd.h> //lav kortere delay for tid efter den er under 800 igen
#include <MMA7660.h>
#include <Wire.h>


rgb_lcd lcd;

int spilValue;
int randomNummer = random (50,973);
bool knap;

void setup() 
{
    lcd.begin(16, 2);
    lcd.setRGB(255, 255, 255);

    pinMode(4,INPUT);
}

void loop()
{
  lcd.clear();

  knap = digitalRead(4);
        
  // set the cursor to column 0, line 1
  
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  
  spilValue = analogRead(A0);

  lcd.print(spilValue);
  //delay(100);

   //int randomNummer = random (50,973);
   lcd.setCursor(0, 1);
   lcd.print(randomNummer);
   //delay(100);


 if(spilValue > randomNummer -50 && spilValue < randomNummer + 50)
 {
      lcd.setRGB(245,212,66);

      functionSos();
 }

 if(spilValue > randomNummer + 50 or spilValue < randomNummer - 50)
 {
  lcd.setRGB(255, 255, 255);
 }

 if(spilValue == 0)
 {
  randomNummer = random (50,973);
  lcd.setRGB(255, 255, 255);
 }
  
}

void functionSos()
{

 if(spilValue > randomNummer - 25 && spilValue < randomNummer + 25)
 {
    if(knap == 1)
    {
      lcd.setRGB(0, 255, 10); //aka rigtigt
      delay(5);
      
    }
 }



 if(spilValue > randomNummer + 25 || spilValue < randomNummer - 25)
 {
    if(knap == 1)
    {
      lcd.setRGB(255, 0, 0); //aka forkert
    }
 }
}
