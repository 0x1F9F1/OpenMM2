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

#pragma once

/*
    data:memory

    0x5CE81C | void (__cdecl* datDisplayUsed)(char const *) | ?datDisplayUsed@@3P6AXPBD@ZA
    0x6A3C34 | int datCurrentMemoryAlign | ?datCurrentMemoryAlign@@3HA
    0x6A3C38 | int datCurrentMemoryBucket | ?datCurrentMemoryBucket@@3HA
*/

#include "hooking.h"

inline_var(0x5CE81C, void(*)(char const *), datDisplayUsed);

inline_var(0x6A3C34, int, datCurrentMemoryAlign);
inline_var(0x6A3C38, int, datCurrentMemoryBucket);
