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

#include "wphud.h"

mmWPHUD::mmWPHUD()
{
    unimplemented();
}

mmWPHUD::~mmWPHUD()
{
    unimplemented();
}

void mmWPHUD::Cull()
{
    return stub<thiscall_t<void, mmWPHUD*>>(0x436950, this);
}

void mmWPHUD::Init(i32 arg1, i32* arg2, i32* arg3, i32 arg4)
{
    return stub<thiscall_t<void, mmWPHUD*, i32, i32*, i32*, i32>>(0x436600, this, arg1, arg2, arg3, arg4);
}

void mmWPHUD::Reset()
{
    return stub<thiscall_t<void, mmWPHUD*>>(0x4368D0, this);
}

void mmWPHUD::SetStandings(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmWPHUD*, i32, i32>>(0x4365C0, this, arg1, arg2);
}

void mmWPHUD::SetWPCleared()
{
    return stub<thiscall_t<void, mmWPHUD*>>(0x436580, this);
}

void mmWPHUD::Update()
{
    return stub<thiscall_t<void, mmWPHUD*>>(0x436920, this);
}

void mmWPHUD::PostUpdate()
{
    return stub<thiscall_t<void, mmWPHUD*>>(0x438960, this);
}

mmCircuitHUD::mmCircuitHUD()
{
    unimplemented();
}

mmCircuitHUD::~mmCircuitHUD()
{
    unimplemented();
}

void mmCircuitHUD::Init()
{
    return stub<thiscall_t<void, mmCircuitHUD*>>(0x436B50, this);
}

void mmCircuitHUD::Reset()
{
    return stub<thiscall_t<void, mmCircuitHUD*>>(0x437200, this);
}

void mmCircuitHUD::SetLapTime(i32 arg1, f32 arg2, char* arg3, i32 arg4)
{
    return stub<thiscall_t<void, mmCircuitHUD*, i32, f32, char*, i32>>(0x437120, this, arg1, arg2, arg3, arg4);
}

void mmCircuitHUD::SetStandings(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmCircuitHUD*, i32, i32>>(0x4370E0, this, arg1, arg2);
}

void mmCircuitHUD::SetWPCleared(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmCircuitHUD*, i32, i32>>(0x4371C0, this, arg1, arg2);
}

void mmCircuitHUD::Update()
{
    return stub<thiscall_t<void, mmCircuitHUD*>>(0x4370D0, this);
}

void mmCircuitHUD::PostUpdate()
{
    return stub<thiscall_t<void, mmCircuitHUD*>>(0x438970, this);
}

mmCRHUD::mmCRHUD()
{
    unimplemented();
}

mmCRHUD::~mmCRHUD()
{
    unimplemented();
}

void mmCRHUD::ActivateGold()
{
    return stub<thiscall_t<void, mmCRHUD*>>(0x4381E0, this);
}

void mmCRHUD::ActivateRosterGold(u32 arg1)
{
    return stub<thiscall_t<void, mmCRHUD*, u32>>(0x438200, this, arg1);
}

void mmCRHUD::AddPlayer(char const* arg1, u32 arg2, i32 arg3, u32 arg4)
{
    return stub<thiscall_t<void, mmCRHUD*, char const*, u32, i32, u32>>(0x437D70, this, arg1, arg2, arg3, arg4);
}

void mmCRHUD::DeactivateGold()
{
    return stub<thiscall_t<void, mmCRHUD*>>(0x4381F0, this);
}

void mmCRHUD::DeactivateRosterGold()
{
    return stub<thiscall_t<void, mmCRHUD*>>(0x438240, this);
}

void mmCRHUD::Init(class Matrix34* arg1, char* arg2, enum mmCRGameClass arg3)
{
    return stub<thiscall_t<void, mmCRHUD*, class Matrix34*, char*, enum mmCRGameClass>>(
        0x437560, this, arg1, arg2, arg3);
}

void mmCRHUD::RemovePlayer(u32 arg1)
{
    return stub<thiscall_t<void, mmCRHUD*, u32>>(0x438050, this, arg1);
}

void mmCRHUD::Reset()
{
    return stub<thiscall_t<void, mmCRHUD*>>(0x438310, this);
}

void mmCRHUD::SetBlueScore(i32 arg1)
{
    return stub<thiscall_t<void, mmCRHUD*, i32>>(0x438320, this, arg1);
}

void mmCRHUD::SetName(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmCRHUD*, char*, i32>>(0x437F60, this, arg1, arg2);
}

void mmCRHUD::SetRedScore(i32 arg1)
{
    return stub<thiscall_t<void, mmCRHUD*, i32>>(0x438360, this, arg1);
}

void mmCRHUD::SetScore(char* arg1)
{
    return stub<thiscall_t<void, mmCRHUD*, char*>>(0x437F40, this, arg1);
}

void mmCRHUD::SetScore(u32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmCRHUD*, u32, i32>>(0x437FE0, this, arg1, arg2);
}

void mmCRHUD::ToggleScores()
{
    return stub<thiscall_t<void, mmCRHUD*>>(0x437D40, this);
}

void mmCRHUD::UnPackColor(u32 arg1, class Vector4& arg2)
{
    return stub<thiscall_t<void, mmCRHUD*, u32, class Vector4&>>(0x437EC0, this, arg1, arg2);
}

void mmCRHUD::Update()
{
    return stub<thiscall_t<void, mmCRHUD*>>(0x438300, this);
}

void mmCRHUD::UpdateGold()
{
    return stub<thiscall_t<void, mmCRHUD*>>(0x438270, this);
}

void mmCRHUD::PostUpdate()
{
    return stub<thiscall_t<void, mmCRHUD*>>(0x4382E0, this);
}

mmCollideHUD::mmCollideHUD()
{
    unimplemented();
}

mmCollideHUD::~mmCollideHUD()
{
    unimplemented();
}

void mmCollideHUD::Init(i32 arg1, i32* arg2, i32* arg3, i32 arg4)
{
    return stub<thiscall_t<void, mmCollideHUD*, i32, i32*, i32*, i32>>(0x438460, this, arg1, arg2, arg3, arg4);
}

void mmCollideHUD::Reset()
{
    return stub<thiscall_t<void, mmCollideHUD*>>(0x438700, this);
}

void mmCollideHUD::SetBangerCount(i32 arg1)
{
    return stub<thiscall_t<void, mmCollideHUD*, i32>>(0x438720, this, arg1);
}

void mmCollideHUD::SetVehicleCount(i32 arg1)
{
    return stub<thiscall_t<void, mmCollideHUD*, i32>>(0x438760, this, arg1);
}

void mmCollideHUD::Update()
{
    return stub<thiscall_t<void, mmCollideHUD*>>(0x4386F0, this);
}

mmGameHUD::~mmGameHUD()
{
    unimplemented();
}

define_dummy_symbol(mmgame_wphud);
