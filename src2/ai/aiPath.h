/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

class aiPath
{
public:
    // 0x543E40 | ??0aiPath@@QAE@H@Z
    inline aiPath(int32_t arg1)
    {
        stub<member_func_t<void, aiPath, int32_t>>(0x543E40, this, arg1);
    }

    // 0x543EE0 | ??1aiPath@@QAE@XZ
    inline ~aiPath()
    {
        stub<member_func_t<void, aiPath>>(0x543EE0, this);
    }

    // 0x543EF0 | ?Reset@aiPath@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiPath>>(0x543EF0, this);
    }

    // 0x543F90 | ?ResetObstacles@aiPath@@QAEXXZ
    inline void ResetObstacles()
    {
        return stub<member_func_t<void, aiPath>>(0x543F90, this);
    }

    // 0x543FC0 | ?UpdateAmbients@aiPath@@QAEXXZ
    inline void UpdateAmbients()
    {
        return stub<member_func_t<void, aiPath>>(0x543FC0, this);
    }

    // 0x544150 | ?UpdatePedestrians@aiPath@@QAEXXZ
    inline void UpdatePedestrians()
    {
        return stub<member_func_t<void, aiPath>>(0x544150, this);
    }

    // 0x544220 | ?ResetVehicleReactTicks@aiPath@@QAEXH@Z
    inline void ResetVehicleReactTicks(int32_t arg1)
    {
        return stub<member_func_t<void, aiPath, int32_t>>(0x544220, this, arg1);
    }

    // 0x544290 | ?SidewalkSubSectionLength@aiPath@@QAEMHHF@Z
    inline float SidewalkSubSectionLength(int32_t arg1, int32_t arg2, int16_t arg3)
    {
        return stub<member_func_t<float, aiPath, int32_t, int32_t, int16_t>>(0x544290, this, arg1, arg2, arg3);
    }

    // 0x544300 | ?SidewalkVertice@aiPath@@QAEAAVVector3@@HF@Z
    inline class Vector3& SidewalkVertice(int32_t arg1, int16_t arg2)
    {
        return stub<member_func_t<class Vector3&, aiPath, int32_t, int16_t>>(0x544300, this, arg1, arg2);
    }

    // 0x544350 | ?SaveBinary@aiPath@@QAEXPAVStream@@@Z
    inline void SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, aiPath, class Stream*>>(0x544350, this, arg1);
    }

    // 0x544770 | ?ReadBinary@aiPath@@QAEXPAVStream@@@Z
    inline void ReadBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, aiPath, class Stream*>>(0x544770, this, arg1);
    }

    // 0x545230 | ?ReadShortcut@aiPath@@QAEXPAVStream@@H@Z
    inline void ReadShortcut(class Stream* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiPath, class Stream*, int32_t>>(0x545230, this, arg1, arg2);
    }

    // 0x545D00 | ?ReverseDirection@aiPath@@QAEXXZ
    inline void ReverseDirection()
    {
        return stub<member_func_t<void, aiPath>>(0x545D00, this);
    }

    // 0x5460A0 | ?SetCullroom@aiPath@@QAEXXZ
    inline void SetCullroom()
    {
        return stub<member_func_t<void, aiPath>>(0x5460A0, this);
    }

    // 0x5461D0 | ?AddBangersToObsMap@aiPath@@QAEXXZ
    inline void AddBangersToObsMap()
    {
        return stub<member_func_t<void, aiPath>>(0x5461D0, this);
    }

    // 0x546380 | ?InitRoadTurns@aiPath@@QAEXXZ
    inline void InitRoadTurns()
    {
        return stub<member_func_t<void, aiPath>>(0x546380, this);
    }

    // 0x546BE0 | ?CalcRoadTurns@aiPath@@QAEXAAVVector3@@_N@Z
    inline void CalcRoadTurns(class Vector3& arg1, bool arg2)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, bool>>(0x546BE0, this, arg1, arg2);
    }

    // 0x547060 | ?AddVehicle@aiPath@@QAEXPAVaiObstacle@@HH@Z
    inline void AddVehicle(class aiObstacle* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class aiObstacle*, int32_t, int32_t>>(0x547060, this, arg1, arg2, arg3);
    }

    // 0x5470B0 | ?RemoveVehicle@aiPath@@QAEXPAVaiObstacle@@HH@Z
    inline void RemoveVehicle(class aiObstacle* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class aiObstacle*, int32_t, int32_t>>(0x5470B0, this, arg1, arg2, arg3);
    }

    // 0x547140 | ?AddBanger@aiPath@@QAEXPAVaiObstacle@@HH@Z
    inline void AddBanger(class aiObstacle* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class aiObstacle*, int32_t, int32_t>>(0x547140, this, arg1, arg2, arg3);
    }

    // 0x547190 | ?RemoveBanger@aiPath@@QAEXPAVaiObstacle@@HH@Z
    inline void RemoveBanger(class aiObstacle* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class aiObstacle*, int32_t, int32_t>>(0x547190, this, arg1, arg2, arg3);
    }

    // 0x547220 | ?AddPedestrian@aiPath@@QAEXPAVaiObstacle@@HH@Z
    inline void AddPedestrian(class aiObstacle* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class aiObstacle*, int32_t, int32_t>>(0x547220, this, arg1, arg2, arg3);
    }

    // 0x547270 | ?RemovePedestrian@aiPath@@QAEXPAVaiObstacle@@HH@Z
    inline void RemovePedestrian(class aiObstacle* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class aiObstacle*, int32_t, int32_t>>(0x547270, this, arg1, arg2, arg3);
    }

    // 0x547300 | ?AllwaysStop@aiPath@@QAEXH@Z
    inline void AllwaysStop(int32_t arg1)
    {
        return stub<member_func_t<void, aiPath, int32_t>>(0x547300, this, arg1);
    }

    // 0x547320 | ?AllwaysGo@aiPath@@QAEXH@Z
    inline void AllwaysGo(int32_t arg1)
    {
        return stub<member_func_t<void, aiPath, int32_t>>(0x547320, this, arg1);
    }

    // 0x547340 | ?CenterLength@aiPath@@QAEMHH@Z
    inline float CenterLength(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<float, aiPath, int32_t, int32_t>>(0x547340, this, arg1, arg2);
    }

    // 0x547360 | ?SubSectionLength@aiPath@@QAEMHHH@Z
    inline float SubSectionLength(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<float, aiPath, int32_t, int32_t, int32_t>>(0x547360, this, arg1, arg2, arg3);
    }

    // 0x5473A0 | ?GetHeading@aiPath@@QAEMMHH@Z
    inline float GetHeading(float arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<float, aiPath, float, int32_t, int32_t>>(0x5473A0, this, arg1, arg2, arg3);
    }

    // 0x5474E0 | ?SubSectionDist@aiPath@@QAEMMHH@Z
    inline float SubSectionDist(float arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<float, aiPath, float, int32_t, int32_t>>(0x5474E0, this, arg1, arg2, arg3);
    }

    // 0x5475D0 | ?CenterIndex@aiPath@@QAEHM@Z
    inline int32_t CenterIndex(float arg1)
    {
        return stub<member_func_t<int32_t, aiPath, float>>(0x5475D0, this, arg1);
    }

    // 0x547660 | ?Position@aiPath@@QAEXMAAVVector3@@HH@Z
    inline void Position(float arg1, class Vector3& arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, aiPath, float, class Vector3&, int32_t, int32_t>>(
            0x547660, this, arg1, arg2, arg3, arg4);
    }

    // 0x547670 | ?CenterPosition@aiPath@@QAEXMAAVVector3@@@Z
    inline void CenterPosition(float arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, aiPath, float, class Vector3&>>(0x547670, this, arg1, arg2);
    }

    // 0x547740 | ?Index@aiPath@@QAEHMHH@Z
    inline int32_t Index(float arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, aiPath, float, int32_t, int32_t>>(0x547740, this, arg1, arg2, arg3);
    }

    // 0x547820 | ?Index@aiPath@@QAEHABVVector3@@@Z
    inline int32_t Index(class Vector3 const& arg1)
    {
        return stub<member_func_t<int32_t, aiPath, class Vector3 const&>>(0x547820, this, arg1);
    }

    // 0x547900 | ?Lane@aiPath@@QAEHAAVVector3@@H@Z
    inline int32_t Lane(class Vector3& arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, aiPath, class Vector3&, int32_t>>(0x547900, this, arg1, arg2);
    }

    // 0x547A50 | ?RemAmbPlayer@aiPath@@QAEDH@Z
    inline char RemAmbPlayer(int32_t arg1)
    {
        return stub<member_func_t<char, aiPath, int32_t>>(0x547A50, this, arg1);
    }

    // 0x547AB0 | ?AddAmbPlayer@aiPath@@QAEDH@Z
    inline char AddAmbPlayer(int32_t arg1)
    {
        return stub<member_func_t<char, aiPath, int32_t>>(0x547AB0, this, arg1);
    }

    // 0x547B10 | ?RemPedPlayer@aiPath@@QAEDH@Z
    inline char RemPedPlayer(int32_t arg1)
    {
        return stub<member_func_t<char, aiPath, int32_t>>(0x547B10, this, arg1);
    }

    // 0x547B70 | ?AddPedPlayer@aiPath@@QAEDH@Z
    inline char AddPedPlayer(int32_t arg1)
    {
        return stub<member_func_t<char, aiPath, int32_t>>(0x547B70, this, arg1);
    }

    // 0x547BD0 | ?ClearPeds@aiPath@@QAEXXZ
    inline void ClearPeds()
    {
        return stub<member_func_t<void, aiPath>>(0x547BD0, this);
    }

    // 0x547C00 | ?ClearAmbients@aiPath@@QAEXXZ
    inline void ClearAmbients()
    {
        return stub<member_func_t<void, aiPath>>(0x547C00, this);
    }

    // 0x547DC0 | ?DetermineRoadPosInfo@aiPath@@QAEXABVMatrix34@@PAFPAM121@Z
    inline void DetermineRoadPosInfo(
        class Matrix34 const& arg1, int16_t* arg2, float* arg3, int16_t* arg4, float* arg5, int16_t* arg6)
    {
        return stub<member_func_t<void, aiPath, class Matrix34 const&, int16_t*, float*, int16_t*, float*, int16_t*>>(
            0x547DC0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x547FA0 | ?RoadDistance@aiPath@@QAEXABVVector3@@PAFPAMF2H@Z
    inline void RoadDistance(
        class Vector3 const& arg1, int16_t* arg2, float* arg3, int16_t arg4, float* arg5, int32_t arg6)
    {
        return stub<member_func_t<void, aiPath, class Vector3 const&, int16_t*, float*, int16_t, float*, int32_t>>(
            0x547FA0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x548100 | ?IsSharpTurn@aiPath@@QAEHH_N@Z
    inline int32_t IsSharpTurn(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<int32_t, aiPath, int32_t, bool>>(0x548100, this, arg1, arg2);
    }

    // 0x548160 | ?SharpTurnVertIndex@aiPath@@QAEHH_N@Z
    inline int32_t SharpTurnVertIndex(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<int32_t, aiPath, int32_t, bool>>(0x548160, this, arg1, arg2);
    }

    // 0x5481A0 | ?SharpTurnSetback@aiPath@@QAEMH_N@Z
    inline float SharpTurnSetback(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<float, aiPath, int32_t, bool>>(0x5481A0, this, arg1, arg2);
    }

    // 0x5481D0 | ?SharpTurnAngle@aiPath@@QAEMH_N@Z
    inline float SharpTurnAngle(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<float, aiPath, int32_t, bool>>(0x5481D0, this, arg1, arg2);
    }

    // 0x548200 | ?SharpTurnDir@aiPath@@QAEMH_N@Z
    inline float SharpTurnDir(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<float, aiPath, int32_t, bool>>(0x548200, this, arg1, arg2);
    }

    // 0x548230 | ?SharpTurnRadius@aiPath@@QAEMH_N@Z
    inline float SharpTurnRadius(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<float, aiPath, int32_t, bool>>(0x548230, this, arg1, arg2);
    }

    // 0x548260 | ?SharpTurnCenter@aiPath@@QAEAAVVector3@@H_N@Z
    inline class Vector3& SharpTurnCenter(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<class Vector3&, aiPath, int32_t, bool>>(0x548260, this, arg1, arg2);
    }

    // 0x548290 | ?SharpTurnIntersection@aiPath@@QAEAAVVector3@@H_N@Z
    inline class Vector3& SharpTurnIntersection(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<class Vector3&, aiPath, int32_t, bool>>(0x548290, this, arg1, arg2);
    }

    // 0x5482C0 | ?SharpTurnStartDir@aiPath@@QAEAAVVector3@@H_N@Z
    inline class Vector3& SharpTurnStartDir(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<class Vector3&, aiPath, int32_t, bool>>(0x5482C0, this, arg1, arg2);
    }

    // 0x5482F0 | ?SharpTurnEndDir@aiPath@@QAEAAVVector3@@H_N@Z
    inline class Vector3& SharpTurnEndDir(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<class Vector3&, aiPath, int32_t, bool>>(0x5482F0, this, arg1, arg2);
    }

    // 0x548320 | ?Direction@aiPath@@QAE_NABVMatrix34@@@Z
    inline bool Direction(class Matrix34 const& arg1)
    {
        return stub<member_func_t<bool, aiPath, class Matrix34 const&>>(0x548320, this, arg1);
    }

    // 0x548370 | ?IsPosOnRoad@aiPath@@QAEHABVVector3@@MPAM@Z
    inline int32_t IsPosOnRoad(class Vector3 const& arg1, float arg2, float* arg3)
    {
        return stub<member_func_t<int32_t, aiPath, class Vector3 const&, float, float*>>(
            0x548370, this, arg1, arg2, arg3);
    }

    // 0x5485E0 | ?RoadVertice@aiPath@@QAEHABVVector3@@H@Z
    inline int32_t RoadVertice(class Vector3 const& arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, aiPath, class Vector3 const&, int32_t>>(0x5485E0, this, arg1, arg2);
    }

    // 0x548780 | ?RoadVertice@aiPath@@QAEHABVVector3@@HH@Z
    inline int32_t RoadVertice(class Vector3 const& arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, aiPath, class Vector3 const&, int32_t, int32_t>>(
            0x548780, this, arg1, arg2, arg3);
    }

    // 0x548850 | ?CenterDist@aiPath@@QAEMABVVector3@@@Z
    inline float CenterDist(class Vector3 const& arg1)
    {
        return stub<member_func_t<float, aiPath, class Vector3 const&>>(0x548850, this, arg1);
    }

    // 0x548900 | ?CenterDistance@aiPath@@QAEHABVVector3@@PAFPAM2@Z
    inline int32_t CenterDistance(class Vector3 const& arg1, int16_t* arg2, float* arg3, float* arg4)
    {
        return stub<member_func_t<int32_t, aiPath, class Vector3 const&, int16_t*, float*, float*>>(
            0x548900, this, arg1, arg2, arg3, arg4);
    }

    // 0x548A30 | ?SubSectionPt@aiPath@@QAEXAAVVector3@@HHMH@Z
    inline void SubSectionPt(class Vector3& arg1, int32_t arg2, int32_t arg3, float arg4, int32_t arg5)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, int32_t, int32_t, float, int32_t>>(
            0x548A30, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x548AD0 | ?SubSectionDir@aiPath@@QAEXAAVVector3@@HMH@Z
    inline void SubSectionDir(class Vector3& arg1, int32_t arg2, float arg3, int32_t arg4)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, int32_t, float, int32_t>>(
            0x548AD0, this, arg1, arg2, arg3, arg4);
    }

    // 0x548B70 | ?IntersectionEntryPt@aiPath@@QAEXAAVVector3@@HMH@Z
    inline void IntersectionEntryPt(class Vector3& arg1, int32_t arg2, float arg3, int32_t arg4)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, int32_t, float, int32_t>>(
            0x548B70, this, arg1, arg2, arg3, arg4);
    }

    // 0x548CC0 | ?IntersectionEntryVector@aiPath@@QAEXAAVVector3@@MH@Z
    inline void IntersectionEntryVector(class Vector3& arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, float, int32_t>>(0x548CC0, this, arg1, arg2, arg3);
    }

    // 0x548D50 | ?IntersectionExitVector@aiPath@@QAEXAAVVector3@@MH@Z
    inline void IntersectionExitVector(class Vector3& arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class Vector3&, float, int32_t>>(0x548D50, this, arg1, arg2, arg3);
    }

    // 0x548DE0 | ?NumVehiclesAfterDist@aiPath@@QAEHHMH@Z
    inline int32_t NumVehiclesAfterDist(int32_t arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, aiPath, int32_t, float, int32_t>>(0x548DE0, this, arg1, arg2, arg3);
    }

    // 0x548E70 | ?PopAmbVehicle@aiPath@@QAEXPAVaiVehicleSpline@@HH@Z
    inline void PopAmbVehicle(class aiVehicleSpline* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class aiVehicleSpline*, int32_t, int32_t>>(
            0x548E70, this, arg1, arg2, arg3);
    }

    // 0x549060 | ?PushAmbVehicle@aiPath@@QAEXPAVaiVehicleSpline@@HH@Z
    inline void PushAmbVehicle(class aiVehicleSpline* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiPath, class aiVehicleSpline*, int32_t, int32_t>>(
            0x549060, this, arg1, arg2, arg3);
    }

    // 0x5491C0 | ?AddAmbVehicle@aiPath@@QAEXPAVaiVehicleSpline@@HMH@Z
    inline void AddAmbVehicle(class aiVehicleSpline* arg1, int32_t arg2, float arg3, int32_t arg4)
    {
        return stub<member_func_t<void, aiPath, class aiVehicleSpline*, int32_t, float, int32_t>>(
            0x5491C0, this, arg1, arg2, arg3, arg4);
    }

    // 0x549540 | ?RemoveAmbVehicle@aiPath@@QAEHPAVaiVehicleSpline@@HH@Z
    inline int32_t RemoveAmbVehicle(class aiVehicleSpline* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, aiPath, class aiVehicleSpline*, int32_t, int32_t>>(
            0x549540, this, arg1, arg2, arg3);
    }

    // 0x549770 | ?RoadCapacity@aiPath@@QAEHPAVaiVehicleSpline@@HH@Z
    inline int32_t RoadCapacity(class aiVehicleSpline* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, aiPath, class aiVehicleSpline*, int32_t, int32_t>>(
            0x549770, this, arg1, arg2, arg3);
    }

    // 0x5498D0 | ?AddPedestrian@aiPath@@QAEXPAVaiPedestrian@@@Z
    inline void AddPedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiPath, class aiPedestrian*>>(0x5498D0, this, arg1);
    }

    // 0x549910 | ?RemovePedestrian@aiPath@@QAEXPAVaiPedestrian@@@Z
    inline void RemovePedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiPath, class aiPedestrian*>>(0x549910, this, arg1);
    }

    // 0x549980 | ?HasCableCarLine@aiPath@@QAE_NH@Z
    inline bool HasCableCarLine(int32_t arg1)
    {
        return stub<member_func_t<bool, aiPath, int32_t>>(0x549980, this, arg1);
    }

    // 0x5499B0 | ?HasSubwayLine@aiPath@@QAE_NH@Z
    inline bool HasSubwayLine(int32_t arg1)
    {
        return stub<member_func_t<bool, aiPath, int32_t>>(0x5499B0, this, arg1);
    }
};
