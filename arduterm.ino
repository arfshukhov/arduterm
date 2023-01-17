/* Подключаем библиотеку для работы с LCD */
#include <LiquidCrystal.h>
#include <DHT.h>
#include "iarduino_RTC.h"


iarduino_RTC time(RTC_DS1302, 10, 8, 9);
LiquidCrystal lcd(0, 1, 2, 3, 4, 5);

DHT dht(6, DHT11); 

byte face1[8]=
{
0b00000,
0b00000,
0b11011,
0b11011,
0b00000,
0b10001,
0b01110,
0b00000
};

byte face2[8]=
{
0b00000,
0b00000,
0b00000,
0b00000,
0b00000,
0b10001,
0b01110,
0b00000
};

class Display{
  public:

    void print_temp(){
    short t = dht.readTemperature();
    String temp_line;
    temp_line.reserve(12);
    temp_line = "Temp: ";
    temp_line += t;
    temp_line += char(223);
    temp_line += "C";
    if (t < 10) temp_line += " ";  
    lcd.setCursor(0,0);
    lcd.print(temp_line);
  } 
   
  void print_hum(){
    short h = dht.readHumidity();
    String hum_line;
    hum_line.reserve(12);
    hum_line = "Hydro: ";
    hum_line += h;
    hum_line += "%";
    if (h < 10) hum_line += " ";
    lcd.setCursor(0,1);
    lcd.print(hum_line);  
  }

  void print_time(){
    lcd.setCursor(10,1);
    lcd.print(char(124));
    lcd.print(time.gettime("H:i"));
  }
};

Display display;

void setup()
{
  
  dht.begin();
  lcd.begin(16, 2);
  lcd.createChar(0, face1);
  lcd.createChar(1, face2);
  time.begin();
  //time.settime(0, 46, 18, 17, 01, 23, 2);
}
void loop()
{ display.print_temp();
  display.print_hum();
  display.print_time();  
  delay(3000);
  lcd.setCursor(11, 0);
  lcd.write(byte(1));
  lcd.setCursor(13, 1);
  lcd.print(" ");
  delay(150);
  lcd.setCursor(11, 0);
  lcd.write(byte(0));
  lcd.setCursor(13, 1);
  lcd.print(":");
  }

