/*
  Pisca LED
  JATIC 22/10/2016 - Arduino na prática
  Autor: Genilson Medeiros
*/

const int port = 10;             
const int seconds = 1000;

void setup() {
  pinMode(port, OUTPUT);   
}

void loop() {
  digitalWrite(port, HIGH);
  delay(seconds);
  digitalWrite(port, LOW);
  delay(seconds);
}
