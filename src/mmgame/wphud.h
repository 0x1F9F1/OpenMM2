/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#pragma once

/*
    mmgame:wphud

    0x4363D0 | public: __thiscall mmWPHUD::mmWPHUD(void) | ??0mmWPHUD@@QAE@XZ
    0x4364D0 | public: virtual __thiscall mmWPHUD::~mmWPHUD(void) | ??1mmWPHUD@@UAE@XZ
    0x436580 | public: void __thiscall mmWPHUD::SetWPCleared(void) | ?SetWPCleared@mmWPHUD@@QAEXXZ
    0x4365C0 | public: void __thiscall mmWPHUD::SetStandings(int,int) | ?SetStandings@mmWPHUD@@QAEXHH@Z
    0x436600 | public: void __thiscall mmWPHUD::Init(int,int *,int *,int) | ?Init@mmWPHUD@@QAEXHPAH0H@Z
    0x4368D0 | public: virtual void __thiscall mmWPHUD::Reset(void) | ?Reset@mmWPHUD@@UAEXXZ
    0x436920 | public: virtual void __thiscall mmWPHUD::Update(void) | ?Update@mmWPHUD@@UAEXXZ
    0x436950 | public: virtual void __thiscall mmWPHUD::Cull(void) | ?Cull@mmWPHUD@@UAEXXZ
    0x436960 | public: __thiscall mmCircuitHUD::mmCircuitHUD(void) | ??0mmCircuitHUD@@QAE@XZ
    0x436A60 | public: virtual __thiscall mmCircuitHUD::~mmCircuitHUD(void) | ??1mmCircuitHUD@@UAE@XZ
    0x436B50 | public: void __thiscall mmCircuitHUD::Init(void) | ?Init@mmCircuitHUD@@QAEXXZ
    0x4370D0 | public: virtual void __thiscall mmCircuitHUD::Update(void) | ?Update@mmCircuitHUD@@UAEXXZ
    0x4370E0 | public: void __thiscall mmCircuitHUD::SetStandings(int,int) | ?SetStandings@mmCircuitHUD@@QAEXHH@Z
    0x437120 | public: void __thiscall mmCircuitHUD::SetLapTime(int,float,char *,int) | ?SetLapTime@mmCircuitHUD@@QAEXHMPADH@Z
    0x4371C0 | public: void __thiscall mmCircuitHUD::SetWPCleared(int,int) | ?SetWPCleared@mmCircuitHUD@@QAEXHH@Z
    0x437200 | public: virtual void __thiscall mmCircuitHUD::Reset(void) | ?Reset@mmCircuitHUD@@UAEXXZ
    0x4372A0 | public: __thiscall mmCRHUD::mmCRHUD(void) | ??0mmCRHUD@@QAE@XZ
    0x437430 | public: virtual __thiscall mmCRHUD::~mmCRHUD(void) | ??1mmCRHUD@@UAE@XZ
    0x437560 | public: void __thiscall mmCRHUD::Init(class Matrix34 *,char *,enum mmCRGameClass) | ?Init@mmCRHUD@@QAEXPAVMatrix34@@PADW4mmCRGameClass@@@Z
    0x437D40 | public: void __thiscall mmCRHUD::ToggleScores(void) | ?ToggleScores@mmCRHUD@@QAEXXZ
    0x437D70 | public: void __thiscall mmCRHUD::AddPlayer(char const *,unsigned long,int,unsigned int) | ?AddPlayer@mmCRHUD@@QAEXPBDKHI@Z
    0x437EC0 | public: void __thiscall mmCRHUD::UnPackColor(unsigned int,class Vector4 &) | ?UnPackColor@mmCRHUD@@QAEXIAAVVector4@@@Z
    0x437F40 | public: void __thiscall mmCRHUD::SetScore(char *) | ?SetScore@mmCRHUD@@QAEXPAD@Z
    0x437F60 | public: void __thiscall mmCRHUD::SetName(char *,int) | ?SetName@mmCRHUD@@QAEXPADH@Z
    0x437FE0 | public: void __thiscall mmCRHUD::SetScore(unsigned long,int) | ?SetScore@mmCRHUD@@QAEXKH@Z
    0x438050 | public: void __thiscall mmCRHUD::RemovePlayer(unsigned long) | ?RemovePlayer@mmCRHUD@@QAEXK@Z
    0x4381E0 | public: void __thiscall mmCRHUD::ActivateGold(void) | ?ActivateGold@mmCRHUD@@QAEXXZ
    0x4381F0 | public: void __thiscall mmCRHUD::DeactivateGold(void) | ?DeactivateGold@mmCRHUD@@QAEXXZ
    0x438200 | public: void __thiscall mmCRHUD::ActivateRosterGold(unsigned long) | ?ActivateRosterGold@mmCRHUD@@QAEXK@Z
    0x438240 | public: void __thiscall mmCRHUD::DeactivateRosterGold(void) | ?DeactivateRosterGold@mmCRHUD@@QAEXXZ
    0x438270 | public: void __thiscall mmCRHUD::UpdateGold(void) | ?UpdateGold@mmCRHUD@@QAEXXZ
    0x4382E0 | public: virtual void __thiscall mmCRHUD::PostUpdate(void) | ?PostUpdate@mmCRHUD@@UAEXXZ
    0x438300 | public: virtual void __thiscall mmCRHUD::Update(void) | ?Update@mmCRHUD@@UAEXXZ
    0x438310 | public: virtual void __thiscall mmCRHUD::Reset(void) | ?Reset@mmCRHUD@@UAEXXZ
    0x438320 | public: void __thiscall mmCRHUD::SetBlueScore(int) | ?SetBlueScore@mmCRHUD@@QAEXH@Z
    0x438360 | public: void __thiscall mmCRHUD::SetRedScore(int) | ?SetRedScore@mmCRHUD@@QAEXH@Z
    0x4383A0 | public: __thiscall mmCollideHUD::mmCollideHUD(void) | ??0mmCollideHUD@@QAE@XZ
    0x4383D0 | public: virtual __thiscall mmCollideHUD::~mmCollideHUD(void) | ??1mmCollideHUD@@UAE@XZ
    0x438460 | public: void __thiscall mmCollideHUD::Init(int,int *,int *,int) | ?Init@mmCollideHUD@@QAEXHPAH0H@Z
    0x4386F0 | public: virtual void __thiscall mmCollideHUD::Update(void) | ?Update@mmCollideHUD@@UAEXXZ
    0x438700 | public: virtual void __thiscall mmCollideHUD::Reset(void) | ?Reset@mmCollideHUD@@UAEXXZ
    0x438720 | public: void __thiscall mmCollideHUD::SetBangerCount(int) | ?SetBangerCount@mmCollideHUD@@QAEXH@Z
    0x438760 | public: void __thiscall mmCollideHUD::SetVehicleCount(int) | ?SetVehicleCount@mmCollideHUD@@QAEXH@Z
    0x4387A0 | public: virtual void * __thiscall mmWPHUD::`scalar deleting destructor'(unsigned int) | ??_GmmWPHUD@@UAEPAXI@Z
    public: virtual void * __thiscall mmWPHUD::`vector deleting destructor'(unsigned int) | ??_EmmWPHUD@@UAEPAXI@Z
    public: virtual void * __thiscall mmCircuitHUD::`vector deleting destructor'(unsigned int) | ??_EmmCircuitHUD@@UAEPAXI@Z
    0x4387D0 | public: virtual void * __thiscall mmCircuitHUD::`scalar deleting destructor'(unsigned int) | ??_GmmCircuitHUD@@UAEPAXI@Z
    0x438800 | public: virtual void * __thiscall mmNumber::`vector deleting destructor'(unsigned int) | ??_EmmNumber@@UAEPAXI@Z
    0x438860 | public: virtual void * __thiscall mmTextNode::`vector deleting destructor'(unsigned int) | ??_EmmTextNode@@UAEPAXI@Z
    public: virtual void * __thiscall mmCRHUD::`vector deleting destructor'(unsigned int) | ??_EmmCRHUD@@UAEPAXI@Z
    0x4388C0 | public: virtual void * __thiscall mmCRHUD::`scalar deleting destructor'(unsigned int) | ??_GmmCRHUD@@UAEPAXI@Z
    public: virtual void * __thiscall mmCollideHUD::`vector deleting destructor'(unsigned int) | ??_EmmCollideHUD@@UAEPAXI@Z
    0x4388F0 | public: virtual void * __thiscall mmCollideHUD::`scalar deleting destructor'(unsigned int) | ??_GmmCollideHUD@@UAEPAXI@Z
    0x438920 | public: virtual __thiscall mmGameHUD::~mmGameHUD(void) | ??1mmGameHUD@@UAE@XZ
    public: virtual void * __thiscall mmGameHUD::`vector deleting destructor'(unsigned int) | ??_EmmGameHUD@@UAEPAXI@Z
    0x438930 | public: virtual void * __thiscall mmGameHUD::`scalar deleting destructor'(unsigned int) | ??_GmmGameHUD@@UAEPAXI@Z
    0x438960 | public: virtual void __thiscall mmWPHUD::PostUpdate(void) | ?PostUpdate@mmWPHUD@@UAEXXZ
    0x438970 | public: virtual void __thiscall mmCircuitHUD::PostUpdate(void) | ?PostUpdate@mmCircuitHUD@@UAEXXZ
    0x5B0F74 | const mmWPHUD::`vftable' | ??_7mmWPHUD@@6B@
    0x5B0FAC | const mmGameHUD::`vftable' | ??_7mmGameHUD@@6B@
    0x5B0FE4 | const mmCircuitHUD::`vftable' | ??_7mmCircuitHUD@@6B@
    0x5B1020 | const mmCRHUD::`vftable' | ??_7mmCRHUD@@6B@
    0x5B1064 | const mmCollideHUD::`vftable' | ??_7mmCollideHUD@@6B@
*/

#include "hooking.h"
