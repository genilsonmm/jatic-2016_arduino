/*
  Indicador de saida de veiculos
  JATIC 22/10/2016 - Arduino na prática
  Autor: Genilson Medeiros
*/

const int led1 = 10;             
const int led2 = 9;
const int seconds = 500;

void setup() {
  pinMode(led1, OUTPUT);  
  pinMode(led2, OUTPUT);  
}

void loop() {
  blinkLed();
}

void blinkLed(){
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(seconds);
   
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  delay(seconds);
}



