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

#pragma once

/*
    data:stack

    0x4C7120 | public: static char const * __cdecl datStack::GetTimestamp(void) | ?GetTimestamp@datStack@@SAPBDXZ
    0x4C7470 | public: static void __cdecl datStack::LookupAddress(char *,int) | ?LookupAddress@datStack@@SAXPADH@Z
    0x4C74F0 | public: static void __cdecl datStack::DoTraceback(int,int *,struct _iobuf *,char const *) | ?DoTraceback@datStack@@SAXHPAHPAU_iobuf@@PBD@Z
    0x4C75C0 | public: static void __cdecl datStack::Traceback(int,struct _iobuf *) | ?Traceback@datStack@@SAXHPAU_iobuf@@@Z
    0x4C75F0 | public: static int __cdecl datStack::LogTraceback(int *,int) | ?LogTraceback@datStack@@SAHPAHH@Z
    0x4C76B0 | public: static void __cdecl datStack::DumpTraceback(int *,int,struct _iobuf *) | ?DumpTraceback@datStack@@SAXPAHHPAU_iobuf@@@Z
    0x4C7720 | public: static int __cdecl datStack::ExceptionFilter(struct _EXCEPTION_POINTERS *) | ?ExceptionFilter@datStack@@SAHPAU_EXCEPTION_POINTERS@@@Z
    0x4C77C0 | bool __cdecl IsOnStack(void *) | ?IsOnStack@@YA_NPAX@Z
*/

struct datStack
{
public:
    // 0x4C74F0 | ?DoTraceback@datStack@@SAXHPAHPAU_iobuf@@PBD@Z
    static void DoTraceback(i32 arg1, i32* arg2, struct _iobuf* arg3, char const* arg4);

    // 0x4C76B0 | ?DumpTraceback@datStack@@SAXPAHHPAU_iobuf@@@Z
    static void DumpTraceback(i32* arg1, i32 arg2, struct _iobuf* arg3);

    // 0x4C7720 | ?ExceptionFilter@datStack@@SAHPAU_EXCEPTION_POINTERS@@@Z
    static i32 ExceptionFilter(struct _EXCEPTION_POINTERS* arg1);

    // 0x4C7120 | ?GetTimestamp@datStack@@SAPBDXZ
    static char const* GetTimestamp();

    // 0x4C75F0 | ?LogTraceback@datStack@@SAHPAHH@Z
    static i32 LogTraceback(i32* arg1, i32 arg2);

    // 0x4C7470 | ?LookupAddress@datStack@@SAXPADH@Z
    static void LookupAddress(char* arg1, i32 arg2);

    // 0x4C75C0 | ?Traceback@datStack@@SAXHPAU_iobuf@@@Z
    static void Traceback(i32 arg1, struct _iobuf* arg2);
};

// 0x4C77C0 | ?IsOnStack@@YA_NPAX@Z
bool IsOnStack(void* arg1);
