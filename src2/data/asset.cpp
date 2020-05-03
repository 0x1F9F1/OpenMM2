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

#include "asset.h"

void datAssetManager::BaseName(char const* arg1, char* arg2, i32 arg3)
{
    return stub<cdecl_t<void, char const*, char*, i32>>(0x4C5A40, arg1, arg2, arg3);
}

class Stream* datAssetManager::Create(char const* arg1, char const* arg2, bool arg3)
{
    return stub<cdecl_t<class Stream*, char const*, char const*, bool>>(0x4C5910, arg1, arg2, arg3);
}

class Stream* datAssetManager::Create(char const* arg1, char const* arg2, char const* arg3, bool arg4)
{
    return stub<cdecl_t<class Stream*, char const*, char const*, char const*, bool>>(0x4C5960, arg1, arg2, arg3, arg4);
}

i32 datAssetManager::EnumFiles(char const* arg1, void (*arg2)(char const*, bool, void*), void* arg3, bool arg4)
{
    return stub<cdecl_t<i32, char const*, void (*)(char const*, bool, void*), void*, bool>>(
        0x4C5A80, arg1, arg2, arg3, arg4);
}

bool datAssetManager::Exists(char const* arg1, char const* arg2)
{
    return stub<cdecl_t<bool, char const*, char const*>>(0x4C59B0, arg1, arg2);
}

bool datAssetManager::Exists(char const* arg1, char const* arg2, char const* arg3)
{
    return stub<cdecl_t<bool, char const*, char const*, char const*>>(0x4C59E0, arg1, arg2, arg3);
}

char const* datAssetManager::FileName(char const* arg1)
{
    return stub<cdecl_t<char const*, char const*>>(0x4C5A10, arg1);
}

void datAssetManager::FullPath(char* arg1, i32 arg2, char const* arg3, char const* arg4)
{
    return stub<cdecl_t<void, char*, i32, char const*, char const*>>(0x4C55E0, arg1, arg2, arg3, arg4);
}

void datAssetManager::FullPath(char* arg1, i32 arg2, char const* arg3, char const* arg4, char const* arg5)
{
    return stub<cdecl_t<void, char*, i32, char const*, char const*, char const*>>(
        0x4C56F0, arg1, arg2, arg3, arg4, arg5);
}

class Stream* datAssetManager::Open(char const* arg1, char const* arg2, bool arg3, bool arg4)
{
    return stub<cdecl_t<class Stream*, char const*, char const*, bool, bool>>(0x4C5870, arg1, arg2, arg3, arg4);
}

class Stream* datAssetManager::Open(char const* arg1, char const* arg2, char const* arg3, bool arg4, bool arg5)
{
    return stub<cdecl_t<class Stream*, char const*, char const*, char const*, bool, bool>>(
        0x4C58C0, arg1, arg2, arg3, arg4, arg5);
}

void datAssetManager::SetPath(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x4C5540, arg1);
}

define_dummy_symbol(data_asset);
