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

#include "popup.h"

mmPopup::mmPopup(class mmGame* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    unimplemented();
}

mmPopup::~mmPopup()
{
    unimplemented();
}

void mmPopup::ChatCB()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42B510, this);
}

void mmPopup::DisablePU(i32 arg1)
{
    return stub<thiscall_t<void, mmPopup*, i32>>(0x42A290, this, arg1);
}

void mmPopup::ForceRoster()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42A7A0, this);
}

char* mmPopup::GetComment()
{
    return stub<thiscall_t<char*, mmPopup*>>(0x42B450, this);
}

i32 mmPopup::IsEnabled()
{
    return stub<thiscall_t<i32, mmPopup*>>(0x42A280, this);
}

void mmPopup::Lock()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42B4F0, this);
}

void mmPopup::PlayPauseMusic()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42B570, this);
}

void mmPopup::PlayReturnMusic()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42B5B0, this);
}

void mmPopup::ProcessChat()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42A400, this);
}

void mmPopup::ProcessEscape(i32 arg1)
{
    return stub<thiscall_t<void, mmPopup*, i32>>(0x42A320, this, arg1);
}

void mmPopup::ProcessKeymap(i32 arg1)
{
    return stub<thiscall_t<void, mmPopup*, i32>>(0x42A4B0, this, arg1);
}

void mmPopup::Reset()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42B430, this);
}

void mmPopup::SaveReplay()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42B480, this);
}

void mmPopup::SetComment(char* arg1)
{
    return stub<thiscall_t<void, mmPopup*, char*>>(0x42B460, this, arg1);
}

void mmPopup::ShowReplay()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42A760, this);
}

void mmPopup::ShowResults(i32 arg1)
{
    return stub<thiscall_t<void, mmPopup*, i32>>(0x42A5E0, this, arg1);
}

void mmPopup::ShowRoster()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42A6D0, this);
}

void mmPopup::Unlock()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42B500, this);
}

void mmPopup::Update()
{
    return stub<thiscall_t<void, mmPopup*>>(0x42A830, this);
}

define_dummy_symbol(mmgame_popup);
