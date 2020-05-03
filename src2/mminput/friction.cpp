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

#include "friction.h"

i32 mmFrictionFF::Assign(i32 arg1)
{
    return stub<thiscall_t<i32, mmFrictionFF*, i32>>(0x531D60, this, arg1);
}

i32 mmFrictionFF::Init(struct IDirectInputDevice2A* arg1)
{
    return stub<thiscall_t<i32, mmFrictionFF*, struct IDirectInputDevice2A*>>(0x531C20, this, arg1);
}

i32 mmFrictionFF::Play()
{
    return stub<thiscall_t<i32, mmFrictionFF*>>(0x531E20, this);
}

i32 mmFrictionFF::SetValues(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, mmFrictionFF*, f32, f32>>(0x531D30, this, arg1, arg2);
}

i32 mmFrictionFF::Stop()
{
    return stub<thiscall_t<i32, mmFrictionFF*>>(0x531E80, this);
}

define_dummy_symbol(mminput_friction);
