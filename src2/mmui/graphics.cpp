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

#include "graphics.h"

void AutoDetect(i32 arg1)
{
    return stub<cdecl_t<void, i32>>(0x4F3F50, arg1);
}

GraphicsOptions::GraphicsOptions(i32 arg1)
{
    unimplemented();
}

GraphicsOptions::~GraphicsOptions()
{
    unimplemented();
}

void GraphicsOptions::CancelAction()
{
    return stub<thiscall_t<void, GraphicsOptions*>>(0x4F53A0, this);
}

void GraphicsOptions::DoneAction()
{
    return stub<thiscall_t<void, GraphicsOptions*>>(0x4F53B0, this);
}

void GraphicsOptions::FocusDescription(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, GraphicsOptions*, void*, void*>>(0x4F53F0, this, arg1, arg2);
}

void GraphicsOptions::PreSetup()
{
    return stub<thiscall_t<void, GraphicsOptions*>>(0x4F5230, this);
}

void GraphicsOptions::ResetDefaultAction()
{
    return stub<thiscall_t<void, GraphicsOptions*>>(0x4F52E0, this);
}

void GraphicsOptions::SetLightQuality()
{
    return stub<thiscall_t<void, GraphicsOptions*>>(0x4F5170, this);
}

void GraphicsOptions::SetRenderer()
{
    return stub<thiscall_t<void, GraphicsOptions*>>(0x4F5220, this);
}

void GraphicsOptions::SetResolution()
{
    return stub<thiscall_t<void, GraphicsOptions*>>(0x4F5140, this);
}

void GraphicsOptions::TogglePeds()
{
    return stub<thiscall_t<void, GraphicsOptions*>>(0x4F5150, this);
}

define_dummy_symbol(mmui_graphics);
