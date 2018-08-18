#include "BrainPad.h"

BrainPad bp;

int main()
{
    bp.init();

    int state = 0;

    while(1)
    {
        bp.io.ledRed.setDigitalValue(state);
        fiber_sleep(1000);
        state = !state;
    }
}
