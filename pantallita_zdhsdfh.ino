#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState= 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Que dice");
  lcd.setCursor(0, 1);
lcd.print ("la bola");
}

void loop() {
 switchState = digitalRead(switchPin);
 if (switchState != prevSwitchState){
  if (switchState == LOW){
    reply = random(8);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("La bola dice:");
    lcd.setCursor(0, 1);
    switch(reply){
      case 0:
      lcd.print("SI!");
      break;
      case 1:
      lcd.print("e de EEEEEEEEEE");
      break;
      case 2:
      lcd.print("chimuelooooooo");
      break;
      case 3:
      lcd.print("Vas de laoo");
      break;
      case 4:
      lcd.print("Achimuelao");
      break;
      case 5:
       lcd.print("dando vuelta");
      break;
      case 6:
       lcd.print("en un chimuelo");
      break;
      case 7:
       lcd.print("NO!");
      break;
    }
  }
 }
 prevSwitchState = switchState;
 }
