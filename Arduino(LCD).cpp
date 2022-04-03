#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

int contador = 0;

void setup(){
  lcd.begin(16,2);
  
}
void loop(){
	lcd.clear();
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Centro Paula");
  lcd.setCursor(5,1);
  lcd.print("Souza");
  delay(3000);
  lcd.clear(); 
  
   for(int contador = 0; contador < 5; contador++){
    lcd.setCursor(7,0);
  lcd.print(contador);
     delay(1000);
}
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Obrigado!!");
  
  for (int posicao = 0; posicao < 3; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(300);
  }
  for (int posicao = 0; posicao < 6; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(300);
   
  }
}
