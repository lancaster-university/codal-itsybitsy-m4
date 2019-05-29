#include "Itsy.h"

Itsy bp;

int main()
{
    bp.init();

    int state = 0;

    while(1)
    {
        bp.io.led.setDigitalValue(state);
        fiber_sleep(1000);
        state = !state;
    }
}
