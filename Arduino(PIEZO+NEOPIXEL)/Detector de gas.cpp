#include <LiquidCrystal.h>
#define PIN 8
#define NUMPIXELS 4
#include <Adafruit_NeoPixel.h>
LiquidCrystal lcd(12,11,5,4,3,2);

const byte neopixelPin = 8; 
Adafruit_NeoPixel neopixel = Adafruit_NeoPixel(43, neopixelPin, NEO_GRB + NEO_KHZ800);


void setup() {
  lcd.begin(16,2);
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  neopixel.begin();  
  Serial.begin(9600);
}

void loop() {
  
  
    
  Serial.println(analogRead(A0));
  digitalWrite(10, HIGH);
   lcd.clear();
	
  for (int i=0; i < analogRead(A0); i++) {
    
  }
  if (analogRead(A0) > 800) {
    
    digitalWrite(9, HIGH);
    delay(500); 
    digitalWrite(9, LOW);
    lcd.setCursor(0,0);
    lcd.print("Vazamento de Gas");
    lcd.setCursor(7,1);
    lcd.print(analogRead(A0));
    neopixel.setPixelColor(3, (255), (0), (0));    
    neopixel.show();
    
  } 
  else{
    neopixel.clear();
    lcd.clear();
  }
  if (analogRead(A0) > 700) {
  	neopixel.setPixelColor(2, (255), (69), (0));  
    neopixel.show();
    lcd.setCursor(0,0);
    lcd.print("Vazamento de Gas");
    lcd.setCursor(7,1);
    lcd.print(analogRead(A0));
    digitalWrite(9, HIGH);
    delay(500); 
    digitalWrite(9, LOW);
  
	}
  else{
    neopixel.clear();
    lcd.clear();
  }
  if (analogRead(A0) > 600) {
  	neopixel.setPixelColor(1, (255), (255), (0));  
    neopixel.show();
    lcd.setCursor(0,0);
    lcd.print("Vazamento de Gas");
    lcd.setCursor(7,1);
    lcd.print(analogRead(A0));
  	delay(500); 
	}
  
  else{
    neopixel.clear();
    lcd.clear();
  }
  
  if (analogRead(A0) > 500) {
  	neopixel.setPixelColor(0, (0), (255), (0));  
    neopixel.show();
    lcd.setCursor(0,0);
    lcd.print("Vazamento de Gas");
    lcd.setCursor(7,1);
    lcd.print(analogRead(A0));
    delay(500); 
  	
	}
  else{
    neopixel.clear();
    lcd.clear();
  }
  if (analogRead(A0) < 500) {
    neopixel.clear();
  	neopixel.setPixelColor(0, (0), (255), (0));
    neopixel.show();
  	lcd.setCursor(0,0);
    lcd.print("Gas Detectado");
    lcd.setCursor(7,1);
    lcd.print(analogRead(A0));
   	delay(2000);
  }
  else{
    neopixel.clear();
    lcd.clear();
  }
  
}
