/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

/*Assignment: Using FOR Loops, have the LEDs follow
a Triangle Wave function from off to full
brightness and back to off with a period
of 10 seconds.
EXTRA CREDIT: add a second LED,
have it followed an inverted triangle (full
on to off) simulanteously as the first LED
goes from off to full brightness.*/

const int YELOLED = D1;
const int BLULED = D13;
const int LEDDELAY = 9; //reach 255 + 1 delay = 256 steps, done in 5 seconds each direction//
int j;


void setup() {
  pinMode (YELOLED, OUTPUT);
  pinMode(BLULED, OUTPUT);
}


void loop() {
  for (j=0; j<= 255; j++) {
    analogWrite(YELOLED, j);
    delay(LEDDELAY);
    analogWrite(BLULED, 255-j);
    delay(LEDDELAY);
  }
  for(j=255; j>= 0; j--) {
    analogWrite(YELOLED, j);
    delay(LEDDELAY);
    analogWrite(BLULED, 255-j);
    delay(LEDDELAY);
  }
}

