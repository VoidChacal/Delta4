#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

bool botao = true;
const int pinobotao = 13;
const int pinobotao2 = 7;
const int pinobotao3 = 6;


void setup(){
  pinMode(pinobotao, INPUT);
  pinMode(pinobotao2, INPUT);
  pinMode(pinobotao3, INPUT);
  lcd.begin(16,2);
  
}
void loop(){

   botao = digitalRead(pinobotao);
  if(botao){
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Verde Ligado");
   digitalWrite(10, HIGH);
  delay(5000);
  }
 else{
   digitalWrite(10, LOW);
   lcd.clear();
  
}
  botao = digitalRead(pinobotao2);
  if(botao){
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Azul Ligado");
   digitalWrite(9, HIGH);
  delay(5000);
  }
 else{
   digitalWrite(9, LOW);
   lcd.clear();
  
}
  botao = digitalRead(pinobotao3);
  if(botao){
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Vermelho Ligado");
   digitalWrite(8, HIGH);
  delay(5000);
  }
 else{
   digitalWrite(8, LOW);
   lcd.clear();
  
}
}