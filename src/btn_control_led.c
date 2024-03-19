/**
* Copyright (c) 2024 MicroRos (Traning) Ltd.
*
* Thongtd_extra
*/
#define btn 10 //GP10
#include "pico/stdlib.h"
int main() {
#ifndef PICO_DEFAULT_LED_PIN
#warning blink example requires a board with a regular LED
#else
const uint LED_PIN = PICO_DEFAULT_LED_PIN;
gpio_init(LED_PIN);
gpio_set_dir(LED_PIN, GPIO_OUT);
gpio_init(btn);
gpio_set_dir(btn, GPIO_IN);
while (true) {
int btn_status = gpio_get(btn);
if (btn_status == 0) // have block
{
gpio_put(LED_PIN, 1);
}
if (btn_status == 1)
{
gpio_put(LED_PIN, 0);
}
}
#endif
}