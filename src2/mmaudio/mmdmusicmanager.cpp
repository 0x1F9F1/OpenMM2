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

#include "mmdmusicmanager.h"

MMDMusicManager::MMDMusicManager()
{
    unimplemented();
}

MMDMusicManager::~MMDMusicManager()
{
    unimplemented();
}

void MMDMusicManager::CreateSpeedRanges(i32 arg1)
{
    return stub<thiscall_t<void, MMDMusicManager*, i32>>(0x51A170, this, arg1);
}

void MMDMusicManager::EchoOff()
{
    return stub<thiscall_t<void, MMDMusicManager*>>(0x51A3A0, this);
}

void MMDMusicManager::EchoOn(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, MMDMusicManager*, f32, f32>>(0x51A2D0, this, arg1, arg2);
}

void MMDMusicManager::Init(i32 arg1, u32 arg2)
{
    return stub<thiscall_t<void, MMDMusicManager*, i32, u32>>(0x519F60, this, arg1, arg2);
}

void MMDMusicManager::MatchMusicToPlayerSpeed(f32 arg1)
{
    return stub<thiscall_t<void, MMDMusicManager*, f32>>(0x51A1D0, this, arg1);
}

void MMDMusicManager::Reset()
{
    return stub<thiscall_t<void, MMDMusicManager*>>(0x51A2C0, this);
}

void MMDMusicManager::SetSpeedEventRange(f32 arg1, f32 arg2, u8 arg3, i32 arg4)
{
    return stub<thiscall_t<void, MMDMusicManager*, f32, f32, u8, i32>>(0x51A1A0, this, arg1, arg2, arg3, arg4);
}

void MMDMusicManager::Update()
{
    return stub<thiscall_t<void, MMDMusicManager*>>(0x519FE0, this);
}

void MMDMusicManager::UpdateAmbientSFX()
{
    return stub<thiscall_t<void, MMDMusicManager*>>(0x51A020, this);
}

void MMDMusicManager::UpdateMusic(f32 arg1, i32 arg2, bool arg3)
{
    return stub<thiscall_t<void, MMDMusicManager*, f32, i32, bool>>(0x51A070, this, arg1, arg2, arg3);
}

void MMDMusicManager::UpdateSeconds()
{
    return stub<thiscall_t<void, MMDMusicManager*>>(0x519FF0, this);
}

void MMDMusicManager::UpdateSpeedEvents()
{
    return stub<thiscall_t<void, MMDMusicManager*>>(0x51A0F0, this);
}

define_dummy_symbol(mmaudio_mmdmusicmanager);
