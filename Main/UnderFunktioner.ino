//funktion til spillet
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

// Funktioner til uret
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
