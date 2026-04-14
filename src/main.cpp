#include "Arem.h"

Robot robot;

void setup() {
    robot.begin();
}

void loop() {
    robot.maju();
    delay(500);

    robot.angkat();
    delay(500);

    robot.turunkan();
    delay(500);

    robot.mundur();
    delay(1000);
}