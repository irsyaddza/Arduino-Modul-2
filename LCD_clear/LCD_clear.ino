#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 
int tombol1=10;
int tombol2=9;
int tombol3=8;
int pot=

void setup() 
{
pinMode(tombol1,INPUT);
pinMode(tombol2,INPUT);
pinMode(tombol3,INPUT);
lcd.init();
lcd.clear();
lcd.backlight(); 
}

void loop() 
{
  if(digitalRead(tombol1)==LOW){
  lcd.setCursor(2,0); 
  lcd.print("Tombol 1");
}
  if(digitalRead(tombol2)==LOW){
  lcd.setCursor(0,1); 
  lcd.print("Tombol 2");
}

  if(digitalRead(tombol3)==LOW){
  lcd.clear();
}
}