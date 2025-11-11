#include <Arduixon.h>

void blink_for_ms(uint8_t pin, ulong durationMs, ulong blinkDelayMs) {
    ulong end = millis() + durationMs;
    
    blink_while(millis() < end, pin, blinkDelayMs);
}

void blink_times(uint8_t pin, size_t blinkNumber, ulong blinkDelayMs) {
    for(size_t i = 0; i < blinkNumber; i++) {
        blink_once(pin, blinkDelayMs);
        delay(blinkDelayMs);
    }
}

void blink_once(uint8_t pin, ulong durationMs) {
    pinMode(pin, OUTPUT);

    digitalWrite(pin, HIGH);
    delay(durationMs);
    digitalWrite(pin, LOW);
}

ulong millis_to_micros(ulong millis) {
    return millis * 1000;    
}
