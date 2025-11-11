#ifndef ARDUIXON_H
#define ARDUIXON_H

#include <Arduino.h>

/* Definitions */

#ifdef CONFIG_IDF_TARGET_ESP32
    #define ESP_BIG
#elif CONFIG_IDF_TARGET_ESP32S2
    #define ESP_SMALL
#endif

/* Macros */

#define blink_while(condition, pin, delayMs) \
    do {                                     \
        bool state = true;                   \
                                             \
       pinMode(pin, OUTPUT);                 \
                                             \
        while(condition) {                   \
            digitalWrite(pin, state);        \
                                             \
            ulong start = millis();          \
            state = !state;                  \
                                             \
            while(                           \
                (condition) &&               \
                millis() < start + delayMs   \
            );                               \
        }                                    \
                                             \
        digitalWrite(pin, LOW);              \
    } while(false)

/* Functions */

void blink_for_ms(uint8_t pin, ulong durationMs, ulong blinkDelayMs);
void blink_times(uint8_t pin, uint blinkNumber, ulong blinkDelayMs);
void blink_once(uint8_t pin, ulong durationMs);

ulong millis_to_micros(ulong millis);

/* Polyfills */


#ifdef CONFIG_IDF_TARGET_ESP32
    #define LED_BUILTIN 2
#elif CONFIG_IDF_TARGET_ESP32S2
    #define LED_BUILTIN 15
#else
    #warning 'LED_BUILTIN' not defined for this board
#endif

#endif