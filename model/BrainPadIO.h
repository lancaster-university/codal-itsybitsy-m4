/*
The MIT License (MIT)

Copyright (c) 2017 Lancaster University.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#ifndef MICROBIT_IO_H
#define MICROBIT_IO_H

#include "CodalConfig.h"
#include "ZPin.h"

//
// Unique Pin number for each pin (synonymous with mbedos PinName)
//


//
// Component IDs for each pin.
// The can be user defined, but uniquely identify a pin when using the eventing APIs/
//
#define ID_PIN_P0           (DEVICE_ID_IO_P0 + 0)
#define ID_PIN_P1           (DEVICE_ID_IO_P0 + 1)
#define ID_PIN_P2           (DEVICE_ID_IO_P0 + 2)
#define ID_PIN_P3           (DEVICE_ID_IO_P0 + 3)
#define ID_PIN_P4           (DEVICE_ID_IO_P0 + 4)
#define ID_PIN_P5           (DEVICE_ID_IO_P0 + 5)
#define ID_PIN_P6           (DEVICE_ID_IO_P0 + 6)
#define ID_PIN_P7           (DEVICE_ID_IO_P0 + 7)
#define ID_PIN_LED_GREEN    (DEVICE_ID_IO_P0 + 8)
#define ID_PIN_SCL          (DEVICE_ID_IO_P0 + 9)
#define ID_PIN_SDA          (DEVICE_ID_IO_P0 + 10)
#define ID_PIN_P11          (DEVICE_ID_IO_P0 + 11)
#define ID_PIN_P12          (DEVICE_ID_IO_P0 + 12)
#define ID_PIN_P13          (DEVICE_ID_IO_P0 + 13)
#define ID_PIN_P14          (DEVICE_ID_IO_P0 + 14)
#define ID_PIN_LED_RED      (DEVICE_ID_IO_P0 + 15)
#define ID_PIN_LED_BLUE     (DEVICE_ID_IO_P0 + 16)
#define ID_PIN_BUZZER       (DEVICE_ID_IO_P0 + 17)
#define ID_PIN_P18          (DEVICE_ID_IO_P0 + 18)
#define ID_PIN_P19          (DEVICE_ID_IO_P0 + 19)
#define ID_PIN_P20          (DEVICE_ID_IO_P0 + 20)
#define ID_PIN_P21          (DEVICE_ID_IO_P0 + 21)
#define ID_PIN_P22          (DEVICE_ID_IO_P0 + 22)
#define ID_PIN_P23          (DEVICE_ID_IO_P0 + 23)
#define ID_PIN_P24          (DEVICE_ID_IO_P0 + 24)
#define ID_PIN_SERVO_ONE    (DEVICE_ID_IO_P0 + 25)
#define ID_PIN_SERVO_TWO    (DEVICE_ID_IO_P0 + 26)
#define ID_PIN_INT          (DEVICE_ID_IO_P0 + 27)
#define ID_PIN_BUTTON_UP    (DEVICE_ID_IO_P0 + 28)
#define ID_PIN_BUTTON_DOWN  (DEVICE_ID_IO_P0 + 29)
#define ID_PIN_BUTTON_LEFT  (DEVICE_ID_IO_P0 + 30)
#define ID_PIN_BUTTON_RIGHT (DEVICE_ID_IO_P0 + 31)
#define ID_PIN_TEMP_SENSOR  (DEVICE_ID_IO_P0 + 32)
#define ID_PIN_LIGHT_SENSOR (DEVICE_ID_IO_P0 + 33)
#define ID_PIN_SERIAL_RX    (DEVICE_ID_IO_P0 + 34)
#define ID_PIN_SERIAL_TX    (DEVICE_ID_IO_P0 + 35)

namespace codal
{
    /**
     * Represents a collection of all I/O pins exposed by the device.
     */
    class BrainPadIO
    {
        public:

            ZPin        scl;
            ZPin        sda;
            ZPin        buttonUp;
            ZPin        buttonDown;
            ZPin        buttonLeft;
            ZPin        buttonRight;
            ZPin        ledGreen;
            ZPin        ledBlue;
            ZPin        ledRed;
            ZPin        buzzer;
            ZPin        interrupt;
            ZPin        servoOne;
            ZPin        servoTwo;

            ZPin        snd;
            ZPin        hpEn;
            ZPin        bzEn;
            ZPin        tx;
            ZPin        pwrEn;
            ZPin        tip;
            ZPin        sense;

            /**
             * Constructor.
             */
            BrainPadIO();
    };
}

#endif
