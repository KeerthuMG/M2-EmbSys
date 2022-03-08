#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include <TimerOne.h>

const int fan = 12;
const int lamp = 13;
const int buz = 11;
//int interruptPin = 2;
int annalogpin[3] = {A0,A1,A2};
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
unsigned int  Lit1, temp2, temp3,t,Lit;
boolean g1,g2,g3;
SoftwareSerial Serial1(8, 9); // RX,TX
void setup()
{
  Serial.begin(9600);
  pinMode(lamp, OUTPUT);
  digitalWrite(lamp, LOW);
  pinMode(fan, OUTPUT);
  digitalWrite(fan, LOW);
  pinMode(buz, OUTPUT);
  digitalWrite(buz, LOW);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("HOME AUTOMATION");
  delay(1000);
  int pi=0;
  lcd.clear();

}
void loop()
{
  Lit = analogRead(A1);
  temp3 = analogRead(A0);
  temp2=temp3*2;
  
  Lit1=Lit/2;
  lcd.setCursor(0, 1);
  lcd.print("L:");
  lcd.print(Lit1/100);
  lcd.print((Lit1%100)/10);
  lcd.print((Lit1%100)%10);
  lcd.print(" T:");
  lcd.print(temp2/100);
  lcd.print((temp2%100)/10);
  lcd.print(".");
  lcd.print((temp2%100)%10);  
  if(Lit1<50)
  {
      digitalWrite(lamp, LOW);
      lcd.setCursor(0, 0);
      delay(250);
      lcd.print("LAMP OFF              ");
      
  }
  else if(Lit1>500)
  {

        digitalWrite(lamp, HIGH);
        lcd.setCursor(0, 0);
        delay(250);
        lcd.print("LAMP ON          ");
        
  }
  if(temp2>370 && temp2<500)
  {
      digitalWrite(buz , LOW);
      digitalWrite(fan, HIGH);
      digitalWrite(fan, HIGH);
      lcd.setCursor(0, 0);
      delay(250);
      lcd.print("FAN ON         ");
      
  }
  
  if(temp2>500 && temp2<1023)
  {
      digitalWrite(buz , HIGH);
      lcd.setCursor(0, 0);
      delay(250);
      lcd.print("Temperature HIGH  "); 
      digitalWrite(fan, LOW);  
      
  }

   if(temp2>1&& temp2<100)
  {
      digitalWrite(buz , HIGH);
      lcd.setCursor(0, 0);
      delay(250);
      lcd.print("Temperature LOW  ");
      digitalWrite(fan, LOW);
      
  }
  else if(temp2>250 && temp2<360)
  {
        digitalWrite(buz , LOW);
        digitalWrite(fan, LOW);
        lcd.setCursor(0, 0);
        lcd.print("Temp normal      "); 
        delay(250);
        lcd.print("FAN OFF        "); 
        
     
  }
}
