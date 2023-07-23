# Braingelion_oled
 Oled sketch for the RP2040 for Izzy Voodoo
 Written by Tully Jagoe using libraries from Arduino and Adafruit
 Duplicate blank.h to create new animations
 Braingelion RP2040 can hold about 1 minute total of animations at 30fps, 2 minutes at 15fps

// ---------------------------------------------------------------

 Board descriptions:
 Arduino Mbed OS RP2040 

 Code libraries:
 Adafruit_GFX.h
 Adafruit_SSD1306.h

// ---------------------------------------------------------------

Known issues:
Due to a compatibility issue between Adafruit_SSD1306 and RP2040, 
make sure you are using Adafruit_SSD1306 version 2.5.7
(maybe Adafruit will fix this in a later version idk)