/*
  EEPROM
  JATIC 22/10/2016 - Arduino na prática
  Autor: Genilson Medeiros
*/

#include <EEPROM.h> 

const int button = 7;
const int led = 10;
const int address = 0;

boolean hasPressed = false;

void setup() {
  pinMode(button, INPUT); 
  pinMode(led, OUTPUT);
  
  digitalWrite(led, EEPROM.read(address));
}

void loop() {
  
  int stateOfButton = digitalRead(button);
  
  if(stateOfButton == HIGH){
    hasPressed = !hasPressed;
    digitalWrite(led, hasPressed);
    EEPROM.write(address, hasPressed ? 1 : 0); 
    delay(300); 
    
  }
}

