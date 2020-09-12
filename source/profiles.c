#include "profiles.h"
#include "miniFastLED.h"

#define LEN(a) (sizeof(a)/sizeof(*a))

void standard(led_t* currentKeyLedColors) {
    setAllKeysColorHSV(currentKeyLedColors, 215, 255, 255);
}

void caps(led_t* currentKeyLedColors) {
    setAllKeysColorHSV(currentKeyLedColors, 0, 255, 255);
}

void fn(led_t* currentKeyLedColors) {
    setAllKeysColorHSV(currentKeyLedColors, 215, 0, 255);
}

void mouse(led_t* currentKeyLedColors) {
    setAllKeysColorHSV(currentKeyLedColors, 130, 255, 255);
}

void numpad(led_t* currentKeyLedColors) {
    setAllKeysColorHSV(currentKeyLedColors, 175, 255, 255);
}

void misc(led_t* currentKeyLedColors) {
    setAllKeysColorHSV(currentKeyLedColors, 45, 255, 255);
}

void gaming(led_t* currentKeyLedColors) {
    setAllKeysColorHSV(currentKeyLedColors, 245, 255, 255);
}
