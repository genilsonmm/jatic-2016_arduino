/*
  Push Button
  JATIC 22/10/2016 - Arduino na prÃ¡tica
  Autor: Genilson Medeiros
*/

const int button = 7;
const int led = 10;

void setup() {
  pinMode(button, INPUT); /*INPUT_PULLUP para usar o resistor interno*/
  pinMode(led, OUTPUT);
}

void loop() {
  
  int inpState = digitalRead(button);
  
  if(inpState == HIGH){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  
}

