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

#include "aiVehiclePhysics.h"

aiVehiclePhysics::aiVehiclePhysics()
{
    unimplemented();
}

aiVehiclePhysics::~aiVehiclePhysics()
{
    unimplemented();
}

f32 aiVehiclePhysics::BackBumperDistance()
{
    return stub<thiscall_t<f32, aiVehiclePhysics*>>(0x567BD0, this);
}

i32 aiVehiclePhysics::CurrentLane()
{
    return stub<thiscall_t<i32, aiVehiclePhysics*>>(0x567BA0, this);
}

i32 aiVehiclePhysics::CurrentRdVert()
{
    return stub<thiscall_t<i32, aiVehiclePhysics*>>(0x567BB0, this);
}

i32 aiVehiclePhysics::CurrentRoadId()
{
    return stub<thiscall_t<i32, aiVehiclePhysics*>>(0x567C50, this);
}

i32 aiVehiclePhysics::CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3)
{
    return stub<thiscall_t<i32, aiVehiclePhysics*, class aiPath**, bool* const, i32*>>(
        0x55AAD0, this, arg1, arg2, arg3);
}

void aiVehiclePhysics::DrawId()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x5677C0, this);
}

void aiVehiclePhysics::DrawRouteThroughTraffic()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x5677D0, this);
}

void aiVehiclePhysics::DrawTurn(i32 arg1)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32>>(0x5677E0, this, arg1);
}

void aiVehiclePhysics::DriveRoute(i32 arg1)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32>>(0x55A8F0, this, arg1);
}

void aiVehiclePhysics::Dump()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x5677F0, this);
}

f32 aiVehiclePhysics::FrontBumperDistance()
{
    return stub<thiscall_t<f32, aiVehiclePhysics*>>(0x567BC0, this);
}

class Matrix34& aiVehiclePhysics::GetMatrix()
{
    return stub<thiscall_t<class Matrix34&, aiVehiclePhysics*>>(0x567C40, this);
}

void aiVehiclePhysics::Init(i32 arg1, char* arg2, i16 arg3, i32 arg4)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32, char*, i16, i32>>(0x5593E0, this, arg1, arg2, arg3, arg4);
}

f32 aiVehiclePhysics::LSideDistance()
{
    return stub<thiscall_t<f32, aiVehiclePhysics*>>(0x567BE0, this);
}

void aiVehiclePhysics::Mirror(class vehCar* arg1)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, class vehCar*>>(0x55A570, this, arg1);
}

void aiVehiclePhysics::Position(class Vector3& arg1)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, class Vector3&>>(0x567C10, this, arg1);
}

f32 aiVehiclePhysics::RSideDistance()
{
    return stub<thiscall_t<f32, aiVehiclePhysics*>>(0x567BF0, this);
}

void aiVehiclePhysics::RegisterRoute(i16* arg1, i16 arg2, class Vector3 const& arg3, class Vector3 const& arg4,
    i32 arg5, f32 arg6, f32 arg7, bool arg8, bool arg9, bool arg10, bool arg11, bool arg12, bool arg13, f32 arg14,
    f32 arg15, f32 arg16, f32 arg17)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i16*, i16, class Vector3 const&, class Vector3 const&, i32, f32,
        f32, bool, bool, bool, bool, bool, bool, f32, f32, f32, f32>>(0x5598A0, this, arg1, arg2, arg3, arg4, arg5,
        arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
}

void aiVehiclePhysics::ReplayDebug()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x5679D0, this);
}

void aiVehiclePhysics::Reset()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x5597A0, this);
}

f32 aiVehiclePhysics::Speed()
{
    return stub<thiscall_t<f32, aiVehiclePhysics*>>(0x567C00, this);
}

void aiVehiclePhysics::StopRoadTraffic(bool arg1)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, bool>>(0x55C7A0, this, arg1);
}

i32 aiVehiclePhysics::Type()
{
    return stub<thiscall_t<i32, aiVehiclePhysics*>>(0x567B90, this);
}

void aiVehiclePhysics::Backup()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55B460, this);
}

f32 aiVehiclePhysics::CalcCurrentMaxWidthAdjustment(i32 arg1)
{
    return stub<thiscall_t<f32, aiVehiclePhysics*, i32>>(0x560900, this, arg1);
}

f32 aiVehiclePhysics::CalcCurrentRdOffset(i32 arg1)
{
    return stub<thiscall_t<f32, aiVehiclePhysics*, i32>>(0x560B50, this, arg1);
}

void aiVehiclePhysics::CalcDestinationTarget(i32 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32, class Vector3&>>(0x561AD0, this, arg1, arg2);
}

f32 aiVehiclePhysics::CalcNextMaxWidthAdjustment(i32 arg1)
{
    return stub<thiscall_t<f32, aiVehiclePhysics*, i32>>(0x560DC0, this, arg1);
}

f32 aiVehiclePhysics::CalcNextRdOffset(i32 arg1)
{
    return stub<thiscall_t<f32, aiVehiclePhysics*, i32>>(0x561020, this, arg1);
}

i32 aiVehiclePhysics::CalcObstacleAvoidPoints(
    class aiObstacle* arg1, i32 arg2, i32 arg3, class Vector3* arg4, class aiObstacle** arg5, i16* arg6, i16* arg7)
{
    return stub<thiscall_t<i32, aiVehiclePhysics*, class aiObstacle*, i32, i32, class Vector3*, class aiObstacle**,
        i16*, i16*>>(0x55E0C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void aiVehiclePhysics::CalcRoadSpeed()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55B830, this);
}

