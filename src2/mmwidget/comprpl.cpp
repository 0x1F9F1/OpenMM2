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

#include "comprpl.h"

mmCompReplay::mmCompReplay()
{
    unimplemented();
}

mmCompReplay::~mmCompReplay()
{
    unimplemented();
}

void mmCompReplay::Box(i32 arg1, class mmTextNode* arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmCompReplay*, i32, class mmTextNode*, i32>>(0x59EDF0, this, arg1, arg2, arg3);
}

void mmCompReplay::Cull()
{
    return stub<thiscall_t<void, mmCompReplay*>>(0x59EE50, this);
}

void mmCompReplay::Highlight(class mmTextNode* arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmCompReplay*, class mmTextNode*, i32>>(0x59EDD0, this, arg1, arg2);
}

void mmCompReplay::Init(char* arg1)
{
    return stub<thiscall_t<void, mmCompReplay*, char*>>(0x59ECD0, this, arg1);
}

void mmCompReplay::InitTitle(f32 arg1, f32 arg2, f32 arg3, f32 arg4, struct LocString* arg5)
{
    return stub<thiscall_t<void, mmCompReplay*, f32, f32, f32, f32, struct LocString*>>(
        0x59ECF0, this, arg1, arg2, arg3, arg4, arg5);
}

void mmCompReplay::Reset()
{
    return stub<thiscall_t<void, mmCompReplay*>>(0x59ED30, this);
}

void mmCompReplay::SetGeometry(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, mmCompReplay*, f32, f32, f32, f32>>(0x59EE20, this, arg1, arg2, arg3, arg4);
}

void mmCompReplay::SetPosition(class mmTextNode* arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, mmCompReplay*, class mmTextNode*, i32, f32>>(0x59ED90, this, arg1, arg2, arg3);
}

void mmCompReplay::SetSubwidgetGeometry()
{
    return stub<thiscall_t<void, mmCompReplay*>>(0x59ED50, this);
}

void mmCompReplay::SetTitleGeometry()
{
    return stub<thiscall_t<void, mmCompReplay*>>(0x59ED70, this);
}

void mmCompReplay::Update()
{
    return stub<thiscall_t<void, mmCompReplay*>>(0x59ED40, this);
}

define_dummy_symbol(mmwidget_comprpl);
