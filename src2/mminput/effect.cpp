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

#include "effect.h"

i32 __stdcall inputEnumEffectTypeProc(struct DIEFFECTINFOA const* arg1, void* arg2)
{
    return stub<stdcall_t<i32, struct DIEFFECTINFOA const*, void*>>(0x5314E0, arg1, arg2);
}

mmEffectFF::mmEffectFF()
{
    unimplemented();
}

mmEffectFF::~mmEffectFF()
{
    unimplemented();
}

i32 mmEffectFF::Init(struct IDirectInputDevice2A* arg1)
{
    return stub<thiscall_t<i32, mmEffectFF*, struct IDirectInputDevice2A*>>(0x0, this, arg1);
}

i32 mmEffectFF::Play()
{
    return stub<thiscall_t<i32, mmEffectFF*>>(0x5315D0, this);
}

i32 mmEffectFF::Stop()
{
    return stub<thiscall_t<i32, mmEffectFF*>>(0x5315E0, this);
}

i32 mmEffectFF::SetValues(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, mmEffectFF*, f32, f32>>(0x5315F0, this, arg1, arg2);
}

define_dummy_symbol(mminput_effect);
