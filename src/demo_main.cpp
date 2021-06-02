#include "M5Stack.h"

#include "constants.h"
#include "app_lcd.h"

int current_state = 0;
String curr_uuid;
long interval = 500;
long long next_interval = 0;

void lcd_print_center_str(const char* msg, int y){
    // M5.Lcd.setTextDatum(CC_DATUM);
    M5.Lcd.setTextColor(BLUE);
    M5.Lcd.drawCentreString(msg, lcd_half_X+40, y-30, 1);
}

void app_thread() {
    
}

void setup() {
    M5.begin();
    M5.Lcd.begin();
    M5.Lcd.clear(BLACK);
    M5.Lcd.println("Begin");

}

void loop() {
    M5.update();

    if (M5.BtnA.wasPressed() && current_state == 0) {
        current_state = 1;
        M5.Lcd.clear(GREEN);
        M5.Lcd.setTextSize(3);
        lcd_print_center_str("extracting", lcd_top_third_Y);
        M5.Lcd.setTextSize(5);
        lcd_print_center_str(POD_UUID, lcd_bot_third_Y); 
    } else if (M5.BtnB.wasPressed() && current_state == 1) {
        current_state = 0;
        M5.Lcd.clear(RED);
        M5.Lcd.setTextSize(4); 
        lcd_print_center_str("Waiting", lcd_half_Y);  
    }

    app_thread();
}