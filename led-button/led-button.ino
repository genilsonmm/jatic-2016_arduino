const int pinLed = 10;
const int pinButton = 9; 

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT);
}

void loop() {
  
  int buttonState = digitalRead(pinButton);
  
  if(buttonState == HIGH){
    digitalWrite(pinLed, HIGH);
  }
  else
  {
    digitalWrite(pinLed, LOW);
  }
}
