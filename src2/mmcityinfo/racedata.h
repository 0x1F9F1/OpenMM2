/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

class mmRaceData
{
public:
    // 0x529B80 | ??0mmRaceData@@QAE@XZ
    inline mmRaceData()
    {
        stub<member_func_t<void, mmRaceData>>(0x529B80, this);
    }

    // 0x529B90 | ??1mmRaceData@@QAE@XZ
    inline ~mmRaceData()
    {
        stub<member_func_t<void, mmRaceData>>(0x529B90, this);
    }

    // 0x529BA0 | ?Load@mmRaceData@@QAEHPAD0@Z
    inline i32 Load(char* arg1, char* arg2)
    {
        return stub<member_func_t<i32, mmRaceData, char*, char*>>(0x529BA0, this, arg1, arg2);
    }

    // 0x529EB0 | ?GetNumRaces@mmRaceData@@QAEHXZ
    inline i32 GetNumRaces()
    {
        return stub<member_func_t<i32, mmRaceData>>(0x529EB0, this);
    }

    // 0x529EC0 | ?GetRaceName@mmRaceData@@QAEPADH@Z
    inline char* GetRaceName(i32 arg1)
    {
        return stub<member_func_t<char*, mmRaceData, i32>>(0x529EC0, this, arg1);
    }

    // 0x529ED0 | ?GetCarType@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    inline i32 GetCarType(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<i32, mmRaceData, i32, enum dgSkillLevel>>(0x529ED0, this, arg1, arg2);
    }

    // 0x529F00 | ?GetNumLaps@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    inline i32 GetNumLaps(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<i32, mmRaceData, i32, enum dgSkillLevel>>(0x529F00, this, arg1, arg2);
    }

    // 0x529F30 | ?GetTimeLimit@mmRaceData@@QAEMHW4dgSkillLevel@@@Z
    inline f32 GetTimeLimit(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<f32, mmRaceData, i32, enum dgSkillLevel>>(0x529F30, this, arg1, arg2);
    }

    // 0x529F60 | ?GetNumOpponents@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    inline i32 GetNumOpponents(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<i32, mmRaceData, i32, enum dgSkillLevel>>(0x529F60, this, arg1, arg2);
    }

    // 0x529F90 | ?GetNumCops@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    inline i32 GetNumCops(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<i32, mmRaceData, i32, enum dgSkillLevel>>(0x529F90, this, arg1, arg2);
    }

    // 0x529FC0 | ?GetTimeOfDay@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    inline i32 GetTimeOfDay(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<i32, mmRaceData, i32, enum dgSkillLevel>>(0x529FC0, this, arg1, arg2);
    }

    // 0x529FF0 | ?GetWeather@mmRaceData@@QAEHHW4dgSkillLevel@@@Z
    inline i32 GetWeather(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<i32, mmRaceData, i32, enum dgSkillLevel>>(0x529FF0, this, arg1, arg2);
    }

    // 0x52A020 | ?GetPedDensity@mmRaceData@@QAEMHW4dgSkillLevel@@@Z
    inline f32 GetPedDensity(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<f32, mmRaceData, i32, enum dgSkillLevel>>(0x52A020, this, arg1, arg2);
    }

    // 0x52A050 | ?GetAmbientDensity@mmRaceData@@QAEMHW4dgSkillLevel@@@Z
    inline f32 GetAmbientDensity(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<f32, mmRaceData, i32, enum dgSkillLevel>>(0x52A050, this, arg1, arg2);
    }

    // 0x52A080 | ?GetDifficulty@mmRaceData@@QAEMHW4dgSkillLevel@@@Z
    inline f32 GetDifficulty(i32 arg1, enum dgSkillLevel arg2)
    {
        return stub<member_func_t<f32, mmRaceData, i32, enum dgSkillLevel>>(0x52A080, this, arg1, arg2);
    }
};
