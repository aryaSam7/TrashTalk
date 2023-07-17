/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-neopixel-led-strip
 */

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define PIN_NEO_PIXEL  2   // Arduino pin that connects to NeoPixel
#define NUM_PIXELS     10  // The number of LEDs (pixels) on NeoPixel

Adafruit_NeoPixel NeoPixel(NUM_PIXELS, PIN_NEO_PIXEL, NEO_GRB + NEO_KHZ800);

void setup() {
  NeoPixel.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  NeoPixel.setBrightness(50); // a value from 0 to 255
}

void loop() {
  NeoPixel.clear(); // set all pixel colors to 'off'. It only takes effect if pixels.show() is called

  // turn pixels to green one by one with delay between each pixel
  for (int pixel = 0; pixel < NUM_PIXELS; pixel++) { // for each pixel
    NeoPixel.setPixelColor(pixel, NeoPixel.Color(77, 0, 77)); // it only takes effect if pixels.show() is called
    NeoPixel.show();   // send the updated pixel colors to the NeoPixel hardware.
    delay(300); // pause between each pixel
  }

  // turn off all pixels for one seconds
  NeoPixel.clear();
  NeoPixel.show(); // send the updated pixel colors to the NeoPixel hardware.
  delay(2000);     // off time
}
