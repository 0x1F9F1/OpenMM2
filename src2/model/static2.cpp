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

#include "static2.h"

class modStatic* modStatic::Clone()
{
    return stub<thiscall_t<class modStatic*, modStatic*>>(0x4A4CA0, this);
}

void modStatic::CopyFrom(class modStatic const* arg1)
{
    return stub<thiscall_t<void, modStatic*, class modStatic const*>>(0x4A4D60, this, arg1);
}

void modStatic::Draw(class modShader* arg1)
{
    return stub<thiscall_t<void, modStatic*, class modShader*>>(0x4A4550, this, arg1);
}

void modStatic::DrawEnvMapped(class modShader* arg1, class gfxTexture* arg2, f32 arg3)
{
    return stub<thiscall_t<void, modStatic*, class modShader*, class gfxTexture*, f32>>(
        0x4A4A50, this, arg1, arg2, arg3);
}

void modStatic::DrawNoAlpha(class modShader* arg1)
{
    return stub<thiscall_t<void, modStatic*, class modShader*>>(0x4A4A20, this, arg1);
}

void modStatic::DrawOrthoMapped(class modShader* arg1, class gfxTexture* arg2, f32 arg3, u32 arg4)
{
    return stub<thiscall_t<void, modStatic*, class modShader*, class gfxTexture*, f32, u32>>(
        0x4A4B30, this, arg1, arg2, arg3, arg4);
}

void modStatic::DrawWithTexGenAndTexMatrix()
{
    return stub<thiscall_t<void, modStatic*>>(0x4A4C50, this);
}

i32 modStatic::GetAdjunctCount()
{
    return stub<thiscall_t<i32, modStatic*>>(0x4A4DB0, this);
}

i32 modStatic::GetTriCount()
{
    return stub<thiscall_t<i32, modStatic*>>(0x4A4DE0, this);
}

void modStatic::Optimize(class modShader* arg1)
{
    return stub<thiscall_t<void, modStatic*, class modShader*>>(0x4A49A0, this, arg1);
}

class modStatic* modGetStatic(char const* arg1, void (*arg2)(class Vector3&, void*), void* arg3, bool arg4)
{
    return stub<cdecl_t<class modStatic*, char const*, void (*)(class Vector3&, void*), void*, bool>>(
        0x4A4E30, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(model_static2);
