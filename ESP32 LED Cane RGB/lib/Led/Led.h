#ifndef LED_H
#define LED_H

#include <FastLed.h>

#define LED_TYPE WS2812B
#define COLOR_ORDER GRB
#define NUM_LEDS 55
#define BRIGHTNESS 255

extern CRGB leds[NUM_LEDS];

#endif