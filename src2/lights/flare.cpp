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

#include "flare.h"

ltFlare::ltFlare()
{
    unimplemented();
}

void ltFlare::Random()
{
    return stub<thiscall_t<void, ltFlare*>>(0x59BDB0, this);
}

ltLensFlare::ltLensFlare(i32 arg1)
{
    unimplemented();
}

ltLensFlare::~ltLensFlare()
{
    unimplemented();
}

void ltLensFlare::Draw(class Vector3& arg1, class Vector3& arg2, f32 arg3)
{
    return stub<thiscall_t<void, ltLensFlare*, class Vector3&, class Vector3&, f32>>(0x59C1C0, this, arg1, arg2, arg3);
}

void ltLensFlare::DrawBegin()
{
    return stub<thiscall_t<void, ltLensFlare*>>(0x59BFA0, this);
}

void ltLensFlare::DrawEnd()
{
    return stub<thiscall_t<void, ltLensFlare*>>(0x59C0C0, this);
}

define_dummy_symbol(lights_flare);
