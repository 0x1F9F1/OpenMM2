#include "stdafx.h"
#include "Timer.h"

#include <timeapi.h>
#pragma comment(lib, "winmm.lib")

static_var(0x6A3D08, int, dword_6A3D08);

Timer::Timer()
{
    LARGE_INTEGER frequency;
    if (TicksToSeconds == 0.0)
    {
        dword_6A3D08 = QueryPerformanceFrequency(&frequency) + 1;

        if (dword_6A3D08 == 1)
        {
            TicksToSeconds = 0.001f;
        }
        else
        {
            TicksToSeconds = 1.0f / frequency.QuadPart;
        }

        TicksToMilliseconds = TicksToSeconds * 1000.0f;

        LARGE_INTEGER counterStart;
        QueryPerformanceCounter(&counterStart);

        int tickCount = GetTickCount();
        Sleep(100);

        LARGE_INTEGER counterEnd;
        QueryPerformanceCounter(&counterEnd);

        QuickTicksToMilliseconds = (static_cast<float>(counterEnd.QuadPart) - static_cast<float>(counterStart.QuadPart))
            / static_cast<float>(frequency.QuadPart)
            * 1000.0f
            / static_cast<float>(GetTickCount() - tickCount);

        CpuSpeed = 0.001f / QuickTicksToMilliseconds;
    }

    StartTime = Ticks();
}

void Timer::Reset()
{
    StartTime = Ticks();
}

uint32_t Timer::Elapsed() const
{
    return Ticks() - StartTime;
}

float Timer::ElapsedSeconds() const
{
    return Elapsed() * TicksToSeconds;
}

float Timer::ElapsedMilliseconds() const
{
    return Elapsed() * TicksToMilliseconds;
}

uint32_t Timer::Ticks(void)
{
    if (dword_6A3D08 == 1)
    {
        return timeGetTime();
    }

    LARGE_INTEGER counter;
    QueryPerformanceCounter(&counter);
    return counter.LowPart;
}