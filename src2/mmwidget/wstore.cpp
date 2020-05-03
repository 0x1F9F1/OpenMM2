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

#include "wstore.h"

WArray::WArray()
{
    unimplemented();
}

WArray::~WArray()
{
    unimplemented();
}

void WArray::AddWidgetData(i32 arg1, i32 arg2, class Vector4& arg3, char* arg4)
{
    return stub<thiscall_t<void, WArray*, i32, i32, class Vector4&, char*>>(0x4E7A00, this, arg1, arg2, arg3, arg4);
}

void WArray::DumpMenu(class Stream* arg1, class UIMenu* arg2)
{
    return stub<thiscall_t<void, WArray*, class Stream*, class UIMenu*>>(0x4E75F0, this, arg1, arg2);
}

void WArray::Flush()
{
    return stub<thiscall_t<void, WArray*>>(0x4E7830, this);
}

void WArray::Init(i32 arg1)
{
    return stub<thiscall_t<void, WArray*, i32>>(0x4E74F0, this, arg1);
}

void WArray::Read(char* arg1)
{
    return stub<thiscall_t<void, WArray*, char*>>(0x4E7840, this, arg1);
}

i32 WArray::RetrieveWidgetData(i32 arg1, i32 arg2, f32& arg3, f32& arg4, f32& arg5, f32& arg6)
{
    return stub<thiscall_t<i32, WArray*, i32, i32, f32&, f32&, f32&, f32&>>(
        0x4E7A60, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void WArray::Write(char* arg1)
{
    return stub<thiscall_t<void, WArray*, char*>>(0x4E7530, this, arg1);
}

define_dummy_symbol(mmwidget_wstore);
