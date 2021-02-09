#include <Servo.h>
Servo myServo; 
int angle =13;
const int pinButton1 = 2;
//2
const int pinButton2 = 3;
//3
int button1State=0;
int button2State=0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
}
void loop() {
  button1State = digitalRead(pinButton1);
if(button1State == HIGH){
 void movimiento1();
myServo.write(0);
delay(150);
myServo.write(15);
delay(150); 
}
button2State = digitalRead(pinButton2);
if(button2State== HIGH){
  void movimiento2();
 myServo.write(60);
delay(150);
myServo.write(90);
delay(150); 
  }
}
