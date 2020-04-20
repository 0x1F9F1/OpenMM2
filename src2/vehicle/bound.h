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
    vehicle:bound

    0x4DA610 | public: __thiscall vehBound::vehBound(void) | ??0vehBound@@QAE@XZ
    0x4DA680 | public: __thiscall vehBound::~vehBound(void) | ??1vehBound@@QAE@XZ
    0x4DA6E0 | public: void __thiscall vehBound::Init(void) | ?Init@vehBound@@QAEXXZ
    0x4DA700 | public: virtual void __thiscall vehBound::SetFriction(float) | ?SetFriction@vehBound@@UAEXM@Z
    0x4DA710 | public: virtual void __thiscall vehBound::SetElasticity(float) | ?SetElasticity@vehBound@@UAEXM@Z
    0x5B3110 | const vehBound::`vftable' | ??_7vehBound@@6B@
*/

struct vehBound : phBoundGeometry
{
public:
    // vehBound::`vftable' @ 0x5B3110

    // 0x4DA610 | ??0vehBound@@QAE@XZ
    inline vehBound()
    {
        stub<member_func_t<void, vehBound>>(0x4DA610, this);
    }

    // 0x4DA680 | ??1vehBound@@QAE@XZ
    inline ~vehBound()
    {
        stub<member_func_t<void, vehBound>>(0x4DA680, this);
    }

    // 0x4DA6E0 | ?Init@vehBound@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, vehBound>>(0x4DA6E0, this);
    }

    // 0x4DA700 | ?SetFriction@vehBound@@UAEXM@Z
    inline void SetFriction(float arg1) override
    {
        return stub<member_func_t<void, vehBound, float>>(0x4DA700, this, arg1);
    }

    // 0x4DA710 | ?SetElasticity@vehBound@@UAEXM@Z
    inline void SetElasticity(float arg1) override
    {
        return stub<member_func_t<void, vehBound, float>>(0x4DA710, this, arg1);
    }
};
