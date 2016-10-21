const int pinLed = 10;
const int pinLDR = 0;

void setup() {
  pinMode(pinLed, OUTPUT); 
}

void loop() {
  
  int valueOfLDR = analogRead(pinLDR);
  
  if(valueOfLDR > 900)
  {
    digitalWrite(pinLed, HIGH);
  }
  else
  {
    digitalWrite(pinLed, LOW);
  }
  
}
