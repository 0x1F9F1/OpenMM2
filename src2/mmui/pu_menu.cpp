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

#include "pu_menu.h"

PUMenuBase::PUMenuBase(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6, bool arg7)
{
    unimplemented();
}

PUMenuBase::~PUMenuBase()
{
    unimplemented();
}

f32 PUMenuBase::AddExit(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<f32, PUMenuBase*, f32, f32, f32, f32>>(0x50D0F0, this, arg1, arg2, arg3, arg4);
}

void PUMenuBase::AddOKCancel(class datCallback arg1, class datCallback arg2)
{
    return stub<thiscall_t<void, PUMenuBase*, class datCallback, class datCallback>>(0x50D050, this, arg1, arg2);
}

f32 PUMenuBase::AddPrevious(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<f32, PUMenuBase*, f32, f32, f32, f32>>(0x50CFD0, this, arg1, arg2, arg3, arg4);
}

class gfxBitmap* PUMenuBase::CreateDummyBitmap()
{
    return stub<thiscall_t<class gfxBitmap*, PUMenuBase*>>(0x50CEF0, this);
}

f32 PUMenuBase::CreateTitle(i32 arg1)
{
    return stub<thiscall_t<f32, PUMenuBase*, i32>>(0x50CF90, this, arg1);
}

void PUMenuBase::Cull()
{
    return stub<thiscall_t<void, PUMenuBase*>>(0x50D1A0, this);
}

void PUMenuBase::DisableExit()
{
    return stub<thiscall_t<void, PUMenuBase*>>(0x50D1E0, this);
}

void PUMenuBase::EnableExit()
{
    return stub<thiscall_t<void, PUMenuBase*>>(0x50D1F0, this);
}

void PUMenuBase::Update()
{
    return stub<thiscall_t<void, PUMenuBase*>>(0x50D170, this);
}

define_dummy_symbol(mmui_pu_menu);
