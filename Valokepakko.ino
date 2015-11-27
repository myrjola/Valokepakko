#include <avr/pgmspace.h>

#include "image.h"

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

// Variable to store the color from PROGMEM.
RGB rgb;

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code

  strip.begin();

  // Lower brightness so that Arduino can handle it.
  strip.setBrightness(32);
  // Initialize all pixels to 'off'
  strip.show();
  Serial.begin(9600);
}

void loop() {
  /* for (int x = 0; x < IMAGE_WIDTH; x++) { */
  int x = 0;
    for (int y = 0; y < IMAGE_HEIGHT; y++) {
      int pixelIndex = x + y * IMAGE_WIDTH;
      int colorIndex = pgm_read_byte_near(PIXELS + pixelIndex);
      memcpy_PF(&rgb, (uint_farptr_t) &PALETTE[colorIndex], sizeof(RGB));
      Serial.print(pixelIndex);
      Serial.print(": ");
      Serial.print(colorIndex);
      Serial.print(": ");
      Serial.print(rgb.r);
      Serial.print(", ");
      Serial.print(rgb.g);
      Serial.print(", ");
      Serial.println(rgb.b);
      uint32_t c = strip.Color(rgb.r, rgb.g, rgb.b);
      strip.setPixelColor(y, c);
    }
    Serial.println("###");
    strip.show();
    delay(1000);
  /* } */
}
