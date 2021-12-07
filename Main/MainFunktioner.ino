


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
  
}

void Stopur()        //PSK
{
  
}

void Temperatur()    //MNE
{
    int sensorValue;
    
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
