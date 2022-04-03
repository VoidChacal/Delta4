bool botao = true;
const int pinobotao = 4;
const int pinobotao2 = 3;
const int pinobotao3 = 2;
const int pinobotao4 = 13;
const int pinobotao5 = 12;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(pinobotao, INPUT);
  pinMode(pinobotao2, INPUT);
  pinMode(pinobotao3, INPUT);
  pinMode(pinobotao4, INPUT);
  pinMode(pinobotao5, INPUT);
}

void loop()
{
  botao = digitalRead(pinobotao);
  
  if(botao){
    digitalWrite(6, HIGH);
  }
  else{ 
    digitalWrite(6, LOW);
  }
  botao = digitalRead(pinobotao2);
  
  if(botao){
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(7, LOW);
  }
  botao = digitalRead(pinobotao3);
  if(botao){
    digitalWrite(5, HIGH);
  }
  else(botao);{
    digitalWrite(5, LOW);
  }
  botao = digitalRead(pinobotao4);
  if(botao){
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
  }
  else(botao);{
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
  botao = digitalRead(pinobotao5);
  if(botao){
    digitalWrite(7, HIGH);
    digitalWrite(5, HIGH);
}
  else(botao);{
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
  }
}
  