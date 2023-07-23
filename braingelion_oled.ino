/*
  // ---------------------------------------------------------------
    https://github.com/Babel-Infoc/braingelion_oled
    Oled sketch for the RP2040 Braingelion devboard
    Written by Tully Jagoe for Izzy Voodoo, using libraries from Arduino and Adafruit

    Duplicate blank.h to create new animations
    Braingelion RP2040 can hold about 1 minute total of animations at 30fps, 2 minutes at 15fps
  // ---------------------------------------------------------------
*/

//Core library dependancies
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "boot.h"

// Include the animation files
#include "rose.h"
#include "skull.h"
#include "machine_world.h"
#include "robo_girl.h"
#include "window.h"
#include "wicked_lady.h"
#include "neo.h"

// Adjust this value to control animation speed (66ms=15fps)
const int frameDelay = 66; 

// Oled setup
#define SSD1306_NO_SPLASH
#define SCREEN_WIDTH  128
#define SCREEN_HEIGHT 64
#define OLED_MOSI   1
#define OLED_CLK    0
#define OLED_DC     3
#define OLED_CS     4
#define OLED_RESET  2
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);


// Boot sequence and function calls
void setup() {
  display.begin(SSD1306_SWITCHCAPVCC);
  display.clearDisplay();
  display.drawBitmap(0, 0, boot, 128, 64, WHITE);
  display.display();
  delay(5000);
}

// The goods
void loop() {

  for (int j = 0; j < rosePlayCount; j++) {
    for (int i = 0; i < rose_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, rose_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }

  for (int j = 0; j < skullPlayCount; j++) {
    for (int i = 0; i < skull_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, skull_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }

  for (int j = 0; j < machine_worldPlayCount; j++) {
    for (int i = 0; i < machine_world_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, machine_world_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }

  for (int j = 0; j < robo_girlPlayCount; j++) {
    for (int i = 0; i < robo_girl_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, robo_girl_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }

  for (int j = 0; j < windowPlayCount; j++) {
    for (int i = 0; i < window_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, window_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }

  for (int j = 0; j < wicked_ladyPlayCount; j++) {
    for (int i = 0; i < wicked_lady_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, wicked_lady_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }

  for (int j = 0; j < neoPlayCount; j++) {
    for (int i = 0; i < neo_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, neo_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }
}