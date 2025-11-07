#include <Arduixon.h>;

void blink_for_ms(uint8_t pin, ulong_t durationMs, ulong_t blinkDelayMs) {
    ulong_t end = millis() + durationMs;
    
    blink_while(millis() < end, pin, blinkDelayMs);
}

void blink_once(uint8_t pin, ulong_t durationMs) {
    pinMode(pin, OUTPUT);

    digitalWrite(pin, HIGH);
    delay(durationMs);
    digitalWrite(pin, LOW);
}

inline ulong millis_to_micros(ulong millis) {
    return millis * 1000;    
}
