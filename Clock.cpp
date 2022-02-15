#include <iostream>
#include "clock.h"

using namespace std;

bool IsValid(int hh, int mm, int ss)
{
    if ((hh >= 1 && hh <= 23) && (mm >= 0 && mm <= 59) && (ss >= 0 && ss <= 59))
        return true;
    else
        return false;
}

bool IsEqual(Clock c1, Clock c2)
{
    if (c1.HH.h == c2.HH.h && c1.MM.m == c2.MM.m && c1.SS.s == c2.SS.s)
        return true;
    else
        return false;
}

Clock MakeClock(int hh, int mm, int ss)
{
    Clock c;
    c.HH.h = hh;
    c.MM.m = mm;
    c.SS.s = ss;
    return c;
}

Hour GetHour(Clock c)
{
    return c.HH;
}

Minute GetMinute(Clock c)
{
    return c.MM;
}

Second GetSecond(Clock c)
{
    return c.SS;
}

void SetHour(Clock c, int newHH)
{
    c.HH.h = newHH;
}

void SetMinute(Clock c, int newMM)
{
    c.MM.m = newMM;
}

void SetSecond(Clock c, int newSS)
{
    c.SS.s = newSS;
}

Clock AddClock(Clock c1, Clock c2)
{
    Clock c3;
    c3.HH.h = c1.HH.h + c2.HH.h;
    c3.MM.m = c1.MM.m + c2.MM.m;
    c3.SS.s = c1.SS.s + c2.SS.s;
    return c3;
}

void PrintClock(Clock c)
{
    if (IsValid(c.HH.h, c.MM.m, c.SS.s) == true)
        cout << c.HH.h << " : " << c.MM.m << " : " << c.SS.s << endl;
    else
        cout << "Invalid Clock\n";
}
