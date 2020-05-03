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

#include "pu_roster.h"

PURoster::PURoster(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    unimplemented();
}

PURoster::~PURoster()
{
    unimplemented();
}

void PURoster::AddName(char const* arg1, u32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, PURoster*, char const*, u32, i32>>(0x50AB50, this, arg1, arg2, arg3);
}

void PURoster::BootButtonCB()
{
    return stub<thiscall_t<void, PURoster*>>(0x50AA80, this);
}

void PURoster::ClearNames()
{
    return stub<thiscall_t<void, PURoster*>>(0x50AEA0, this);
}

i32 PURoster::FindRosterName(char const* arg1)
{
    return stub<thiscall_t<i32, PURoster*, char const*>>(0x50AF70, this, arg1);
}

i32 PURoster::FindRosterName(u32 arg1)
{
    return stub<thiscall_t<i32, PURoster*, u32>>(0x50AFE0, this, arg1);
}

void PURoster::PostNames()
{
    return stub<thiscall_t<void, PURoster*>>(0x50AF20, this);
}

void PURoster::RemoveName(u32 arg1)
{
    return stub<thiscall_t<void, PURoster*, u32>>(0x50AD70, this, arg1);
}

void PURoster::RemoveName(char const* arg1, u32 arg2)
{
    return stub<thiscall_t<void, PURoster*, char const*, u32>>(0x50AC30, this, arg1, arg2);
}

void PURoster::Reset()
{
    return stub<thiscall_t<void, PURoster*>>(0x50AA70, this);
}

void PURoster::SetBootCB(class datCallback arg1)
{
    return stub<thiscall_t<void, PURoster*, class datCallback>>(0x50AF50, this, arg1);
}

void PURoster::SetHost(i32 arg1)
{
    return stub<thiscall_t<void, PURoster*, i32>>(0x50AAE0, this, arg1);
}

define_dummy_symbol(mmui_pu_roster);
