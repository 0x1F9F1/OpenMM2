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

#include "token.h"

bool datBaseTokenizer::CheckToken(char const* arg1, bool arg2)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, char const*, bool>>(0x4C8500, this, arg1, arg2);
}

i32 datBaseTokenizer::GetBlock(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, datBaseTokenizer*, char*, i32>>(0x4C8440, this, arg1, arg2);
}

i32 datBaseTokenizer::GetToken(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, datBaseTokenizer*, char*, i32>>(0x4C82F0, this, arg1, arg2);
}

i32 datBaseTokenizer::GetTokenToChar(char* arg1, i32 arg2, char arg3)
{
    return stub<thiscall_t<i32, datBaseTokenizer*, char*, i32, char>>(0x4C8590, this, arg1, arg2, arg3);
}

void datBaseTokenizer::IgnoreToken()
{
    return stub<thiscall_t<void, datBaseTokenizer*>>(0x4C8670, this);
}

void datBaseTokenizer::Init(char const* arg1, class Stream* arg2)
{
    return stub<thiscall_t<void, datBaseTokenizer*, char const*, class Stream*>>(0x4C8210, this, arg1, arg2);
}

void datBaseTokenizer::MatchToken(char const* arg1)
{
    return stub<thiscall_t<void, datBaseTokenizer*, char const*>>(0x4C8480, this, arg1);
}

void datBaseTokenizer::Pop()
{
    return stub<thiscall_t<void, datBaseTokenizer*>>(0x4C8690, this);
}

bool datBaseTokenizer::PutStr(char const* arg1, ...)
{
    unimplemented();
}

void datBaseTokenizer::SkipToEndOfLine()
{
    return stub<thiscall_t<void, datBaseTokenizer*>>(0x4C8650, this);
}

i32 datBaseTokenizer::GetInt()
{
    return stub<thiscall_t<i32, datBaseTokenizer*>>(0x0, this);
}

f32 datBaseTokenizer::GetFloat()
{
    return stub<thiscall_t<f32, datBaseTokenizer*>>(0x0, this);
}

void datBaseTokenizer::GetVector(class Vector4& arg1)
{
    return stub<thiscall_t<void, datBaseTokenizer*, class Vector4&>>(0x0, this, arg1);
}

void datBaseTokenizer::GetVector(class Vector3& arg1)
{
    return stub<thiscall_t<void, datBaseTokenizer*, class Vector3&>>(0x0, this, arg1);
}

void datBaseTokenizer::GetVector(class Vector2& arg1)
{
    return stub<thiscall_t<void, datBaseTokenizer*, class Vector2&>>(0x0, this, arg1);
}

void datBaseTokenizer::GetDelimiter(char const* arg1)
{
    return stub<thiscall_t<void, datBaseTokenizer*, char const*>>(0x0, this, arg1);
}

i32 datBaseTokenizer::MatchInt(char const* arg1)
{
    return stub<thiscall_t<i32, datBaseTokenizer*, char const*>>(0x0, this, arg1);
}

f32 datBaseTokenizer::MatchFloat(char const* arg1)
{
    return stub<thiscall_t<f32, datBaseTokenizer*, char const*>>(0x0, this, arg1);
}

void datBaseTokenizer::MatchVector(char const* arg1, class Vector4& arg2)
{
    return stub<thiscall_t<void, datBaseTokenizer*, char const*, class Vector4&>>(0x0, this, arg1, arg2);
}

void datBaseTokenizer::MatchVector(char const* arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, datBaseTokenizer*, char const*, class Vector3&>>(0x0, this, arg1, arg2);
}

void datBaseTokenizer::MatchVector(char const* arg1, class Vector2& arg2)
{
    return stub<thiscall_t<void, datBaseTokenizer*, char const*, class Vector2&>>(0x0, this, arg1, arg2);
}

bool datBaseTokenizer::Put(class Vector4 const& arg1)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, class Vector4 const&>>(0x0, this, arg1);
}

bool datBaseTokenizer::Put(class Vector3 const& arg1)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, class Vector3 const&>>(0x0, this, arg1);
}

bool datBaseTokenizer::Put(class Vector2 const& arg1)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, class Vector2 const&>>(0x0, this, arg1);
}

bool datBaseTokenizer::Put(f32 arg1)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, f32>>(0x0, this, arg1);
}

bool datBaseTokenizer::Put(i32 arg1)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, i32>>(0x0, this, arg1);
}

bool datBaseTokenizer::Put(char arg1)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, char>>(0x4C86D0, this, arg1);
}

