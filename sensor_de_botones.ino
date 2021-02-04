//Constantes de Pines
const int greenLEDPin = 9;
const int redLEDPin = 11;
const int blueLEDPin = 10;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

int redSensorMinValue = 1023;
int greenSensorMinValue = 1023;
int blueSensorMinValue = 1023;

int redSensorMaxValue = 0;
int greenSensorMaxValue = 0;
int blueSensorMaxValue = 0;

int switchState = 0;
bool isTheButtonBeingPressed = false;
bool pinPinflag = false;

int buttonPin=2;

void setup() {
  Serial.begin (9600);

  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
  pinMode(buttonPin, INPUT);
  calibrate();
}

void calibrate() {
  digitalWrite(LED_BUILTIN, HIGH);
  while (millis()<5000){

      redSensorValue = analogRead(redSensorPin);
      greenSensorValue = analogRead(greenSensorPin);
      blueSensorValue = analogRead(blueSensorPin);
      if(redSensorValue > redSensorMaxValue)
      {
        redSensorMaxValue = redSensorValue;
      }
      if(redSensorValue < redSensorMinValue)
      {
        redSensorMinValue = redSensorValue;
      }      
      //green
      if(greenSensorValue > greenSensorMaxValue)
      {
        greenSensorMaxValue = greenSensorValue;
      }
      if(greenSensorValue < greenSensorMinValue)
      {
        greenSensorMinValue = greenSensorValue;
      }  
      //blue    
      if(blueSensorValue > blueSensorMaxValue)
      {
         blueSensorMaxValue = blueSensorValue;
      }
      if(blueSensorValue < blueSensorMinValue)
      {
         blueSensorMinValue = blueSensorValue;
      }      

    
  }
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false) {
      pinPinflag = !pinPinflag;
     isTheButtonBeingPressed = true;   
  }
   
}
else{
  isTheButtonBeingPressed = false;
}


//ejecutamos o no ejecutamos
  if (pinPinflag == true)
  {
     pinPin();
  }
  else{
  analogWrite(redLEDPin, 0);
  analogWrite(greenLEDPin, 0);
  analogWrite(blueLEDPin, 0);
  }
}

void pinPin() {
    redSensorValue = analogRead(redSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);
  Serial.print("Raw Sensor Values \t Read:");
  Serial.print(redSensorValue);
  Serial.print("\t Green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t Blue: ");
  Serial.println(blueSensorValue);
  redValue = map(redSensorValue, redSensorMinValue,redSensorMaxValue,0,255);
  greenValue = map(greenSensorValue, greenSensorMinValue,greenSensorMaxValue,0,255);
  blueValue = map(blueSensorValue, blueSensorMinValue,blueSensorMaxValue,0,255);
  Serial.print("Mapped Sensor Values \t Red:");
  Serial.print(redValue);
  Serial.print("\t Green: ");
  Serial.print(greenValue);
  Serial.print("\t Blue: ");
  Serial.println(blueValue);
  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
