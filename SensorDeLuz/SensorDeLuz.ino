/*
  Sensor de luz LDR
  JATIC 22/10/2016 - Arduino na prática
  Autor: Genilson Medeiros
*/

const int ldrPin = 0;
const int pinLed = 10;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop() {
    int ldrValue = analogRead(ldrPin);
    Serial.println(ldrValue);
    
    if(ldrValue > 900){
      digitalWrite(pinLed, HIGH);
    }else{
     digitalWrite(pinLed, LOW); 
    }
}
