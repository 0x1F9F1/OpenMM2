/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

struct aiVehiclePhysics : aiVehicle
{
public:
    // aiVehiclePhysics::`vftable' @ 0x5B5A7C

    // 0x5592A0 | ??0aiVehiclePhysics@@QAE@XZ
    inline aiVehiclePhysics()
    {
        stub<member_func_t<void, aiVehiclePhysics>>(0x5592A0, this);
    }

    // 0x559380 | ??1aiVehiclePhysics@@QAE@XZ
    inline ~aiVehiclePhysics()
    {
        stub<member_func_t<void, aiVehiclePhysics>>(0x559380, this);
    }

    // 0x5593E0 | ?Init@aiVehiclePhysics@@QAEXHPADFH@Z
    inline void Init(i32 arg1, char* arg2, i16 arg3, i32 arg4)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32, char*, i16, i32>>(
            0x5593E0, this, arg1, arg2, arg3, arg4);
    }

    // 0x5598A0 | ?RegisterRoute@aiVehiclePhysics@@QAEXPAFFABVVector3@@1HMM_N22222MMMM@Z
    inline void RegisterRoute(i16* arg1, i16 arg2, class Vector3 const& arg3, class Vector3 const& arg4, i32 arg5,
        f32 arg6, f32 arg7, bool arg8, bool arg9, bool arg10, bool arg11, bool arg12, bool arg13, f32 arg14, f32 arg15,
        f32 arg16, f32 arg17)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i16*, i16, class Vector3 const&, class Vector3 const&, i32,
            f32, f32, bool, bool, bool, bool, bool, bool, f32, f32, f32, f32>>(0x5598A0, this, arg1, arg2, arg3, arg4,
            arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }

    // 0x55A570 | ?Mirror@aiVehiclePhysics@@QAEXPAVvehCar@@@Z
    inline void Mirror(class vehCar* arg1)
    {
        return stub<member_func_t<void, aiVehiclePhysics, class vehCar*>>(0x55A570, this, arg1);
    }

    // 0x55A740 | ?DestMapComponent@aiVehiclePhysics@@AAEXABVVector3@@PAF1@Z
    inline void DestMapComponent(class Vector3 const& arg1, i16* arg2, i16* arg3)
    {
        return stub<member_func_t<void, aiVehiclePhysics, class Vector3 const&, i16*, i16*>>(
            0x55A740, this, arg1, arg2, arg3);
    }

    // 0x55A8E0 | ?CheckForShortcut@aiVehiclePhysics@@AAEXXZ
    inline void CheckForShortcut()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55A8E0, this);
    }

    // 0x55A8F0 | ?DriveRoute@aiVehiclePhysics@@QAEXH@Z
    inline void DriveRoute(i32 arg1)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32>>(0x55A8F0, this, arg1);
    }

    // 0x55AB50 | ?InitShortcut@aiVehiclePhysics@@AAEXXZ
    inline void InitShortcut()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55AB50, this);
    }

    // 0x55ABE0 | ?Shortcut@aiVehiclePhysics@@AAEXXZ
    inline void Shortcut()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55ABE0, this);
    }

    // 0x55ADA0 | ?Stop@aiVehiclePhysics@@AAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55ADA0, this);
    }

    // 0x55AE80 | ?InitForward@aiVehiclePhysics@@AAEXXZ
    inline void InitForward()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55AE80, this);
    }

    // 0x55AF50 | ?Forward@aiVehiclePhysics@@AAEXXZ
    inline void Forward()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55AF50, this);
    }

    // 0x55B400 | ?InitBackup@aiVehiclePhysics@@AAEXXZ
    inline void InitBackup()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55B400, this);
    }

    // 0x55B460 | ?Backup@aiVehiclePhysics@@AAEXXZ
    inline void Backup()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55B460, this);
    }

    // 0x55B5B0 | ?FinishedBackingUp@aiVehiclePhysics@@AAEXXZ
    inline void FinishedBackingUp()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55B5B0, this);
    }

    // 0x55B660 | ?CalcSpeed@aiVehiclePhysics@@AAEXXZ
    inline void CalcSpeed()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55B660, this);
    }

    // 0x55B830 | ?CalcRoadSpeed@aiVehiclePhysics@@AAEXXZ
    inline void CalcRoadSpeed()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55B830, this);
    }

    // 0x55C080 | ?CheckDistance@aiVehiclePhysics@@AAEMH@Z
    inline f32 CheckDistance(i32 arg1)
    {
        return stub<member_func_t<f32, aiVehiclePhysics, i32>>(0x55C080, this, arg1);
    }

    // 0x55C0A0 | ?SolveRoadTargetPoint@aiVehiclePhysics@@AAEXXZ
    inline void SolveRoadTargetPoint()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55C0A0, this);
    }

    // 0x55C180 | ?SolveShortcutTargetPoint@aiVehiclePhysics@@AAEXXZ
    inline void SolveShortcutTargetPoint()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55C180, this);
    }

    // 0x55C510 | ?PlanRoute@aiVehiclePhysics@@AAEHXZ
    inline i32 PlanRoute()
    {
        return stub<member_func_t<i32, aiVehiclePhysics>>(0x55C510, this);
    }

    // 0x55C7A0 | ?StopRoadTraffic@aiVehiclePhysics@@QAEX_N@Z
    inline void StopRoadTraffic(bool arg1)
    {
        return stub<member_func_t<void, aiVehiclePhysics, bool>>(0x55C7A0, this, arg1);
    }

    // 0x55C860 | ?LocateWayPtFromInt@aiVehiclePhysics@@AAEHH@Z
    inline i32 LocateWayPtFromInt(i32 arg1)
    {
        return stub<member_func_t<i32, aiVehiclePhysics, i32>>(0x55C860, this, arg1);
    }

    // 0x55CD40 | ?LocateWayPtFromRoad@aiVehiclePhysics@@AAEHPAVaiPath@@@Z
    inline i32 LocateWayPtFromRoad(class aiPath* arg1)
    {
        return stub<member_func_t<i32, aiVehiclePhysics, class aiPath*>>(0x55CD40, this, arg1);
    }

    // 0x55D9F0 | ?CalcRoute@aiVehiclePhysics@@AAEXXZ
    inline void CalcRoute()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55D9F0, this);
    }

    // 0x55DBC0 | ?DetermineBestRoute@aiVehiclePhysics@@AAEXXZ
    inline void DetermineBestRoute()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55DBC0, this);
    }

    // 0x55DD10 | ?EnumRoutes@aiVehiclePhysics@@AAEXH@Z
    inline void EnumRoutes(i32 arg1)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32>>(0x55DD10, this, arg1);
    }

    // 0x55E0C0 | ?CalcObstacleAvoidPoints@aiVehiclePhysics@@AAEHPAVaiObstacle@@HHPAVVector3@@PAPAV2@PAF3@Z
    inline i32 CalcObstacleAvoidPoints(
        class aiObstacle* arg1, i32 arg2, i32 arg3, class Vector3* arg4, class aiObstacle** arg5, i16* arg6, i16* arg7)
    {
        return stub<member_func_t<i32, aiVehiclePhysics, class aiObstacle*, i32, i32, class Vector3*,
            class aiObstacle**, i16*, i16*>>(0x55E0C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x55E4D0 | ?EnumTargets@aiVehiclePhysics@@AAEXAAVVector3@@PAVaiObstacle@@HHHHHHPAV2@PAPAV3@PAF4PAH@Z
    inline void EnumTargets(class Vector3& arg1, class aiObstacle* arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6,
        i32 arg7, i32 arg8, class Vector3* arg9, class aiObstacle** arg10, i16* arg11, i16* arg12, i32* arg13)
    {
        return stub<member_func_t<void, aiVehiclePhysics, class Vector3&, class aiObstacle*, i32, i32, i32, i32, i32,
            i32, class Vector3*, class aiObstacle**, i16*, i16*, i32*>>(
            0x55E4D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x55EC50 | ?CalcSharpTurnTarget@aiVehiclePhysics@@AAEHAAHHAAVVector3@@@Z
    inline i32 CalcSharpTurnTarget(i32& arg1, i32 arg2, class Vector3& arg3)
    {
        return stub<member_func_t<i32, aiVehiclePhysics, i32&, i32, class Vector3&>>(0x55EC50, this, arg1, arg2, arg3);
    }

    // 0x55F800 | ?SaveTurnTarget@aiVehiclePhysics@@AAEXHH@Z
    inline void SaveTurnTarget(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32, i32>>(0x55F800, this, arg1, arg2);
    }

    // 0x55F9B0 | ?InitRoadTurns@aiVehiclePhysics@@AAEXXZ
    inline void InitRoadTurns()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55F9B0, this);
    }

    // 0x55FB60 | ?CalcRoadTurns@aiVehiclePhysics@@AAEXXZ
    inline void CalcRoadTurns()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x55FB60, this);
    }

    // 0x5600B0 | ?CalcTurnIntersection@aiVehiclePhysics@@AAEMH@Z
    inline f32 CalcTurnIntersection(i32 arg1)
    {
        return stub<member_func_t<f32, aiVehiclePhysics, i32>>(0x5600B0, this, arg1);
    }

    // 0x560900 | ?CalcCurrentMaxWidthAdjustment@aiVehiclePhysics@@AAEMH@Z
    inline f32 CalcCurrentMaxWidthAdjustment(i32 arg1)
    {
        return stub<member_func_t<f32, aiVehiclePhysics, i32>>(0x560900, this, arg1);
    }

    // 0x560B50 | ?CalcCurrentRdOffset@aiVehiclePhysics@@AAEMH@Z
    inline f32 CalcCurrentRdOffset(i32 arg1)
    {
        return stub<member_func_t<f32, aiVehiclePhysics, i32>>(0x560B50, this, arg1);
    }

    // 0x560DC0 | ?CalcNextMaxWidthAdjustment@aiVehiclePhysics@@AAEMH@Z
    inline f32 CalcNextMaxWidthAdjustment(i32 arg1)
    {
        return stub<member_func_t<f32, aiVehiclePhysics, i32>>(0x560DC0, this, arg1);
    }

    // 0x561020 | ?CalcNextRdOffset@aiVehiclePhysics@@AAEMH@Z
    inline f32 CalcNextRdOffset(i32 arg1)
    {
        return stub<member_func_t<f32, aiVehiclePhysics, i32>>(0x561020, this, arg1);
    }

    // 0x561290 | ?InSharpTurn@aiVehiclePhysics@@AAEHH@Z
    inline i32 InSharpTurn(i32 arg1)
    {
        return stub<member_func_t<i32, aiVehiclePhysics, i32>>(0x561290, this, arg1);
    }

    // 0x5616F0 | ?SaveTarget@aiVehiclePhysics@@AAEXHAAVVector3@@PAVaiObstacle@@AAFH2@Z
    inline void SaveTarget(i32 arg1, class Vector3& arg2, class aiObstacle* arg3, i16& arg4, i32 arg5, i16& arg6)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32, class Vector3&, class aiObstacle*, i16&, i32, i16&>>(
            0x5616F0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x561950 | ?ContinueCheck@aiVehiclePhysics@@AAEXH@Z
    inline void ContinueCheck(i32 arg1)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32>>(0x561950, this, arg1);
    }

    // 0x561AD0 | ?CalcDestinationTarget@aiVehiclePhysics@@AAEXHAAVVector3@@@Z
    inline void CalcDestinationTarget(i32 arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32, class Vector3&>>(0x561AD0, this, arg1, arg2);
    }

    // 0x5638D0 | ?SetTargetPtToDestination@aiVehiclePhysics@@AAEXH@Z
    inline void SetTargetPtToDestination(i32 arg1)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32>>(0x5638D0, this, arg1);
    }

    // 0x563B60 | ?CalcRoadTarget@aiVehiclePhysics@@AAEXHAAVVector3@@@Z
    inline void CalcRoadTarget(i32 arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32, class Vector3&>>(0x563B60, this, arg1, arg2);
    }

    // 0x567230 | ?IsTargetBlocked@aiVehiclePhysics@@AAEPAVaiObstacle@@AAVVector3@@0HHHHMPAH@Z
    inline class aiObstacle* IsTargetBlocked(
        class Vector3& arg1, class Vector3& arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, f32 arg7, i32* arg8)
    {
        return stub<member_func_t<class aiObstacle*, aiVehiclePhysics, class Vector3&, class Vector3&, i32, i32, i32,
            i32, f32, i32*>>(0x567230, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x5677D0 | ?DrawRouteThroughTraffic@aiVehiclePhysics@@QAEXXZ
    inline void DrawRouteThroughTraffic()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x5677D0, this);
    }

    // 0x5677E0 | ?DrawTurn@aiVehiclePhysics@@QAEXH@Z
    inline void DrawTurn(i32 arg1)
    {
        return stub<member_func_t<void, aiVehiclePhysics, i32>>(0x5677E0, this, arg1);
    }

    // 0x5677F0 | ?Dump@aiVehiclePhysics@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x5677F0, this);
    }

    // 0x567C10 | ?Position@aiVehiclePhysics@@UAEXAAVVector3@@@Z
    inline void Position(class Vector3& arg1) override
    {
        return stub<member_func_t<void, aiVehiclePhysics, class Vector3&>>(0x567C10, this, arg1);
    }

    // 0x567C00 | ?Speed@aiVehiclePhysics@@UAEMXZ
    inline f32 Speed() override
    {
        return stub<member_func_t<f32, aiVehiclePhysics>>(0x567C00, this);
    }

    // 0x55AAD0 | ?CurrentRoadIdx@aiVehiclePhysics@@UAEHPAPAVaiPath@@QA_NPAH@Z
    inline i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) override
    {
        return stub<member_func_t<i32, aiVehiclePhysics, class aiPath**, bool* const, i32*>>(
            0x55AAD0, this, arg1, arg2, arg3);
    }

    // 0x567BB0 | ?CurrentRdVert@aiVehiclePhysics@@UAEHXZ
    inline i32 CurrentRdVert() override
    {
        return stub<member_func_t<i32, aiVehiclePhysics>>(0x567BB0, this);
    }

    // 0x5597A0 | ?Reset@aiVehiclePhysics@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x5597A0, this);
    }

    // 0x567B90 | ?Type@aiVehiclePhysics@@UAEHXZ
    inline i32 Type() override
    {
        return stub<member_func_t<i32, aiVehiclePhysics>>(0x567B90, this);
    }

    // 0x567C40 | ?GetMatrix@aiVehiclePhysics@@UAEAAVMatrix34@@XZ
    inline class Matrix34& GetMatrix() override
    {
        return stub<member_func_t<class Matrix34&, aiVehiclePhysics>>(0x567C40, this);
    }

    // 0x567BC0 | ?FrontBumperDistance@aiVehiclePhysics@@UAEMXZ
    inline f32 FrontBumperDistance() override
    {
        return stub<member_func_t<f32, aiVehiclePhysics>>(0x567BC0, this);
    }

    // 0x567BD0 | ?BackBumperDistance@aiVehiclePhysics@@UAEMXZ
    inline f32 BackBumperDistance() override
    {
        return stub<member_func_t<f32, aiVehiclePhysics>>(0x567BD0, this);
    }

    // 0x567BE0 | ?LSideDistance@aiVehiclePhysics@@UAEMXZ
    inline f32 LSideDistance() override
    {
        return stub<member_func_t<f32, aiVehiclePhysics>>(0x567BE0, this);
    }

    // 0x567BF0 | ?RSideDistance@aiVehiclePhysics@@UAEMXZ
    inline f32 RSideDistance() override
    {
        return stub<member_func_t<f32, aiVehiclePhysics>>(0x567BF0, this);
    }

    // 0x567BA0 | ?CurrentLane@aiVehiclePhysics@@UAEHXZ
    inline i32 CurrentLane() override
    {
        return stub<member_func_t<i32, aiVehiclePhysics>>(0x567BA0, this);
    }

    // 0x567C50 | ?CurrentRoadId@aiVehiclePhysics@@UAEHXZ
    inline i32 CurrentRoadId() override
    {
        return stub<member_func_t<i32, aiVehiclePhysics>>(0x567C50, this);
    }

    // 0x5677C0 | ?DrawId@aiVehiclePhysics@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x5677C0, this);
    }

    // 0x5679D0 | ?ReplayDebug@aiVehiclePhysics@@UAEXXZ
    inline void ReplayDebug() override
    {
        return stub<member_func_t<void, aiVehiclePhysics>>(0x5679D0, this);
    }
};

struct aiRouteNode
{
public:
    // 0x559340 | ??0aiRouteNode@@QAE@XZ
    inline aiRouteNode()
    {
        stub<member_func_t<void, aiRouteNode>>(0x559340, this);
    }

    // 0x559350 | ?Reset@aiRouteNode@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiRouteNode>>(0x559350, this);
    }

    // 0x567920 | ?ReplayDebug@aiRouteNode@@QAEXXZ
    inline void ReplayDebug()
    {
        return stub<member_func_t<void, aiRouteNode>>(0x567920, this);
    }
};