bool datBaseTokenizer::Put(char const* arg1, u32 arg2)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, char const*, u32>>(0x0, this, arg1, arg2);
}

bool datBaseTokenizer::PutDelimiter(char const* arg1)
{
    return stub<thiscall_t<bool, datBaseTokenizer*, char const*>>(0x0, this, arg1);
}

void datBaseTokenizer::SkipComment()
{
    return stub<thiscall_t<void, datBaseTokenizer*>>(0x4C82B0, this);
}

i32 datBaseTokenizer::GetTokenCh()
{
    return stub<thiscall_t<i32, datBaseTokenizer*>>(0x4C8270, this);
}

void datBaseTokenizer::PushBack(char const* arg1, i32 arg2)
{
    return stub<thiscall_t<void, datBaseTokenizer*, char const*, i32>>(0x4C8240, this, arg1, arg2);
}

void datAsciiTokenizer::GetDelimiter(char const* arg1)
{
    return stub<thiscall_t<void, datAsciiTokenizer*, char const*>>(0x4C88D0, this, arg1);
}

f32 datAsciiTokenizer::GetFloat()
{
    return stub<thiscall_t<f32, datAsciiTokenizer*>>(0x4C87D0, this);
}

i32 datAsciiTokenizer::GetInt()
{
    return stub<thiscall_t<i32, datAsciiTokenizer*>>(0x4C8770, this);
}

void datAsciiTokenizer::GetVector(class Vector2& arg1)
{
    return stub<thiscall_t<void, datAsciiTokenizer*, class Vector2&>>(0x4C8830, this, arg1);
}

void datAsciiTokenizer::GetVector(class Vector3& arg1)
{
    return stub<thiscall_t<void, datAsciiTokenizer*, class Vector3&>>(0x4C8860, this, arg1);
}

void datAsciiTokenizer::GetVector(class Vector4& arg1)
{
    return stub<thiscall_t<void, datAsciiTokenizer*, class Vector4&>>(0x4C8890, this, arg1);
}

f32 datAsciiTokenizer::MatchFloat(char const* arg1)
{
    return stub<thiscall_t<f32, datAsciiTokenizer*, char const*>>(0x4C8900, this, arg1);
}

i32 datAsciiTokenizer::MatchInt(char const* arg1)
{
    return stub<thiscall_t<i32, datAsciiTokenizer*, char const*>>(0x4C88E0, this, arg1);
}

void datAsciiTokenizer::MatchVector(char const* arg1, class Vector2& arg2)
{
    return stub<thiscall_t<void, datAsciiTokenizer*, char const*, class Vector2&>>(0x4C8920, this, arg1, arg2);
}

void datAsciiTokenizer::MatchVector(char const* arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, datAsciiTokenizer*, char const*, class Vector3&>>(0x4C8940, this, arg1, arg2);
}

void datAsciiTokenizer::MatchVector(char const* arg1, class Vector4& arg2)
{
    return stub<thiscall_t<void, datAsciiTokenizer*, char const*, class Vector4&>>(0x4C8960, this, arg1, arg2);
}

bool datAsciiTokenizer::Put(class Vector2 const& arg1)
{
    return stub<thiscall_t<bool, datAsciiTokenizer*, class Vector2 const&>>(0x4C8A90, this, arg1);
}

bool datAsciiTokenizer::Put(class Vector3 const& arg1)
{
    return stub<thiscall_t<bool, datAsciiTokenizer*, class Vector3 const&>>(0x4C8AF0, this, arg1);
}

bool datAsciiTokenizer::Put(class Vector4 const& arg1)
{
    return stub<thiscall_t<bool, datAsciiTokenizer*, class Vector4 const&>>(0x4C8B50, this, arg1);
}

bool datAsciiTokenizer::Put(f32 arg1)
{
    return stub<thiscall_t<bool, datAsciiTokenizer*, f32>>(0x4C8A40, this, arg1);
}

bool datAsciiTokenizer::Put(i32 arg1)
{
    return stub<thiscall_t<bool, datAsciiTokenizer*, i32>>(0x4C8A00, this, arg1);
}

bool datAsciiTokenizer::Put(char const* arg1, u32 arg2)
{
    return stub<thiscall_t<bool, datAsciiTokenizer*, char const*, u32>>(0x4C8980, this, arg1, arg2);
}

bool datAsciiTokenizer::PutDelimiter(char const* arg1)
{
    return stub<thiscall_t<bool, datAsciiTokenizer*, char const*>>(0x4C8BC0, this, arg1);
}

