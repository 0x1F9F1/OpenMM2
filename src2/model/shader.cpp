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

#include "shader.h"

void modShader::Load(class Stream* arg1, bool arg2)
{
    return stub<thiscall_t<void, modShader*, class Stream*, bool>>(0x4A3B30, this, arg1, arg2);
}

void modShader::PreLoad()
{
    return stub<thiscall_t<void, modShader*>>(0x4A40C0, this);
}

struct gfxMaterial* modShader::AddStaticMaterial(struct gfxMaterial const& arg1)
{
    return stub<cdecl_t<struct gfxMaterial*, struct gfxMaterial const&>>(0x4A3930, arg1);
}

void modShader::BeginEnvMap(class gfxTexture* arg1, class Matrix34 const& arg2)
{
    return stub<cdecl_t<void, class gfxTexture*, class Matrix34 const&>>(0x4A41B0, arg1, arg2);
}

void modShader::EndEnvMap()
{
    return stub<cdecl_t<void>>(0x4A4420);
}

void modShader::KillAll()
{
    return stub<cdecl_t<void>>(0x4A3B20);
}

class modShader** modShader::LoadShaderSet(class Stream* arg1, i32* arg2, i32* arg3, bool arg4)
{
    return stub<cdecl_t<class modShader**, class Stream*, i32*, i32*, bool>>(0x4A3F60, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(model_shader);
