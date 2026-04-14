#include "Arem.h"

Robot::Robot()
    : motor(STEP_PIN, DIR_PIN, ENABLE_PIN),
      servo(PIN_SERVO) {}

void Robot::begin() {
    motor.begin();
    servo.begin();
}

void Robot::maju() {
    motor.moveDistance(JARAK);
}

void Robot::mundur() {
    motor.moveDistance(-JARAK);
}

void Robot::angkat() {
    servo.naik();
}

void Robot::turunkan() {
    servo.turun();
}   