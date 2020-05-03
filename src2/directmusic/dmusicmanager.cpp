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

#include "dmusicmanager.h"

DMusicManager::DMusicManager()
{
    unimplemented();
}

DMusicManager::~DMusicManager()
{
    unimplemented();
}

void DMusicManager::Activate(i32 arg1)
{
    return stub<thiscall_t<void, DMusicManager*, i32>>(0x5174B0, this, arg1);
}

class DMusicObject* DMusicManager::GetDMusicObjectPtr()
{
    return stub<thiscall_t<class DMusicObject*, DMusicManager*>>(0x5174D0, this);
}

f32 DMusicManager::GetVolume()
{
    return stub<thiscall_t<f32, DMusicManager*>>(0x517520, this);
}

i32 DMusicManager::Init(struct IDirectSound* arg1, i32 arg2, u32 arg3, i32 arg4, u32 arg5, u32 arg6)
{
    return stub<thiscall_t<i32, DMusicManager*, struct IDirectSound*, i32, u32, i32, u32, u32>>(
        0x517420, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void DMusicManager::SetPan(f32 arg1)
{
    return stub<thiscall_t<void, DMusicManager*, f32>>(0x517540, this, arg1);
}

void DMusicManager::SetVolume(f32 arg1)
{
    return stub<thiscall_t<void, DMusicManager*, f32>>(0x5174F0, this, arg1);
}

void DMusicManager::Update()
{
    return stub<thiscall_t<void, DMusicManager*>>(0x5174E0, this);
}

define_dummy_symbol(directmusic_dmusicmanager);
