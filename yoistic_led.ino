//*  Documentación del programa 
//*  Autore: Alba
//*  Fecha: 1/3/2021
//*  Código referencia: (url)
//*  Descripción del programa:
// Hardware necesario:


//Definiciones de constantes de pines
const int pinBoton = 3; 
const int pinEjeY = A1; 
const int pinEjeX = A0; 

const int pinLed = 9;

//Definición de variables globales 

int valorEjrX= 0;

void setup() {
//inicializaciones
  pinMode(pinBoton, INPUT);
  digitalWrite(pinBoton, HIGH);
  Serial.begin(9600);
pinMode(pinLed,OUTPUT);
//código que se ejecuta solo una vez. Calibraciones  
}

void loop() {
valorEjeX = analogRead(pinEjeX);
 if (estadoBoton == LOW);
 digitalWrite(pinLed,HIGH);
}
 else
 digitalWrite(pinLed, LOW);
 
}  
