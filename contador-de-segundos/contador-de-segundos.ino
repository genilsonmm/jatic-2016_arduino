/*
  Serial Port - Contador de segundos
  JATIC 22/10/2016 - Arduino na prática
  Autor: Genilson Medeiros
*/

int seconds;
const int secondsDelay = 1000;
const String label = "00:";

void setup() {
  seconds = 0;
  Serial.begin(9600);      // open the serial port at 9600 bps: 
}

void loop() {

  seconds++;
  
  if(seconds == 60){
    seconds = 0;
  }
  
  if(seconds < 10)
  {
    Serial.println(label + "0" + String(seconds)); 
  }else{
    Serial.println(label + String(seconds)); 
  }
  
  delay(secondsDelay);
}
