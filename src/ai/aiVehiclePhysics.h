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
    ai:aiVehiclePhysics

    0x5592A0 | public: __thiscall aiVehiclePhysics::aiVehiclePhysics(void) | ??0aiVehiclePhysics@@QAE@XZ
    0x559340 | public: __thiscall aiRouteNode::aiRouteNode(void) | ??0aiRouteNode@@QAE@XZ
    0x559350 | public: void __thiscall aiRouteNode::Reset(void) | ?Reset@aiRouteNode@@QAEXXZ
    0x559380 | public: __thiscall aiVehiclePhysics::~aiVehiclePhysics(void) | ??1aiVehiclePhysics@@QAE@XZ
    0x5593E0 | public: void __thiscall aiVehiclePhysics::Init(int,char *,short,int) | ?Init@aiVehiclePhysics@@QAEXHPADFH@Z
    0x5597A0 | public: virtual void __thiscall aiVehiclePhysics::Reset(void) | ?Reset@aiVehiclePhysics@@UAEXXZ
    0x5598A0 | public: void __thiscall aiVehiclePhysics::RegisterRoute(short *,short,class Vector3 const &,class Vector3 const &,int,float,float,bool,bool,bool,bool,bool,bool,float,float,float,float) | ?RegisterRoute@aiVehiclePhysics@@QAEXPAFFABVVector3@@1HMM_N22222MMMM@Z
    0x55A570 | public: void __thiscall aiVehiclePhysics::Mirror(class vehCar *) | ?Mirror@aiVehiclePhysics@@QAEXPAVvehCar@@@Z
    0x55A740 | private: void __thiscall aiVehiclePhysics::DestMapComponent(class Vector3 const &,short *,short *) | ?DestMapComponent@aiVehiclePhysics@@AAEXABVVector3@@PAF1@Z
    0x55A8E0 | private: void __thiscall aiVehiclePhysics::CheckForShortcut(void) | ?CheckForShortcut@aiVehiclePhysics@@AAEXXZ
    0x55A8F0 | public: void __thiscall aiVehiclePhysics::DriveRoute(int) | ?DriveRoute@aiVehiclePhysics@@QAEXH@Z
    0x55AAD0 | public: virtual int __thiscall aiVehiclePhysics::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiVehiclePhysics@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x55AB50 | private: void __thiscall aiVehiclePhysics::InitShortcut(void) | ?InitShortcut@aiVehiclePhysics@@AAEXXZ
    0x55ABE0 | private: void __thiscall aiVehiclePhysics::Shortcut(void) | ?Shortcut@aiVehiclePhysics@@AAEXXZ
    0x55ADA0 | private: void __thiscall aiVehiclePhysics::Stop(void) | ?Stop@aiVehiclePhysics@@AAEXXZ
    0x55AE80 | private: void __thiscall aiVehiclePhysics::InitForward(void) | ?InitForward@aiVehiclePhysics@@AAEXXZ
    0x55AF50 | private: void __thiscall aiVehiclePhysics::Forward(void) | ?Forward@aiVehiclePhysics@@AAEXXZ
    0x55B400 | private: void __thiscall aiVehiclePhysics::InitBackup(void) | ?InitBackup@aiVehiclePhysics@@AAEXXZ
    0x55B460 | private: void __thiscall aiVehiclePhysics::Backup(void) | ?Backup@aiVehiclePhysics@@AAEXXZ
    0x55B5B0 | private: void __thiscall aiVehiclePhysics::FinishedBackingUp(void) | ?FinishedBackingUp@aiVehiclePhysics@@AAEXXZ
    0x55B660 | private: void __thiscall aiVehiclePhysics::CalcSpeed(void) | ?CalcSpeed@aiVehiclePhysics@@AAEXXZ
    0x55B830 | private: void __thiscall aiVehiclePhysics::CalcRoadSpeed(void) | ?CalcRoadSpeed@aiVehiclePhysics@@AAEXXZ
    0x55C080 | private: float __thiscall aiVehiclePhysics::CheckDistance(int) | ?CheckDistance@aiVehiclePhysics@@AAEMH@Z
    0x55C0A0 | private: void __thiscall aiVehiclePhysics::SolveRoadTargetPoint(void) | ?SolveRoadTargetPoint@aiVehiclePhysics@@AAEXXZ
    0x55C180 | private: void __thiscall aiVehiclePhysics::SolveShortcutTargetPoint(void) | ?SolveShortcutTargetPoint@aiVehiclePhysics@@AAEXXZ
    0x55C510 | private: int __thiscall aiVehiclePhysics::PlanRoute(void) | ?PlanRoute@aiVehiclePhysics@@AAEHXZ
    0x55C7A0 | public: void __thiscall aiVehiclePhysics::StopRoadTraffic(bool) | ?StopRoadTraffic@aiVehiclePhysics@@QAEX_N@Z
    0x55C860 | private: int __thiscall aiVehiclePhysics::LocateWayPtFromInt(int) | ?LocateWayPtFromInt@aiVehiclePhysics@@AAEHH@Z
    0x55CD40 | private: int __thiscall aiVehiclePhysics::LocateWayPtFromRoad(class aiPath *) | ?LocateWayPtFromRoad@aiVehiclePhysics@@AAEHPAVaiPath@@@Z
    0x55D9F0 | private: void __thiscall aiVehiclePhysics::CalcRoute(void) | ?CalcRoute@aiVehiclePhysics@@AAEXXZ
    0x55DBC0 | private: void __thiscall aiVehiclePhysics::DetermineBestRoute(void) | ?DetermineBestRoute@aiVehiclePhysics@@AAEXXZ
    0x55DD10 | private: void __thiscall aiVehiclePhysics::EnumRoutes(int) | ?EnumRoutes@aiVehiclePhysics@@AAEXH@Z
    0x55E0C0 | private: int __thiscall aiVehiclePhysics::CalcObstacleAvoidPoints(class aiObstacle *,int,int,class Vector3 *,class aiObstacle * *,short *,short *) | ?CalcObstacleAvoidPoints@aiVehiclePhysics@@AAEHPAVaiObstacle@@HHPAVVector3@@PAPAV2@PAF3@Z
    0x55E4D0 | private: void __thiscall aiVehiclePhysics::EnumTargets(class Vector3 &,class aiObstacle *,int,int,int,int,int,int,class Vector3 *,class aiObstacle * *,short *,short *,int *) | ?EnumTargets@aiVehiclePhysics@@AAEXAAVVector3@@PAVaiObstacle@@HHHHHHPAV2@PAPAV3@PAF4PAH@Z
    0x55EC50 | private: int __thiscall aiVehiclePhysics::CalcSharpTurnTarget(int &,int,class Vector3 &) | ?CalcSharpTurnTarget@aiVehiclePhysics@@AAEHAAHHAAVVector3@@@Z
    0x55F800 | private: void __thiscall aiVehiclePhysics::SaveTurnTarget(int,int) | ?SaveTurnTarget@aiVehiclePhysics@@AAEXHH@Z
    0x55F9B0 | private: void __thiscall aiVehiclePhysics::InitRoadTurns(void) | ?InitRoadTurns@aiVehiclePhysics@@AAEXXZ
    0x55FB60 | private: void __thiscall aiVehiclePhysics::CalcRoadTurns(void) | ?CalcRoadTurns@aiVehiclePhysics@@AAEXXZ
    0x5600B0 | private: float __thiscall aiVehiclePhysics::CalcTurnIntersection(int) | ?CalcTurnIntersection@aiVehiclePhysics@@AAEMH@Z
    0x560900 | private: float __thiscall aiVehiclePhysics::CalcCurrentMaxWidthAdjustment(int) | ?CalcCurrentMaxWidthAdjustment@aiVehiclePhysics@@AAEMH@Z
    0x560B50 | private: float __thiscall aiVehiclePhysics::CalcCurrentRdOffset(int) | ?CalcCurrentRdOffset@aiVehiclePhysics@@AAEMH@Z
    0x560DC0 | private: float __thiscall aiVehiclePhysics::CalcNextMaxWidthAdjustment(int) | ?CalcNextMaxWidthAdjustment@aiVehiclePhysics@@AAEMH@Z
    0x561020 | private: float __thiscall aiVehiclePhysics::CalcNextRdOffset(int) | ?CalcNextRdOffset@aiVehiclePhysics@@AAEMH@Z
    0x561290 | private: int __thiscall aiVehiclePhysics::InSharpTurn(int) | ?InSharpTurn@aiVehiclePhysics@@AAEHH@Z
    0x5616F0 | private: void __thiscall aiVehiclePhysics::SaveTarget(int,class Vector3 &,class aiObstacle *,short &,int,short &) | ?SaveTarget@aiVehiclePhysics@@AAEXHAAVVector3@@PAVaiObstacle@@AAFH2@Z
    0x561950 | private: void __thiscall aiVehiclePhysics::ContinueCheck(int) | ?ContinueCheck@aiVehiclePhysics@@AAEXH@Z
    0x561AD0 | private: void __thiscall aiVehiclePhysics::CalcDestinationTarget(int,class Vector3 &) | ?CalcDestinationTarget@aiVehiclePhysics@@AAEXHAAVVector3@@@Z
    0x5638D0 | private: void __thiscall aiVehiclePhysics::SetTargetPtToDestination(int) | ?SetTargetPtToDestination@aiVehiclePhysics@@AAEXH@Z
    0x563B60 | private: void __thiscall aiVehiclePhysics::CalcRoadTarget(int,class Vector3 &) | ?CalcRoadTarget@aiVehiclePhysics@@AAEXHAAVVector3@@@Z
    0x567230 | private: class aiObstacle * __thiscall aiVehiclePhysics::IsTargetBlocked(class Vector3 &,class Vector3 &,int,int,int,int,float,int *) | ?IsTargetBlocked@aiVehiclePhysics@@AAEPAVaiObstacle@@AAVVector3@@0HHHHMPAH@Z
    0x5677C0 | public: virtual void __thiscall aiVehiclePhysics::DrawId(void) | ?DrawId@aiVehiclePhysics@@UAEXXZ
    0x5677D0 | public: void __thiscall aiVehiclePhysics::DrawRouteThroughTraffic(void) | ?DrawRouteThroughTraffic@aiVehiclePhysics@@QAEXXZ
    0x5677E0 | public: void __thiscall aiVehiclePhysics::DrawTurn(int) | ?DrawTurn@aiVehiclePhysics@@QAEXH@Z
    0x5677F0 | public: void __thiscall aiVehiclePhysics::Dump(void) | ?Dump@aiVehiclePhysics@@QAEXXZ
    0x567920 | public: void __thiscall aiRouteNode::ReplayDebug(void) | ?ReplayDebug@aiRouteNode@@QAEXXZ
    0x5679D0 | public: virtual void __thiscall aiVehiclePhysics::ReplayDebug(void) | ?ReplayDebug@aiVehiclePhysics@@UAEXXZ
    public: void __thiscall aiVehiclePhysics::AddWidgets(class bkBank &) | ?AddWidgets@aiVehiclePhysics@@QAEXAAVbkBank@@@Z
    0x567B80 | public: virtual __thiscall aiStuck::~aiStuck(void) | ??1aiStuck@@UAE@XZ
    public: int __thiscall aiPath::Sidewalk(int) | ?Sidewalk@aiPath@@QAEHH@Z
    public: float __thiscall aiPath::LaneWidth(int,int,int) | ?LaneWidth@aiPath@@QAEMHHH@Z
    0x567B90 | public: virtual int __thiscall aiVehiclePhysics::Type(void) | ?Type@aiVehiclePhysics@@UAEHXZ
    0x567BA0 | public: virtual int __thiscall aiVehiclePhysics::CurrentLane(void) | ?CurrentLane@aiVehiclePhysics@@UAEHXZ
    0x567BB0 | public: virtual int __thiscall aiVehiclePhysics::CurrentRdVert(void) | ?CurrentRdVert@aiVehiclePhysics@@UAEHXZ
    0x567BC0 | public: virtual float __thiscall aiVehiclePhysics::FrontBumperDistance(void) | ?FrontBumperDistance@aiVehiclePhysics@@UAEMXZ
    0x567BD0 | public: virtual float __thiscall aiVehiclePhysics::BackBumperDistance(void) | ?BackBumperDistance@aiVehiclePhysics@@UAEMXZ
    0x567BE0 | public: virtual float __thiscall aiVehiclePhysics::LSideDistance(void) | ?LSideDistance@aiVehiclePhysics@@UAEMXZ
    0x567BF0 | public: virtual float __thiscall aiVehiclePhysics::RSideDistance(void) | ?RSideDistance@aiVehiclePhysics@@UAEMXZ
    0x567C00 | public: virtual float __thiscall aiVehiclePhysics::Speed(void) | ?Speed@aiVehiclePhysics@@UAEMXZ
    0x567C10 | public: virtual void __thiscall aiVehiclePhysics::Position(class Vector3 &) | ?Position@aiVehiclePhysics@@UAEXAAVVector3@@@Z
    0x567C40 | public: virtual class Matrix34 & __thiscall aiVehiclePhysics::GetMatrix(void) | ?GetMatrix@aiVehiclePhysics@@UAEAAVMatrix34@@XZ
    0x567C50 | public: virtual int __thiscall aiVehiclePhysics::CurrentRoadId(void) | ?CurrentRoadId@aiVehiclePhysics@@UAEHXZ
    public: int __thiscall aiPath::Divider(void) | ?Divider@aiPath@@QAEHXZ
    public: int __thiscall aiPath::NumVerts(void) | ?NumVerts@aiPath@@QAEHXZ
    public: class Matrix34 & __thiscall phInertialCS::GetMatrix(void) | ?GetMatrix@phInertialCS@@QAEAAVMatrix34@@XZ
    float __cdecl aiDot(class Vector3 const &,class Vector3 const &) | ?aiDot@@YAMABVVector3@@0@Z
    0x5B5A7C | const aiVehiclePhysics::`vftable' | ??_7aiVehiclePhysics@@6B@
*/

#include "hooking.h"
