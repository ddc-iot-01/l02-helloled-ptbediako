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

const int YELOLED = D1;
const int LEDDELAY = 1000;
int i;

void setup() {
  pinMode(YELOLED, OUTPUT);
  i = 100;
}


void loop() {
 digitalWrite(YELOLED, HIGH);
 delay(LEDDELAY);
 digitalWrite(YELOLED, LOW);
 delay(LEDDELAY+i);
 i = i + 100;
}
