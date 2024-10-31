#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  
int tombol1=10;
int tombol2=9;
int tombol3=8;

void setup() 
{   
lcd.init();
lcd.clear();
lcd.backlight();  
  
} 

void loop() {
if(digitalRead(tombol1)==LOW){
  lcd.setCursor(0,0); 
  lcd.print("Hello world!");
  for (int positionCounter = 0;positionCounter < 13;positionCounter++) {    
lcd.scrollDisplayRight();      
delay(150); 
  }
}   

if(digitalRead(tombol2)==LOW){
  lcd.setCursor(0,0); 
  lcd.print("Hello world!");
  for (int positionCounter = 0;positionCounter < 13;positionCounter++) {    
lcd.scrollDisplayLeft();      
delay(150); 
  }
}
  delay(1000);  
}