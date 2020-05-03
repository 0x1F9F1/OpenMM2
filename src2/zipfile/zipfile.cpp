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

#include "zipfile.h"

i32 zipHandle::Read(void* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, zipHandle*, void*, i32>>(0x572F80, this, arg1, arg2);
}

i32 zipHandle::Seek(i32 arg1, enum seekWhence arg2)
{
    return stub<thiscall_t<i32, zipHandle*, i32, enum seekWhence>>(0x573080, this, arg1, arg2);
}

zipFile::zipFile()
{
    unimplemented();
}

zipFile::~zipFile()
{
    unimplemented();
}

i32 zipFile::EnumFiles(char const* arg1, void (*arg2)(char const*, bool, void*), void* arg3)
{
    return stub<thiscall_t<i32, zipFile*, char const*, void (*)(char const*, bool, void*), void*>>(
        0x573B60, this, arg1, arg2, arg3);
}

bool zipFile::Init(char const* arg1)
{
    return stub<thiscall_t<bool, zipFile*, char const*>>(0x573480, this, arg1);
}

i32 zipFile::Open(char const* arg1)
{
    return stub<thiscall_t<i32, zipFile*, char const*>>(0x573A80, this, arg1);
}

void zipFile::KillAll()
{
    return stub<cdecl_t<void>>(0x573360);
}

i32 zipFile::zipClose(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x573270, arg1);
}

i32 zipFile::zipCreate(char const* arg1)
{
    return stub<cdecl_t<i32, char const*>>(0x5731F0, arg1);
}

i32 zipFile::zipEnumFiles(char const* arg1, void (*arg2)(char const*, bool, void*), void* arg3)
{
    return stub<cdecl_t<i32, char const*, void (*)(char const*, bool, void*), void*>>(0x5732A0, arg1, arg2, arg3);
}

i32 zipFile::zipOpen(char const* arg1, bool arg2)
{
    return stub<cdecl_t<i32, char const*, bool>>(0x5731A0, arg1, arg2);
}

i32 zipFile::zipRead(i32 arg1, void* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, i32, void*, i32>>(0x573210, arg1, arg2, arg3);
}

i32 zipFile::zipSeek(i32 arg1, i32 arg2, enum seekWhence arg3)
{
    return stub<cdecl_t<i32, i32, i32, enum seekWhence>>(0x573250, arg1, arg2, arg3);
}

i32 zipFile::zipSize(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x5732E0, arg1);
}

i32 zipFile::zipWrite(i32 arg1, void const* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, i32, void const*, i32>>(0x573230, arg1, arg2, arg3);
}

i32 zipFile::internalRead(void* arg1, i32 arg2, bool arg3)
{
    return stub<thiscall_t<i32, zipFile*, void*, i32, bool>>(0x573410, this, arg1, arg2, arg3);
}

i32 zipFile::internalSeek(i32 arg1)
{
    return stub<thiscall_t<i32, zipFile*, i32>>(0x573390, this, arg1);
}

define_dummy_symbol(zipfile_zipfile);
