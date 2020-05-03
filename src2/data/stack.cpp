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

#include "stack.h"

void datStack::DoTraceback(i32 arg1, i32* arg2, struct _iobuf* arg3, char const* arg4)
{
    return stub<cdecl_t<void, i32, i32*, struct _iobuf*, char const*>>(0x4C74F0, arg1, arg2, arg3, arg4);
}

void datStack::DumpTraceback(i32* arg1, i32 arg2, struct _iobuf* arg3)
{
    return stub<cdecl_t<void, i32*, i32, struct _iobuf*>>(0x4C76B0, arg1, arg2, arg3);
}

i32 datStack::ExceptionFilter(struct _EXCEPTION_POINTERS* arg1)
{
    return stub<cdecl_t<i32, struct _EXCEPTION_POINTERS*>>(0x4C7720, arg1);
}

char const* datStack::GetTimestamp()
{
    return stub<cdecl_t<char const*>>(0x4C7120);
}

i32 datStack::LogTraceback(i32* arg1, i32 arg2)
{
    return stub<cdecl_t<i32, i32*, i32>>(0x4C75F0, arg1, arg2);
}

void datStack::LookupAddress(char* arg1, i32 arg2)
{
    return stub<cdecl_t<void, char*, i32>>(0x4C7470, arg1, arg2);
}

void datStack::Traceback(i32 arg1, struct _iobuf* arg2)
{
    return stub<cdecl_t<void, i32, struct _iobuf*>>(0x4C75C0, arg1, arg2);
}

bool IsOnStack(void* arg1)
{
    return stub<cdecl_t<bool, void*>>(0x4C77C0, arg1);
}

define_dummy_symbol(data_stack);
