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

#pragma once

#include "aiVehiclePlayer.h"

/*
    ai:aiBanger

    0x56A710 | public: __thiscall aiBanger::aiBanger(class lvlInstance *,int,int) | ??0aiBanger@@QAE@PAVlvlInstance@@HH@Z
    0x56A740 | public: __thiscall aiBanger::~aiBanger(void) | ??1aiBanger@@QAE@XZ
    0x56A750 | public: float __thiscall aiBanger::Radius(void) | ?Radius@aiBanger@@QAEMXZ
    0x56A780 | public: virtual float __thiscall aiBanger::BreakThreshold(void) | ?BreakThreshold@aiBanger@@UAEMXZ
    0x56A790 | public: virtual int __thiscall aiBanger::Drivable(void) | ?Drivable@aiBanger@@UAEHXZ
    0x56A7B0 | public: virtual void __thiscall aiBanger::Position(class Vector3 &) | ?Position@aiBanger@@UAEXAAVVector3@@@Z
    0x56A880 | public: virtual int __thiscall aiBanger::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiBanger@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x56A9D0 | public: virtual int __thiscall aiBanger::CurrentRdVert(void) | ?CurrentRdVert@aiBanger@@UAEHXZ
    0x56AA30 | public: virtual void __thiscall aiBanger::PreAvoid(class Vector3 const &,class Vector3 const &,float,class Vector3 &,class Vector3 &) | ?PreAvoid@aiBanger@@UAEXABVVector3@@0MAAV2@1@Z
    0x56AB60 | public: virtual float __thiscall aiBanger::IsBlockingTarget(class Vector3 const &,class Vector3 const &,float,float) | ?IsBlockingTarget@aiBanger@@UAEMABVVector3@@0MM@Z
    0x56ACE0 | public: void __thiscall aiBanger::Draw(void) | ?Draw@aiBanger@@QAEXXZ
    0x56ACF0 | public: virtual float __thiscall aiBanger::Speed(void) | ?Speed@aiBanger@@UAEMXZ
    0x5B5B84 | const aiBanger::`vftable' | ??_7aiBanger@@6B@
*/

class aiBanger : public aiObstacle
{
    // const aiBanger::`vftable' @ 0x5B5B84

public:
    // 0x56A710 | ??0aiBanger@@QAE@PAVlvlInstance@@HH@Z
    aiBanger(class lvlInstance* arg1, i32 arg2, i32 arg3);

    // 0x56A740 | ??1aiBanger@@QAE@XZ
    ~aiBanger();

    // 0x56A780 | ?BreakThreshold@aiBanger@@UAEMXZ
    f32 BreakThreshold() override;

    // 0x56A9D0 | ?CurrentRdVert@aiBanger@@UAEHXZ
    i32 CurrentRdVert() override;

    // 0x56A880 | ?CurrentRoadIdx@aiBanger@@UAEHPAPAVaiPath@@QA_NPAH@Z
    i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) override;

    // 0x56ACE0 | ?Draw@aiBanger@@QAEXXZ
    void Draw();

    // 0x56A790 | ?Drivable@aiBanger@@UAEHXZ
    i32 Drivable() override;

    // 0x56AB60 | ?IsBlockingTarget@aiBanger@@UAEMABVVector3@@0MM@Z
    f32 IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4) override;

    // 0x56A7B0 | ?Position@aiBanger@@UAEXAAVVector3@@@Z
    void Position(class Vector3& arg1) override;

    // 0x56AA30 | ?PreAvoid@aiBanger@@UAEXABVVector3@@0MAAV2@1@Z
    void PreAvoid(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3& arg4,
        class Vector3& arg5) override;

    // 0x56A750 | ?Radius@aiBanger@@QAEMXZ
    f32 Radius();

    // 0x56ACF0 | ?Speed@aiBanger@@UAEMXZ
    f32 Speed() override;
};

check_size(aiBanger, 0x10);
