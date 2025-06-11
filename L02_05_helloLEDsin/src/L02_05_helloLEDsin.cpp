/* 
 * Project L02_05_helloLEDsin
 * Author: Phylicia Bediako
 * Date: June 11, 2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
#include "math.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

const int YELOLED = D1;
float t, brightness, a, b;


void setup() {
  pinMode(YELOLED, OUTPUT);
  a=127.5;
  b=127.5;
}

void loop() {
  t = millis()/1000.0;
  brightness = a * sin(2*M_PI*(1/5.0)*t) + b; //don't forget the decimal on 5 -> 5.0 to make it a float//
  analogWrite(YELOLED, brightness);
}
