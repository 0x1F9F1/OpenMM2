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

#include "phbound/boundgeom.h"

/*
    vehicle:bound

    0x4DA610 | public: __thiscall vehBound::vehBound(void) | ??0vehBound@@QAE@XZ
    0x4DA680 | public: __thiscall vehBound::~vehBound(void) | ??1vehBound@@QAE@XZ
    0x4DA6E0 | public: void __thiscall vehBound::Init(void) | ?Init@vehBound@@QAEXXZ
    0x4DA700 | public: virtual void __thiscall vehBound::SetFriction(float) | ?SetFriction@vehBound@@UAEXM@Z
    0x4DA710 | public: virtual void __thiscall vehBound::SetElasticity(float) | ?SetElasticity@vehBound@@UAEXM@Z
    0x5B3110 | const vehBound::`vftable' | ??_7vehBound@@6B@
*/

class vehBound : public phBoundGeometry
{
    // const vehBound::`vftable' @ 0x5B3110

public:
    // 0x4DA610 | ??0vehBound@@QAE@XZ
    vehBound();

    // 0x4DA680 | ??1vehBound@@QAE@XZ
    ~vehBound();

    // 0x4DA6E0 | ?Init@vehBound@@QAEXXZ
    void Init();

    // 0x4DA710 | ?SetElasticity@vehBound@@UAEXM@Z
    void SetElasticity(f32 arg1) override;

    // 0x4DA700 | ?SetFriction@vehBound@@UAEXM@Z
    void SetFriction(f32 arg1) override;
};

check_size(vehBound, 0x80);
