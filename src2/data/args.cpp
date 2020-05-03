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

#include "args.h"

void datArgParser::AddReplace(char const* arg1, char* arg2)
{
    return stub<cdecl_t<void, char const*, char*>>(0x4C6120, arg1, arg2);
}

bool datArgParser::Get(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x4C6190, arg1);
}

bool datArgParser::Get(char const* arg1, u32 arg2, char const** arg3)
{
    return stub<cdecl_t<bool, char const*, u32, char const**>>(0x4C6260, arg1, arg2, arg3);
}

bool datArgParser::Get(char const* arg1, u32 arg2, f32& arg3)
{
    return stub<cdecl_t<bool, char const*, u32, f32&>>(0x4C6210, arg1, arg2, arg3);
}

bool datArgParser::Get(char const* arg1, u32 arg2, i32& arg3)
{
    return stub<cdecl_t<bool, char const*, u32, i32&>>(0x4C61C0, arg1, arg2, arg3);
}

i32 datArgParser::GetNum(char const* arg1)
{
    return stub<cdecl_t<i32, char const*>>(0x4C62A0, arg1);
}

void datArgParser::Init()
{
    return stub<cdecl_t<void>>(0x4C5BB0);
}

void datArgParser::Init(i32 arg1, char** arg2)
{
    return stub<cdecl_t<void, i32, char**>>(0x4C5BC0, arg1, arg2);
}

void datArgParser::Kill()
{
    return stub<cdecl_t<void>>(0x4C6110);
}

void datArgParser::RestoreFromArchive(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x4C5D10, arg1);
}

i32 datArgParser::SaveToArchive(char* arg1)
{
    return stub<cdecl_t<i32, char*>>(0x4C5EC0, arg1);
}

define_dummy_symbol(data_args);
