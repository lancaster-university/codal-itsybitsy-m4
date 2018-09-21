#include "sam.h"
#include "codal_target_hal.h"
#include "CodalDmesg.h"

void target_init();

extern "C" void cpu_init()
{
    //SystemCoreClockUpdate();

    target_init();
    // TODO

}
