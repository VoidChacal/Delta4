int temperatura;
int celsius;
const int pinmotor = 2;
int statusmotor = 0;

void setup()
{
  pinMode( A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pinmotor, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  statusmotor = digitalRead(pinmotor);
  temperatura = 2;
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125)+temperatura;
  
  if(celsius > 40){
   digitalWrite(pinmotor, HIGH);
  }
  else{
  digitalWrite(pinmotor, LOW);
  }
 Serial.println("A temperatura registrada foi de:");
  Serial.print(celsius);
  Serial.print(" C\n");
  delay(2000);
}