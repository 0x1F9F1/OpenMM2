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
    ai:aiPedestrian

    0x54AFA0 | public: __thiscall aiPedestrian::aiPedestrian(void) | ??0aiPedestrian@@QAE@XZ
    0x54B0C0 | public: __thiscall aiPedestrian::~aiPedestrian(void) | ??1aiPedestrian@@QAE@XZ
    0x54B0D0 | public: void __thiscall aiPedestrian::Init(char *,int,int) | ?Init@aiPedestrian@@QAEXPADHH@Z
    0x54B5C0 | public: void __thiscall aiPedestrian::Reset(class aiPath *,int) | ?Reset@aiPedestrian@@QAEXPAVaiPath@@H@Z
    0x54B9C0 | public: void __thiscall aiPedestrian::Update(void) | ?Update@aiPedestrian@@QAEXXZ
    0x54BFA0 | private: void __thiscall aiPedestrian::PreCrossStreet(void) | ?PreCrossStreet@aiPedestrian@@AAEXXZ
    0x54C4F0 | private: void __thiscall aiPedestrian::CrossStreet(void) | ?CrossStreet@aiPedestrian@@AAEXXZ
    0x54C6F0 | private: void __thiscall aiPedestrian::WaitCrossStreet(void) | ?WaitCrossStreet@aiPedestrian@@AAEXXZ
    0x54CCC0 | private: int __thiscall aiPedestrian::Accident(void) | ?Accident@aiPedestrian@@AAEHXZ
    0x54CDB0 | private: void __thiscall aiPedestrian::Wander(void) | ?Wander@aiPedestrian@@AAEXXZ
    0x54D100 | private: void __thiscall aiPedestrian::Anticipate(void) | ?Anticipate@aiPedestrian@@AAEXXZ
    0x54D8D0 | private: void __thiscall aiPedestrian::Avoid(float *) | ?Avoid@aiPedestrian@@AAEXPAM@Z
    0x54E650 | private: float __thiscall aiPedestrian::TimeToCollision(float) | ?TimeToCollision@aiPedestrian@@AAEMM@Z
    0x54E680 | private: int __thiscall aiPedestrian::DetectPlayerForwardCollision(float *,float *) | ?DetectPlayerForwardCollision@aiPedestrian@@AAEHPAM0@Z
    0x54E8C0 | private: int __thiscall aiPedestrian::DetectPlayerAnticipate(float *,float *) | ?DetectPlayerAnticipate@aiPedestrian@@AAEHPAM0@Z
    0x54EAE0 | private: float __thiscall aiPedestrian::RoadDistance(void) | ?RoadDistance@aiPedestrian@@AAEMXZ
    0x54F1D0 | private: void __thiscall aiPedestrian::SolveRoadSegment(float) | ?SolveRoadSegment@aiPedestrian@@AAEXM@Z
    0x54F310 | private: class aiPath * __thiscall aiPedestrian::SetNextRoad(void) | ?SetNextRoad@aiPedestrian@@AAEPAVaiPath@@XZ
    0x54F340 | private: int __thiscall aiPedestrian::UpcomingAccident(void) | ?UpcomingAccident@aiPedestrian@@AAEHXZ
    0x54F390 | private: class aiPath * __thiscall aiPedestrian::PickNextRdSeg(void) | ?PickNextRdSeg@aiPedestrian@@AAEPAVaiPath@@XZ
    0x54F620 | private: class aiPath * __thiscall aiPedestrian::GetRoadToRight(void) | ?GetRoadToRight@aiPedestrian@@AAEPAVaiPath@@XZ
    0x54F6A0 | private: class aiPath * __thiscall aiPedestrian::GetRoadToLeft(void) | ?GetRoadToLeft@aiPedestrian@@AAEPAVaiPath@@XZ
    0x54F720 | private: int __thiscall aiPedestrian::DetectPlayerCollision(float *) | ?DetectPlayerCollision@aiPedestrian@@AAEHPAM@Z
    0x54F800 | private: int __thiscall aiPedestrian::DetectBangerCollision(class lvlInstance * *,float *) | ?DetectBangerCollision@aiPedestrian@@AAEHPAPAVlvlInstance@@PAM@Z
    0x54FA00 | private: int __thiscall aiPedestrian::DetectPedCollision(float,class aiPedestrian * *,float *) | ?DetectPedCollision@aiPedestrian@@AAEHMPAPAV1@PAM@Z
    0x54FDE0 | private: void __thiscall aiPedestrian::AvoidPlayer(class Vector3 &,float) | ?AvoidPlayer@aiPedestrian@@AAEXAAVVector3@@M@Z
    0x54FE50 | private: void __thiscall aiPedestrian::AvoidBanger(class lvlInstance *,float) | ?AvoidBanger@aiPedestrian@@AAEXPAVlvlInstance@@M@Z
    0x54FEC0 | private: void __thiscall aiPedestrian::AvoidPedCollision(class aiPedestrian *,float) | ?AvoidPedCollision@aiPedestrian@@AAEXPAV1@M@Z
    0x54FF90 | private: void __thiscall aiPedestrian::AvoidObstacle(class Vector3 const &,float) | ?AvoidObstacle@aiPedestrian@@AAEXABVVector3@@M@Z
    0x550400 | private: void __thiscall aiPedestrian::SolveTargetPoint(float) | ?SolveTargetPoint@aiPedestrian@@AAEXM@Z
    0x5504A0 | private: void __thiscall aiPedestrian::CalcCurve(int,int,float) | ?CalcCurve@aiPedestrian@@AAEXHHM@Z
    0x5509D0 | private: void __thiscall aiPedestrian::ComputeCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?ComputeCurve@aiPedestrian@@AAEXAAVVector3@@000@Z
    0x550BA0 | private: void __thiscall aiPedestrian::SolvePosition(class Vector3 &,float) | ?SolvePosition@aiPedestrian@@AAEXAAVVector3@@M@Z
    0x550BF0 | public: void __thiscall aiPedestrian::Reset(void) | ?Reset@aiPedestrian@@QAEXXZ
    0x550C00 | public: void __thiscall aiPedestrian::Stop(void) | ?Stop@aiPedestrian@@QAEXXZ
    0x550C20 | public: void __thiscall aiPedestrian::Go(void) | ?Go@aiPedestrian@@QAEXXZ
    0x550C40 | public: void __thiscall aiPedestrian::Dump(void) | ?Dump@aiPedestrian@@QAEXXZ
    0x550DE0 | public: void __thiscall aiPedestrian::QuickDump(void) | ?QuickDump@aiPedestrian@@QAEXXZ
    0x550EA0 | public: void __thiscall aiPedestrian::ReplayDebug(void) | ?ReplayDebug@aiPedestrian@@QAEXXZ
    0x550EB0 | public: void __thiscall aiPedestrian::DrawDebug(void) | ?DrawDebug@aiPedestrian@@QAEXXZ
*/

// #include "hooking.h"
