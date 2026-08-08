#ifndef GUARD_FLASH_H
#define GUARD_FLASH_H

#include "reg.h"
// flash functions and program control

void app_jump();

void flash_init();
void flash_write(uint32_t dest, uint32_t len);
void flash_erase();

#endif // GUARD_FLASH_H
