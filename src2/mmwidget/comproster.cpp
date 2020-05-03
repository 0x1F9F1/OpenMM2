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

#include "comproster.h"

mmCompRoster::mmCompRoster()
{
    unimplemented();
}

mmCompRoster::~mmCompRoster()
{
    unimplemented();
}

void mmCompRoster::Cull()
{
    return stub<thiscall_t<void, mmCompRoster*>>(0x59FD90, this);
}

void mmCompRoster::Init(char* arg1, char* arg2, char* arg3, u32 arg4, i32 arg5, i32 arg6)
{
    return stub<thiscall_t<void, mmCompRoster*, char*, char*, char*, u32, i32, i32>>(
        0x59FA00, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void mmCompRoster::InitTitle(f32 arg1, f32 arg2, f32 arg3, f32 arg4, struct LocString* arg5, struct LocString* arg6,
    struct LocString* arg7, struct LocString* arg8, i32 arg9)
{
    return stub<thiscall_t<void, mmCompRoster*, f32, f32, f32, f32, struct LocString*, struct LocString*,
        struct LocString*, struct LocString*, i32>>(
        0x59FAE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void mmCompRoster::LoadBitmap(char* arg1)
{
    return stub<thiscall_t<void, mmCompRoster*, char*>>(0x59FAF0, this, arg1);
}

void mmCompRoster::LoadTeamBitmap(char* arg1)
{
    return stub<thiscall_t<void, mmCompRoster*, char*>>(0x59FB50, this, arg1);
}

void mmCompRoster::Reset()
{
    return stub<thiscall_t<void, mmCompRoster*>>(0x59FB90, this);
}

void mmCompRoster::SetBltXY(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmCompRoster*, f32, f32>>(0x59FD60, this, arg1, arg2);
}

void mmCompRoster::SetCar(char* arg1)
{
    return stub<thiscall_t<void, mmCompRoster*, char*>>(0x59FE70, this, arg1);
}

void mmCompRoster::SetColor(char* arg1)
{
    return stub<thiscall_t<void, mmCompRoster*, char*>>(0x59FE60, this, arg1);
}

void mmCompRoster::SetError()
{
    return stub<thiscall_t<void, mmCompRoster*>>(0x59FBE0, this);
}

void mmCompRoster::SetGeometry(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, mmCompRoster*, f32, f32, f32, f32>>(0x59FD30, this, arg1, arg2, arg3, arg4);
}

void mmCompRoster::SetName(char* arg1)
{
    return stub<thiscall_t<void, mmCompRoster*, char*>>(0x59FE20, this, arg1);
}

void mmCompRoster::SetPosition(class mmTextNode* arg1, i32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, mmCompRoster*, class mmTextNode*, i32, f32>>(0x59FCB0, this, arg1, arg2, arg3);
}

void mmCompRoster::SetReady(i32 arg1)
{
    return stub<thiscall_t<void, mmCompRoster*, i32>>(0x59FC10, this, arg1);
}

void mmCompRoster::SetSubwidgetGeometry()
{
    return stub<thiscall_t<void, mmCompRoster*>>(0x59FC50, this);
}

void mmCompRoster::SetTeam(i32 arg1)
{
    return stub<thiscall_t<void, mmCompRoster*, i32>>(0x59FEB0, this, arg1);
}

void mmCompRoster::Update()
{
    return stub<thiscall_t<void, mmCompRoster*>>(0x59FBA0, this);
}

define_dummy_symbol(mmwidget_comproster);
