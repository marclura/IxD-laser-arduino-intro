#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel pixels(120, 6, NEO_GRBW + NEO_KHZ800);


void setup() {

  pixels.begin();

  for(int i=0; i<120; i++) {

    pixels.setPixelColor( i , pixels.Color(0, 200, 0, 0) );

    pixels.show();

    delay(50);

  }

  
}

void loop() {

}
