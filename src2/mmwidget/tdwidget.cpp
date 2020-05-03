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

#include "tdwidget.h"

TextDropWidget::TextDropWidget()
{
    unimplemented();
}

TextDropWidget::~TextDropWidget()
{
    unimplemented();
}

i32 TextDropWidget::Capture(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, TextDropWidget*, f32, f32>>(0x4F1CB0, this, arg1, arg2);
}

i32 TextDropWidget::Dec()
{
    return stub<thiscall_t<i32, TextDropWidget*>>(0x4F1C40, this);
}

i32 TextDropWidget::DecDrop()
{
    return stub<thiscall_t<i32, TextDropWidget*>>(0x4F1C80, this);
}

i32 TextDropWidget::GetCount()
{
    return stub<thiscall_t<i32, TextDropWidget*>>(0x4F1A50, this);
}

i32 TextDropWidget::GetDisabledMask()
{
    return stub<thiscall_t<i32, TextDropWidget*>>(0x4F1D60, this);
}

i32 TextDropWidget::Inc()
{
    return stub<thiscall_t<i32, TextDropWidget*>>(0x4F1C30, this);
}

i32 TextDropWidget::IncDrop()
{
    return stub<thiscall_t<i32, TextDropWidget*>>(0x4F1C50, this);
}

void TextDropWidget::Init(void* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class string arg7, i32 arg8)
{
    return stub<thiscall_t<void, TextDropWidget*, void*, f32, f32, f32, f32, f32, class string, i32>>(
        0x4F1940, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

i32 TextDropWidget::IsActive()
{
    return stub<thiscall_t<i32, TextDropWidget*>>(0x4F1D20, this);
}

void TextDropWidget::SetActive(i32 arg1)
{
    return stub<thiscall_t<void, TextDropWidget*, i32>>(0x4F1D30, this, arg1);
}

void TextDropWidget::SetDisabledMask(i32 arg1)
{
    return stub<thiscall_t<void, TextDropWidget*, i32>>(0x4F1D40, this, arg1);
}

i32 TextDropWidget::SetHighlight(i32 arg1)
{
    return stub<thiscall_t<i32, TextDropWidget*, i32>>(0x4F1BC0, this, arg1);
}

void TextDropWidget::SetString(class string arg1)
{
    return stub<thiscall_t<void, TextDropWidget*, class string>>(0x4F1A60, this, arg1);
}

i32 TextDropWidget::SetValue(i32 arg1)
{
    return stub<thiscall_t<i32, TextDropWidget*, i32>>(0x4F1B20, this, arg1);
}

void TextDropWidget::Switch(i32 arg1, class Vector4& arg2)
{
    return stub<thiscall_t<void, TextDropWidget*, i32, class Vector4&>>(0x4F1CF0, this, arg1, arg2);
}

void TextDropWidget::Update()
{
    return stub<thiscall_t<void, TextDropWidget*>>(0x4F1D10, this);
}

define_dummy_symbol(mmwidget_tdwidget);
