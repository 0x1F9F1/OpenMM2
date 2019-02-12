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
    ai:aiPath

    0x543E40 | public: __thiscall aiPath::aiPath(int) | ??0aiPath@@QAE@H@Z
    0x543EE0 | public: __thiscall aiPath::~aiPath(void) | ??1aiPath@@QAE@XZ
    0x543EF0 | public: void __thiscall aiPath::Reset(void) | ?Reset@aiPath@@QAEXXZ
    0x543F90 | public: void __thiscall aiPath::ResetObstacles(void) | ?ResetObstacles@aiPath@@QAEXXZ
    0x543FC0 | public: void __thiscall aiPath::UpdateAmbients(void) | ?UpdateAmbients@aiPath@@QAEXXZ
    0x544150 | public: void __thiscall aiPath::UpdatePedestrians(void) | ?UpdatePedestrians@aiPath@@QAEXXZ
    0x544220 | public: void __thiscall aiPath::ResetVehicleReactTicks(int) | ?ResetVehicleReactTicks@aiPath@@QAEXH@Z
    0x544290 | public: float __thiscall aiPath::SidewalkSubSectionLength(int,int,short) | ?SidewalkSubSectionLength@aiPath@@QAEMHHF@Z
    0x544300 | public: class Vector3 & __thiscall aiPath::SidewalkVertice(int,short) | ?SidewalkVertice@aiPath@@QAEAAVVector3@@HF@Z
    0x544350 | public: void __thiscall aiPath::SaveBinary(class Stream *) | ?SaveBinary@aiPath@@QAEXPAVStream@@@Z
    0x544770 | public: void __thiscall aiPath::ReadBinary(class Stream *) | ?ReadBinary@aiPath@@QAEXPAVStream@@@Z
    0x545230 | public: void __thiscall aiPath::ReadShortcut(class Stream *,int) | ?ReadShortcut@aiPath@@QAEXPAVStream@@H@Z
    0x545D00 | public: void __thiscall aiPath::ReverseDirection(void) | ?ReverseDirection@aiPath@@QAEXXZ
    0x5460A0 | public: void __thiscall aiPath::SetCullroom(void) | ?SetCullroom@aiPath@@QAEXXZ
    0x5461D0 | public: void __thiscall aiPath::AddBangersToObsMap(void) | ?AddBangersToObsMap@aiPath@@QAEXXZ
    0x546380 | public: void __thiscall aiPath::InitRoadTurns(void) | ?InitRoadTurns@aiPath@@QAEXXZ
    0x546BE0 | public: void __thiscall aiPath::CalcRoadTurns(class Vector3 &,bool) | ?CalcRoadTurns@aiPath@@QAEXAAVVector3@@_N@Z
    0x547060 | public: void __thiscall aiPath::AddVehicle(class aiObstacle *,int,int) | ?AddVehicle@aiPath@@QAEXPAVaiObstacle@@HH@Z
    0x5470B0 | public: void __thiscall aiPath::RemoveVehicle(class aiObstacle *,int,int) | ?RemoveVehicle@aiPath@@QAEXPAVaiObstacle@@HH@Z
    0x547140 | public: void __thiscall aiPath::AddBanger(class aiObstacle *,int,int) | ?AddBanger@aiPath@@QAEXPAVaiObstacle@@HH@Z
    0x547190 | public: void __thiscall aiPath::RemoveBanger(class aiObstacle *,int,int) | ?RemoveBanger@aiPath@@QAEXPAVaiObstacle@@HH@Z
    0x547220 | public: void __thiscall aiPath::AddPedestrian(class aiObstacle *,int,int) | ?AddPedestrian@aiPath@@QAEXPAVaiObstacle@@HH@Z
    0x547270 | public: void __thiscall aiPath::RemovePedestrian(class aiObstacle *,int,int) | ?RemovePedestrian@aiPath@@QAEXPAVaiObstacle@@HH@Z
    public: void __thiscall aiPath::DrawCablecar(void) | ?DrawCablecar@aiPath@@QAEXXZ
    public: void __thiscall aiPath::DrawSubway(void) | ?DrawSubway@aiPath@@QAEXXZ
    public: void __thiscall aiPath::Draw(void) | ?Draw@aiPath@@QAEXXZ
    public: void __thiscall aiPath::DrawNormals(void) | ?DrawNormals@aiPath@@QAEXXZ
    public: void __thiscall aiPath::DrawAmbientIds(void) | ?DrawAmbientIds@aiPath@@QAEXXZ
    public: void __thiscall aiPath::DrawId(void) | ?DrawId@aiPath@@QAEXXZ
    public: void __thiscall aiPath::DrawVehicleIds(void) | ?DrawVehicleIds@aiPath@@QAEXXZ
    public: void __thiscall aiPath::DrawBangers(void) | ?DrawBangers@aiPath@@QAEXXZ
    public: void __thiscall aiPath::Dump(void) | ?Dump@aiPath@@QAEXXZ
    0x547300 | public: void __thiscall aiPath::AllwaysStop(int) | ?AllwaysStop@aiPath@@QAEXH@Z
    0x547320 | public: void __thiscall aiPath::AllwaysGo(int) | ?AllwaysGo@aiPath@@QAEXH@Z
    0x547340 | public: float __thiscall aiPath::CenterLength(int,int) | ?CenterLength@aiPath@@QAEMHH@Z
    0x547360 | public: float __thiscall aiPath::SubSectionLength(int,int,int) | ?SubSectionLength@aiPath@@QAEMHHH@Z
    0x5473A0 | public: float __thiscall aiPath::GetHeading(float,int,int) | ?GetHeading@aiPath@@QAEMMHH@Z
    0x5474E0 | public: float __thiscall aiPath::SubSectionDist(float,int,int) | ?SubSectionDist@aiPath@@QAEMMHH@Z
    0x5475D0 | public: int __thiscall aiPath::CenterIndex(float) | ?CenterIndex@aiPath@@QAEHM@Z
    0x547660 | public: void __thiscall aiPath::Position(float,class Vector3 &,int,int) | ?Position@aiPath@@QAEXMAAVVector3@@HH@Z
    0x547670 | public: void __thiscall aiPath::CenterPosition(float,class Vector3 &) | ?CenterPosition@aiPath@@QAEXMAAVVector3@@@Z
    0x547740 | public: int __thiscall aiPath::Index(float,int,int) | ?Index@aiPath@@QAEHMHH@Z
    0x547820 | public: int __thiscall aiPath::Index(class Vector3 const &) | ?Index@aiPath@@QAEHABVVector3@@@Z
    0x547900 | public: int __thiscall aiPath::Lane(class Vector3 &,int) | ?Lane@aiPath@@QAEHAAVVector3@@H@Z
    0x547A50 | public: char __thiscall aiPath::RemAmbPlayer(int) | ?RemAmbPlayer@aiPath@@QAEDH@Z
    0x547AB0 | public: char __thiscall aiPath::AddAmbPlayer(int) | ?AddAmbPlayer@aiPath@@QAEDH@Z
    0x547B10 | public: char __thiscall aiPath::RemPedPlayer(int) | ?RemPedPlayer@aiPath@@QAEDH@Z
    0x547B70 | public: char __thiscall aiPath::AddPedPlayer(int) | ?AddPedPlayer@aiPath@@QAEDH@Z
    0x547BD0 | public: void __thiscall aiPath::ClearPeds(void) | ?ClearPeds@aiPath@@QAEXXZ
    0x547C00 | public: void __thiscall aiPath::ClearAmbients(void) | ?ClearAmbients@aiPath@@QAEXXZ
    0x547DC0 | public: void __thiscall aiPath::DetermineRoadPosInfo(class Matrix34 const &,short *,float *,short *,float *,short *) | ?DetermineRoadPosInfo@aiPath@@QAEXABVMatrix34@@PAFPAM121@Z
    0x547FA0 | public: void __thiscall aiPath::RoadDistance(class Vector3 const &,short *,float *,short,float *,int) | ?RoadDistance@aiPath@@QAEXABVVector3@@PAFPAMF2H@Z
    0x548100 | public: int __thiscall aiPath::IsSharpTurn(int,bool) | ?IsSharpTurn@aiPath@@QAEHH_N@Z
    0x548160 | public: int __thiscall aiPath::SharpTurnVertIndex(int,bool) | ?SharpTurnVertIndex@aiPath@@QAEHH_N@Z
    0x5481A0 | public: float __thiscall aiPath::SharpTurnSetback(int,bool) | ?SharpTurnSetback@aiPath@@QAEMH_N@Z
    0x5481D0 | public: float __thiscall aiPath::SharpTurnAngle(int,bool) | ?SharpTurnAngle@aiPath@@QAEMH_N@Z
    0x548200 | public: float __thiscall aiPath::SharpTurnDir(int,bool) | ?SharpTurnDir@aiPath@@QAEMH_N@Z
    0x548230 | public: float __thiscall aiPath::SharpTurnRadius(int,bool) | ?SharpTurnRadius@aiPath@@QAEMH_N@Z
    0x548260 | public: class Vector3 & __thiscall aiPath::SharpTurnCenter(int,bool) | ?SharpTurnCenter@aiPath@@QAEAAVVector3@@H_N@Z
    0x548290 | public: class Vector3 & __thiscall aiPath::SharpTurnIntersection(int,bool) | ?SharpTurnIntersection@aiPath@@QAEAAVVector3@@H_N@Z
    0x5482C0 | public: class Vector3 & __thiscall aiPath::SharpTurnStartDir(int,bool) | ?SharpTurnStartDir@aiPath@@QAEAAVVector3@@H_N@Z
    0x5482F0 | public: class Vector3 & __thiscall aiPath::SharpTurnEndDir(int,bool) | ?SharpTurnEndDir@aiPath@@QAEAAVVector3@@H_N@Z
    public: void __thiscall aiPath::DrawSharpTurn(int,bool) | ?DrawSharpTurn@aiPath@@QAEXH_N@Z
    0x548320 | public: bool __thiscall aiPath::Direction(class Matrix34 const &) | ?Direction@aiPath@@QAE_NABVMatrix34@@@Z
    0x548370 | public: int __thiscall aiPath::IsPosOnRoad(class Vector3 const &,float,float *) | ?IsPosOnRoad@aiPath@@QAEHABVVector3@@MPAM@Z
    0x5485E0 | public: int __thiscall aiPath::RoadVertice(class Vector3 const &,int) | ?RoadVertice@aiPath@@QAEHABVVector3@@H@Z
    0x548780 | public: int __thiscall aiPath::RoadVertice(class Vector3 const &,int,int) | ?RoadVertice@aiPath@@QAEHABVVector3@@HH@Z
    0x548850 | public: float __thiscall aiPath::CenterDist(class Vector3 const &) | ?CenterDist@aiPath@@QAEMABVVector3@@@Z
    0x548900 | public: int __thiscall aiPath::CenterDistance(class Vector3 const &,short *,float *,float *) | ?CenterDistance@aiPath@@QAEHABVVector3@@PAFPAM2@Z
    0x548A30 | public: void __thiscall aiPath::SubSectionPt(class Vector3 &,int,int,float,int) | ?SubSectionPt@aiPath@@QAEXAAVVector3@@HHMH@Z
    0x548AD0 | public: void __thiscall aiPath::SubSectionDir(class Vector3 &,int,float,int) | ?SubSectionDir@aiPath@@QAEXAAVVector3@@HMH@Z
    0x548B70 | public: void __thiscall aiPath::IntersectionEntryPt(class Vector3 &,int,float,int) | ?IntersectionEntryPt@aiPath@@QAEXAAVVector3@@HMH@Z
    0x548CC0 | public: void __thiscall aiPath::IntersectionEntryVector(class Vector3 &,float,int) | ?IntersectionEntryVector@aiPath@@QAEXAAVVector3@@MH@Z
    0x548D50 | public: void __thiscall aiPath::IntersectionExitVector(class Vector3 &,float,int) | ?IntersectionExitVector@aiPath@@QAEXAAVVector3@@MH@Z
    public: void __thiscall aiPath::BuildRail(struct aiShortcutNode *,int) | ?BuildRail@aiPath@@QAEXPAUaiShortcutNode@@H@Z
    public: void __thiscall aiPath::BuildRail(class dgPath *,class lvlSDL *,int,int) | ?BuildRail@aiPath@@QAEXPAVdgPath@@PAVlvlSDL@@HH@Z
    0x548DE0 | public: int __thiscall aiPath::NumVehiclesAfterDist(int,float,int) | ?NumVehiclesAfterDist@aiPath@@QAEHHMH@Z
    public: int __thiscall aiPath::ContinuityError(int,int) | ?ContinuityError@aiPath@@QAEHHH@Z
    0x548E70 | public: void __thiscall aiPath::PopAmbVehicle(class aiVehicleSpline *,int,int) | ?PopAmbVehicle@aiPath@@QAEXPAVaiVehicleSpline@@HH@Z
    0x549060 | public: void __thiscall aiPath::PushAmbVehicle(class aiVehicleSpline *,int,int) | ?PushAmbVehicle@aiPath@@QAEXPAVaiVehicleSpline@@HH@Z
    0x5491C0 | public: void __thiscall aiPath::AddAmbVehicle(class aiVehicleSpline *,int,float,int) | ?AddAmbVehicle@aiPath@@QAEXPAVaiVehicleSpline@@HMH@Z
    0x549540 | public: int __thiscall aiPath::RemoveAmbVehicle(class aiVehicleSpline *,int,int) | ?RemoveAmbVehicle@aiPath@@QAEHPAVaiVehicleSpline@@HH@Z
    0x549770 | public: int __thiscall aiPath::RoadCapacity(class aiVehicleSpline *,int,int) | ?RoadCapacity@aiPath@@QAEHPAVaiVehicleSpline@@HH@Z
    0x5498D0 | public: void __thiscall aiPath::AddPedestrian(class aiPedestrian *) | ?AddPedestrian@aiPath@@QAEXPAVaiPedestrian@@@Z
    0x549910 | public: void __thiscall aiPath::RemovePedestrian(class aiPedestrian *) | ?RemovePedestrian@aiPath@@QAEXPAVaiPedestrian@@@Z
    0x549980 | public: bool __thiscall aiPath::HasCableCarLine(int) | ?HasCableCarLine@aiPath@@QAE_NH@Z
    0x5499B0 | public: bool __thiscall aiPath::HasSubwayLine(int) | ?HasSubwayLine@aiPath@@QAE_NH@Z
    public: class Vector3 * __thiscall aiPath::VertZDir(int) | ?VertZDir@aiPath@@QAEPAVVector3@@H@Z
    public: class Vector3 * __thiscall aiPath::VertXDir(int) | ?VertXDir@aiPath@@QAEPAVVector3@@H@Z
    public: class Vector3 * __thiscall aiPath::RBoundary(int) | ?RBoundary@aiPath@@QAEPAVVector3@@H@Z
    public: class Vector3 * __thiscall aiPath::LBoundary(int) | ?LBoundary@aiPath@@QAEPAVVector3@@H@Z
    float __cdecl aiDist(class Vector3 const &,class Vector3 const &) | ?aiDist@@YAMABVVector3@@0@Z
*/

// #include "hooking.h"
