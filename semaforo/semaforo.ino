const int pinGreenLed = 13;
const int pinYellowLed = 12;
const int pinRedLed = 11;

const int delayTemp = 5000; 

void setup() {
  pinMode(pinGreenLed, OUTPUT);
  pinMode(pinYellowLed, OUTPUT);
  pinMode(pinRedLed, OUTPUT);
}

void loop() {

  //Green
  digitalWrite(pinGreenLed, HIGH);
  digitalWrite(pinYellowLed, LOW);
  digitalWrite(pinRedLed, LOW);
  delay(delayTemp);

  //Yellow
  digitalWrite(pinGreenLed, LOW);
  digitalWrite(pinYellowLed, HIGH);
  digitalWrite(pinRedLed, LOW);
  delay(delayTemp);

  //Red
  digitalWrite(pinGreenLed, LOW);
  digitalWrite(pinYellowLed, LOW);
  digitalWrite(pinRedLed, HIGH);
  delay(delayTemp);
}
