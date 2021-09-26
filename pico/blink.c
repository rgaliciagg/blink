/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"

int main() {
    const uint LED_PIN = 25; /* On-board LED. Connected to GPIO 25 */
    gpio_init(LED_PIN); /* Initialize GPIO function on the Pin */
    gpio_set_dir(LED_PIN, GPIO_OUT); /* Set the Pin as Output */
    while (true) {
        gpio_put(LED_PIN, 1); /* Make the GPIO Pin HIGH */
        sleep_ms(250); /* Delay of 250ms */
        gpio_put(LED_PIN, 0); /* Make the GPIO Pin LOW */
        sleep_ms(250); /* Delay of 250ms */
    }
}
