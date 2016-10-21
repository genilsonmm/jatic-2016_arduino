#include <EEPROM.h> 

const int pinButton = 7;
const int pinLed = 10;
const int address = 0;

boolean wasPressed = false;

void setup() {
  pinMode(pinButton, INPUT); 
  pinMode(pinLed, OUTPUT);
  
  Serial.begin(9600);
  digitalWrite(pinLed, EEPROM.read(address));
}

void loop() {
  
  int stateOfButton = digitalRead(pinButton);
  
  if(stateOfButton == HIGH){
    wasPressed = !wasPressed;
    digitalWrite(pinLed, wasPressed);
    EEPROM.write(address, wasPressed ? 1 : 0); 
    delay(300); 
  }
}

