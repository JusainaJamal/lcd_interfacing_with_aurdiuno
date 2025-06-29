// C++ code
//
#include<LiquidCrystal.h>
int en=12,rs=13,d4=4,d5=5,d6=6,d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup()
{
  lcd.begin(16,2);
    lcd.print("Hellow World");
   
}
 

void loop()
{
  
    
  }
