#include "Itsy.h"

Itsy bitsySpider;

int main()
{
    bitsySpider.init();

    int state = 0;

    while(1)
    {
        bitsySpider.io.led.setDigitalValue(state);
        fiber_sleep(1000);
        state = !state;
    }
}
