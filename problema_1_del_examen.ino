/*
*  Documentación del programa 
*  Autore: Jaume Samaranch Parellada 
*  Fecha: 19/03/21
*  Código referencia: (url)
*  Descripción del programa:Tras conectarlo, durante 1 segundo habrá un led que se encenderá una única vez.
*                           Después los 3 leds se encenderán y apagarán estando 1 segundo encendidos y 0,5 segundos apagados en bucle.
*  Hardware necesario: 3 leds.
*/

int ledpin1 = 4;
int ledpin2 = 11;
int ledpin3 = 12;

void setup() {
 pinMode(ledpin1, OUTPUT);
 pinMode(ledpin2, OUTPUT);
 pinMode(ledpin3, OUTPUT);

 digitalWrite(ledpin3, HIGH); 
 delay(1000);
 
 digitalWrite(ledpin3, LOW);
 delay(1000);
 
 digitalWrite(ledpin2, LOW); 
 
 digitalWrite(ledpin1, LOW); 
 delay(1000);

}

void loop() {
 
 digitalWrite(ledpin1, HIGH);
    
 digitalWrite(ledpin2, HIGH);
  
 digitalWrite(ledpin3, HIGH); 
 delay(500); 
 
 digitalWrite(ledpin1, LOW);
  
 digitalWrite(ledpin2, LOW);
  
 digitalWrite(ledpin3, LOW); 
 delay(500);
}
