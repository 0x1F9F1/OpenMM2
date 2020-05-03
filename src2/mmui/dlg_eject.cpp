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

#include "dlg_eject.h"

Dialog_Eject::Dialog_Eject(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

Dialog_Eject::~Dialog_Eject()
{
    unimplemented();
}

void Dialog_Eject::AddName(char const* arg1, u32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, Dialog_Eject*, char const*, u32, i32>>(0x4F9610, this, arg1, arg2, arg3);
}

void Dialog_Eject::BootButtonCB()
{
    return stub<thiscall_t<void, Dialog_Eject*>>(0x4F95B0, this);
}

void Dialog_Eject::ClearNames()
{
    return stub<thiscall_t<void, Dialog_Eject*>>(0x4F9940, this);
}

i32 Dialog_Eject::FindRosterName(char const* arg1)
{
    return stub<thiscall_t<i32, Dialog_Eject*, char const*>>(0x4F9A10, this, arg1);
}

i32 Dialog_Eject::FindRosterName(u32 arg1)
{
    return stub<thiscall_t<i32, Dialog_Eject*, u32>>(0x4F9A80, this, arg1);
}

void Dialog_Eject::PostNames()
{
    return stub<thiscall_t<void, Dialog_Eject*>>(0x4F99C0, this);
}

void Dialog_Eject::PostSetup()
{
    return stub<thiscall_t<void, Dialog_Eject*>>(0x4F9590, this);
}

void Dialog_Eject::PreSetup()
{
    return stub<thiscall_t<void, Dialog_Eject*>>(0x4F95A0, this);
}

void Dialog_Eject::RemoveName(u32 arg1)
{
    return stub<thiscall_t<void, Dialog_Eject*, u32>>(0x4F9800, this, arg1);
}

void Dialog_Eject::RemoveName(char const* arg1, u32 arg2)
{
    return stub<thiscall_t<void, Dialog_Eject*, char const*, u32>>(0x4F96B0, this, arg1, arg2);
}

void Dialog_Eject::SetBootCB(class datCallback arg1)
{
    return stub<thiscall_t<void, Dialog_Eject*, class datCallback>>(0x4F99F0, this, arg1);
}

define_dummy_symbol(mmui_dlg_eject);
