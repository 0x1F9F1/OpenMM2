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

#include "debuglog.h"

void DebugLog(i32 arg1, void const* arg2, i32 arg3, bool arg4)
{
    return stub<cdecl_t<void, i32, void const*, i32, bool>>(0x4C7C70, arg1, arg2, arg3, arg4);
}

void DebugLogInit(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x4C7BF0, arg1);
}

void DebugLogShutdown()
{
    return stub<cdecl_t<void>>(0x4C7C50);
}

define_dummy_symbol(data_debuglog);
