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

#include "timemgr.h"

void datTimeManager::FixedFrame(f32 arg1, u32 arg2)
{
    return stub<cdecl_t<void, f32, u32>>(0x4C65D0, arg1, arg2);
}

void datTimeManager::RealTime(f32 arg1)
{
    return stub<cdecl_t<void, f32>>(0x4C6580, arg1);
}

void datTimeManager::Reset()
{
    return stub<cdecl_t<void>>(0x4C6300);
}

void datTimeManager::SetTempOverSampling(bool arg1, i32 arg2)
{
    return stub<cdecl_t<void, bool, i32>>(0x4C64F0, arg1, arg2);
}

void datTimeManager::Update()
{
    return stub<cdecl_t<void>>(0x4C6340);
}

define_dummy_symbol(data_timemgr);
