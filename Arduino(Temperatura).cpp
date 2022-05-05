int temperatura;
int celsius;

void setup()
{
  Serial.begin(9600);
  pinMode( A0, INPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
}

void loop()
{
  temperatura = 2;
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125)+temperatura;
  
  if(celsius < 1){
  	digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
  }else if(celsius > 0 and celsius < 41){
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
  }else{
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
  };
   Serial.println("A temperatura registrada foi de:");
  Serial.print(celsius);
  Serial.print(" C\n");
  delay(2000);
}