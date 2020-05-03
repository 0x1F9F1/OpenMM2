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

#include "dlg_city2.h"

Dialog_City2::Dialog_City2(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

Dialog_City2::~Dialog_City2()
{
    unimplemented();
}

void Dialog_City2::CancelCB()
{
    return stub<thiscall_t<void, Dialog_City2*>>(0x4F9EB0, this);
}

void Dialog_City2::DoneCB()
{
    return stub<thiscall_t<void, Dialog_City2*>>(0x4F9EE0, this);
}

void Dialog_City2::PostSetup()
{
    return stub<thiscall_t<void, Dialog_City2*>>(0x4F9E90, this);
}

void Dialog_City2::PreSetup()
{
    return stub<thiscall_t<void, Dialog_City2*>>(0x4F9E80, this);
}

void Dialog_City2::ScrollCB()
{
    return stub<thiscall_t<void, Dialog_City2*>>(0x4F9EA0, this);
}

void Dialog_City2::SetCurrentCity(i32 arg1)
{
    return stub<thiscall_t<void, Dialog_City2*, i32>>(0x4F9F80, this, arg1);
}

define_dummy_symbol(mmui_dlg_city2);
