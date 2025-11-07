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
