#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  

void setup() 
{   
lcd.init();
lcd.clear();
lcd.backlight(); 
  
lcd.setCursor(0,0); 
lcd.print("Hello world!");  
} 

void loop() {   
for (int positionCounter = 0;positionCounter < 13;positionCounter++) {    
lcd.scrollDisplayLeft();      
delay(150); 
  }  
 
  for (int positionCounter = 0;positionCounter < 29;positionCounter++) {    
lcd.scrollDisplayRight();      
delay(150);  
  }  
 
  for (int positionCounter = 0; positionCounter < 16;positionCounter++) {    
lcd.scrollDisplayLeft();      
delay(150);  
  }  
  delay(1000);  
}