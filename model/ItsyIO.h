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
#define ID_PIN_A0           (DEVICE_ID_IO_P0 + 0)
#define ID_PIN_A1           (DEVICE_ID_IO_P0 + 1)
#define ID_PIN_A2           (DEVICE_ID_IO_P0 + 2)
#define ID_PIN_A3           (DEVICE_ID_IO_P0 + 3)
#define ID_PIN_A4           (DEVICE_ID_IO_P0 + 4)
#define ID_PIN_A5           (DEVICE_ID_IO_P0 + 5)
#define ID_PIN_SCK           (DEVICE_ID_IO_P0 + 6)
#define ID_PIN_MOSI          (DEVICE_ID_IO_P0 + 7)
#define ID_PIN_MISO          (DEVICE_ID_IO_P0 + 8)
#define ID_PIN_LED          (DEVICE_ID_IO_P0 + 9)
#define ID_PIN_D1          (DEVICE_ID_IO_P0 + 16)
#define ID_PIN_D2          (DEVICE_ID_IO_P0 + 12)
#define ID_PIN_D3          (DEVICE_ID_IO_P0 + 13)
#define ID_PIN_D4          (DEVICE_ID_IO_P0 + 14)
#define ID_PIN_D5          (DEVICE_ID_IO_P0 + 15)
#define ID_PIN_D7          (DEVICE_ID_IO_P0 + 16)

#define ID_PIN_PA12          (DEVICE_ID_IO_P0 + 17)
#define ID_PIN_PA13          (DEVICE_ID_IO_P0 + 18)

namespace codal
{
    /**
     * Represents a collection of all I/O pins exposed by the device.
     */
    class ItsyIO
    {
        public:
            ZPin        a0, a1, a2, a3, a4, a5;
            ZPin        sck, mosi, miso;
            ZPin        d1, d2, d3, d4, d7;
            ZPin        led;
            ZPin        sda, scl;

            /**
             * Constructor.
             */
            ItsyIO();
    };
}

#endif
