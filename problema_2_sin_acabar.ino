/*
*  Documentación del programa 
*  Autore: Jaume Samaranch Parellada
*  Fecha:19/03/21
*  Código referencia: (url)
*  Descripción del programa:Se necesita que el led se encienda únicamente si el valor del potenciómetro es 0 y el botón está pulsado.
*                           En el resto de los casos el led estará apagado.
*  Hardware necesario: Un potenciómetro, un botón y un led
*/

int potVal (1023, 0, 255, 0);
int switchState = 0;


//constantes de pines
const int blueLEDPin=4;

const int buttonPin= 5; 

const int potPin= A2;

void setup() {
pinMode(blueLEDPin,OUTPUT);
  Serial.begin(9600);
    pinMode(buttonPin, INPUT);
      pinMode(potPin, INPUT);
}

void loop() {
 switchState = digitalRead(5);
 potVal = analogRead(potPin); 

 if (switchState == LOW){
 
 
 digitalWrite(A2,HIGH);
 
 digitalWrite(4, LOW);
 
}  
 


else{ 
   digitalWrite(A2, LOW);
   
   digitalWrite(4, HIGH);
   }
 }
