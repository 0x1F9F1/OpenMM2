/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "timer.h"

#include "minwin.h"

#include <timeapi.h>
#pragma comment(lib, "winmm.lib")

inline extern_var(0x6A3D08, int, dword_6A3D08);

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

        QuickTicksToMilliseconds =
            (static_cast<float>(counterEnd.QuadPart) - static_cast<float>(counterStart.QuadPart)) /
            static_cast<float>(frequency.QuadPart) * 1000.0f / static_cast<float>(GetTickCount() - tickCount);

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
