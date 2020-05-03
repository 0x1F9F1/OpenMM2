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

#include "sliderbar.h"

mmSlider::mmSlider()
{
    unimplemented();
}

mmSlider::~mmSlider()
{
    unimplemented();
}

void mmSlider::Cull()
{
    return stub<thiscall_t<void, mmSlider*>>(0x4F3820, this);
}

f32 mmSlider::Dec()
{
    return stub<thiscall_t<f32, mmSlider*>>(0x4F3710, this);
}

f32 mmSlider::FudgeWidth()
{
    return stub<thiscall_t<f32, mmSlider*>>(0x4F35C0, this);
}

f32 mmSlider::GetScreenHeight()
{
    return stub<thiscall_t<f32, mmSlider*>>(0x4F35A0, this);
}

void mmSlider::GetSliderHotSpots(f32& arg1, f32& arg2, f32& arg3, f32& arg4, f32& arg5, f32& arg6)
{
    return stub<thiscall_t<void, mmSlider*, f32&, f32&, f32&, f32&, f32&, f32&>>(
        0x4F3610, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

f32 mmSlider::Inc()
{
    return stub<thiscall_t<f32, mmSlider*>>(0x4F36F0, this);
}

void mmSlider::Init(char* arg1, class uiWidget* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, f32 arg8,
    f32 arg9, i32 arg10, i32 arg11)
{
    return stub<thiscall_t<void, mmSlider*, char*, class uiWidget*, f32, f32, f32, f32, i32, f32, f32, i32, i32>>(
        0x4F3310, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

i32 mmSlider::IsReadWrite()
{
    return stub<thiscall_t<i32, mmSlider*>>(0x4F3530, this);
}

void mmSlider::LoadBitmap(char* arg1)
{
    return stub<thiscall_t<void, mmSlider*, char*>>(0x4F3370, this, arg1);
}

void mmSlider::SetPosition(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmSlider*, f32, f32>>(0x4F35F0, this, arg1, arg2);
}

void mmSlider::SetRange(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmSlider*, f32, f32>>(0x4F37A0, this, arg1, arg2);
}

void mmSlider::SetReadWrite(i32 arg1)
{
    return stub<thiscall_t<void, mmSlider*, i32>>(0x4F3510, this, arg1);
}

void mmSlider::SetStep(f32 arg1)
{
    return stub<thiscall_t<void, mmSlider*, f32>>(0x4F3730, this, arg1);
}

f32 mmSlider::SetValue(f32 arg1)
{
    return stub<thiscall_t<f32, mmSlider*, f32>>(0x4F3540, this, arg1);
}

void mmSlider::Update()
{
    return stub<thiscall_t<void, mmSlider*>>(0x4F3800, this);
}

void mmSlider::UpdatePosition()
{
    return stub<thiscall_t<void, mmSlider*>>(0x4F36C0, this);
}

define_dummy_symbol(mmwidget_sliderbar);
