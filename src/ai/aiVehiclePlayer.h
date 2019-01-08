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
    ai:aiVehiclePlayer

    0x53F320 | public: __thiscall aiVehiclePlayer::aiVehiclePlayer(void) | ??0aiVehiclePlayer@@QAE@XZ
    0x53F340 | public: __thiscall aiVehiclePlayer::~aiVehiclePlayer(void) | ??1aiVehiclePlayer@@QAE@XZ
    0x53F350 | public: void __thiscall aiVehiclePlayer::Attach(class vehCar *) | ?Attach@aiVehiclePlayer@@QAEXPAVvehCar@@@Z
    0x53F360 | public: virtual void __thiscall aiVehiclePlayer::Reset(void) | ?Reset@aiVehiclePlayer@@UAEXXZ
    0x53F420 | public: virtual void __thiscall aiVehiclePlayer::Update(void) | ?Update@aiVehiclePlayer@@UAEXXZ
    0x53F540 | public: virtual int __thiscall aiVehiclePlayer::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiVehiclePlayer@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x53F5B0 | public: virtual int __thiscall aiVehiclePlayer::CurrentRdVert(void) | ?CurrentRdVert@aiVehiclePlayer@@UAEHXZ
    0x53F5C0 | public: virtual void __thiscall aiVehiclePlayer::DrawId(void) | ?DrawId@aiVehiclePlayer@@UAEXXZ
    0x53F5D0 | public: virtual int __thiscall aiObstacle::InAccident(void) | ?InAccident@aiObstacle@@UAEHXZ
    0x53F5E0 | public: virtual float __thiscall aiObstacle::BreakThreshold(void) | ?BreakThreshold@aiObstacle@@UAEMXZ
    0x53F5F0 | public: virtual int __thiscall aiObstacle::Drivable(void) | ?Drivable@aiObstacle@@UAEHXZ
    0x53F600 | public: virtual int __thiscall aiVehiclePlayer::Type(void) | ?Type@aiVehiclePlayer@@UAEHXZ
    0x53F610 | public: virtual float __thiscall aiVehiclePlayer::Speed(void) | ?Speed@aiVehiclePlayer@@UAEMXZ
    0x53F620 | public: virtual void __thiscall aiVehiclePlayer::Position(class Vector3 &) | ?Position@aiVehiclePlayer@@UAEXAAVVector3@@@Z
    0x53F650 | public: virtual class Matrix34 & __thiscall aiVehiclePlayer::GetMatrix(void) | ?GetMatrix@aiVehiclePlayer@@UAEAAVMatrix34@@XZ
    0x53F660 | public: virtual float __thiscall aiVehiclePlayer::FrontBumperDistance(void) | ?FrontBumperDistance@aiVehiclePlayer@@UAEMXZ
    0x53F680 | public: virtual float __thiscall aiVehiclePlayer::BackBumperDistance(void) | ?BackBumperDistance@aiVehiclePlayer@@UAEMXZ
    0x53F6A0 | public: virtual float __thiscall aiVehiclePlayer::LSideDistance(void) | ?LSideDistance@aiVehiclePlayer@@UAEMXZ
    0x53F6C0 | public: virtual float __thiscall aiVehiclePlayer::RSideDistance(void) | ?RSideDistance@aiVehiclePlayer@@UAEMXZ
    0x53F6E0 | public: virtual int __thiscall aiVehiclePlayer::CurrentLane(void) | ?CurrentLane@aiVehiclePlayer@@UAEHXZ
    0x53F6F0 | public: virtual int __thiscall aiVehiclePlayer::CurrentRoadId(void) | ?CurrentRoadId@aiVehiclePlayer@@UAEHXZ
    0x5B55AC | const aiVehiclePlayer::`vftable' | ??_7aiVehiclePlayer@@6B@
*/

#include "hooking.h"
