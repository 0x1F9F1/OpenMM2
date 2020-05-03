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

#include "stream.h"

i32 Stream::Close()
{
    return stub<thiscall_t<i32, Stream*>>(0x4C9DC0, this);
}

i32 Stream::Flush()
{
    return stub<thiscall_t<i32, Stream*>>(0x4C9E60, this);
}

i32 Stream::GetCh()
{
    return stub<thiscall_t<i32, Stream*>>(0x4C9D00, this);
}

i32 Stream::PutCh(u8 arg1)
{
    return stub<thiscall_t<i32, Stream*, u8>>(0x4C9D30, this, arg1);
}

i32 Stream::Read(void* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, Stream*, void*, i32>>(0x4C9AA0, this, arg1, arg2);
}

i32 Stream::Seek(i32 arg1)
{
    return stub<thiscall_t<i32, Stream*, i32>>(0x4C9D60, this, arg1);
}

i32 Stream::Size()
{
    return stub<thiscall_t<i32, Stream*>>(0x4C9E00, this);
}

i32 Stream::Tell()
{
    return stub<thiscall_t<i32, Stream*>>(0x4C9DB0, this);
}

i32 Stream::Write(void const* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, Stream*, void const*, i32>>(0x4C9BF0, this, arg1, arg2);
}

class Stream* Stream::Create(char const* arg1)
{
    return stub<cdecl_t<class Stream*, char const*>>(0x4C9A00, arg1);
}

class Stream* Stream::Create(char const* arg1, struct coreFileMethods const* arg2)
{
    return stub<cdecl_t<class Stream*, char const*, struct coreFileMethods const*>>(0x4C9A70, arg1, arg2);
}

void Stream::DumpOpenFiles()
{
    return stub<cdecl_t<void>>(0x4C9970);
}

class Stream* Stream::Open(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class Stream*, char const*, bool>>(0x4C99C0, arg1, arg2);
}

class Stream* Stream::Open(char const* arg1, struct coreFileMethods const* arg2, bool arg3)
{
    return stub<cdecl_t<class Stream*, char const*, struct coreFileMethods const*, bool>>(0x4C9A40, arg1, arg2, arg3);
}

class Stream* Stream::PreLoad(class Stream* arg1)
{
    return stub<cdecl_t<class Stream*, class Stream*>>(0x4CA0E0, arg1);
}

class Stream* Stream::AllocStream(char const* arg1, i32 arg2, struct coreFileMethods const* arg3)
{
    return stub<cdecl_t<class Stream*, char const*, i32, struct coreFileMethods const*>>(0x4C98D0, arg1, arg2, arg3);
}

i32 fgets(char* arg1, i32 arg2, class Stream* arg3)
{
    return stub<cdecl_t<i32, char*, i32, class Stream*>>(0x4C9F80, arg1, arg2, arg3);
}

void fprintf(class Stream* arg1, char const* arg2, ...)
{
    unimplemented();
}

i32 fscanf(class Stream* arg1, char const* arg2, ...)
{
    unimplemented();
}

i32 fseek(class Stream* arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<i32, class Stream*, i32, i32>>(0x4C9F20, arg1, arg2, arg3);
}

i32 memCloseFile(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x4CA0B0, arg1);
}

i32 memReadFile(i32 arg1, void* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, i32, void*, i32>>(0x4CA0A0, arg1, arg2, arg3);
}

i32 memSizeFile(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x4CA0D0, arg1);
}

define_dummy_symbol(core_stream);
