#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte smiley[8] = {
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B11011,
  B11011,
};

void setup() {
  lcd.createChar(0, smiley);
  lcd.begin(16, 2);  
  lcd.write(byte(0));
}

void loop() {}
 
