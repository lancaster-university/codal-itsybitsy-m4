/*
The MIT License (MIT)

Copyright (c) 2016 Lancaster University, UK.

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

#ifndef MICROBIT_H
#define MICROBIT_H

#include "CodalHeapAllocator.h"
#include "codal-core/inc/types/Event.h"
#include "CodalDevice.h"
#include "ErrorNo.h"
#include "ZTimer.h"
#include "CodalCompat.h"
#include "CodalComponent.h"
#include "CodalDmesg.h"
#include "ManagedType.h"
#include "ManagedString.h"
#include "NotifyEvents.h"

#include "Button.h"
#include "MultiButton.h"
//#include "MbedI2C.h"
//#include "MbedSerial.h"
#include "BrainPadIO.h"
#include "CodalFiber.h"
#include "MessageBus.h"

#include "ZPWM.h"
#include "Synthesizer.h"
#include "Mixer.h"
#include "JackRouter.h"

#include "ZSingleWireSerial.h"

// Status flag values
#define DEVICE_INITIALIZED                    0x01

/**
 * Class definition for a MicroBit device.
 *
 * Represents the device as a whole, and includes member variables that represent various device drivers
 * used to control aspects of the micro:bit.
 */
namespace codal
{
    class BrainPad : public CodalComponent
    {
        public:
            ZTimer         timer;
            MessageBus                  messageBus;
            BrainPadIO                  io;
            //codal::_mbed::I2C           i2c;

            Synthesizer synth0;
            Synthesizer synth1;
            Mixer mixer;
            ZPWM pwm;

            ZSingleWireSerial sws;
            PktSerial pktSerial;
            JackRouter jackRouter;

            Button buttonUp;
            Button buttonDown;
            Button buttonLeft;
            Button buttonRight;

            /**
             * Constructor.
             */
            BrainPad();

            /**
             * Post constructor initialisation method.
             */
            int init();

            /**
             * Delay execution for the given amount of time.
             *
             * If the scheduler is running, this will deschedule the current fiber and perform
             * a power efficient, concurrent sleep operation.
             *
             * If the scheduler is disabled or we're running in an interrupt context, this
             * will revert to a busy wait.
             *
             * Alternatively: wait, wait_ms, wait_us can be used which will perform a blocking sleep
             * operation.
             *
             * @param milliseconds the amount of time, in ms, to wait for. This number cannot be negative.
             *
             */
            void sleep(uint32_t milliseconds);

            /**
             * A periodic callback invoked by the fiber scheduler idle thread.
             * We use this for any low priority, background housekeeping.
             */
            virtual void idleCallback();

            /**
             * Determine the time since this MicroBit was last reset.
             *
             * @return The time since the last reset, in milliseconds.
             *
             * @note This will value overflow after 1.6 months.
             */
            //TODO: handle overflow case.
            unsigned long systemTime();
    };


    /**
     * Delay execution for the given amount of time.
     *
     * If the scheduler is running, this will deschedule the current fiber and perform
     * a power efficient, concurrent sleep operation.
     *
     * If the scheduler is disabled or we're running in an interrupt context, this
     * will revert to a busy wait.
     *
     * Alternatively: wait, wait_ms, wait_us can be used which will perform a blocking sleep
     * operation.
     *
     * @param milliseconds the amount of time, in ms, to wait for. This number cannot be negative.
     *
     * @return MICROBIT_OK on success, MICROBIT_INVALID_PARAMETER milliseconds is less than zero.
     *
     */
    inline void BrainPad::sleep(uint32_t milliseconds)
    {
        fiber_sleep(milliseconds);
    }

    /**
     * Determine the time since this MicroBit was last reset.
     *
     * @return The time since the last reset, in milliseconds.
     *
     * @note This will value overflow after 1.6 months.
     */
    inline unsigned long BrainPad::systemTime()
    {
        return system_timer_current_time();
    }
}

void brainpad_dmesg_flush();

using namespace codal;

#endif
