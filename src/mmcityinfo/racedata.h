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
    mmcityinfo:racedata

    0x529B80 | public: __thiscall mmRaceData::mmRaceData(void) | ??0mmRaceData@@QAE@XZ
    0x529B90 | public: __thiscall mmRaceData::~mmRaceData(void) | ??1mmRaceData@@QAE@XZ
    0x529BA0 | public: int __thiscall mmRaceData::Load(char *,char *) | ?Load@mmRaceData@@QAEHPAD0@Z
    0x529EB0 | public: int __thiscall mmRaceData::GetNumRaces(void) | ?GetNumRaces@mmRaceData@@QAEHXZ
    0x529EC0 | public: char * __thiscall mmRaceData::GetRaceName(int) | ?GetRaceName@mmRaceData@@QAEPADH@Z
    0x529ED0 | public: int __thiscall mmRaceData::GetCarType(int,enum dgSkillLevel) | ?GetCarType@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    0x529F00 | public: int __thiscall mmRaceData::GetNumLaps(int,enum dgSkillLevel) | ?GetNumLaps@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    0x529F30 | public: float __thiscall mmRaceData::GetTimeLimit(int,enum dgSkillLevel) | ?GetTimeLimit@mmRaceData@@QAEMHW4dgSkillLevel@@@Z
    0x529F60 | public: int __thiscall mmRaceData::GetNumOpponents(int,enum dgSkillLevel) | ?GetNumOpponents@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    0x529F90 | public: int __thiscall mmRaceData::GetNumCops(int,enum dgSkillLevel) | ?GetNumCops@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    0x529FC0 | public: int __thiscall mmRaceData::GetTimeOfDay(int,enum dgSkillLevel) | ?GetTimeOfDay@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    0x529FF0 | public: int __thiscall mmRaceData::GetWeather(int,enum dgSkillLevel) | ?GetWeather@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    0x52A020 | public: float __thiscall mmRaceData::GetPedDensity(int,enum dgSkillLevel) | ?GetPedDensity@mmRaceData@@QAEMHW4dgSkillLevel@@@Z
    0x52A050 | public: float __thiscall mmRaceData::GetAmbientDensity(int,enum dgSkillLevel) | ?GetAmbientDensity@mmRaceData@@QAEMHW4dgSkillLevel@@@Z
    0x52A080 | public: float __thiscall mmRaceData::GetDifficulty(int,enum dgSkillLevel) | ?GetDifficulty@mmRaceData@@QAEMHW4dgSkillLevel@@@Z
*/

#include "hooking.h"
