# Arduixon
A small utility library I use in my Arduino projects.
Not much to see here.

Please note that this is specifically made for my hardware so you will likely need to update the pin numbers if you want to use this.

## Features
### Definitions
- `LED_BUILTIN` polyfill for *ESP32* (pin 2) and *ESP32S2* (pin 15). **You may need to change it!**
- `ESP_SMALL` defined when compiling for my *ESP32S2*
- `ESP_BIG` defined when compiling for my *ESP32S*

### Macros & functions
- `blink_while(condition, pin, delayMs)` turns a pin on and off with a delay while a condition is met
- `blink_for_ms(pin, durationMs, blinkDelayMs)` turns a pin on and off for a specified amount of time
- `blink_times(pin, blinkNumber, blinkDelayMs)` turns a pin on and off the specified amount of times
- `blink_once(pin, durationMs)` powers a pin for a the specified amount of time then powers it off
- `millis_to_micros(milliseconds)` converts milliseconds to microseconds