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

#include "animation.h"

crAnimation::crAnimation(i32 arg1, i32 arg2)
{
    unimplemented();
}

crAnimation::~crAnimation()
{
    unimplemented();
}

void crAnimation::CopyAnim(class crAnimation* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, crAnimation*, class crAnimation*, i32, i32>>(0x57D9A0, this, arg1, arg2, arg3);
}

void crAnimation::Flip()
{
    return stub<thiscall_t<void, crAnimation*>>(0x57DA90, this);
}

void crAnimation::GetBlendFrame(class crAnimFrame& arg1, f32 arg2)
{
    return stub<thiscall_t<void, crAnimation*, class crAnimFrame&, f32>>(0x57DAC0, this, arg1, arg2);
}

void crAnimation::Normalize(bool arg1)
{
    return stub<thiscall_t<void, crAnimation*, bool>>(0x57D7B0, this, arg1);
}

void crAnimation::NormalizeX()
{
    return stub<thiscall_t<void, crAnimation*>>(0x57D810, this);
}

void crAnimation::NormalizeY()
{
    return stub<thiscall_t<void, crAnimation*>>(0x57D860, this);
}

bool crAnimation::SaveAnim(char const* arg1)
{
    return stub<thiscall_t<bool, crAnimation*, char const*>>(0x57D590, this, arg1);
}

void crAnimation::Subtract(class crAnimFrame& arg1)
{
    return stub<thiscall_t<void, crAnimation*, class crAnimFrame&>>(0x57D960, this, arg1);
}

void crAnimation::ZeroX()
{
    return stub<thiscall_t<void, crAnimation*>>(0x57D8C0, this);
}

void crAnimation::ZeroY()
{
    return stub<thiscall_t<void, crAnimation*>>(0x57D8F0, this);
}

void crAnimation::ZeroYSeg(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, crAnimation*, i32, i32>>(0x57D920, this, arg1, arg2);
}

bool crAnimation::AnimExists(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x57D0D0, arg1);
}

class crAnimation* crAnimation::GetAnimation(char const* arg1, bool arg2, bool arg3, class crAnimFrame* arg4, bool arg5)
{
    return stub<cdecl_t<class crAnimation*, char const*, bool, bool, class crAnimFrame*, bool>>(
        0x57D210, arg1, arg2, arg3, arg4, arg5);
}

class crAnimation* crAnimation::GetChanAnimation(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class crAnimation*, char const*, bool>>(0x57D300, arg1, arg2);
}

void crAnimation::InitHashTables()
{
    return stub<cdecl_t<void>>(0x57D150);
}

void crAnimation::OutputAnimationList()
{
    return stub<cdecl_t<void>>(0x57D0F0);
}

crAnimation::crAnimation()
{
    unimplemented();
}

bool crAnimation::LoadAnim(char const* arg1, bool arg2)
{
    return stub<thiscall_t<bool, crAnimation*, char const*, bool>>(0x57D3D0, this, arg1, arg2);
}

bool crAnimation::LoadChanAnim(char const* arg1)
{
    return stub<thiscall_t<bool, crAnimation*, char const*>>(0x57D670, this, arg1);
}

void crAnimation::DeleteAnimTable()
{
    return stub<cdecl_t<void>>(0x57D010);
}

void crAnimation::DeleteChanTable()
{
    return stub<cdecl_t<void>>(0x57D070);
}

define_dummy_symbol(cranimation_animation);
