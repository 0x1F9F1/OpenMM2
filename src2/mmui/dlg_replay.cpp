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

#include "dlg_replay.h"

Dialog_Replay::Dialog_Replay(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

Dialog_Replay::~Dialog_Replay()
{
    unimplemented();
}

void Dialog_Replay::CancelCB()
{
    return stub<thiscall_t<void, Dialog_Replay*>>(0x4FA7E0, this);
}

void Dialog_Replay::DeleteCB()
{
    return stub<thiscall_t<void, Dialog_Replay*>>(0x4FA9A0, this);
}

void Dialog_Replay::DoneCB()
{
    return stub<thiscall_t<void, Dialog_Replay*>>(0x4FA810, this);
}

void Dialog_Replay::EditCB()
{
    return stub<thiscall_t<void, Dialog_Replay*>>(0x4FA830, this);
}

char* Dialog_Replay::GetDescription()
{
    return stub<thiscall_t<char*, Dialog_Replay*>>(0x4FA890, this);
}

char* Dialog_Replay::GetSelectedReplay()
{
    return stub<thiscall_t<char*, Dialog_Replay*>>(0x4FAAB0, this);
}

void Dialog_Replay::LoadAll()
{
    return stub<thiscall_t<void, Dialog_Replay*>>(0x4FAC70, this);
}

void Dialog_Replay::PostSetup()
{
    return stub<thiscall_t<void, Dialog_Replay*>>(0x4FA7B0, this);
}

void Dialog_Replay::PreSetup()
{
    return stub<thiscall_t<void, Dialog_Replay*>>(0x4FA7A0, this);
}

void Dialog_Replay::ScrollCB()
{
    return stub<thiscall_t<void, Dialog_Replay*>>(0x4FA7C0, this);
}

void Dialog_Replay::SetCurrentReplay(i32 arg1)
{
    return stub<thiscall_t<void, Dialog_Replay*, i32>>(0x4FAA60, this, arg1);
}

void Dialog_Replay::SetDescription(char* arg1)
{
    return stub<thiscall_t<void, Dialog_Replay*, char*>>(0x4FA840, this, arg1);
}

void Dialog_Replay::SetDriverStats(char* arg1, char* arg2, char* arg3)
{
    return stub<thiscall_t<void, Dialog_Replay*, char*, char*, char*>>(0x4FAAF0, this, arg1, arg2, arg3);
}

void LoadDlgReplayCB(char const* arg1, bool arg2, void* arg3)
{
    return stub<cdecl_t<void, char const*, bool, void*>>(0x4FABC0, arg1, arg2, arg3);
}

bool isReplayFile(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x4FAB50, arg1);
}

define_dummy_symbol(mmui_dlg_replay);
