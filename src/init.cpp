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

    // Disable automatic flash writes - we don't want code accidently writing to flash
    // This should be default, but better safe than sorry.
    NVMCTRL->CTRLA.bit.WMODE = NVMCTRL_CTRLA_WMODE_MAN;
}
