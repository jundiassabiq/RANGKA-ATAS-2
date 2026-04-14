#include "StepperMotor.h"

StepperMotor::StepperMotor(uint8_t stepPin, uint8_t dirPin, uint8_t enablePin)
    : stepper(AccelStepper::DRIVER, stepPin, dirPin),
      enablePin(enablePin) {}

void StepperMotor::begin(float maxSpeed, float acceleration) {

    pinMode(enablePin, OUTPUT);

    disable(); //mati default

    stepper.setMaxSpeed(maxSpeed);

    stepper.setAcceleration(acceleration);
}

void StepperMotor::moveDistance(float distanceMM) {

    long steps = (long)(distanceMM * STEPS_PER_MM);

    enable();

    stepper.moveTo(stepper.currentPosition() + steps);
    
    while (stepper.distanceToGo() != 0) {
        stepper.run();
    }

    disable();
}

void StepperMotor::enable() {
    digitalWrite(enablePin, LOW);
}

void StepperMotor::disable() {
    digitalWrite(enablePin, HIGH);
}