#define RED_LED 3
#define YELLOW_LED 7

void setup() {
   Serial.begin(9600);
   pinMode(2, OUTPUT);
   pinMode(RED_LED, OUTPUT); // Red
   pinMode(YELLOW_LED, OUTPUT); // Yellow
}
 
void loop() {


   digitalWrite(2,HIGH);
   delay(25);
   unsigned int value = analogRead(0);


 
  digitalWrite(2,LOW);
  delay(25);
  unsigned int value2 = analogRead(0);


    if ((value2 - value) > 400){
      digitalWrite(3, HIGH); // Red on
      digitalWrite(7, LOW); // Yellow on
      Serial.print(".");
    } else if((value2 - value) <= 400) {
      digitalWrite(7, HIGH); // Yellow on
      digitalWrite(3, LOW); //Red off
    }


   Serial.print(value);
   Serial.print(",");
   Serial.print(value2);
   Serial.println(" counts");
}





// #include <Adafruit_NeoPixel.h>
// #ifdef __AVR__
// #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
// #endif


// #define PIN_NEO_PIXEL  7   // Arduino pin that connects to NeoPixel
// #define NUM_PIXELS     10  // The number of LEDs (pixels) on NeoPixel


// Adafruit_NeoPixel NeoPixel(NUM_PIXELS, PIN_NEO_PIXEL, NEO_GRB + NEO_KHZ800);

// void setup() {
//    Serial.begin(9600);
//    pinMode(2, OUTPUT);
//    //pinMode(7, OUTPUT); // neopixels
//    NeoPixel.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
//    NeoPixel.setBrightness(50); // a value from 0 to 255
// }
 
// void loop() {

//    digitalWrite(2,HIGH);
//    delay(25);
//    unsigned int value = analogRead(0);


 
//   digitalWrite(2,LOW);
//   delay(25);
//   unsigned int value2 = analogRead(0);


//     if ((value2 - value) > 200){
     
//       NeoPixel.setPixelColor(0, NeoPixel.Color(255, 0, 0)); // it only takes effect if pixels.show() is called
//       NeoPixel.clear();
//       NeoPixel.show(); // send the updated pixel colors to the NeoPixel hardware.
//          // off time

//     } 
//     // else if((value2 - value) <= 400) {
//     //   digitalWrite(7, HIGH); // Yellow on
//     //   digitalWrite(3, LOW); //Red off
//     // }


//    Serial.print(value);
//    Serial.print(",");
//    Serial.print(value2);
//    Serial.println(" counts");
// }

