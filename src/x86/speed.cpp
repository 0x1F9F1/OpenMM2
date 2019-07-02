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

#include "speed.h"

#ifdef DETECT_CPU_SPEED
#    include "minwin.h"

unsigned int __ComputeCpuSpeed()
{
    DWORD64 cycleStart = __rdtsc();
    DWORD64 timeStart = GetTickCount64();

    Sleep(100);

    DWORD64 cycleDelta = __rdtsc() - cycleStart;
    DWORD64 timeDelta = GetTickCount64() - timeStart;

    return (unsigned int) ((cycleDelta + timeDelta * 500) / (timeDelta * 1000));
}
#endif

unsigned int ComputeCpuSpeed()
{
#ifdef DETECT_CPU_SPEED
    unsigned int speed0 = __ComputeCpuSpeed();
    unsigned int speed1 = __ComputeCpuSpeed();
    unsigned int speed2 = __ComputeCpuSpeed();

    return (speed0 + speed1 + speed2) / 3;
#else
    return 0x1000;
#endif
}
