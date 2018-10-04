#include "sam.h"
#include "codal_target_hal.h"
#include "CodalDmesg.h"


extern "C" {
#include "samd/clocks.h"
#include "samd/cache.h"
}

void target_init();

extern "C" void cpu_init()
{
    //SystemCoreClockUpdate();

    clock_init();

    samd_peripherals_enable_cache();

    target_init();

    // TODO

}
