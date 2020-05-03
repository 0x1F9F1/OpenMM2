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

#include "ptx.h"

asParticles::asParticles()
{
    unimplemented();
}

asParticles::~asParticles()
{
    unimplemented();
}

void asParticles::Blast(i32 arg1, class asBirthRule* arg2)
{
    return stub<thiscall_t<void, asParticles*, i32, class asBirthRule*>>(0x461490, this, arg1, arg2);
}

void asParticles::Cull()
{
    return stub<thiscall_t<void, asParticles*>>(0x4615A0, this);
}

void asParticles::Init(i32 arg1, i32 arg2, i32 arg3, i32 arg4, struct asMeshCardVertex* arg5)
{
    return stub<thiscall_t<void, asParticles*, i32, i32, i32, i32, struct asMeshCardVertex*>>(
        0x460FB0, this, arg1, arg2, arg3, arg4, arg5);
}

void asParticles::Reset()
{
    return stub<thiscall_t<void, asParticles*>>(0x461040, this);
}

void asParticles::SetTexture(char const* arg1)
{
    return stub<thiscall_t<void, asParticles*, char const*>>(0x461090, this, arg1);
}

void asParticles::SetTexture(class gfxTexture* arg1)
{
    return stub<thiscall_t<void, asParticles*, class gfxTexture*>>(0x461050, this, arg1);
}

void asParticles::Update()
{
    return stub<thiscall_t<void, asParticles*>>(0x4610F0, this);
}

i32 cmpPtx(void const* arg1, void const* arg2)
{
    return stub<cdecl_t<i32, void const*, void const*>>(0x461580, arg1, arg2);
}

void asMeshCardInfo::Draw(struct asSparkPos const* arg1, i32 arg2)
{
    return stub<thiscall_t<void, asMeshCardInfo*, struct asSparkPos const*, i32>>(0x461770, this, arg1, arg2);
}

void asMeshCardInfo::DrawShadows(struct asSparkPos const* arg1, i32 arg2)
{
    return stub<thiscall_t<void, asMeshCardInfo*, struct asSparkPos const*, i32>>(0x461890, this, arg1, arg2);
}

void asMeshCardInfo::Init(i32 arg1, struct asMeshCardVertex* arg2, i32 arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, asMeshCardInfo*, i32, struct asMeshCardVertex*, i32, i32, i32>>(
        0x461600, this, arg1, arg2, arg3, arg4, arg5);
}

define_dummy_symbol(effects_ptx);
