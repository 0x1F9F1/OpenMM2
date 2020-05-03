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

#include "memstream.h"

i32 datMemStream::Close()
{
    return stub<thiscall_t<i32, datMemStream*>>(0x4C9390, this);
}

i32 datMemStream::GetCh()
{
    return stub<thiscall_t<i32, datMemStream*>>(0x4C9330, this);
}

i32 datMemStream::PutCh(u8 arg1)
{
    return stub<thiscall_t<i32, datMemStream*, u8>>(0x4C9360, this, arg1);
}

i32 datMemStream::Read(void* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, datMemStream*, void*, i32>>(0x4C9280, this, arg1, arg2);
}

i32 datMemStream::Size()
{
    return stub<thiscall_t<i32, datMemStream*>>(0x4C93A0, this);
}

i32 datMemStream::Write(void const* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, datMemStream*, void const*, i32>>(0x4C92D0, this, arg1, arg2);
}

define_dummy_symbol(data_memstream);
