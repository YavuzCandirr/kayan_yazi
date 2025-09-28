#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD ekran adresi ve boyutu (20 karakter, 4 satır)
LiquidCrystal_I2C lcd(0x27, 20, 4); // 0x27 LCD adresi, 20x4 ekran

void setup() {
  lcd.begin();  // LCD ekranı başlat
  lcd.clear();  // Ekranı temizle
  lcd.setCursor(0, 0);
  lcd.print("YAVUZDAN SIZE MESAJ");

}

void loop() {
  String message = "iyi geceler";
  for(int i=0;i<21;i++){
   if(i>8){
    lcd.setCursor(i, 2);
    lcd.print(message.substring(0,((message.length())-(i-9))));
    lcd.setCursor(i-1, 2);
    lcd.print(" ");
    delay(300);
   }
   else{
     lcd.setCursor(i, 2);
     lcd.print(message);
     lcd.setCursor(i-1, 2);
     lcd.print(" ");
     delay(300);
   }
  
  }
}
