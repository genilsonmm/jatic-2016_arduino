/*
  Ativar dispositivos pelo PC
  JATIC 22/10/2016 - Arduino na prática
  Autor: Genilson Medeiros
*/

const int pinLed = 10;
const int setupTemp = 1000;

void setup() {
    pinMode(pinLed, OUTPUT);
    Serial.begin(9600);
    delay(setupTemp);
    Serial.println("Arduino Conectado!");
}

void loop() {
    if(Serial.available()){
      
      String message = Serial.readString();
      
      if(message == "1"){
        digitalWrite(pinLed, HIGH);
      }
      else if(message == "0")
      {
        digitalWrite(pinLed, LOW);
      }
      else
      {  
        Serial.println(message);
      }
    }
}
