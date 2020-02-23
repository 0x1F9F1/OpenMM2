/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    data:debuglog

    0x4C7BF0 | void __cdecl DebugLogInit(bool) | ?DebugLogInit@@YAX_N@Z
    0x4C7C50 | void __cdecl DebugLogShutdown(void) | ?DebugLogShutdown@@YAXXZ
    0x4C7C70 | void __cdecl DebugLog(int,void const *,int,bool) | ?DebugLog@@YAXHPBXH_N@Z
*/

// 0x4C7BF0 | ?DebugLogInit@@YAX_N@Z
inline void DebugLogInit(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x4C7BF0, arg1);
}

// 0x4C7C50 | ?DebugLogShutdown@@YAXXZ
inline void DebugLogShutdown()
{
    return stub<cdecl_t<void>>(0x4C7C50);
}

// 0x4C7C70 | ?DebugLog@@YAXHPBXH_N@Z
inline void DebugLog(i32 arg1, void const* arg2, i32 arg3, bool arg4)
{
    return stub<cdecl_t<void, i32, void const*, i32, bool>>(0x4C7C70, arg1, arg2, arg3, arg4);
}
