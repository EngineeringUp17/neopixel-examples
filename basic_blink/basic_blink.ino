#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 10
#define PIN 6

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  // 0 = off; 255 = full brightness
  pixels.setBrightness(127);
}

void loop() {
  for(int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
  }
  pixels.show();

  delay(1000);
  
  for(int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
  }
  pixels.show();

  delay(1000);
}
