/**
 * @file app_lcd.h
 * @author Scott CJX (code@scottcjx.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef APP_LCD_H_
#define APP_LCD_H_

#include "M5Stack.h"

const int SCREEN_DIMENSIONS_X = (int)(M5.Lcd.width());
const int SCREEN_DIMENSIONS_Y = (int)(M5.Lcd.height());

const int lcd_top_third_Y = (int)(SCREEN_DIMENSIONS_Y * 1 / 3);
const int lcd_bot_third_Y = (int)(SCREEN_DIMENSIONS_Y * 2 / 3);
const int lcd_half_Y = (int)(SCREEN_DIMENSIONS_Y * 1 / 2);

const int lcd_half_X = (int)(SCREEN_DIMENSIONS_X * 1 / 2);

#endif /* !APP_LCD_H_ */
