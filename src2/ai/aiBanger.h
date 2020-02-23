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

struct aiBanger : aiObstacle
{
public:
    // aiBanger::`vftable' @ 0x5B5B84

    // 0x56A710 | ??0aiBanger@@QAE@PAVlvlInstance@@HH@Z
    inline aiBanger(class lvlInstance* arg1, i32 arg2, i32 arg3)
    {
        stub<member_func_t<void, aiBanger, class lvlInstance*, i32, i32>>(0x56A710, this, arg1, arg2, arg3);
    }

    // 0x56A740 | ??1aiBanger@@QAE@XZ
    inline ~aiBanger()
    {
        stub<member_func_t<void, aiBanger>>(0x56A740, this);
    }

    // 0x56A750 | ?Radius@aiBanger@@QAEMXZ
    inline f32 Radius()
    {
        return stub<member_func_t<f32, aiBanger>>(0x56A750, this);
    }

    // 0x56ACE0 | ?Draw@aiBanger@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, aiBanger>>(0x56ACE0, this);
    }

    // 0x56A7B0 | ?Position@aiBanger@@UAEXAAVVector3@@@Z
    inline void Position(class Vector3& arg1) override
    {
        return stub<member_func_t<void, aiBanger, class Vector3&>>(0x56A7B0, this, arg1);
    }

    // 0x56ACF0 | ?Speed@aiBanger@@UAEMXZ
    inline f32 Speed() override
    {
        return stub<member_func_t<f32, aiBanger>>(0x56ACF0, this);
    }

    // 0x56A780 | ?BreakThreshold@aiBanger@@UAEMXZ
    inline f32 BreakThreshold() override
    {
        return stub<member_func_t<f32, aiBanger>>(0x56A780, this);
    }

    // 0x56A790 | ?Drivable@aiBanger@@UAEHXZ
    inline i32 Drivable() override
    {
        return stub<member_func_t<i32, aiBanger>>(0x56A790, this);
    }

    // 0x56A880 | ?CurrentRoadIdx@aiBanger@@UAEHPAPAVaiPath@@QA_NPAH@Z
    inline i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) override
    {
        return stub<member_func_t<i32, aiBanger, class aiPath**, bool* const, i32*>>(0x56A880, this, arg1, arg2, arg3);
    }

    // 0x56A9D0 | ?CurrentRdVert@aiBanger@@UAEHXZ
    inline i32 CurrentRdVert() override
    {
        return stub<member_func_t<i32, aiBanger>>(0x56A9D0, this);
    }

    // 0x56AA30 | ?PreAvoid@aiBanger@@UAEXABVVector3@@0MAAV2@1@Z
    inline void PreAvoid(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3& arg4,
        class Vector3& arg5) override
    {
        return stub<member_func_t<void, aiBanger, class Vector3 const&, class Vector3 const&, f32, class Vector3&,
            class Vector3&>>(0x56AA30, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x56AB60 | ?IsBlockingTarget@aiBanger@@UAEMABVVector3@@0MM@Z
    inline f32 IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4) override
    {
        return stub<member_func_t<f32, aiBanger, class Vector3 const&, class Vector3 const&, f32, f32>>(
            0x56AB60, this, arg1, arg2, arg3, arg4);
    }
};
