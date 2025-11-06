#ifndef ARDUIXON_H
#define ARDUIXON_H

#include <Arduino.h>

/* Custom types */

typedef unsigned long ulong_t;

/* Definitions */

#ifdef CONFIG_IDF_TARGET_ESP32
    #define ESP_BIG
#elif CONFIG_IDF_TARGET_ESP32S2
    #define ESP_SMALL
#endif

/* Polyfills */

#ifndef LED_BUILTIN
    #ifdef CONFIG_IDF_TARGET_ESP32
        #define LED_BUILTIN 2
    #elif CONFIG_IDF_TARGET_ESP32S2
        #define LED_BUILTIN 15
    #else
        #warning 'LED_BUILTIN' not defined for this board
    #endif
#endif

#endif