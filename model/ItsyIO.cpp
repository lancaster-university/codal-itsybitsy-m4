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

/**
  * Class definition for MicroBit NEXT IO.
  * Represents a collection of all I/O pins on the device.
  */

#include "CodalConfig.h"
#include "ItsyIO.h"

using namespace codal;

/**
  * Constructor.
  *
  * Create a representation of all given I/O pins on the edge connector
  *
  * Accepts a sequence of unique ID's used to distinguish events raised
  * by MicroBitPin instances on the default EventModel.
  */
ItsyIO::ItsyIO() :
    a0(ID_PIN_A0, PIN_PA02, PIN_CAPABILITY_AD),
    a1(ID_PIN_A1, PIN_PA05, PIN_CAPABILITY_AD),
    a2(ID_PIN_A2, PIN_PB08, PIN_CAPABILITY_AD),
    a3(ID_PIN_A3, PIN_PB09, PIN_CAPABILITY_AD),
    a4(ID_PIN_A4, PIN_PA04, PIN_CAPABILITY_AD),
    a5(ID_PIN_A5, PIN_PA06, PIN_CAPABILITY_AD),

    sck(ID_PIN_SCK, PIN_PA01, PIN_CAPABILITY_DIGITAL),
    mosi(ID_PIN_MOSI, PIN_PA00, PIN_CAPABILITY_DIGITAL),
    miso(ID_PIN_MISO, PIN_PB23, PIN_CAPABILITY_DIGITAL),

    d1(ID_PIN_D1, PIN_PA17, PIN_CAPABILITY_DIGITAL),
    d2(ID_PIN_D2, PIN_PA07, PIN_CAPABILITY_DIGITAL),
    d3(ID_PIN_D3, PIN_PB22, PIN_CAPABILITY_DIGITAL),
    d4(ID_PIN_D4, PIN_PA14, PIN_CAPABILITY_DIGITAL),
    d7(ID_PIN_D7, PIN_PA18, PIN_CAPABILITY_DIGITAL),

    led(ID_PIN_LED, PIN_PA22, PIN_CAPABILITY_DIGITAL),

    sda(ID_PIN_PA12, PIN_PA12, PIN_CAPABILITY_DIGITAL),
    scl(ID_PIN_PA13, PIN_PA13, PIN_CAPABILITY_DIGITAL)
{
}
