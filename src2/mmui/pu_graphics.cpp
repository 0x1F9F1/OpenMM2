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

#include "pu_graphics.h"

PUGraphics::PUGraphics(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    unimplemented();
}

PUGraphics::~PUGraphics()
{
    unimplemented();
}

void PUGraphics::CancelAction()
{
    return stub<thiscall_t<void, PUGraphics*>>(0x50A500, this);
}

void PUGraphics::FixClip()
{
    return stub<thiscall_t<void, PUGraphics*>>(0x50A530, this);
}

void PUGraphics::PreSetup()
{
    return stub<thiscall_t<void, PUGraphics*>>(0x50A4B0, this);
}

void PUGraphics::RenderQualityCB()
{
    return stub<thiscall_t<void, PUGraphics*>>(0x50A580, this);
}

void PUGraphics::SetFarClip(f32 arg1)
{
    return stub<thiscall_t<void, PUGraphics*, f32>>(0x50A510, this, arg1);
}

define_dummy_symbol(mmui_pu_graphics);
