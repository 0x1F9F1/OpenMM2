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

#include "model2.h"

class modShader* modModel::CopyShaders()
{
    return stub<thiscall_t<class modShader*, modModel*>>(0x5981C0, this);
}

void modModel::Draw(class Matrix44 const* arg1, class modShader* arg2, u32 arg3)
{
    return stub<thiscall_t<void, modModel*, class Matrix44 const*, class modShader*, u32>>(
        0x597D00, this, arg1, arg2, arg3);
}

void modModel::DrawPlain(class Matrix44 const* arg1, u32 arg2)
{
    return stub<thiscall_t<void, modModel*, class Matrix44 const*, u32>>(0x597F00, this, arg1, arg2);
}

void modModel::DrawWithTexGenCoords(class Matrix44 const* arg1, class gfxTexture& arg2, u32 arg3)
{
    return stub<thiscall_t<void, modModel*, class Matrix44 const*, class gfxTexture&, u32>>(
        0x597EA0, this, arg1, arg2, arg3);
}

i32 modModel::GetAdjunctCount()
{
    return stub<thiscall_t<i32, modModel*>>(0x598190, this);
}

void modModel::GetBoundingBox(class Vector3& arg1, class Vector3& arg2, class Matrix34* arg3)
{
    return stub<thiscall_t<void, modModel*, class Vector3&, class Vector3&, class Matrix34*>>(
        0x597FB0, this, arg1, arg2, arg3);
}

class Vector3& modModel::GetPosition(class Vector3& arg1, i32 arg2)
{
    return stub<thiscall_t<class Vector3&, modModel*, class Vector3&, i32>>(0x598230, this, arg1, arg2);
}

void modModel::SetPosition(class Vector3 const& arg1, i32 arg2)
{
    return stub<thiscall_t<void, modModel*, class Vector3 const&, i32>>(0x598290, this, arg1, arg2);
}

void modModel::DeleteModelHash(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x597A40, arg1);
}

bool modModel::ModelAlreadyLoaded(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x597A20, arg1);
}

bool modModel::LoadAscii(class datTokenizer& arg1)
{
    return stub<thiscall_t<bool, modModel*, class datTokenizer&>>(0x5982F0, this, arg1);
}

bool modModel::LoadBinary(class datBinTokenizer& arg1)
{
    return stub<thiscall_t<bool, modModel*, class datBinTokenizer&>>(0x5990F0, this, arg1);
}

bool modModel::SaveToAscii(class datBinTokenizer& arg1, class Stream* arg2)
{
    return stub<thiscall_t<bool, modModel*, class datBinTokenizer&, class Stream*>>(0x59A210, this, arg1, arg2);
}

bool modModel::SaveToBinary(class datTokenizer& arg1, class Stream* arg2)
{
    return stub<thiscall_t<bool, modModel*, class datTokenizer&, class Stream*>>(0x5999C0, this, arg1, arg2);
}

void UnderscoreSpaces(char* arg1, i32 arg2)
{
    return stub<cdecl_t<void, char*, i32>>(0x59A1E0, arg1, arg2);
}

define_dummy_symbol(model_model2);
