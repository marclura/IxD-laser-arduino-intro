#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel pixels(120, 6, NEO_GRBW + NEO_KHZ800);

int pot = 0;    // potenziometro
int luce = 0;   // sensore luce

void setup() {

  pixels.begin();

}

void loop() {

  pot = analogRead(A0); // leggere potenziometro

  pot = map(pot, 0, 700, 0, 120);   // numero di pixels (0 ... 120)


  luce = analogRead(A2);

  luce = map(luce, 0, 700, 0, 255);   // colore (0 ... 255)


  pixels.clear();

  for(int i=120; i > pot; i--) {
    pixels.setPixelColor(i, pixels.Color(luce, 0, 255 - luce, 0) );
    pixels.setPixelColor(120 - i, pixels.Color(luce, 0, 255 - luce, 0) );
  }

  pixels.show();

}
