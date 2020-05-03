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

#include "dropdown.h"

mmDropDown::mmDropDown()
{
    unimplemented();
}

mmDropDown::~mmDropDown()
{
    unimplemented();
}

i32 mmDropDown::FindFirstEnabled()
{
    return stub<thiscall_t<i32, mmDropDown*>>(0x4F25E0, this);
}

void mmDropDown::GetCurrentString(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmDropDown*, char*, i32>>(0x4F2510, this, arg1, arg2);
}

f32 mmDropDown::GetH()
{
    return stub<thiscall_t<f32, mmDropDown*>>(0x4F2790, this);
}

i32 mmDropDown::GetHit(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, mmDropDown*, f32, f32>>(0x4F2680, this, arg1, arg2);
}

f32 mmDropDown::GetW()
{
    return stub<thiscall_t<f32, mmDropDown*>>(0x4F2780, this);
}

f32 mmDropDown::GetXmin()
{
    return stub<thiscall_t<f32, mmDropDown*>>(0x4F2760, this);
}

f32 mmDropDown::GetYmin()
{
    return stub<thiscall_t<f32, mmDropDown*>>(0x4F2770, this);
}

void mmDropDown::Init(void* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, class string arg6, i32 arg7)
{
    return stub<thiscall_t<void, mmDropDown*, void*, f32, f32, f32, f32, class string, i32>>(
        0x4F1EA0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void mmDropDown::InitString(class string arg1)
{
    return stub<thiscall_t<void, mmDropDown*, class string>>(0x4F2020, this, arg1);
}

void mmDropDown::SetDisabledColors()
{
    return stub<thiscall_t<void, mmDropDown*>>(0x4F2560, this);
}

void mmDropDown::SetHighlight(i32 arg1)
{
    return stub<thiscall_t<void, mmDropDown*, i32>>(0x4F2610, this, arg1);
}

void mmDropDown::Update()
{
    return stub<thiscall_t<void, mmDropDown*>>(0x4F2750, this);
}

void mmDropDown::SetString(class string arg1)
{
    return stub<thiscall_t<void, mmDropDown*, class string>>(0x4F2420, this, arg1);
}

define_dummy_symbol(mmwidget_dropdown);
