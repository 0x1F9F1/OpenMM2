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

#include "togglebutton2.h"

UIToggleButton2::UIToggleButton2()
{
    unimplemented();
}

UIToggleButton2::~UIToggleButton2()
{
    unimplemented();
}

void UIToggleButton2::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, UIToggleButton2*, union eqEvent>>(0x4EE2F0, this, arg1);
}

void UIToggleButton2::Disable()
{
    return stub<thiscall_t<void, UIToggleButton2*>>(0x4EE430, this);
}

void UIToggleButton2::Enable()
{
    return stub<thiscall_t<void, UIToggleButton2*>>(0x4EE420, this);
}

void UIToggleButton2::Init(struct LocString* arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7,
    i32 arg8, class datCallback arg9)
{
    return stub<
        thiscall_t<void, UIToggleButton2*, struct LocString*, i32*, f32, f32, f32, f32, i32, i32, class datCallback>>(
        0x4EE150, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void UIToggleButton2::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UIToggleButton2*, i32>>(0x4EE370, this, arg1);
}

void UIToggleButton2::Unkill()
{
    return stub<thiscall_t<void, UIToggleButton2*>>(0x4EE2A0, this);
}

void UIToggleButton2::Update()
{
    return stub<thiscall_t<void, UIToggleButton2*>>(0x4EE410, this);
}

void UIToggleButton2::DoToggle()
{
    return stub<thiscall_t<void, UIToggleButton2*>>(0x4EE2D0, this);
}

void UIToggleButton2::DrawOff()
{
    return stub<thiscall_t<void, UIToggleButton2*>>(0x4EE220, this);
}

void UIToggleButton2::DrawOn()
{
    return stub<thiscall_t<void, UIToggleButton2*>>(0x4EE260, this);
}

define_dummy_symbol(mmwidget_togglebutton2);
