/*
  Push Button
  JATIC 22/10/2016 - Arduino na pratica
  Autor: Genilson Medeiros
*/

const int pinButton = 7;
const int pinLed = 10;
boolean hasPressed = false;

void setup() {
  pinMode(pinButton, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  
  int stateOfButton = digitalRead(pinButton);
  
  if(stateOfButton == HIGH){
    delay(300);
    hasPressed = !hasPressed;
    digitalWrite(pinLed, hasPressed);
  }
}

