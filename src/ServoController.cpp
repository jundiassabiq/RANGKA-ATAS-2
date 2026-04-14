#include "ServoController.h"
#include <Arduino.h>

ServoController::ServoController(uint8_t pin)
    :   pin(pin), currentPos(SERVO_INIT_POS) {}

void ServoController::begin() {
    servo.attach(pin);
    servo.write(SERVO_INIT_POS);
}

void ServoController::naik() {
    for (currentPos = SERVO_UP_POS; currentPos >= SERVO_INIT_POS; currentPos--) { 
        servo.write(currentPos);
        delay(SERVO_DELAY_MS);
    }
}

void ServoController::turun() {
    for (currentPos = SERVO_INIT_POS; currentPos <= SERVO_UP_POS; currentPos++) {
        servo.write(currentPos);
        delay(SERVO_DELAY_MS);
    }
}