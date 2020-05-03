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

#include "cwarray.h"

UICWArray::UICWArray()
{
    unimplemented();
}

UICWArray::~UICWArray()
{
    unimplemented();
}

void UICWArray::AcceptCapture()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4F0060, this);
}

void UICWArray::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, UICWArray*, union eqEvent>>(0x4EFD80, this, arg1);
}

void UICWArray::CaptureAction(union eqEvent arg1)
{
    return stub<thiscall_t<void, UICWArray*, union eqEvent>>(0x4EFEC0, this, arg1);
}

void UICWArray::CheckCapture()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4F00E0, this);
}

void UICWArray::DebugForceSetting()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4F0250, this);
}

void UICWArray::DefaultCFG()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4F0220, this);
}

void UICWArray::EnterCapture(i32 arg1)
{
    return stub<thiscall_t<void, UICWArray*, i32>>(0x4EFFC0, this, arg1);
}

void UICWArray::ForceCapture()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4F0030, this);
}

void UICWArray::Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5, class datCallback arg6)
{
    return stub<thiscall_t<void, UICWArray*, f32, f32, f32, f32, i32, class datCallback>>(
        0x4EF840, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void UICWArray::LoadCFG()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4F01D0, this);
}

void UICWArray::Redraw()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4EFBE0, this);
}

void UICWArray::Reset()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4EF830, this);
}

void UICWArray::ResetCapture()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4F00B0, this);
}

void UICWArray::SaveCFG()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4F0190, this);
}

void UICWArray::SetStartOffset(i32 arg1)
{
    return stub<thiscall_t<void, UICWArray*, i32>>(0x4EFBA0, this, arg1);
}

void UICWArray::SetVScrollPos()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4EFB70, this);
}

void UICWArray::SetVScrollVals()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4EFB00, this);
}

void UICWArray::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UICWArray*, i32>>(0x4EFD40, this, arg1);
}

void UICWArray::Update()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4EFF30, this);
}

void UICWArray::VScrollCB()
{
    return stub<thiscall_t<void, UICWArray*>>(0x4EFA90, this);
}

define_dummy_symbol(mmwidget_cwarray);
