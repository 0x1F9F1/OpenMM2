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

#include "texeldamage.h"

fxTexelDamage::fxTexelDamage()
{
    unimplemented();
}

fxTexelDamage::~fxTexelDamage()
{
    unimplemented();
}

void fxTexelDamage::ApplyDamage(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, fxTexelDamage*, class Vector3 const&, f32>>(0x5921E0, this, arg1, arg2);
}

bool fxTexelDamage::Init(class modStatic* arg1, class modShader* arg2, i32 arg3)
{
    return stub<thiscall_t<bool, fxTexelDamage*, class modStatic*, class modShader*, i32>>(
        0x591D10, this, arg1, arg2, arg3);
}

void fxTexelDamage::Reset()
{
    return stub<thiscall_t<void, fxTexelDamage*>>(0x592190, this);
}

void fxTexelDamage::Kill()
{
    return stub<thiscall_t<void, fxTexelDamage*>>(0x591CD0, this);
}

define_dummy_symbol(effects_texeldamage);
