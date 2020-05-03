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

#include "progress.h"

void lvlProgress::BeginTask(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x462E30, arg1);
}

void lvlProgress::EndTask()
{
    return stub<cdecl_t<void>>(0x463000);
}

f32 lvlProgress::GetPercent()
{
    return stub<cdecl_t<f32>>(0x462FD0);
}

f32 lvlProgress::PopSubTask()
{
    return stub<cdecl_t<f32>>(0x462FB0);
}

void lvlProgress::PushSubTask(f32 arg1, char* arg2)
{
    return stub<cdecl_t<void, f32, char*>>(0x462F00, arg1, arg2);
}

void lvlProgress::PushSubTask(f32 arg1, f32 arg2, char* arg3)
{
    return stub<cdecl_t<void, f32, f32, char*>>(0x462F40, arg1, arg2, arg3);
}

void lvlProgress::SetCallback(void (*arg1)(char const*, i32))
{
    return stub<cdecl_t<void, void (*)(char const*, i32)>>(0x463020, arg1);
}

void lvlProgress::UpdateTask(f32 arg1, bool arg2)
{
    return stub<cdecl_t<void, f32, bool>>(0x462E80, arg1, arg2);
}

define_dummy_symbol(level_progress);
