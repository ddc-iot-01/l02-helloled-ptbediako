/* 
 * Project helloLEDanalog
 * Author: Phylicia Bediako
 * Date: June 11, 2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

const int YELOLED = D1; //pick a PWM capable pin on the photon2, like D1//
const int LEDDELAY = 5000; //duration/"duty cycle" of pulse (5 seconds) in milliseconds//

void setup() {
  pinMode(YELOLED, OUTPUT);
}


void loop() {
  analogWrite(YELOLED, 255); //2.88V
  delay(LEDDELAY);
  analogWrite(YELOLED, 63); //0.70V
  delay(LEDDELAY);
  analogWrite(YELOLED,171); //1.93V
  delay(LEDDELAY);
  analogWrite(YELOLED,16); //0.17V
  delay(LEDDELAY);
}
