#ifndef DATA_H
#define DATA_H

#include <Arduino.h>

struct RgbValues {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
};

union ReceivedValues {
  RgbValues rgbRecieved;
  uint8_t receivedBytes[3];
};

extern ReceivedValues receivedValues;
extern uint8_t redVal, greenVal, blueVal;

#endif