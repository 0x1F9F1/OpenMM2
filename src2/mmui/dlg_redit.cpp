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

#include "dlg_redit.h"

Dialog_ReplayEdit::Dialog_ReplayEdit(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

Dialog_ReplayEdit::~Dialog_ReplayEdit()
{
    unimplemented();
}

void Dialog_ReplayEdit::PreSetup()
{
    return stub<thiscall_t<void, Dialog_ReplayEdit*>>(0x4FA1F0, this);
}

void Dialog_ReplayEdit::ReplayDescCallback()
{
    return stub<thiscall_t<void, Dialog_ReplayEdit*>>(0x4FA200, this);
}

void Dialog_ReplayEdit::SetDesc(char* arg1)
{
    return stub<thiscall_t<void, Dialog_ReplayEdit*, char*>>(0x4FA210, this, arg1);
}

define_dummy_symbol(mmui_dlg_redit);
