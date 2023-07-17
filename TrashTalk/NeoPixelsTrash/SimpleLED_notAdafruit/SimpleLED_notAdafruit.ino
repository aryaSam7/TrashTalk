#include <FastLED.h>

#define DATA_PIN    2
#define NUM_LEDS    9
#define BRIGHTNESS  64
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB

// Define the array of leds
CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 100

void setup() {
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  // Turn the LED on
  leds[0] = CRGB::Red;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Red;
  leds[4] = CRGB::Green;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Red;
  leds[7] = CRGB::Green;
  leds[8] = CRGB::Blue;
  FastLED.show();
  delay(10);
}
