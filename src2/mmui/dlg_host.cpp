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

#include "dlg_host.h"

Dialog_Host::Dialog_Host(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

Dialog_Host::~Dialog_Host()
{
    unimplemented();
}

void Dialog_Host::Clear()
{
    return stub<thiscall_t<void, Dialog_Host*>>(0x4FAFA0, this);
}

void Dialog_Host::PasswordCallback()
{
    return stub<thiscall_t<void, Dialog_Host*>>(0x4FAF90, this);
}

void Dialog_Host::PreSetup()
{
    return stub<thiscall_t<void, Dialog_Host*>>(0x4FAF50, this);
}

define_dummy_symbol(mmui_dlg_host);
