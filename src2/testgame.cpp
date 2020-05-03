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

#include "testgame.h"

void ArchInit(i32 arg1, char** arg2)
{
    return stub<cdecl_t<void, i32, char**>>(0x402340, arg1, arg2);
}

i32 ExceptMain()
{
    return stub<cdecl_t<i32>>(0x4022B0);
}

i32 Main()
{
    return stub<cdecl_t<i32>>(0x4011E0);
}

void ProgressCB(char const* arg1, i32 arg2)
{
    return stub<cdecl_t<void, char const*, i32>>(0x4010F0, arg1, arg2);
}

void ProgressRect(i32 arg1, i32 arg2, i32 arg3, i32 arg4, u32 arg5)
{
    return stub<cdecl_t<void, i32, i32, i32, i32, u32>>(0x401010, arg1, arg2, arg3, arg4, arg5);
}

void ageProcessEvents()
{
    return stub<cdecl_t<void>>(0x402350);
}

define_dummy_symbol(testgame);
