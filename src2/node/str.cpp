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

#include "str.h"

string::string()
{
    unimplemented();
}

string::string(char const* arg1)
{
    unimplemented();
}

string::string(class string const& arg1)
{
    unimplemented();
}

void string::operator=(char const* arg1)
{
    return stub<thiscall_t<void, string*, char const*>>(0x4A0A90, this, arg1);
}

class string string::operator+(char const* arg1)
{
    return stub<thiscall_t<class string, string*, char const*>>(0x49F180, this, arg1);
}

class string string::operator+(class string const& arg1)
{
    return stub<thiscall_t<class string, string*, class string const&>>(0x4A0B00, this, arg1);
}

void string::operator+=(char arg1)
{
    return stub<thiscall_t<void, string*, char>>(0x49F4C0, this, arg1);
}

void string::operator+=(char const* arg1)
{
    return stub<thiscall_t<void, string*, char const*>>(0x49F3E0, this, arg1);
}

class string string::operator-(char const* arg1)
{
    return stub<thiscall_t<class string, string*, char const*>>(0x49F560, this, arg1);
}

void string::operator-=(char const* arg1)
{
    return stub<thiscall_t<void, string*, char const*>>(0x49F6D0, this, arg1);
}

void string::ChangeExtension(class string const& arg1)
{
    return stub<thiscall_t<void, string*, class string const&>>(0x4A0580, this, arg1);
}

i32 string::CommaFile()
{
    return stub<thiscall_t<i32, string*>>(0x4A0100, this);
}

i32 string::Contains(class string& arg1)
{
    return stub<thiscall_t<i32, string*, class string&>>(0x49F8E0, this, arg1);
}

void string::DirFileExt(class string& arg1, class string& arg2, class string& arg3)
{
    return stub<thiscall_t<void, string*, class string&, class string&, class string&>>(
        0x49FEE0, this, arg1, arg2, arg3);
}

void string::ExpandEnvs()
{
    return stub<thiscall_t<void, string*>>(0x4A0760, this);
}

class string string::Extension()
{
    return stub<thiscall_t<class string, string*>>(0x4A0460, this);
}

i32 string::FileExists()
{
    return stub<thiscall_t<i32, string*>>(0x49FEB0, this);
}

class string string::FileName()
{
    return stub<thiscall_t<class string, string*>>(0x4A02E0, this);
}

i32 string::FindFile(class string const& arg1, i32 arg2, class string const& arg3, class string const& arg4)
{
    return stub<thiscall_t<i32, string*, class string const&, i32, class string const&, class string const&>>(
        0x49FB30, this, arg1, arg2, arg3, arg4);
}

void string::Init(i32 arg1)
{
    return stub<thiscall_t<void, string*, i32>>(0x412500, this, arg1);
}

i32 string::IsNumeric()
{
    return stub<thiscall_t<i32, string*>>(0x4A0A60, this);
}

void string::MinusEqual(char arg1)
{
    return stub<thiscall_t<void, string*, char>>(0x49F790, this, arg1);
}

i32 string::NumSubStrings()
{
    return stub<thiscall_t<i32, string*>>(0x4A0A20, this);
}

void string::RemoveExtension()
{
    return stub<thiscall_t<void, string*>>(0x4A0730, this);
}

void string::SaveName(class string const& arg1, i32 arg2, class string const& arg3, class string const& arg4)
{
    return stub<thiscall_t<void, string*, class string const&, i32, class string const&, class string const&>>(
        0x49F970, this, arg1, arg2, arg3, arg4);
}

class string string::SubString(i32 arg1)
{
    return stub<thiscall_t<class string, string*, i32>>(0x4A0910, this, arg1);
}

class string operator+(char const* arg1, class string const& arg2)
{
    return stub<cdecl_t<class string, char const*, class string const&>>(0x49F2B0, arg1, arg2);
}

define_dummy_symbol(node_str);