void aiVehiclePhysics::CalcRoadTarget(i32 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32, class Vector3&>>(0x563B60, this, arg1, arg2);
}

void aiVehiclePhysics::CalcRoadTurns()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55FB60, this);
}

void aiVehiclePhysics::CalcRoute()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55D9F0, this);
}

i32 aiVehiclePhysics::CalcSharpTurnTarget(i32& arg1, i32 arg2, class Vector3& arg3)
{
    return stub<thiscall_t<i32, aiVehiclePhysics*, i32&, i32, class Vector3&>>(0x55EC50, this, arg1, arg2, arg3);
}

void aiVehiclePhysics::CalcSpeed()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55B660, this);
}

f32 aiVehiclePhysics::CalcTurnIntersection(i32 arg1)
{
    return stub<thiscall_t<f32, aiVehiclePhysics*, i32>>(0x5600B0, this, arg1);
}

f32 aiVehiclePhysics::CheckDistance(i32 arg1)
{
    return stub<thiscall_t<f32, aiVehiclePhysics*, i32>>(0x55C080, this, arg1);
}

void aiVehiclePhysics::CheckForShortcut()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55A8E0, this);
}

void aiVehiclePhysics::ContinueCheck(i32 arg1)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32>>(0x561950, this, arg1);
}

void aiVehiclePhysics::DestMapComponent(class Vector3 const& arg1, i16* arg2, i16* arg3)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, class Vector3 const&, i16*, i16*>>(
        0x55A740, this, arg1, arg2, arg3);
}

void aiVehiclePhysics::DetermineBestRoute()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55DBC0, this);
}

void aiVehiclePhysics::EnumRoutes(i32 arg1)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32>>(0x55DD10, this, arg1);
}

void aiVehiclePhysics::EnumTargets(class Vector3& arg1, class aiObstacle* arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6,
    i32 arg7, i32 arg8, class Vector3* arg9, class aiObstacle** arg10, i16* arg11, i16* arg12, i32* arg13)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, class Vector3&, class aiObstacle*, i32, i32, i32, i32, i32, i32,
        class Vector3*, class aiObstacle**, i16*, i16*, i32*>>(
        0x55E4D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

void aiVehiclePhysics::FinishedBackingUp()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55B5B0, this);
}

void aiVehiclePhysics::Forward()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55AF50, this);
}

i32 aiVehiclePhysics::InSharpTurn(i32 arg1)
{
    return stub<thiscall_t<i32, aiVehiclePhysics*, i32>>(0x561290, this, arg1);
}

void aiVehiclePhysics::InitBackup()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55B400, this);
}

void aiVehiclePhysics::InitForward()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55AE80, this);
}

void aiVehiclePhysics::InitRoadTurns()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55F9B0, this);
}

void aiVehiclePhysics::InitShortcut()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55AB50, this);
}

class aiObstacle* aiVehiclePhysics::IsTargetBlocked(
    class Vector3& arg1, class Vector3& arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, f32 arg7, i32* arg8)
{
    return stub<thiscall_t<class aiObstacle*, aiVehiclePhysics*, class Vector3&, class Vector3&, i32, i32, i32, i32,
        f32, i32*>>(0x567230, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

i32 aiVehiclePhysics::LocateWayPtFromInt(i32 arg1)
{
    return stub<thiscall_t<i32, aiVehiclePhysics*, i32>>(0x55C860, this, arg1);
}

i32 aiVehiclePhysics::LocateWayPtFromRoad(class aiPath* arg1)
{
    return stub<thiscall_t<i32, aiVehiclePhysics*, class aiPath*>>(0x55CD40, this, arg1);
}

i32 aiVehiclePhysics::PlanRoute()
{
    return stub<thiscall_t<i32, aiVehiclePhysics*>>(0x55C510, this);
}

void aiVehiclePhysics::SaveTarget(i32 arg1, class Vector3& arg2, class aiObstacle* arg3, i16& arg4, i32 arg5, i16& arg6)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32, class Vector3&, class aiObstacle*, i16&, i32, i16&>>(
        0x5616F0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void aiVehiclePhysics::SaveTurnTarget(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32, i32>>(0x55F800, this, arg1, arg2);
}

void aiVehiclePhysics::SetTargetPtToDestination(i32 arg1)
{
    return stub<thiscall_t<void, aiVehiclePhysics*, i32>>(0x5638D0, this, arg1);
}

void aiVehiclePhysics::Shortcut()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55ABE0, this);
}

void aiVehiclePhysics::SolveRoadTargetPoint()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55C0A0, this);
}

void aiVehiclePhysics::SolveShortcutTargetPoint()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55C180, this);
}

void aiVehiclePhysics::Stop()
{
    return stub<thiscall_t<void, aiVehiclePhysics*>>(0x55ADA0, this);
}

aiRouteNode::aiRouteNode()
{
    unimplemented();
}

void aiRouteNode::ReplayDebug()
{
    return stub<thiscall_t<void, aiRouteNode*>>(0x567920, this);
}

void aiRouteNode::Reset()
{
    return stub<thiscall_t<void, aiRouteNode*>>(0x559350, this);
}

define_dummy_symbol(ai_aiVehiclePhysics);
