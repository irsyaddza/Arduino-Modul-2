#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int buttonPin = 9; 
int buttonState = 0; 
void setup() {
  Serial.begin(9600);
  lcd.backlight(); 
  lcd.init();
  pinMode(buttonPin, INPUT_PULLUP);
  lcd.setCursor(0, 0); 
  lcd.print("Hello");
}
void loop() {
  if (Serial.available() > 0) {
    lcd.clear(); 
    String inputText = Serial.readString(); 
    lcd.setCursor(0, 0); 
    lcd.print(inputText); 
  }
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    scrollText(); 
  }
}
void scrollText() {
  for (int position = 0; position < 16; position++) {
    lcd.scrollDisplayLeft(); 
    delay(200); 
  }
}