#include <Arduixon.h>;

void blink_for_ms(uint8_t pin, ulong_t durationMs, ulong_t blinkDelayMs) {
    ulong_t end = millis() + durationMs;
    
    blink_while(millis() < end, pin, blinkDelayMs);
}
