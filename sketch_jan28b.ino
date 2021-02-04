//Variables globales
bool isTheButtonBeingPressed = false;
int switchState = 0;
int delayMillis = 0;
//Variable de los pines

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
    if (true)
    {
      isTheButtonBeingPressed = true;
      delayMillis ++;
    }
    //el botón esta pulsado
  }
   else {
    isTheButtonBeingPressed = false;
   }//llave del else
    digitalWrite(ledPin, HIGH);
    delay(1);
    digitalWrite(ledPin, LOW);
    delay(delayMillis);

    //RESET
    if (delayMillis > 15) {
      delayMillis = 0;
     
    }
  } //vuelve al principio del bucle (llave del loop)
  
