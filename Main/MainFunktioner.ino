
/*int functionGravity(6)      //MNE
{
  
}*/

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
  randomElevR = random(0, 30);


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
  
}
