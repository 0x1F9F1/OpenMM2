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
    ai:aiVehicle

    0x5561E0 | public: __thiscall aiVehicle::aiVehicle(void) | ??0aiVehicle@@QAE@XZ
    0x5561F0 | public: __thiscall aiVehicle::~aiVehicle(void) | ??1aiVehicle@@QAE@XZ
    0x556200 | public: void __thiscall aiVehicle::Init(int) | ?Init@aiVehicle@@QAEXH@Z
    0x556210 | public: virtual void __thiscall aiVehicle::Reset(void) | ?Reset@aiVehicle@@UAEXXZ
    0x556230 | public: virtual void __thiscall aiVehicle::Update(void) | ?Update@aiVehicle@@UAEXXZ
    0x556250 | public: virtual void __thiscall aiVehicle::PreAvoid(class Vector3 const &,class Vector3 const &,float,class Vector3 &,class Vector3 &) | ?PreAvoid@aiVehicle@@UAEXABVVector3@@0MAAV2@1@Z
    0x556850 | public: virtual float __thiscall aiVehicle::IsBlockingTarget(class Vector3 const &,class Vector3 const &,float,float) | ?IsBlockingTarget@aiVehicle@@UAEMABVVector3@@0MM@Z
    0x556D00 | public: virtual void __thiscall aiVehicle::ReplayDebug(void) | ?ReplayDebug@aiVehicle@@UAEXXZ
    0x5B59E8 | const aiVehicle::`vftable' | ??_7aiVehicle@@6B@
    0x5B5A3C | const aiObstacle::`vftable' | ??_7aiObstacle@@6B@
*/

class aiVehicle : aiObstacle
{
public:
    // aiVehicle::`vftable' @ 0x5B59E8

    // 0x5561E0 | ??0aiVehicle@@QAE@XZ
    inline aiVehicle()
    {
        stub<member_func_t<void, aiVehicle>>(0x5561E0, this);
    }

    // 0x5561F0 | ??1aiVehicle@@QAE@XZ
    inline ~aiVehicle()
    {
        stub<member_func_t<void, aiVehicle>>(0x5561F0, this);
    }

    // 0x556200 | ?Init@aiVehicle@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, aiVehicle, int32_t>>(0x556200, this, arg1);
    }

    // 0x556250 | ?PreAvoid@aiVehicle@@UAEXABVVector3@@0MAAV2@1@Z
    inline void PreAvoid(class Vector3 const& arg1, class Vector3 const& arg2, float arg3, class Vector3& arg4,
        class Vector3& arg5) override
    {
        return stub<member_func_t<void, aiVehicle, class Vector3 const&, class Vector3 const&, float, class Vector3&,
            class Vector3&>>(0x556250, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x556850 | ?IsBlockingTarget@aiVehicle@@UAEMABVVector3@@0MM@Z
    inline float IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float arg4) override
    {
        return stub<member_func_t<float, aiVehicle, class Vector3 const&, class Vector3 const&, float, float>>(
            0x556850, this, arg1, arg2, arg3, arg4);
    }

    // 0x556230 | ?Update@aiVehicle@@UAEXXZ
    virtual inline void Update()
    {
        return stub<member_func_t<void, aiVehicle>>(0x556230, this);
    }

    // 0x556210 | ?Reset@aiVehicle@@UAEXXZ
    virtual inline void Reset()
    {
        return stub<member_func_t<void, aiVehicle>>(0x556210, this);
    }

    // 0x582519 | __purecall
    virtual inline int32_t Type()
    {
        return stub<member_func_t<int32_t, aiVehicle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline class Matrix34& GetMatrix()
    {
        return stub<member_func_t<class Matrix34&, aiVehicle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline float FrontBumperDistance()
    {
        return stub<member_func_t<float, aiVehicle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline float BackBumperDistance()
    {
        return stub<member_func_t<float, aiVehicle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline float LSideDistance()
    {
        return stub<member_func_t<float, aiVehicle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline float RSideDistance()
    {
        return stub<member_func_t<float, aiVehicle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline int32_t CurrentLane()
    {
        return stub<member_func_t<int32_t, aiVehicle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline int32_t CurrentRoadId()
    {
        return stub<member_func_t<int32_t, aiVehicle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline void DrawId()
    {
        return stub<member_func_t<void, aiVehicle>>(0x582519, this);
    }

    // 0x556D00 | ?ReplayDebug@aiVehicle@@UAEXXZ
    virtual inline void ReplayDebug()
    {
        return stub<member_func_t<void, aiVehicle>>(0x556D00, this);
    }
};
