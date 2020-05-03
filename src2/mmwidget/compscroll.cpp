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

#include "compscroll.h"

UICompositeScroll::UICompositeScroll()
{
    unimplemented();
}

UICompositeScroll::~UICompositeScroll()
{
    unimplemented();
}

void UICompositeScroll::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, UICompositeScroll*, union eqEvent>>(0x4EB900, this, arg1);
}

void UICompositeScroll::AddComponent(class mmCompBase* arg1)
{
    return stub<thiscall_t<void, UICompositeScroll*, class mmCompBase*>>(0x4EB4F0, this, arg1);
}

void UICompositeScroll::AddTitle(class mmCompBase* arg1)
{
    return stub<thiscall_t<void, UICompositeScroll*, class mmCompBase*>>(0x4EB5C0, this, arg1);
}

void UICompositeScroll::CaptureAction(union eqEvent arg1)
{
    return stub<thiscall_t<void, UICompositeScroll*, union eqEvent>>(0x4EBD10, this, arg1);
}

void UICompositeScroll::Clear()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EBDC0, this);
}

f32 UICompositeScroll::GetHeight()
{
    return stub<thiscall_t<f32, UICompositeScroll*>>(0x4EBE90, this);
}

i32 UICompositeScroll::GetHit(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, UICompositeScroll*, f32, f32>>(0x4EB880, this, arg1, arg2);
}

i32 UICompositeScroll::GetSelectedCount()
{
    return stub<thiscall_t<i32, UICompositeScroll*>>(0x4EB5E0, this);
}

void UICompositeScroll::Init(
    f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, i32 arg6, i32* arg7, i32 arg8, i32 arg9, class datCallback arg10)
{
    return stub<thiscall_t<void, UICompositeScroll*, f32, f32, f32, f32, f32, i32, i32*, i32, i32, class datCallback>>(
        0x4EB1E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

void UICompositeScroll::InitVScroll(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, UICompositeScroll*, f32, f32, f32>>(0x4EB410, this, arg1, arg2, arg3);
}

void UICompositeScroll::Redraw()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EB630, this);
}

void UICompositeScroll::RemoveAllComponentChildren()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EB490, this);
}

void UICompositeScroll::Reset()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EB850, this);
}

void UICompositeScroll::SetHighlight(i32 arg1)
{
    return stub<thiscall_t<void, UICompositeScroll*, i32>>(0x4EBDD0, this, arg1);
}

void UICompositeScroll::SetHighlightComp()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EBDF0, this);
}

void UICompositeScroll::SetPosition(i32 arg1)
{
    return stub<thiscall_t<void, UICompositeScroll*, i32>>(0x4EBEB0, this, arg1);
}

void UICompositeScroll::SetVScrollPos()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EB820, this);
}

void UICompositeScroll::SetVScrollVals()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EB7D0, this);
}

void UICompositeScroll::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UICompositeScroll*, i32>>(0x4EBD80, this, arg1);
}

void UICompositeScroll::Update()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EB870, this);
}

void UICompositeScroll::VScrollCB()
{
    return stub<thiscall_t<void, UICompositeScroll*>>(0x4EB760, this);
}

define_dummy_symbol(mmwidget_compscroll);
