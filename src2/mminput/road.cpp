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

#include "road.h"

i32 mmRoadFF::Assign(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmRoadFF*, i32, i32>>(0x531A70, this, arg1, arg2);
}

i32 mmRoadFF::Init(struct IDirectInputDevice2A* arg1)
{
    return stub<thiscall_t<i32, mmRoadFF*, struct IDirectInputDevice2A*>>(0x531940, this, arg1);
}

i32 mmRoadFF::Play()
{
    return stub<thiscall_t<i32, mmRoadFF*>>(0x531B60, this);
}

i32 mmRoadFF::SetValues(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, mmRoadFF*, f32, f32>>(0x531A40, this, arg1, arg2);
}

i32 mmRoadFF::Stop()
{
    return stub<thiscall_t<i32, mmRoadFF*>>(0x531BD0, this);
}

define_dummy_symbol(mminput_road);
