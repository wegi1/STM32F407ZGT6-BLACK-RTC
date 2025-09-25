/*
 * ADT_F.h
 *
 *  Created on: Sep 23, 2025
 *      Author: BOLO
 */

#ifndef ADT_F_H_
#define ADT_F_H_


void make_fade(void);
void Big_TTF_Demo(void);
int render_biggestFont_portait(int pozx, int pozy, const char *text, const unsigned char *font_data, float pixel_height);
int lcd_text_boxed(int pozx, int pozy, const char *text, const unsigned char *font_data, float pixel_height);

int lcd_mono_text_boxed(int pozx, int pozy, const char *text, const unsigned char *font_data, float pixel_height);
int render_text_monospace(int pozx, int pozy, const char *text, const unsigned char *font_data, float pixel_height);
int lcd_render_text(int pozx, int pozy, const char *text, const unsigned char *font_data, float pixel_height, uint8_t fast, uint8_t boxed);

void draw_End(void);
//int lcd_fade_text(int pozx, int pozy, const char *text, const unsigned char *font_data, float pixel_height);

void Timer_Demo(void) ;
void lcd_set_text_color(uint16_t kolor);
void lcd_set_background_color(uint16_t kolor);
uint8_t test_stop(void);

void lcd_setup_picture(uint8_t pic_nr);
uint32_t readPicFromFlash(uint8_t pic_nr);

#endif /* ADT_F_H_ */
