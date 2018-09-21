#include "sam.h"
#include "codal_target_hal.h"
#include "CodalDmesg.h"


extern "C" {
#include "clocks.h"
}

void target_init();

extern "C" void cpu_init()
{
    //SystemCoreClockUpdate();

    clock_init();

    target_init();

    // TODO

}
