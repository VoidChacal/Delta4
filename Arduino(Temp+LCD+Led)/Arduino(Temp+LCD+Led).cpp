#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int temperatura;
int celsius;
int contador = 0;
int l;
String c;
String a;
void setup(){
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode( A0, INPUT);
  pinMode (10, OUTPUT);
 
  pinMode( 13, OUTPUT);
  
}
void loop(){
  temperatura = 2;
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125)+temperatura;
  c  = celsius;
  l = 0;
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print(c+ "C ");
  
   if(celsius < 60){
 
  lcd.setCursor(1,1);
  lcd.print("Online");
      digitalWrite(10, LOW);
    digitalWrite(13, HIGH);
   }else{
      
  lcd.setCursor(1,1);
  lcd.print("Offline");
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
   }
  delay(5000);
  while(l<5){
    a = l+1;
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("Prox. Teste:");
    lcd.setCursor(1,1);
  	lcd.print(a+"s");
    delay(1000);
    l=l+1;
  }
 
}