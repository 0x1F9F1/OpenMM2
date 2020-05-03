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

#include "dlg_drec.h"

Dialog_DriverRec::Dialog_DriverRec(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

Dialog_DriverRec::~Dialog_DriverRec()
{
    unimplemented();
}

i32 Dialog_DriverRec::AddDriverRecord(i32 arg1, char* arg2, i32 arg3, f32 arg4, char* arg5, i32 arg6)
{
    return stub<thiscall_t<i32, Dialog_DriverRec*, i32, char*, i32, f32, char*, i32>>(
        0x4FCE50, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void Dialog_DriverRec::InitDriverRecord(i32 arg1)
{
    return stub<thiscall_t<void, Dialog_DriverRec*, i32>>(0x4FCD80, this, arg1);
}

void Dialog_DriverRec::PreSetup()
{
    return stub<thiscall_t<void, Dialog_DriverRec*>>(0x4FCD70, this);
}

void Dialog_DriverRec::ResetDriverRecord()
{
    return stub<thiscall_t<void, Dialog_DriverRec*>>(0x4FD270, this);
}

void Dialog_DriverRec::SetCityState()
{
    return stub<thiscall_t<void, Dialog_DriverRec*>>(0x4FD380, this);
}

void Dialog_DriverRec::SetRecordPosition(i32 arg1)
{
    return stub<thiscall_t<void, Dialog_DriverRec*, i32>>(0x4FD300, this, arg1);
}

void Dialog_DriverRec::SetSortState()
{
    return stub<thiscall_t<void, Dialog_DriverRec*>>(0x4FD320, this);
}

define_dummy_symbol(mmui_dlg_drec);
