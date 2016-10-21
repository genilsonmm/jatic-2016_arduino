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
