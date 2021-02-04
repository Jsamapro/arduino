/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
const int ledPin = 4;
const int buttonPin = 3;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  int switchState = 0;
  //leer el estado del botón
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    //el botón sí está pulsado
    digitalWrite(ledPin, HIGH);
    delay(1);
    digitalWrite(ledPin, LOW);
    delay(2);
  }
  else {
    digitalWrite(ledPin, HIGH);
  } //llave del else
  } //vuelve al principio del bucle (llave del loop)
  
