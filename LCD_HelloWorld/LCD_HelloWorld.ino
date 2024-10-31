#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);
void setup() {
  
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
  lcd.setCursor(3, 0);
  lcd.print("HELLO WORLD");
}

void loop() {
}
