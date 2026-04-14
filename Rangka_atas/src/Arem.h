#ifndef AREM_H
#define AREM_H

#include "StepperMotor.h"
#include "ServoController.h"

#define JARAK 100.0f  // mm

class Robot {
    private:
        StepperMotor motor;
        ServoController servo;
        
    public:
        Robot();
        void begin();
        void maju();
        void mundur();
        void angkat();   
        void turunkan(); 
};

#endif