#ifndef CLOCK_H
#define CLOCK_H

struct Hour
{
    int h;
};

struct Minute
{
    int m;
};

struct Second
{
    int s;
};

struct Clock
{
    Hour HH;
    Minute MM;
    Second SS;
};

bool IsValid(Hour hh, Minute mm, Second ss);
bool ISEqual(Clock c1, Clock c2);

Clock MakeClock(int hh, int mm, int ss);
Clock AddClock(Clock c1, Clock c2);

Hour GetHour(Clock c);
Minute GetMinute(Clock c);
Second GetSecond(Clock c);

void SetHour(Clock c, Hour newHH);
void SetMinute(Clock c, Minute newMM);
void SetSecond(Clock c, Second newSS);

void PrintClock(Clock c);

#endif