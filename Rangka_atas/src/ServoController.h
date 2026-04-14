#ifndef SERVO_CONTROLLER_H
#define SERVO_CONTROLLER_H

#include <Servo.h>

#define PIN_SERVO       7

#define SERVO_INIT_POS  45  //awal
#define SERVO_UP_POS    135 //akhir
#define SERVO_DELAY_MS  15 //delay

class ServoController {
    private:
        Servo servo;
        uint8_t pin;
        int currentPos;

    public:
        ServoController(uint8_t pin);
        void begin();
        void naik();   // 135 -> 45
        void turun();  // 45 ->135
};

#endif