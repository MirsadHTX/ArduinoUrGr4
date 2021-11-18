

void setup() 
{
    
}

void loop() 
{
    Temperatur();
     
}

void Temperatur()
{
    int sensorValue;
    
    lcd.setCursor(0, 1);

    pinMode(A0,INPUT);
    sensorValue = analogRead(A0); //range -40 til 125
    
     lcd.print(sensorValue); //mangler omregning til celsius
     delay(100);
}


