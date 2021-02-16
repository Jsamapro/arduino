// Definir variables
const int PinInterruptor = 8;
unsigned long TiempoPrevio = 0;
int EstadodelInterruptor = 0;
int EstadoPreviodelInterruptor = 0;
int Led = 2;
long TiempoIntervalocadaLed = 1000; // Tiempo indicado en milisegundos, por tanto 10 segundos
int sensorValue = 0;
int limit = 150;

// Configurar la placa Arduino
void setup() {
  for(int x = 2;x<8;x++){
    pinMode(x, OUTPUT);
   }
    pinMode(PinInterruptor, INPUT);
      Serial.begin(9600);
}
   
// Ejecucion del programa
void loop() {
  unsigned long TiempoActual = millis();
  if(TiempoActual - TiempoPrevio > TiempoIntervalocadaLed){
    TiempoPrevio = TiempoActual;
    digitalWrite(Led, HIGH);
    Led++;
    if(Led == 7){
    }
  }
  sensorValue = analogRead(A0);
  Serial.print("Valor del sensor: ");
  Serial.println(sensorValue);
  if(sensorValue > limit)
  {
    EstadodelInterruptor = 1;
  }
  else{
    EstadodelInterruptor = 0;
  }




 
  if(EstadodelInterruptor != EstadoPreviodelInterruptor){
    for(int x = 2;x<8;x++){
      digitalWrite(x, LOW);
    }
    Led = 2;
    TiempoPrevio = TiempoActual;
  }
  EstadoPreviodelInterruptor = EstadodelInterruptor;
}  
// Volver al comienzo del programa
