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
    ai:aiSubway

    0x5418D0 | public: __thiscall aiSubway::aiSubway(void) | ??0aiSubway@@QAE@XZ
    0x5419F0 | public: __thiscall aiSubway::~aiSubway(void) | ??1aiSubway@@QAE@XZ
    0x541A80 | public: void __thiscall aiSubway::Init(char *,int,int,int,int,int,class aiSubway *,class aiSubway *) | ?Init@aiSubway@@QAEXPADHHHHHPAV1@1@Z
    0x541C50 | public: virtual void __thiscall aiSubway::Reset(void) | ?Reset@aiSubway@@UAEXXZ
    0x541F60 | public: virtual void __thiscall aiSubway::Update(void) | ?Update@aiSubway@@UAEXXZ
    0x542060 | private: bool __thiscall aiSubway::DetermineNextLink(class aiPath *,class aiPath * *) | ?DetermineNextLink@aiSubway@@AAE_NPAVaiPath@@PAPAV2@@Z
    0x542160 | private: void __thiscall aiSubway::SolvePositionAndOrientation(void) | ?SolvePositionAndOrientation@aiSubway@@AAEXXZ
    0x5427B0 | private: void __thiscall aiSubway::SolveVelocity(void) | ?SolveVelocity@aiSubway@@AAEXXZ
    0x5429A0 | private: void __thiscall aiSubway::ReverseDirection(void) | ?ReverseDirection@aiSubway@@AAEXXZ
    0x542A20 | private: bool __thiscall aiSubway::OkayToEnterIntersection(float) | ?OkayToEnterIntersection@aiSubway@@AAE_NM@Z
    0x542AF0 | private: float __thiscall aiSubway::DistanceToIntersection(void) | ?DistanceToIntersection@aiSubway@@AAEMXZ
    0x542B90 | private: void __thiscall aiSubway::SolveRailType(void) | ?SolveRailType@aiSubway@@AAEXXZ
    0x5434F0 | public: virtual int __thiscall aiSubway::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiSubway@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x543600 | public: virtual int __thiscall aiSubway::CurrentRdVert(void) | ?CurrentRdVert@aiSubway@@UAEHXZ
    0x543620 | private: void __thiscall aiSubway::UpdateObstacleMap(void) | ?UpdateObstacleMap@aiSubway@@AAEXXZ
    0x543850 | private: void __thiscall aiSubway::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?ComputeXZCurve@aiSubway@@AAEXAAVVector3@@000@Z
    0x543A20 | private: void __thiscall aiSubway::SolveXZCurve(class Vector3 &,class Vector3 &,float) | ?SolveXZCurve@aiSubway@@AAEXAAVVector3@@0M@Z
    0x543AD0 | public: virtual void __thiscall aiSubway::DrawId(void) | ?DrawId@aiSubway@@UAEXXZ
    0x543AE0 | public: virtual class Matrix34 const & __thiscall aiSubwayInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@aiSubwayInstance@@UAEABVMatrix34@@AAV2@@Z
    0x543AF0 | public: virtual void __thiscall aiSubwayInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@aiSubwayInstance@@UAEXABVMatrix34@@@Z
    0x543B10 | public: virtual class Vector3 const & __thiscall aiSubwayInstance::GetVelocity(void) | ?GetVelocity@aiSubwayInstance@@UAEABVVector3@@XZ
    0x543B70 | public: virtual class Vector3 const & __thiscall aiSubwayInstance::GetPosition(void) | ?GetPosition@aiSubwayInstance@@UAEABVVector3@@XZ
    0x543B80 | public: virtual unsigned int __thiscall aiSubwayInstance::SizeOf(void) | ?SizeOf@aiSubwayInstance@@UAEIXZ
    0x543B90 | public: virtual void __thiscall aiSubwayInstance::ImpactCB(class dgHitBangerInstance *) | ?ImpactCB@aiSubwayInstance@@UAEXPAVdgHitBangerInstance@@@Z
    0x543BA0 | public: virtual void __thiscall aiSubwayInstance::Draw(int) | ?Draw@aiSubwayInstance@@UAEXH@Z
    0x543C90 | public: virtual int __thiscall aiSubway::Type(void) | ?Type@aiSubway@@UAEHXZ
    0x543CA0 | public: virtual float __thiscall aiSubway::Speed(void) | ?Speed@aiSubway@@UAEMXZ
    0x543CB0 | public: virtual int __thiscall aiSubway::CurrentLane(void) | ?CurrentLane@aiSubway@@UAEHXZ
    0x543CC0 | public: virtual float __thiscall aiSubway::FrontBumperDistance(void) | ?FrontBumperDistance@aiSubway@@UAEMXZ
    0x543CD0 | public: virtual float __thiscall aiSubway::BackBumperDistance(void) | ?BackBumperDistance@aiSubway@@UAEMXZ
    0x543CE0 | public: virtual float __thiscall aiSubway::LSideDistance(void) | ?LSideDistance@aiSubway@@UAEMXZ
    0x543CF0 | public: virtual float __thiscall aiSubway::RSideDistance(void) | ?RSideDistance@aiSubway@@UAEMXZ
    0x543D00 | public: virtual void __thiscall aiSubway::Position(class Vector3 &) | ?Position@aiSubway@@UAEXAAVVector3@@@Z
    0x543D20 | public: virtual class Matrix34 & __thiscall aiSubway::GetMatrix(void) | ?GetMatrix@aiSubway@@UAEAAVMatrix34@@XZ
    0x543D30 | public: virtual int __thiscall aiSubway::CurrentRoadId(void) | ?CurrentRoadId@aiSubway@@UAEHXZ
    0x5B5744 | const aiSubway::`vftable' | ??_7aiSubway@@6B@
    0x5B5798 | const aiSubwayInstance::`vftable' | ??_7aiSubwayInstance@@6B@
*/

#include "hooking.h"
