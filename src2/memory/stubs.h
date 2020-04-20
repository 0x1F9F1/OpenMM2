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
    memory:stubs

    0x577360 | void * __cdecl operator new(unsigned int) | ??2@YAPAXI@Z
    0x577380 | void __cdecl operator delete(void *) | ??3@YAXPAX@Z
    0x5773A0 | void * __cdecl operator new[](unsigned int) | ??_U@YAPAXI@Z
    0x5773C0 | void __cdecl operator delete[](void *) | ??_V@YAXPAX@Z
*/

// 0x577360 | ??2@YAPAXI@Z
inline void* operator new(uint32_t arg1)
{
    return stub<cdecl_t<void*, uint32_t>>(0x577360, arg1);
}

// 0x577380 | ??3@YAXPAX@Z
inline void operator delete(void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x577380, arg1);
}

// 0x5773A0 | ??_U@YAPAXI@Z
inline void* operator new[](uint32_t arg1)
{
    return stub<cdecl_t<void*, uint32_t>>(0x5773A0, arg1);
}

// 0x5773C0 | ??_V@YAXPAX@Z
inline void operator delete[](void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x5773C0, arg1);
}
