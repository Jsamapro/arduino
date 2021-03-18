int value;      
int position;   

const int analogPin = A0;
const int switchPin = 9;

unsigned long previousTime = 0; 

int switchState = 0;

int prevSwitchState = 0;

int led = 3;

long interval = 3000;

void setup() {

 for(int x = 3;x<9;x++){
   pinMode(x, OUTPUT);

 }

 pinMode(switchPin, INPUT);
 Serial.begin(9600);
}

void loop(){ 

 //guarda el tiempo desde el cual la placa comenzó el programa
 unsigned long currentTime = millis(); 


 if(currentTime - previousTime > interval) {

   previousTime = currentTime; 

   digitalWrite(led, HIGH);
   led++; 
   
   if(led == 9){

   }
 }

 int potenciometerState = analogRead(A0);
 if (potenciometerState > 512){
  switchState = 1;
 }
 else {
  switchState = 0;
 }
 

 Serial.println(switchState);
 

 if(switchState != prevSwitchState){

   for(int x = 3;x<9;x++){    
     digitalWrite(x, LOW);

   }  
   
   led = 3;
   
   previousTime = currentTime;
 }
 prevSwitchState = switchState;

}
