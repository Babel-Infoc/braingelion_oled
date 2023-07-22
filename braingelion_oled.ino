#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Include the animation files,
// playcount defines the numer of times an animation will loop for
#include "rose.h"
const int rosePlayCount = 1;

#include "skull.h"
const int skullPlayCount = 1;

#include "machine_world.h"
const int machine_worldPlayCount = 1;

#include "robo_girl.h"
const int robo_girlPlayCount = 1;

#include "window.h"
const int windowPlayCount = 1;

#include "wicked_lady.h"
const int wicked_ladyPlayCount = 1;

#include "neo.h"
const int neoPlayCount = 1;

// Adjust this value to control animation speed (66ms=15fps)
const int frameDelay = 66; 

// Oled setup
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
  display.setRotation(0); // Set the display rotation
  display.display(); // Clear the buffer
  delay(1000); // Pause for 2 seconds (optional)
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