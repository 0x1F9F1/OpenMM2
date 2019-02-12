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
    ai:aiPoliceOfficer

    0x53D910 | public: __thiscall aiPoliceOfficer::aiPoliceOfficer(void) | ??0aiPoliceOfficer@@QAE@XZ
    0x53D920 | public: __thiscall aiPoliceOfficer::~aiPoliceOfficer(void) | ??1aiPoliceOfficer@@QAE@XZ
    0x53D930 | public: void __thiscall aiPoliceOfficer::Init(int) | ?Init@aiPoliceOfficer@@QAEXH@Z
    0x53DAA0 | public: void __thiscall aiPoliceOfficer::Reset(void) | ?Reset@aiPoliceOfficer@@QAEXXZ
    0x53DBF0 | public: void __thiscall aiPoliceOfficer::StartSiren(void) | ?StartSiren@aiPoliceOfficer@@QAEXXZ
    0x53DC40 | public: void __thiscall aiPoliceOfficer::StopSiren(void) | ?StopSiren@aiPoliceOfficer@@QAEXXZ
    0x53DC70 | public: void __thiscall aiPoliceOfficer::Update(void) | ?Update@aiPoliceOfficer@@QAEXXZ
    0x53DFD0 | private: void __thiscall aiPoliceOfficer::DetectPerpetrator(void) | ?DetectPerpetrator@aiPoliceOfficer@@AAEXXZ
    0x53E2A0 | private: int __thiscall aiPoliceOfficer::Fov(class vehCar *) | ?Fov@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E360 | private: int __thiscall aiPoliceOfficer::Speeding(class vehCar *) | ?Speeding@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E370 | private: int __thiscall aiPoliceOfficer::Collision(class vehCar *) | ?Collision@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E390 | private: int __thiscall aiPoliceOfficer::HitMe(class vehCar *) | ?HitMe@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E3B0 | private: int __thiscall aiPoliceOfficer::Stopped(class vehCar *) | ?Stopped@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E3E0 | private: int __thiscall aiPoliceOfficer::IsPerpACop(class vehCar *) | ?IsPerpACop@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E3F0 | private: int __thiscall aiPoliceOfficer::OffRoad(class vehCar *) | ?OffRoad@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E400 | public: int __thiscall aiPoliceOfficer::InPersuit(void) | ?InPersuit@aiPoliceOfficer@@QAEHXZ
    0x53E410 | private: void __thiscall aiPoliceOfficer::FollowPerpetrator(void) | ?FollowPerpetrator@aiPoliceOfficer@@AAEXXZ
    0x53E580 | private: void __thiscall aiPoliceOfficer::ApprehendPerpetrator(void) | ?ApprehendPerpetrator@aiPoliceOfficer@@AAEXXZ
    0x53E700 | private: void __thiscall aiPoliceOfficer::Barricade(void) | ?Barricade@aiPoliceOfficer@@AAEXXZ
    0x53E710 | private: void __thiscall aiPoliceOfficer::Push(void) | ?Push@aiPoliceOfficer@@AAEXXZ
    0x53EA60 | private: void __thiscall aiPoliceOfficer::Block(void) | ?Block@aiPoliceOfficer@@AAEXXZ
    0x53F170 | public: void __thiscall aiPoliceOfficer::PerpEscapes(bool) | ?PerpEscapes@aiPoliceOfficer@@QAEX_N@Z
    0x53F1E0 | public: void __thiscall aiPoliceOfficer::DrawId(void) | ?DrawId@aiPoliceOfficer@@QAEXXZ
    0x53F1F0 | public: void __thiscall aiPoliceOfficer::DrawRouteThroughTraffic(void) | ?DrawRouteThroughTraffic@aiPoliceOfficer@@QAEXXZ
    public: void __thiscall aiPoliceOfficer::AddWidgets(class bkBank *) | ?AddWidgets@aiPoliceOfficer@@QAEXPAVbkBank@@@Z
*/

// #include "hooking.h"
