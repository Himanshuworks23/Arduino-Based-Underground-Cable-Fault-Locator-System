

#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


int sensorPin   = A0; // select the input pin for ldr
int sensorValue = 0; // variable to store the value coming from the sensor


void setup() {

  pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
      pinMode(9, OUTPUT);
  
  digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
      digitalWrite(9, HIGH); 
      
Serial.begin(9600); //sets serial port for communication


lcd.begin(16, 2);
  lcd.print("UNDERGROUND CABLE");
  lcd.setCursor(0, 1);
  lcd.print("FAULT DETECTOR");

  delay(1000);
  delay(1000);
  
}
void loop()
{




 lcd.clear();
  digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
      digitalWrite(9, HIGH); 
       delay(350); 
       
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

 if( (sensorValue >= 1000) )
{
     lcd.setCursor(0, 0); 
      lcd.print("R -  NF,") ;
   Serial.print("R -  NF,") ;


 }

  else if( (sensorValue >= 890) && (sensorValue <= 920)  )
{  
 Serial.print("R - 2KM,") ;
   lcd.setCursor(0, 0); 
  lcd.print("R - 2KM,") ;
}
  else if( (sensorValue >= 860) && (sensorValue <= 880)  )
{  
 Serial.print("R - 4KM,") ;
    lcd.setCursor(0, 0); 
   lcd.print("R - 4KM,") ;
}
  else if( (sensorValue >= 800) && (sensorValue <= 825)  )
{  
 Serial.print("R - 6KM,") ;
    lcd.setCursor(0, 0); 
   lcd.print("R - 6KM,") ;
}
  else if( (sensorValue >= 670) && (sensorValue <= 688)  )
{  
 Serial.print("R - 8KM,") ;
    lcd.setCursor(0, 0); 
   lcd.print("R - 8KM,") ;
}
 delay(1500); 

digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
      digitalWrite(9, HIGH); 
       delay(350); 
       
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

 if( (sensorValue >= 1000) )
{
 
   Serial.print("Y -  NF") ;
    lcd.setCursor(8, 0); 
    lcd.print(" Y -  NF,") ;
 }

  else if( (sensorValue >= 890) && (sensorValue <= 920)  )
{ 
  lcd.setCursor(8, 0);  
 Serial.print("Y - 2KM,") ;
  lcd.print(" Y - 2KM,") ;
}
  else if( (sensorValue >= 860) && (sensorValue <= 880)  )
{  
 Serial.print("Y - 4KM,") ;
 lcd.setCursor(8, 0); 
   lcd.print(" Y - 4KM,") ;
}
  else if( (sensorValue >= 800) && (sensorValue <= 825)  )
{  
 Serial.print("Y - 6KM,") ;
 lcd.setCursor(8, 0); 
   lcd.print(" Y - 6KM,") ;
}
  else if( (sensorValue >= 670) && (sensorValue <= 688)  )
{  
 Serial.print("Y - 8KM,") ;
 lcd.setCursor(8, 0); 
   lcd.print(" Y - 8KM,") ;
}
 delay(1500); 


digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
      digitalWrite(9, LOW); 
       delay(350); 

sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

 if( (sensorValue >= 1000) )
{
  lcd.setCursor(5, 1); 
   Serial.println("B -  NF,") ;
    lcd.print("B -  NF,") ;
 }

  else if( (sensorValue >= 890) && (sensorValue <= 920)  )
{  
 Serial.println("B - 2KM,") ;
 lcd.setCursor(5, 1); 
  lcd.print("B - 2KM,") ;
}
  else if( (sensorValue >= 860) && (sensorValue <= 880)  )
{  
 Serial.println("B - 4KM,") ;
 lcd.setCursor(5, 1); 
   lcd.print("B - 4KM,") ;
}
  else if( (sensorValue >= 800) && (sensorValue <= 825)  )
{  
 Serial.println("B - 6KM,") ;
 lcd.setCursor(5, 1); 
   lcd.print("B - 6KM,") ;
}
  else if( (sensorValue >= 670) && (sensorValue <= 688)  )
{  
 Serial.println("B - 8KM,") ;
 lcd.setCursor(5, 1); 
   lcd.print("B - 8KM,") ;
}
 delay(1500); 


}
