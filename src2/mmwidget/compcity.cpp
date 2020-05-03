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

#include "compcity.h"

mmCompCity::mmCompCity()
{
    unimplemented();
}

mmCompCity::~mmCompCity()
{
    unimplemented();
}

void mmCompCity::Box(i32 arg1, class mmTextNode* arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmCompCity*, i32, class mmTextNode*, i32>>(0x59EAB0, this, arg1, arg2, arg3);
}

void mmCompCity::Cull()
{
    return stub<thiscall_t<void, mmCompCity*>>(0x59EB10, this);
}

void mmCompCity::Highlight(class mmTextNode* arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmCompCity*, class mmTextNode*, i32>>(0x59EA60, this, arg1, arg2);
}

void mmCompCity::Init(char* arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, mmCompCity*, char*, i32, i32, i32>>(0x59E8A0, this, arg1, arg2, arg3, arg4);
}

void mmCompCity::InitTitle(f32 arg1, f32 arg2, f32 arg3, f32 arg4, struct LocString* arg5, struct LocString* arg6,
    struct LocString* arg7, struct LocString* arg8)
{
    return stub<thiscall_t<void, mmCompCity*, f32, f32, f32, f32, struct LocString*, struct LocString*,
        struct LocString*, struct LocString*>>(0x59E910, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

void mmCompCity::Reset()
{
    return stub<thiscall_t<void, mmCompCity*>>(0x59E980, this);
}

void mmCompCity::SetGeometry(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, mmCompCity*, f32, f32, f32, f32>>(0x59EAE0, this, arg1, arg2, arg3, arg4);
}

void mmCompCity::SetPosition(class mmTextNode* arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, mmCompCity*, class mmTextNode*, i32, f32>>(0x59EA20, this, arg1, arg2, arg3);
}

void mmCompCity::SetSubwidgetGeometry()
{
    return stub<thiscall_t<void, mmCompCity*>>(0x59E9A0, this);
}

void mmCompCity::SetTitleGeometry()
{
    return stub<thiscall_t<void, mmCompCity*>>(0x59EA00, this);
}

void mmCompCity::Update()
{
    return stub<thiscall_t<void, mmCompCity*>>(0x59E990, this);
}

mmCompBase::~mmCompBase()
{
    unimplemented();
}

void mmCompBase::Reset()
{
    return stub<thiscall_t<void, mmCompBase*>>(0x59FF20, this);
}

void mmCompBase::Update()
{
    return stub<thiscall_t<void, mmCompBase*>>(0x59FF30, this);
}

void mmCompBase::DisableBlt()
{
    return stub<thiscall_t<void, mmCompBase*>>(0x59EB60, this);
}

void mmCompBase::SetBltXY(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmCompBase*, f32, f32>>(0x59EB70, this, arg1, arg2);
}

void mmCompBase::Action(union eqEvent arg1, f32 arg2, f32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, mmCompBase*, union eqEvent, f32, f32, i32>>(0x59EBC0, this, arg1, arg2, arg3, arg4);
}

void mmCompBase::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, mmCompBase*, union eqEvent>>(0x59EB90, this, arg1);
}

void mmCompBase::CaptureAction(union eqEvent arg1)
{
    return stub<thiscall_t<void, mmCompBase*, union eqEvent>>(0x59EBA0, this, arg1);
}

void mmCompBase::Switch(i32 arg1)
{
    return stub<thiscall_t<void, mmCompBase*, i32>>(0x59EBB0, this, arg1);
}

void mmCompBase::EvalMouseXY(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmCompBase*, f32, f32>>(0x59EBD0, this, arg1, arg2);
}

void mmCompBase::Highlight(class mmTextNode* arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmCompBase*, class mmTextNode*, i32>>(0x59EBE0, this, arg1, arg2);
}

void mmCompBase::Box(i32 arg1, class mmTextNode* arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmCompBase*, i32, class mmTextNode*, i32>>(0x59EBF0, this, arg1, arg2, arg3);
}

void mmCompBase::SetGeometry(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, mmCompBase*, f32, f32, f32, f32>>(0x59EC00, this, arg1, arg2, arg3, arg4);
}

void mmCompBase::SetPosition(class mmTextNode* arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, mmCompBase*, class mmTextNode*, i32, f32>>(0x0, this, arg1, arg2, arg3);
}

define_dummy_symbol(mmwidget_compcity);
