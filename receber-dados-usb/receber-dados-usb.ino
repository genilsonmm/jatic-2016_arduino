/*
  Receber dados do PC - Serial 
  JATIC 22/10/2016 - Arduino na prática
  Autor: Genilson Medeiros
*/

void setup() {
    Serial.begin(9600);
    delay(10000);
    Serial.println("Arduino Conectado!");
}

void loop() {
    if(Serial.available()){
      
      String message = Serial.readString();
      Serial.println(message);
    }
}
