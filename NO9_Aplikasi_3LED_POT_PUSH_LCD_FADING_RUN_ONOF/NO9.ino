#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int LED1 = 3;
int LED2 = 5;
int LED3 = 6;
int pot = A0;
int tombol1 = 2;
int tombol2 = 4;
int tombol3 = 7;
int data;
int batas;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(tombol1, INPUT);
  pinMode(tombol2, INPUT);
  pinMode(tombol3, INPUT);
  pinMode(pot, INPUT);
  lcd.init();
  lcd.backlight();
  lcd.begin(16, 2);
  lcd.home();
  lcd.setCursor(3, 0);
  lcd.print("D3TK-47-02");
  delay(3000);
  batas = 0;
  menu();
  //..................
}

void loop() {
  for (int i = 0; i <= batas; i++) {
    lcd.clear();
    lcd.setCursor(5, 0);
    lcd.print("ON/OFF");
    lcd.setCursor(0, 1);
    lcd.print("FADING");
    lcd.setCursor(9, 1);
    lcd.print("RUNNING");
    lcd.print(i);
    delay(1000);
  }
}

void menu() {
set:
  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("ON/OFF");
  lcd.setCursor(0, 1);
  lcd.print("FADING");
  lcd.setCursor(9, 1);
  lcd.print("RUNNING");
  if (digitalRead(tombol1) == LOW) {
    while (digitalRead(tombol1) == LOW) {}
    goto set1;
  }

set1:
  for (int i = 0; i <= 255; i += 5) {
    analogWrite(LED1, i);
    delay(100);
    analogWrite(LED2, i);
    delay(100);
    analogWrite(LED3, i);
    delay(100);
  }
}