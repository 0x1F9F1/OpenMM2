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

#include "parse.h"

datParser::datParser(char const* arg1)
{
    unimplemented();
}

datParser::~datParser()
{
    unimplemented();
}

class datParser* datParser::AddParser(char const* arg1, class datCallback* arg2)
{
    return stub<thiscall_t<class datParser*, datParser*, char const*, class datCallback*>>(0x4A7980, this, arg1, arg2);
}

void datParser::AddValue(char const* arg1, f32* arg2, class datCallback* arg3)
{
    return stub<thiscall_t<void, datParser*, char const*, f32*, class datCallback*>>(0x406850, this, arg1, arg2, arg3);
}

void datParser::AddValue(char const* arg1, i32* arg2, class datCallback* arg3)
{
    return stub<thiscall_t<void, datParser*, char const*, i32*, class datCallback*>>(0x45FC00, this, arg1, arg2, arg3);
}

bool datParser::Load(char const* arg1, char const* arg2)
{
    return stub<thiscall_t<bool, datParser*, char const*, char const*>>(0x4A7AF0, this, arg1, arg2);
}

bool datParser::Load(class Stream* arg1, char const* arg2)
{
    return stub<thiscall_t<bool, datParser*, class Stream*, char const*>>(0x4A7A90, this, arg1, arg2);
}

bool datParser::Load(char const* arg1, char const* arg2, char const* arg3)
{
    return stub<thiscall_t<bool, datParser*, char const*, char const*, char const*>>(0x4A7B40, this, arg1, arg2, arg3);
}

bool datParser::Save(char const* arg1, char const* arg2, bool arg3)
{
    return stub<thiscall_t<bool, datParser*, char const*, char const*, bool>>(0x4A7C00, this, arg1, arg2, arg3);
}

bool datParser::Save(class Stream* arg1, char const* arg2, bool arg3)
{
    return stub<thiscall_t<bool, datParser*, class Stream*, char const*, bool>>(0x4A7B90, this, arg1, arg2, arg3);
}

bool datParser::Save(char const* arg1, char const* arg2, char const* arg3, bool arg4)
{
    return stub<thiscall_t<bool, datParser*, char const*, char const*, char const*, bool>>(
        0x4A7C50, this, arg1, arg2, arg3, arg4);
}

class datParserRecord& datParser::AddRecord(i32 arg1, char const* arg2, void* arg3, u16 arg4, class datCallback* arg5)
{
    return stub<thiscall_t<class datParserRecord&, datParser*, i32, char const*, void*, u16, class datCallback*>>(
        0x4A79D0, this, arg1, arg2, arg3, arg4, arg5);
}

void datParser::Indent(class datBaseTokenizer& arg1)
{
    return stub<thiscall_t<void, datParser*, class datBaseTokenizer&>>(0x4A81D0, this, arg1);
}

void datParser::Read(class datBaseTokenizer& arg1)
{
    return stub<thiscall_t<void, datParser*, class datBaseTokenizer&>>(0x4A7CA0, this, arg1);
}

void datParser::Write(class datBaseTokenizer& arg1)
{
    return stub<thiscall_t<void, datParser*, class datBaseTokenizer&>>(0x4A7F70, this, arg1);
}

datParserRecord::~datParserRecord()
{
    unimplemented();
}

define_dummy_symbol(parse_parse);
