#ifndef STEPPER_MOTOR_H
#define STEPPER_MOTOR_H

#include <AccelStepper.h>

#define DIR_PIN         8
#define STEP_PIN        9
#define ENABLE_PIN      10

#define STEPS_PER_REV   200 //nema
#define MICROSTEPPING   16 // driver
#define PITCH           (47.14 * 2)
#define STEPS_PER_MM    (STEPS_PER_REV * MICROSTEPPING / PITCH)

class StepperMotor {
    private:
        AccelStepper stepper;
        uint8_t enablePin;

    public:
        StepperMotor(uint8_t stepPin, uint8_t dirPin, uint8_t enablePin);
        void begin(float maxSpeed = 500, float acceleration = 3000);
        void moveDistance(float distanceMM);
        void enable();
        void disable();
};

#endif