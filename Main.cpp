#include "clock.h"

int main()
{
    Clock c1 = MakeClock(2, 30, 4);
    Clock c2 = MakeClock(6, 0, 0);
    Clock c3 = AddClock(c1, c2);

    PrintClock(c1);
    PrintClock(c2);
    PrintClock(c3);

    return 0;
}