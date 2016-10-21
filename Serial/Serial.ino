/*
  Serial Port 1
  JATIC 22/10/2016 - Arduino na prática
  Autor: Genilson Medeiros
*/

void setup() {
  Serial.begin(9600);      // open the serial port at 9600 bps: 
  Serial.println("Arduino inicializado...");
}

void loop() {
  Serial.println("loop"); 
  delay(1000);
}
