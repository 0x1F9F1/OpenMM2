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

#include "winpriv.h"

winDispatchable::winDispatchable(u32 arg1)
{
    unimplemented();
}

winDispatchable::~winDispatchable()
{
    unimplemented();
}

i32 winDispatchable::WindowProc(struct HWND__* arg1, u32 arg2, u32 arg3, i32 arg4)
{
    return stub<thiscall_t<i32, winDispatchable*, struct HWND__*, u32, u32, i32>>(0x0, this, arg1, arg2, arg3, arg4);
}

i32 __stdcall InputWindowProc(struct HWND__* arg1, u32 arg2, u32 arg3, i32 arg4)
{
    return stub<stdcall_t<i32, struct HWND__*, u32, u32, i32>>(0x4BAD20, arg1, arg2, arg3, arg4);
}

void diInit()
{
    return stub<cdecl_t<void>>(0x4BB1A0);
}

define_dummy_symbol(input_winpriv);
