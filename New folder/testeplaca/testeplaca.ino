#define POT_TENSAO 43;
#define POT_CORR 35;
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);

//variaveis

int valorPOT_V, int valorPOT_I;
float tensao, corrente;

void setup() {
Serial.begin(115200);
lcd.init();
lcd.backlight();
lcd.setCursor(0,0);
lcd.print("1CCPO");
lcd.setCursor(0,1);
lcd.print("teste do lcd");

delay(2000);

lcd.clear();
lcd.setCursor(0,0);
lcd.print("Me molhei todo");
lcd.setCursor(0,1);
lcd.print("que droga")

}

void loop() {

//nada por aqui





}
