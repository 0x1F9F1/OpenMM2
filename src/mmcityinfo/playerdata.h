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
    mmcityinfo:playerdata

    0x526FE0 | public: __thiscall mmPlayerData::mmPlayerData(void) | ??0mmPlayerData@@QAE@XZ
    0x5270C0 | public: void __thiscall mmPlayerData::operator=(class mmPlayerData &) | ??4mmPlayerData@@QAEXAAV0@@Z
    0x5271B0 | public: int __thiscall mmPlayerData::OpenCityRecord(char *) | ?OpenCityRecord@mmPlayerData@@QAEHPAD@Z
    0x527220 | public: int __thiscall mmPlayerData::CloseCityRecord(void) | ?CloseCityRecord@mmPlayerData@@QAEHXZ
    0x527230 | public: int __thiscall mmPlayerData::GetCheckpointProgress(char *,int) | ?GetCheckpointProgress@mmPlayerData@@QAEHPADH@Z
    0x527250 | public: float __thiscall mmPlayerData::GetTagID(void) | ?GetTagID@mmPlayerData@@QAEMXZ
    0x527260 | public: void __thiscall mmPlayerData::SetTagID(float) | ?SetTagID@mmPlayerData@@QAEXM@Z
    0x527270 | public: int __thiscall mmPlayerData::GetProgress(char *,int) | ?GetProgress@mmPlayerData@@QAEHPADH@Z
    0x5272A0 | public: int __thiscall mmPlayerData::GetPassedMask(char *,int) | ?GetPassedMask@mmPlayerData@@QAEHPADH@Z
    0x527370 | public: int __thiscall mmPlayerData::GetNumPassed(char *,int) | ?GetNumPassed@mmPlayerData@@QAEHPADH@Z
    0x527440 | public: int __thiscall mmPlayerData::GetTotalPassed(char *) | ?GetTotalPassed@mmPlayerData@@QAEHPAD@Z
    0x527530 | public: int __thiscall mmPlayerData::GetScore(char *,int) | ?GetScore@mmPlayerData@@QAEHPADH@Z
    0x527710 | public: int __thiscall mmPlayerData::GetTotalScore(char *) | ?GetTotalScore@mmPlayerData@@QAEHPAD@Z
    0x527890 | public: int __thiscall mmPlayerData::ResolveCheckpointProgress(char *) | ?ResolveCheckpointProgress@mmPlayerData@@QAEHPAD@Z
    0x5279D0 | public: int __thiscall mmPlayerData::ResolveCrashProgress(char *) | ?ResolveCrashProgress@mmPlayerData@@QAEHPAD@Z
    0x527B30 | public: int __thiscall mmPlayerData::RegisterFinish(class mmPlayerRecord,int,int) | ?RegisterFinish@mmPlayerData@@QAEHVmmPlayerRecord@@HH@Z
    0x527BB0 | public: void __thiscall mmPlayerData::Reset(void) | ?Reset@mmPlayerData@@QAEXXZ
    0x527C30 | public: void __thiscall mmPlayerData::SetCity(char *) | ?SetCity@mmPlayerData@@QAEXPAD@Z
    0x527C70 | public: char * __thiscall mmPlayerData::GetCity(void) | ?GetCity@mmPlayerData@@QAEPADXZ
    0x527C80 | public: void __thiscall mmPlayerData::SetName(char *) | ?SetName@mmPlayerData@@QAEXPAD@Z
    0x527CC0 | public: char * __thiscall mmPlayerData::GetName(void) | ?GetName@mmPlayerData@@QAEPADXZ
    0x527CD0 | public: void __thiscall mmPlayerData::SetNetName(char *) | ?SetNetName@mmPlayerData@@QAEXPAD@Z
    0x527D10 | public: char * __thiscall mmPlayerData::GetNetName(void) | ?GetNetName@mmPlayerData@@QAEPADXZ
    0x527D20 | public: void __thiscall mmPlayerData::SetFileName(char *) | ?SetFileName@mmPlayerData@@QAEXPAD@Z
    0x527D60 | public: char * __thiscall mmPlayerData::GetFileName(void) | ?GetFileName@mmPlayerData@@QAEPADXZ
    0x527D70 | public: int __thiscall mmPlayerData::Load(char *) | ?Load@mmPlayerData@@QAEHPAD@Z
    0x527DA0 | public: int __thiscall mmPlayerData::Save(char *,int) | ?Save@mmPlayerData@@QAEHPADH@Z
    0x527E40 | public: unsigned int __thiscall mmPlayerData::ComputeCRC(void) | ?ComputeCRC@mmPlayerData@@QAEIXZ
    0x527EF0 | public: int __thiscall mmPlayerData::LoadBinary(char *) | ?LoadBinary@mmPlayerData@@QAEHPAD@Z
    0x5280B0 | public: int __thiscall mmPlayerData::SaveBinary(char *) | ?SaveBinary@mmPlayerData@@QAEHPAD@Z
    0x528220 | public: virtual __thiscall mmPlayerCityRecord::~mmPlayerCityRecord(void) | ??1mmPlayerCityRecord@@UAE@XZ
*/

// #include "hooking.h"
