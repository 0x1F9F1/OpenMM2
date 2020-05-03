/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

Timer::Timer()
{
    unimplemented();
}

void Timer::BeginBenchmark()
{
    return stub<cdecl_t<void>>(0x4C7980);
}

void Timer::EndBenchmark()
{
    return stub<cdecl_t<void>>(0x4C79F0);
}

u32 Timer::QuickTicks()
{
    return stub<cdecl_t<u32>>(0x4C7810);
}

u32 Timer::Ticks()
{
    return stub<cdecl_t<u32>>(0x4C77E0);
}

define_dummy_symbol(data_timer);
