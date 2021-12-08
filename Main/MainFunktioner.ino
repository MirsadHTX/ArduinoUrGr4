


int functionGravity(int stadie)
{

    stadieGravity = accelmeter.getAcceleration(&x, &y, &z); // Tager memory address som input
    /*lcd.clear();
    lcd.print(x);
    lcd.print(" ");
    lcd.print(y);
    lcd.print(" ");
    lcd.print(z);
    delay(50);*/


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




void Ur()            //MNE
{
  lcd.clear();
  lcd.setRGB(255, 255, 255);
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
    
    int minV = 0;
    minV = minV + 1;
    
         if(minV = 25)
        {
         minV = 0;
        }

    Juledag(minV);

    RingTime ();
}

// 

void Stopur()        //PSK
{
  lcd.clear();
  lcd.setRGB(255, 255, 255);
  
  lcd.print("2");
}

void Temperatur()    //MNE
{
    lcd.clear();
    int sensorValue;

    lcd.setRGB(255, 255, 255);

    lcd.setCursor(1, 0);
    lcd.print("3"); //viser hvilket stadie man er i
    
    lcd.setCursor(0, 1);

    pinMode(A0,INPUT);
    sensorValue = analogRead(A0); //range -40 til 125
    
     lcd.print(sensorValue); //mangler omregning til celsius
     delay(100);
}

void RandomElev()    //PSK
{
  lcd.clear();
  randomElevR = random(30);
  lcd.setRGB(255, 255, 255);

  lcd.setCursor(1, 0);
  lcd.print("4"); //viser hvilket stadie man er i
  
  lcd.setCursor(0, 1);

  if (randomElevR == 0)
  {
    lcd.print("Anders");
  }

  if (randomElevR == 1)
  {
    lcd.print("Emil");
  }

  if (randomElevR == 30)
  {
    lcd.print("Fahmi");
  }
  
  if (randomElevR == 2)
  {
    lcd.print("Freja");
  }
  
  if (randomElevR == 3)
  {
    lcd.print("GustavW");
  }

  if (randomElevR == 4)
  {
    lcd.print("GustavH");
  }

  if (randomElevR == 5)
  {
    lcd.print("Haris");
  }

  if (randomElevR == 6)
  {
    lcd.print("Ismail");
  }

  if (randomElevR == 7)
  {
    lcd.print("Jabriil");
  }

  if (randomElevR == 8)
  {
    lcd.print("Jacob");
  }

  if (randomElevR == 9)
  {
    lcd.print("Ludvig");
  }

  if (randomElevR == 10)
  {
    lcd.print("Jeppe");
  }

  if (randomElevR == 11)
  {
    lcd.print("Jonatan");
  }

  if (randomElevR == 12)
  {
    lcd.print("Kasper");
  }

  if (randomElevR == 13)
  {
    lcd.print("Lovro");
  }

  if (randomElevR == 14)
  {
    lcd.print("Mathias");
  }

  if (randomElevR == 15)
  {
    lcd.print("Mie");
  }

  if (randomElevR == 16)
  {
    lcd.print("Mohammad");
  }

  if (randomElevR == 17)
  {
    lcd.print("Nelisa");
  }

  if (randomElevR == 18)
  {
    lcd.print("Nicolai");
  }

  if (randomElevR == 19)
  {
    lcd.print("Pernille");
  }

  if (randomElevR == 20)
  {
    lcd.print("Rasmus");
  }

  if (randomElevR == 21)
  {
    lcd.print("Robert");
  }

  if (randomElevR == 22)
  {
    lcd.print("Sarah");
  }

  if (randomElevR == 23)
  {
    lcd.print("Silas");
  }
  
  if (randomElevR == 24)
  {
    lcd.print("Simon");
  }

  if (randomElevR == 25)
  {
    lcd.print("Thoeger");
  }

  if (randomElevR == 26)
  {
    lcd.print("Tobias");
  }

  if (randomElevR == 27)
  {
    lcd.print("Taaha");
  }

  if (randomElevR == 28)
  {
    lcd.print("William");
  }

  if (randomElevR == 29)
  {
    lcd.print("Mirsad");
  }
  
  delay(1000);
}

void Spil()         //??
{
  lcd.clear();

  knap = digitalRead(4);

  lcd.setCursor(1, 0);
  lcd.print("5"); //viser hvilket stadie man er i
  
  // set the cursor to column 0, line 1
  
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  
  spilValue = analogRead(A0);

  //lcd.print(spilValue);
  //delay(100);

   //int randomNummer = random (50,973);
   lcd.setCursor(0, 1);
   //lcd.print(randomNummer);
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


 //Stadiecount
 
