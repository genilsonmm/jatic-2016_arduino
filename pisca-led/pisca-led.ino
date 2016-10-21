const int pinLed = 10;
const int tempDelay = 1000;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  digitalWrite(pinLed, !digitalRead(pinLed));
  delay(tempDelay);
}
