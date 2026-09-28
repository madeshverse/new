#ifndef OLED_H
#define OLED_

#include "sdk_project_config.h"

void OLED_WRITE(uint8_t mode, uint8_t byte);
void OLED_INIT(void);
void OLED_CLEAR(void);
void OLED_SETCURSOR(int page,int column);
void OLED_putstring(const char* str, int page, int col);
void EEPROM_WRITE(uint8_t memdres,uint8_t data[8]);
void EEPROM_READ(uint8_t memAdres, uint8_t data[8]);
#endif


























