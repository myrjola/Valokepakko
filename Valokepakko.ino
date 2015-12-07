#include <avr/pgmspace.h>
#include <math.h>

#include <Adafruit_NeoPixel.h>

#include "image.h"

#ifdef __AVR__
#include <avr/power.h>
#endif

/****************************************************/
/* Here you choose which kind of interface is used. */
/*                                                  */
/* TIMER Timer based                                */
/* TILT Orientation based                           */
/* WHEEL Wheel rotation based                       */
/*                                                  */
/* Uncomment only ONE line at a time.               */
/****************************************************/
#define TIMER
/* #define TILT */
/* #define WHEEL */

const int LED_PIN = 6;

// We use the Memsic 2125 Dual-axis Accelerometer.
// Accelerometer pins:
const int ACCEL_X_PIN = 2;
const int ACCEL_Y_PIN = 3;

const int LEDS = 60;
const unsigned long TIMEFRAME = 40;

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

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
  strip.setBrightness(64);
  // Initialize all pixels to 'off'
  strip.show();
}

// Sensor reading when there is no tilt on the accelerometer.
const int NO_TILT = 5000;

// Same as the built in map function but for floats
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// Returns the color from the palette. Return black if pixelindex is -1.
uint32_t lookupColor(int pixelIndex) {
  if (pixelIndex < 0 || pixelIndex >= IMAGE_SIZE) {
    rgb = {0, 0, 0};
  } else {
    int colorIndex = pgm_read_byte_near(PIXELS + pixelIndex);
    memcpy_PF(&rgb, (uint_farptr_t) &PALETTE[colorIndex], sizeof(RGB));
  }

  if (rgb.r + rgb.g + rgb.b < 40) {
    rgb = {0, 0, 0};
  }

  return strip.Color(rgb.r, rgb.g, rgb.b);
}

// Lookup the pixel's color for the timer based interface.
uint32_t timerColorLookup(int led, int frame) {
  if (frame > IMAGE_WIDTH) {
    return lookupColor(-1);
  }
  int pixelIndex = frame + led * IMAGE_WIDTH;
  return lookupColor(pixelIndex);
}

// Lookup the pixel's color for the tilt based interface.
uint32_t tiltColorLookup(int led, float angle) {
  const float originX = IMAGE_WIDTH / 2;
  const float originY = IMAGE_HEIGHT - 1;

  const float hypotenuse = sqrt(originX*originX +
                                originY*originY);

  int h = mapfloat(led, 0.0, float(LEDS), 0, hypotenuse);

  int deltaX = cos(angle) * h;
  int deltaY = sin(angle) * h;

  int x = int(originX + deltaX);
  int y = int(originY + deltaY);
  int pixelIndex = x + y * IMAGE_WIDTH;
  // If we are out of bounds set color to black
  if (x < 0 || x > IMAGE_WIDTH - 1 || y < 0 || y > IMAGE_HEIGHT - 1) {
    pixelIndex = -1;
  }
  return lookupColor(pixelIndex);
}

// Lookup the pixel's color for the wheel based interface.
uint32_t wheelColorLookup(int led, float angle) {
  int x = int(mapfloat(angle, -PI, PI, 0.0, float(IMAGE_WIDTH-1)));

  int pixelIndex = x + led * IMAGE_WIDTH;
  return lookupColor(pixelIndex);
}

// Last tick for the timer based interface.
unsigned long lastTick = 0;

// The frame (column) being shown for the timer based interface.
int frame = 0;

void loop() {
  /**********************/
  /* Accelerometer code */
  /**********************/

  #ifndef TIMER
  int pulseX = pulseIn(ACCEL_X_PIN, HIGH);
  int pulseY = pulseIn(ACCEL_Y_PIN, HIGH);
  float angle = atan2(pulseX-NO_TILT, pulseY-NO_TILT);
  #endif /* TIMER */

  /******************/
  /* LED strip code */
  /******************/

#ifdef TIMER
  unsigned long time = millis();
  if (time - lastTick > TIMEFRAME) {
    frame++;
    lastTick = time;
  }
#endif /* TIMER */

  for (int led = 0; led < LEDS; led++) {
    uint32_t c;

#ifdef TIMER
    c = timerColorLookup(led, frame);
#endif /* TIMER */

#ifdef TILT
    c = tiltColorLookup(led, angle);
#endif /* TILT */

#ifdef WHEEL
    c = wheelColorLookup(led, angle);
#endif /* WHEEL */

    strip.setPixelColor(led, c);
  }

  strip.show();
}
