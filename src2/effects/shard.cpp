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

#include "shard.h"

void draw_textured_tri(class gfxTexture* arg1, class Matrix34 const& arg2, f32 arg3, f32 arg4, f32 arg5)
{
    return stub<cdecl_t<void, class gfxTexture*, class Matrix34 const&, f32, f32, f32>>(
        0x45FC30, arg1, arg2, arg3, arg4, arg5);
}

fxShard::fxShard()
{
    unimplemented();
}

fxShard::~fxShard()
{
    unimplemented();
}

void fxShard::AddShard(class Vector3 arg1, class Vector3 arg2, class Vector3 arg3, f32 arg4)
{
    return stub<thiscall_t<void, fxShard*, class Vector3, class Vector3, class Vector3, f32>>(
        0x45FD30, this, arg1, arg2, arg3, arg4);
}

void fxShard::Draw(class modShader* arg1)
{
    return stub<thiscall_t<void, fxShard*, class modShader*>>(0x45FE30, this, arg1);
}

void fxShard::Update()
{
    return stub<thiscall_t<void, fxShard*>>(0x45FDA0, this);
}

fxShardManager::fxShardManager()
{
    unimplemented();
}

fxShardManager::~fxShardManager()
{
    unimplemented();
}

void fxShardManager::Draw()
{
    return stub<thiscall_t<void, fxShardManager*>>(0x4602D0, this);
}

void fxShardManager::EmitAllShards(class Vector3 arg1, f32 arg2, class Matrix34 const& arg3)
{
    return stub<thiscall_t<void, fxShardManager*, class Vector3, f32, class Matrix34 const&>>(
        0x4600B0, this, arg1, arg2, arg3);
}

void fxShardManager::EmitShard(class Vector3 arg1, f32 arg2, class Matrix34 const& arg3)
{
    return stub<thiscall_t<void, fxShardManager*, class Vector3, f32, class Matrix34 const&>>(
        0x460100, this, arg1, arg2, arg3);
}

void fxShardManager::EmitShards(class Vector3 arg1, f32 arg2, f32 arg3, class Matrix34 const& arg4)
{
    return stub<thiscall_t<void, fxShardManager*, class Vector3, f32, f32, class Matrix34 const&>>(
        0x460030, this, arg1, arg2, arg3, arg4);
}

void fxShardManager::Init(i32 arg1, class modShader* arg2, i32 arg3)
{
    return stub<thiscall_t<void, fxShardManager*, i32, class modShader*, i32>>(0x45FF80, this, arg1, arg2, arg3);
}

void fxShardManager::SetShader(class modShader* arg1, i32 arg2)
{
    return stub<thiscall_t<void, fxShardManager*, class modShader*, i32>>(0x460010, this, arg1, arg2);
}

void fxShardManager::Update()
{
    return stub<thiscall_t<void, fxShardManager*>>(0x4602A0, this);
}

class fxShardManager* fxShardManager::GetInstance(i32 arg1)
{
    return stub<cdecl_t<class fxShardManager*, i32>>(0x45FF60, arg1);
}

define_dummy_symbol(effects_shard);
