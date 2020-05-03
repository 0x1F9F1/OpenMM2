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

#include "aiVehiclePhysics.h"

/*
    ai:aiRouteRacer

    0x53D040 | public: __thiscall aiRouteRacer::aiRouteRacer(void) | ??0aiRouteRacer@@QAE@XZ
    0x53D050 | public: __thiscall aiRouteRacer::~aiRouteRacer(void) | ??1aiRouteRacer@@QAE@XZ
    0x53D060 | public: void __thiscall aiRouteRacer::Init(int,char *) | ?Init@aiRouteRacer@@QAEXHPAD@Z
    0x53D390 | public: void __thiscall aiRouteRacer::Reset(void) | ?Reset@aiRouteRacer@@QAEXXZ
    0x53D3B0 | public: void __thiscall aiRouteRacer::Update(void) | ?Update@aiRouteRacer@@QAEXXZ
    0x53D4B0 | private: void __thiscall aiRouteRacer::DriveRoute(void) | ?DriveRoute@aiRouteRacer@@AAEXXZ
    0x53D6B0 | private: void __thiscall aiRouteRacer::Disabled(void) | ?Disabled@aiRouteRacer@@AAEXXZ
    0x53D6E0 | public: int __thiscall aiRouteRacer::Finished(void) | ?Finished@aiRouteRacer@@QAEHXZ
    0x53D900 | public: void __thiscall aiRouteRacer::DrawRouteThroughTraffic(void) | ?DrawRouteThroughTraffic@aiRouteRacer@@QAEXXZ
    public: void __thiscall aiRouteRacer::AddWidgets(class bkBank &) | ?AddWidgets@aiRouteRacer@@QAEXAAVbkBank@@@Z
*/

class aiRouteRacer : public aiVehiclePhysics
{
public:
    // 0x53D040 | ??0aiRouteRacer@@QAE@XZ
    aiRouteRacer();

    // 0x53D050 | ??1aiRouteRacer@@QAE@XZ
    // 0x53BD60 | ??_EaiRouteRacer@@QAEPAXI@Z
    ~aiRouteRacer();

    // 0x53D900 | ?DrawRouteThroughTraffic@aiRouteRacer@@QAEXXZ
    void DrawRouteThroughTraffic();

    // 0x53D6E0 | ?Finished@aiRouteRacer@@QAEHXZ
    i32 Finished();

    // 0x53D060 | ?Init@aiRouteRacer@@QAEXHPAD@Z
    void Init(i32 arg1, char* arg2);

    // 0x53D390 | ?Reset@aiRouteRacer@@QAEXXZ
    void Reset();

    // 0x53D3B0 | ?Update@aiRouteRacer@@QAEXXZ
    void Update();

private:
    // 0x53D6B0 | ?Disabled@aiRouteRacer@@AAEXXZ
    void Disabled();

    // 0x53D4B0 | ?DriveRoute@aiRouteRacer@@AAEXXZ
    void DriveRoute();
};

check_size(aiRouteRacer, 0x9794);
