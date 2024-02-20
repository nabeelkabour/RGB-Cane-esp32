#include <Arduino.h>

#include <Led.h>
#include <Pins.h>
#include <Data.h>
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(255);

  Serial.begin(115200);
  SerialBT.begin("RGB Cane");
}

void loop() {
  if(SerialBT.available() >= 3) {
    // Serial.write(SerialBT.read());

    redVal = SerialBT.read();
    greenVal = SerialBT.read();
    blueVal = SerialBT.read();
  }
} 