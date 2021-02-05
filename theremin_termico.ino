//variables

int sensorValue;
const int ledPin = 13;

int switchState=0;
bool isTheButtonBeingPressed= false;
bool play = false;

int buttonPin=5;

const int speakerPin =  8;



//pines
//pin del sensor
//pin del altavoz
//boton

void setup() {
  //inicializar Serial
    // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
//inicializar  speaker boton
pinMode(buttonPin, INPUT);

Serial.begin(9600);
}


void loop() {
 checkButton();
 if (play){
  sound();
 }
}

void checkButton(){
    switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed= true;
    }
  }
  else{
    isTheButtonBeingPressed = false;
  }
}

void sound(){
 
  sensorValue = analogRead(A0);
  Serial.print("Valor del sensor");
  Serial.println(sensorValue);
  
  int pitch = map(sensorValue, 100, 1023, 50, 2000);
  checkButton();
  Serial.println(play);
  if(play){
    tone(speakerPin,pitch,20);
  }
  else {
    return;
  }
  // noTone(speakerPin);
   delay(10);
}
