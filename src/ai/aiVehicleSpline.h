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
    ai:aiVehicleSpline

    0x567DF0 | public: __thiscall aiVehicleSpline::aiVehicleSpline(void) | ??0aiVehicleSpline@@QAE@XZ
    0x567EB0 | public: __thiscall aiVehicleSpline::~aiVehicleSpline(void) | ??1aiVehicleSpline@@QAE@XZ
    0x567F30 | public: void __thiscall aiVehicleSpline::Init(char *,int) | ?Init@aiVehicleSpline@@QAEXPADH@Z
    0x568050 | public: virtual void __thiscall aiVehicleSpline::Reset(void) | ?Reset@aiVehicleSpline@@UAEXXZ
    0x568100 | public: virtual void __thiscall aiVehicleSpline::Update(void) | ?Update@aiVehicleSpline@@UAEXXZ
    0x568180 | public: void __thiscall aiVehicleSpline::ResetReactTicks(void) | ?ResetReactTicks@aiVehicleSpline@@QAEXXZ
    0x5681C0 | public: virtual int __thiscall aiVehicleSpline::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiVehicleSpline@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x5683F0 | public: virtual int __thiscall aiVehicleSpline::CurrentRdVert(void) | ?CurrentRdVert@aiVehicleSpline@@UAEHXZ
    0x568410 | public: void __thiscall aiVehicleSpline::UpdateObstacleMap(void) | ?UpdateObstacleMap@aiVehicleSpline@@QAEXXZ
    protected: int __thiscall aiVehicleSpline::CheckData(void) | ?CheckData@aiVehicleSpline@@IAEHXZ
    protected: void __thiscall aiVehicleSpline::CheckPosition(void) | ?CheckPosition@aiVehicleSpline@@IAEXXZ
    public: void __thiscall aiVehicleSpline::SolvePositionAndOrientation(void) | ?SolvePositionAndOrientation@aiVehicleSpline@@QAEXXZ
    public: void __thiscall aiVehicleSpline::SolveYPositionAndOrientation(void) | ?SolveYPositionAndOrientation@aiVehicleSpline@@QAEXXZ
    0x5696B0 | public: int __thiscall aiVehicleSpline::DetectPlayerForwardCollision(int) | ?DetectPlayerForwardCollision@aiVehicleSpline@@QAEHH@Z
    0x5697B0 | public: int __thiscall aiVehicleSpline::DetectPlayerTargetPtCollision(int) | ?DetectPlayerTargetPtCollision@aiVehicleSpline@@QAEHH@Z
    0x569930 | public: int __thiscall aiVehicleSpline::DetectPlayerCollision(int) | ?DetectPlayerCollision@aiVehicleSpline@@QAEHH@Z
    0x569AC0 | public: int __thiscall aiVehicleSpline::DetectPlayerZoneCollision(int) | ?DetectPlayerZoneCollision@aiVehicleSpline@@QAEHH@Z
    0x569CB0 | public: int __thiscall aiVehicleSpline::IsThePlayerInFrontOfMe(int) | ?IsThePlayerInFrontOfMe@aiVehicleSpline@@QAEHH@Z
    0x569DD0 | public: int __thiscall aiVehicleSpline::IsAmbientBlockingPlayer(int) | ?IsAmbientBlockingPlayer@aiVehicleSpline@@QAEHH@Z
    0x569EC0 | public: void __thiscall aiVehicleSpline::AvoidPlayerCollision(int) | ?AvoidPlayerCollision@aiVehicleSpline@@QAEXH@Z
    0x569F70 | public: virtual int __thiscall aiVehicleSpline::InAccident(void) | ?InAccident@aiVehicleSpline@@UAEHXZ
    0x569F80 | public: int __thiscall aiVehicleSpline::WaitTime(void) | ?WaitTime@aiVehicleSpline@@QAEHXZ
    0x569FA0 | public: float __thiscall aiVehicleSpline::TotLength(void) | ?TotLength@aiVehicleSpline@@QAEMXZ
    0x569FB0 | public: virtual void __thiscall aiVehicleSpline::Impact(int) | ?Impact@aiVehicleSpline@@UAEXH@Z
    0x569FC0 | public: float __thiscall aiVehicleSpline::DistanceToVehicle(class aiVehicleSpline *) | ?DistanceToVehicle@aiVehicleSpline@@QAEMPAV1@@Z
    0x56A2C0 | public: float __thiscall aiVehicleSpline::DistanceToIntersection(void) | ?DistanceToIntersection@aiVehicleSpline@@QAEMXZ
    0x56A360 | public: void __thiscall aiVehicleSpline::Dump(void) | ?Dump@aiVehicleSpline@@QAEXXZ
    public: void __thiscall aiVehicleSpline::AddWidgets(class bkBank *) | ?AddWidgets@aiVehicleSpline@@QAEXPAVbkBank@@@Z
    0x56A4F0 | public: virtual void __thiscall aiVehicleSpline::DrawId(void) | ?DrawId@aiVehicleSpline@@UAEXXZ
    0x56A500 | public: virtual void __thiscall aiVehicleSpline::ReplayDebug(void) | ?ReplayDebug@aiVehicleSpline@@UAEXXZ
    0x56A700 | public: virtual int __thiscall aiVehicleSpline::Type(void) | ?Type@aiVehicleSpline@@UAEHXZ
    0x5B5B1C | const aiVehicleSpline::`vftable' | ??_7aiVehicleSpline@@6B@
*/

#include "hooking.h"
