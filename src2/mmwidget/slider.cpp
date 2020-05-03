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

#include "slider.h"

UISlider::UISlider()
{
    unimplemented();
}

UISlider::~UISlider()
{
    unimplemented();
}

void UISlider::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, UISlider*, union eqEvent>>(0x4ECA00, this, arg1);
}

void UISlider::EvalMouseXY(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, UISlider*, f32, f32>>(0x4ECC30, this, arg1, arg2);
}

f32 UISlider::GetFudgeWidth()
{
    return stub<thiscall_t<f32, UISlider*>>(0x4ECD60, this);
}

f32 UISlider::GetScreenHeight()
{
    return stub<thiscall_t<f32, UISlider*>>(0x4ECDA0, this);
}

f32 UISlider::GetValue()
{
    return stub<thiscall_t<f32, UISlider*>>(0x4ECBA0, this);
}

void UISlider::Init(struct LocString* arg1, f32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8,
    i32 arg9, i32 arg10, i32 arg11, i32 arg12, class datCallback arg13, class UIMenu* arg14, class datCallback arg15)
{
    return stub<thiscall_t<void, UISlider*, struct LocString*, f32*, f32, f32, f32, f32, f32, f32, i32, i32, i32, i32,
        class datCallback, class UIMenu*, class datCallback>>(
        0x4EC630, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}

i32 UISlider::IsReadWrite()
{
    return stub<thiscall_t<i32, UISlider*>>(0x4ECB90, this);
}

void UISlider::SetData(f32 arg1)
{
    return stub<thiscall_t<void, UISlider*, f32>>(0x4ECD40, this, arg1);
}

void UISlider::SetMouseParams(f32 arg1)
{
    return stub<thiscall_t<void, UISlider*, f32>>(0x4ECBE0, this, arg1);
}

void UISlider::SetPosition(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, UISlider*, f32, f32>>(0x4EC860, this, arg1, arg2);
}

void UISlider::SetReadWrite(i32 arg1)
{
    return stub<thiscall_t<void, UISlider*, i32>>(0x4ECB50, this, arg1);
}

void UISlider::SetText(struct LocString* arg1)
{
    return stub<thiscall_t<void, UISlider*, struct LocString*>>(0x4EC990, this, arg1);
}

f32 UISlider::SetValue(f32 arg1)
{
    return stub<thiscall_t<f32, UISlider*, f32>>(0x4ECBB0, this, arg1);
}

void UISlider::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UISlider*, i32>>(0x4ECAC0, this, arg1);
}

i32 UISlider::TestHit(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, UISlider*, f32, f32>>(0x4ECB40, this, arg1, arg2);
}

void UISlider::Update()
{
    return stub<thiscall_t<void, UISlider*>>(0x4EC9A0, this);
}

define_dummy_symbol(mmwidget_slider);
