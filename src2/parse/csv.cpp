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

#include "csv.h"

i32 ParseCSVLine(char const* arg1, i32 arg2, i32 arg3, ...)
{
    unimplemented();
}

i32 parCsvFile::GetColumn(char const* arg1)
{
    return stub<thiscall_t<i32, parCsvFile*, char const*>>(0x4A8700, this, arg1);
}

f32 parCsvFile::GetFloat(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<f32, parCsvFile*, i32, i32>>(0x4A86D0, this, arg1, arg2);
}

i32 parCsvFile::GetInt(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, parCsvFile*, i32, i32>>(0x4A86A0, this, arg1, arg2);
}

i32 parCsvFile::GetRow(i32 arg1, char const* arg2)
{
    return stub<thiscall_t<i32, parCsvFile*, i32, char const*>>(0x4A8760, this, arg1, arg2);
}

i32 parCsvFile::GetRowSafe(i32 arg1, char const* arg2)
{
    return stub<thiscall_t<i32, parCsvFile*, i32, char const*>>(0x4A87D0, this, arg1, arg2);
}

void parCsvFile::Kill()
{
    return stub<thiscall_t<void, parCsvFile*>>(0x4A8270, this);
}

bool parCsvFile::Load(char const* arg1, char const* arg2, bool arg3, i32 arg4)
{
    return stub<thiscall_t<bool, parCsvFile*, char const*, char const*, bool, i32>>(
        0x4A82F0, this, arg1, arg2, arg3, arg4);
}

void parCsvFile::Print()
{
    return stub<thiscall_t<void, parCsvFile*>>(0x4A8600, this);
}

void parCsvFile::SetFloat(i32 arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, parCsvFile*, i32, i32, f32>>(0x4A88B0, this, arg1, arg2, arg3);
}

void parCsvFile::SetInt(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, parCsvFile*, i32, i32, i32>>(0x4A8870, this, arg1, arg2, arg3);
}

void parCsvFile::SetString(i32 arg1, i32 arg2, char const* arg3)
{
    return stub<thiscall_t<void, parCsvFile*, i32, i32, char const*>>(0x4A8830, this, arg1, arg2, arg3);
}

define_dummy_symbol(parse_csv);
