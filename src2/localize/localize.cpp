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

#include "localize.h"

struct LocString* AngelReadString(u32 arg1)
{
    return stub<cdecl_t<struct LocString*, u32>>(0x534790, arg1);
}

char* GetLocTime(f32 arg1)
{
    return stub<cdecl_t<char*, f32>>(0x534600, arg1);
}

i32 __stdcall MyLoadStringA(struct HINSTANCE__* arg1, u32 arg2, char* arg3, i32 arg4)
{
    return stub<stdcall_t<i32, struct HINSTANCE__*, u32, char*, i32>>(0x5346B0, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(localize_localize);
