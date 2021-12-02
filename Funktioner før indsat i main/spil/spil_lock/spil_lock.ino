#include <DS1307.h>

#include <rgb_lcd.h> //lav kortere delay for tid efter den er under 800 igen
#include <Wire.h>

rgb_lcd lcd;

int sensorValue1;

long count;

bool sensorValue2;
bool flag = 0;

const int colorR = 50;
const int colorG = 82;
const int colorB = 138;

void setup() 
{
    lcd.begin(16, 2);

    lcd.setRGB(255, 138, 50);

    pinMode(4, OUTPUT);

    pinMode(3,INPUT);
}

void loop()
{
  lcd.clear();

  lcd.setCursor(0, 1);
  
  //set the cursor to column 0, line 1
  
  //(note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  
  sensorValue1 = analogRead(A0);

  //knap
  sensorValue2 = digitalRead(4);

  lcd.print(sensorValue1);
  delay(100);

//knap
  lcd.print(count);
  delay(100);
     

 if(sensorValue1 > 800)
 {
      lcd.setRGB(255, 0, 0);
      
      functionSos();
 }

  if(sensorValue1 < 800)
 {
    lcd.setRGB(255, 138, 50);

    digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(1000);   
 }
//knap
    if(sensorValue2 == 0)
    {
      flag = 0;
    }


    if(sensorValue2 == 1 && flag == 0)
    {
      count = count + 1;
      flag = 1;
    }
}

void functionSos()
{
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);   
}
