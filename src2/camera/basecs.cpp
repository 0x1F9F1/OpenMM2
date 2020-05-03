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

#include "basecs.h"

camBaseCS::camBaseCS()
{
    unimplemented();
}

camBaseCS::~camBaseCS()
{
    unimplemented();
}

void camBaseCS::AfterLoad()
{
    return stub<thiscall_t<void, camBaseCS*>>(0x521F30, this);
}

void camBaseCS::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, camBaseCS*, class datParser&>>(0x521EA0, this, arg1);
}

char const* camBaseCS::GetDirName()
{
    return stub<thiscall_t<char const*, camBaseCS*>>(0x521E00, this);
}

i32 camBaseCS::IsViewCSInTransition()
{
    return stub<thiscall_t<i32, camBaseCS*>>(0x521E10, this);
}

void camBaseCS::UpdateView()
{
    return stub<thiscall_t<void, camBaseCS*>>(0x521E30, this);
}

void camBaseCS::MakeActive()
{
    return stub<thiscall_t<void, camBaseCS*>>(0x521520, this);
}

void camBaseCS::UpdateInput()
{
    return stub<thiscall_t<void, camBaseCS*>>(0x520410, this);
}

void camBaseCS::ForceMatrixDelta(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, camBaseCS*, class Vector3 const&>>(0x521E60, this, arg1);
}

void camBaseCS::SetST(f32* arg1)
{
    return stub<thiscall_t<void, camBaseCS*, f32*>>(0x51D750, this, arg1);
}

define_dummy_symbol(camera_basecs);
