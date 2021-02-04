//Variables globales
int switchState = 0;
//Variables de los pines
const int redPin = 2;
const int bluePin = 6;
const int buttonPin = 4;

void setup() {
  // put your setup code here, to run once:
//Iniciando leds
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
//Iniciando botón
pinMode(buttonPin, INPUT);
}

void loop() {
  
  //leer el estado del botón
  switchState = digitalRead(buttonPin);


  if (switchState == LOW){
    //el botón no esta pulsado
    digitalWrite(redPin,HIGH); //se enciende el rojo
    digitalWrite(bluePin,LOW); //se apaga el azul
  }
  else {
    //elsa let it go
    //el botón está pulsado
    digitalWrite(redPin,LOW); //se apaga el rojo
    for (int blinks = 0; blinks <5; blinks++) {
      digitalWrite(bluePin,HIGH); //se enciende el azul
      delay(500);
      digitalWrite(bluePin,LOW); //se apaga el azul
      delay(500);
    }
  } 
  
}