void datBinTokenizer::GetDelimiter(char const* arg1)
{
    return stub<thiscall_t<void, datBinTokenizer*, char const*>>(0x4C8D30, this, arg1);
}

f32 datBinTokenizer::GetFloat()
{
    return stub<thiscall_t<f32, datBinTokenizer*>>(0x4C8C20, this);
}

i32 datBinTokenizer::GetInt()
{
    return stub<thiscall_t<i32, datBinTokenizer*>>(0x4C8BE0, this);
}

void datBinTokenizer::GetVector(class Vector2& arg1)
{
    return stub<thiscall_t<void, datBinTokenizer*, class Vector2&>>(0x4C8C70, this, arg1);
}

void datBinTokenizer::GetVector(class Vector3& arg1)
{
    return stub<thiscall_t<void, datBinTokenizer*, class Vector3&>>(0x4C8CB0, this, arg1);
}

void datBinTokenizer::GetVector(class Vector4& arg1)
{
    return stub<thiscall_t<void, datBinTokenizer*, class Vector4&>>(0x4C8CF0, this, arg1);
}

f32 datBinTokenizer::MatchFloat(char const* arg1)
{
    return stub<thiscall_t<f32, datBinTokenizer*, char const*>>(0x4C8D50, this, arg1);
}

i32 datBinTokenizer::MatchInt(char const* arg1)
{
    return stub<thiscall_t<i32, datBinTokenizer*, char const*>>(0x4C8D40, this, arg1);
}

void datBinTokenizer::MatchVector(char const* arg1, class Vector2& arg2)
{
    return stub<thiscall_t<void, datBinTokenizer*, char const*, class Vector2&>>(0x4C8D60, this, arg1, arg2);
}

void datBinTokenizer::MatchVector(char const* arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, datBinTokenizer*, char const*, class Vector3&>>(0x4C8D70, this, arg1, arg2);
}

void datBinTokenizer::MatchVector(char const* arg1, class Vector4& arg2)
{
    return stub<thiscall_t<void, datBinTokenizer*, char const*, class Vector4&>>(0x4C8D80, this, arg1, arg2);
}

bool datBinTokenizer::Put(class Vector2 const& arg1)
{
    return stub<thiscall_t<bool, datBinTokenizer*, class Vector2 const&>>(0x4C8E20, this, arg1);
}

bool datBinTokenizer::Put(class Vector3 const& arg1)
{
    return stub<thiscall_t<bool, datBinTokenizer*, class Vector3 const&>>(0x4C8E40, this, arg1);
}

bool datBinTokenizer::Put(class Vector4 const& arg1)
{
    return stub<thiscall_t<bool, datBinTokenizer*, class Vector4 const&>>(0x4C8E60, this, arg1);
}

bool datBinTokenizer::Put(f32 arg1)
{
    return stub<thiscall_t<bool, datBinTokenizer*, f32>>(0x4C8E00, this, arg1);
}

bool datBinTokenizer::Put(i32 arg1)
{
    return stub<thiscall_t<bool, datBinTokenizer*, i32>>(0x4C8DE0, this, arg1);
}

bool datBinTokenizer::Put(char const* arg1, u32 arg2)
{
    return stub<thiscall_t<bool, datBinTokenizer*, char const*, u32>>(0x4C8D90, this, arg1, arg2);
}

bool datBinTokenizer::PutDelimiter(char const* arg1)
{
    return stub<thiscall_t<bool, datBinTokenizer*, char const*>>(0x4C8E80, this, arg1);
}

datMultiTokenizer::datMultiTokenizer()
{
    unimplemented();
}

class datBaseTokenizer& datMultiTokenizer::GetReadTokenizer(
    char const* arg1, class Stream* arg2, char const* arg3, char const* arg4)
{
    return stub<
        thiscall_t<class datBaseTokenizer&, datMultiTokenizer*, char const*, class Stream*, char const*, char const*>>(
        0x4C8EA0, this, arg1, arg2, arg3, arg4);
}

class datBaseTokenizer& datMultiTokenizer::GetWriteTokenizer(
    char const* arg1, class Stream* arg2, bool arg3, char const* arg4)
{
    return stub<thiscall_t<class datBaseTokenizer&, datMultiTokenizer*, char const*, class Stream*, bool, char const*>>(
        0x4C8FB0, this, arg1, arg2, arg3, arg4);
}

datTokenizer::datTokenizer()
{
    unimplemented();
}

datTokenizer::datTokenizer(char const* arg1, class Stream* arg2)
{
    unimplemented();
}

define_dummy_symbol(data_token);
