#include <LiquidCrystal.h>

LiquidCrystal lcd(10, 9, 5, 4, 3, 2);

int counter = 0;
int dir = -1;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Current Count: ");
}

void loop() {
  if(1 > counter || 9 < counter) {
    dir *= -1;
  }
  
  counter += dir;
  
  lcd.setCursor(0, 1);
  lcd.print("                ");
  
  lcd.setCursor(0, 1);
  lcd.print(counter);
  lcd.print(" Seconds");
    
  delay(1000);
}
