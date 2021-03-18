const int switchPin = 9;

unsigned long previousTime = 0; 

int switchState = 0;

int prevSwitchState = 0;

int indexLed = 0;


const int ledPins[]= {
  3,
  6,
  4,
  7,
  5,
  8,
};


long interval = 3000;


void setup() {

 for(int x = 3;x<9;x++){
   pinMode(x, OUTPUT);


 }

 
 pinMode(switchPin, INPUT);
 Serial.begin(9600);
}

void loop(){ 

 
 unsigned long currentTime = millis(); 

 

 if(currentTime - previousTime > interval) {

   
   previousTime = currentTime; 

   
   digitalWrite(ledPins[indexLed], HIGH);
   indexLed++; 
   

 }

 
int sensorValue = analogRead(A0);

if (sensorValue > 512){
  switchState = 1;
}
else{
  switchState = 0;
}
 
 Serial.println(switchState);
 

 
 if(switchState != prevSwitchState){

   for(int x = 3;x<9;x++){    
     digitalWrite(x, LOW);

   }  
   
   
    indexLed = 0;
   
   
   previousTime = currentTime;
 }
 
 prevSwitchState = switchState;

}
