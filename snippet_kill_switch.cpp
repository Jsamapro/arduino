//colocar en la seccion de variables

int switchState = 0;
bool isTheButtonBeingPressed = false;
bool play = false;

//recordar que el pin del botón puede cambiar
const int buttonPin=2;

//incluir dentro del setup()

pinMode(pinButton,IMPUT)
//incluir como loop()
  
void loop() {
  checkButton();
  if (play) {
   //
  }
}

// funcion del checkButton


void checkButton(){
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
