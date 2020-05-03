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

#include "head.h"

class audHead* audHead::Create(class audManager* arg1)
{
    return stub<thiscall_t<class audHead*, audHead*, class audManager*>>(0x5A6500, this, arg1);
}

void audHead::Destroy()
{
    return stub<thiscall_t<void, audHead*>>(0x5A65A0, this);
}

i32 audHead::GetHandle()
{
    return stub<thiscall_t<i32, audHead*>>(0x5A65C0, this);
}

struct _audvector3_* audHead::GetHeadFacingDir()
{
    return stub<thiscall_t<struct _audvector3_*, audHead*>>(0x5A6660, this);
}

struct _audvector3_* audHead::GetHeadPosition()
{
    return stub<thiscall_t<struct _audvector3_*, audHead*>>(0x5A65F0, this);
}

struct _audvector3_* audHead::GetHeadVelocity()
{
    return stub<thiscall_t<struct _audvector3_*, audHead*>>(0x5A6620, this);
}

bool audHead::GetHeadVolumePanPitch(
    struct _audvector3_* arg1, struct _audvector3_* arg2, f32* arg3, f32* arg4, f32* arg5)
{
    return stub<thiscall_t<bool, audHead*, struct _audvector3_*, struct _audvector3_*, f32*, f32*, f32*>>(
        0x5A6750, this, arg1, arg2, arg3, arg4, arg5);
}

void audHead::Init()
{
    return stub<thiscall_t<void, audHead*>>(0x5A6530, this);
}

void audHead::SetHandle(i32 arg1)
{
    return stub<thiscall_t<void, audHead*, i32>>(0x5A65B0, this, arg1);
}

void audHead::SetHeadFacingDir(struct _audvector3_* arg1, bool arg2)
{
    return stub<thiscall_t<void, audHead*, struct _audvector3_*, bool>>(0x5A6630, this, arg1, arg2);
}

void audHead::SetHeadLimits(struct _audvector3_* arg1, struct _audvector3_* arg2)
{
    return stub<thiscall_t<void, audHead*, struct _audvector3_*, struct _audvector3_*>>(0x5A66A0, this, arg1, arg2);
}

void audHead::SetHeadMinLimit(f32 arg1)
{
    return stub<thiscall_t<void, audHead*, f32>>(0x5A6740, this, arg1);
}

void audHead::SetHeadPosition(struct _audvector3_* arg1)
{
    return stub<thiscall_t<void, audHead*, struct _audvector3_*>>(0x5A65D0, this, arg1);
}

void audHead::SetHeadTF(struct _audvector3_* arg1, struct _audvector3_* arg2)
{
    return stub<thiscall_t<void, audHead*, struct _audvector3_*, struct _audvector3_*>>(0x5A6670, this, arg1, arg2);
}

void audHead::SetHeadVelocity(struct _audvector3_* arg1)
{
    return stub<thiscall_t<void, audHead*, struct _audvector3_*>>(0x5A6600, this, arg1);
}

define_dummy_symbol(aud_head);
