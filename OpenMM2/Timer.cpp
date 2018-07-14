#include "stdafx.h"
#include "Timer.h"

Timer::Timer()
    : StartTime(0)
{
    stub<thiscall_t<void, Timer>>(0x4C7840, this);
}

uint32_t Timer::Elapsed()
{
    return Ticks() - StartTime;
}

double Timer::ElapsedSeconds()
{
    return Elapsed() * TicksToSeconds;
}

double Timer::ElapsedMilliseconds()
{
    return Elapsed() * TicksToMilliseconds;
}

uint32_t Timer::Ticks(void)
{
    return stub<cdecl_t<uint32_t>>(0x4C77E0);
}

defnvar(0x6A3D00, Timer::TicksToSeconds);
defnvar(0x6A3D04, Timer::TicksToMilliseconds);