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

#include "aiPath.h"

aiPath::aiPath(i32 arg1)
{
    unimplemented();
}

aiPath::~aiPath()
{
    unimplemented();
}

char aiPath::AddAmbPlayer(i32 arg1)
{
    return stub<thiscall_t<char, aiPath*, i32>>(0x547AB0, this, arg1);
}

void aiPath::AddAmbVehicle(class aiVehicleSpline* arg1, i32 arg2, f32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, aiPath*, class aiVehicleSpline*, i32, f32, i32>>(
        0x5491C0, this, arg1, arg2, arg3, arg4);
}

void aiPath::AddBanger(class aiObstacle* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class aiObstacle*, i32, i32>>(0x547140, this, arg1, arg2, arg3);
}

void aiPath::AddBangersToObsMap()
{
    return stub<thiscall_t<void, aiPath*>>(0x5461D0, this);
}

char aiPath::AddPedPlayer(i32 arg1)
{
    return stub<thiscall_t<char, aiPath*, i32>>(0x547B70, this, arg1);
}

void aiPath::AddPedestrian(class aiPedestrian* arg1)
{
    return stub<thiscall_t<void, aiPath*, class aiPedestrian*>>(0x5498D0, this, arg1);
}

void aiPath::AddPedestrian(class aiObstacle* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class aiObstacle*, i32, i32>>(0x547220, this, arg1, arg2, arg3);
}

void aiPath::AddVehicle(class aiObstacle* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class aiObstacle*, i32, i32>>(0x547060, this, arg1, arg2, arg3);
}

void aiPath::AllwaysGo(i32 arg1)
{
    return stub<thiscall_t<void, aiPath*, i32>>(0x547320, this, arg1);
}

void aiPath::AllwaysStop(i32 arg1)
{
    return stub<thiscall_t<void, aiPath*, i32>>(0x547300, this, arg1);
}

void aiPath::CalcRoadTurns(class Vector3& arg1, bool arg2)
{
    return stub<thiscall_t<void, aiPath*, class Vector3&, bool>>(0x546BE0, this, arg1, arg2);
}

f32 aiPath::CenterDist(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, aiPath*, class Vector3 const&>>(0x548850, this, arg1);
}

i32 aiPath::CenterDistance(class Vector3 const& arg1, i16* arg2, f32* arg3, f32* arg4)
{
    return stub<thiscall_t<i32, aiPath*, class Vector3 const&, i16*, f32*, f32*>>(
        0x548900, this, arg1, arg2, arg3, arg4);
}

i32 aiPath::CenterIndex(f32 arg1)
{
    return stub<thiscall_t<i32, aiPath*, f32>>(0x5475D0, this, arg1);
}

f32 aiPath::CenterLength(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<f32, aiPath*, i32, i32>>(0x547340, this, arg1, arg2);
}

void aiPath::CenterPosition(f32 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, aiPath*, f32, class Vector3&>>(0x547670, this, arg1, arg2);
}

void aiPath::ClearAmbients()
{
    return stub<thiscall_t<void, aiPath*>>(0x547C00, this);
}

void aiPath::ClearPeds()
{
    return stub<thiscall_t<void, aiPath*>>(0x547BD0, this);
}

void aiPath::DetermineRoadPosInfo(class Matrix34 const& arg1, i16* arg2, f32* arg3, i16* arg4, f32* arg5, i16* arg6)
{
    return stub<thiscall_t<void, aiPath*, class Matrix34 const&, i16*, f32*, i16*, f32*, i16*>>(
        0x547DC0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool aiPath::Direction(class Matrix34 const& arg1)
{
    return stub<thiscall_t<bool, aiPath*, class Matrix34 const&>>(0x548320, this, arg1);
}

f32 aiPath::GetHeading(f32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<f32, aiPath*, f32, i32, i32>>(0x5473A0, this, arg1, arg2, arg3);
}

bool aiPath::HasCableCarLine(i32 arg1)
{
    return stub<thiscall_t<bool, aiPath*, i32>>(0x549980, this, arg1);
}

bool aiPath::HasSubwayLine(i32 arg1)
{
    return stub<thiscall_t<bool, aiPath*, i32>>(0x5499B0, this, arg1);
}

i32 aiPath::Index(class Vector3 const& arg1)
{
    return stub<thiscall_t<i32, aiPath*, class Vector3 const&>>(0x547820, this, arg1);
}

i32 aiPath::Index(f32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, aiPath*, f32, i32, i32>>(0x547740, this, arg1, arg2, arg3);
}

void aiPath::InitRoadTurns()
{
    return stub<thiscall_t<void, aiPath*>>(0x546380, this);
}

void aiPath::IntersectionEntryPt(class Vector3& arg1, i32 arg2, f32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, aiPath*, class Vector3&, i32, f32, i32>>(0x548B70, this, arg1, arg2, arg3, arg4);
}

void aiPath::IntersectionEntryVector(class Vector3& arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class Vector3&, f32, i32>>(0x548CC0, this, arg1, arg2, arg3);
}

void aiPath::IntersectionExitVector(class Vector3& arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class Vector3&, f32, i32>>(0x548D50, this, arg1, arg2, arg3);
}

i32 aiPath::IsPosOnRoad(class Vector3 const& arg1, f32 arg2, f32* arg3)
{
    return stub<thiscall_t<i32, aiPath*, class Vector3 const&, f32, f32*>>(0x548370, this, arg1, arg2, arg3);
}

i32 aiPath::IsSharpTurn(i32 arg1, bool arg2)
{
    return stub<thiscall_t<i32, aiPath*, i32, bool>>(0x548100, this, arg1, arg2);
}

i32 aiPath::Lane(class Vector3& arg1, i32 arg2)
{
    return stub<thiscall_t<i32, aiPath*, class Vector3&, i32>>(0x547900, this, arg1, arg2);
}

i32 aiPath::NumVehiclesAfterDist(i32 arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, aiPath*, i32, f32, i32>>(0x548DE0, this, arg1, arg2, arg3);
}

void aiPath::PopAmbVehicle(class aiVehicleSpline* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class aiVehicleSpline*, i32, i32>>(0x548E70, this, arg1, arg2, arg3);
}

void aiPath::Position(f32 arg1, class Vector3& arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, aiPath*, f32, class Vector3&, i32, i32>>(0x547660, this, arg1, arg2, arg3, arg4);
}

void aiPath::PushAmbVehicle(class aiVehicleSpline* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class aiVehicleSpline*, i32, i32>>(0x549060, this, arg1, arg2, arg3);
}

void aiPath::ReadBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, aiPath*, class Stream*>>(0x544770, this, arg1);
}

void aiPath::ReadShortcut(class Stream* arg1, i32 arg2)
{
    return stub<thiscall_t<void, aiPath*, class Stream*, i32>>(0x545230, this, arg1, arg2);
}

char aiPath::RemAmbPlayer(i32 arg1)
{
    return stub<thiscall_t<char, aiPath*, i32>>(0x547A50, this, arg1);
}

char aiPath::RemPedPlayer(i32 arg1)
{
    return stub<thiscall_t<char, aiPath*, i32>>(0x547B10, this, arg1);
}

i32 aiPath::RemoveAmbVehicle(class aiVehicleSpline* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, aiPath*, class aiVehicleSpline*, i32, i32>>(0x549540, this, arg1, arg2, arg3);
}

void aiPath::RemoveBanger(class aiObstacle* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class aiObstacle*, i32, i32>>(0x547190, this, arg1, arg2, arg3);
}

void aiPath::RemovePedestrian(class aiPedestrian* arg1)
{
    return stub<thiscall_t<void, aiPath*, class aiPedestrian*>>(0x549910, this, arg1);
}

void aiPath::RemovePedestrian(class aiObstacle* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class aiObstacle*, i32, i32>>(0x547270, this, arg1, arg2, arg3);
}

void aiPath::RemoveVehicle(class aiObstacle* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiPath*, class aiObstacle*, i32, i32>>(0x5470B0, this, arg1, arg2, arg3);
}

void aiPath::Reset()
{
    return stub<thiscall_t<void, aiPath*>>(0x543EF0, this);
}

void aiPath::ResetObstacles()
{
    return stub<thiscall_t<void, aiPath*>>(0x543F90, this);
}

void aiPath::ResetVehicleReactTicks(i32 arg1)
{
    return stub<thiscall_t<void, aiPath*, i32>>(0x544220, this, arg1);
}

void aiPath::ReverseDirection()
{
    return stub<thiscall_t<void, aiPath*>>(0x545D00, this);
}

i32 aiPath::RoadCapacity(class aiVehicleSpline* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, aiPath*, class aiVehicleSpline*, i32, i32>>(0x549770, this, arg1, arg2, arg3);
}

void aiPath::RoadDistance(class Vector3 const& arg1, i16* arg2, f32* arg3, i16 arg4, f32* arg5, i32 arg6)
{
    return stub<thiscall_t<void, aiPath*, class Vector3 const&, i16*, f32*, i16, f32*, i32>>(
        0x547FA0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 aiPath::RoadVertice(class Vector3 const& arg1, i32 arg2)
{
    return stub<thiscall_t<i32, aiPath*, class Vector3 const&, i32>>(0x5485E0, this, arg1, arg2);
}

i32 aiPath::RoadVertice(class Vector3 const& arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, aiPath*, class Vector3 const&, i32, i32>>(0x548780, this, arg1, arg2, arg3);
}

void aiPath::SaveBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, aiPath*, class Stream*>>(0x544350, this, arg1);
}

void aiPath::SetCullroom()
{
    return stub<thiscall_t<void, aiPath*>>(0x5460A0, this);
}

f32 aiPath::SharpTurnAngle(i32 arg1, bool arg2)
{
    return stub<thiscall_t<f32, aiPath*, i32, bool>>(0x5481D0, this, arg1, arg2);
}

class Vector3& aiPath::SharpTurnCenter(i32 arg1, bool arg2)
{
    return stub<thiscall_t<class Vector3&, aiPath*, i32, bool>>(0x548260, this, arg1, arg2);
}

f32 aiPath::SharpTurnDir(i32 arg1, bool arg2)
{
    return stub<thiscall_t<f32, aiPath*, i32, bool>>(0x548200, this, arg1, arg2);
}

class Vector3& aiPath::SharpTurnEndDir(i32 arg1, bool arg2)
{
    return stub<thiscall_t<class Vector3&, aiPath*, i32, bool>>(0x5482F0, this, arg1, arg2);
}

class Vector3& aiPath::SharpTurnIntersection(i32 arg1, bool arg2)
{
    return stub<thiscall_t<class Vector3&, aiPath*, i32, bool>>(0x548290, this, arg1, arg2);
}

f32 aiPath::SharpTurnRadius(i32 arg1, bool arg2)
{
    return stub<thiscall_t<f32, aiPath*, i32, bool>>(0x548230, this, arg1, arg2);
}

f32 aiPath::SharpTurnSetback(i32 arg1, bool arg2)
{
    return stub<thiscall_t<f32, aiPath*, i32, bool>>(0x5481A0, this, arg1, arg2);
}

class Vector3& aiPath::SharpTurnStartDir(i32 arg1, bool arg2)
{
    return stub<thiscall_t<class Vector3&, aiPath*, i32, bool>>(0x5482C0, this, arg1, arg2);
}

i32 aiPath::SharpTurnVertIndex(i32 arg1, bool arg2)
{
    return stub<thiscall_t<i32, aiPath*, i32, bool>>(0x548160, this, arg1, arg2);
}

f32 aiPath::SidewalkSubSectionLength(i32 arg1, i32 arg2, i16 arg3)
{
    return stub<thiscall_t<f32, aiPath*, i32, i32, i16>>(0x544290, this, arg1, arg2, arg3);
}

class Vector3& aiPath::SidewalkVertice(i32 arg1, i16 arg2)
{
    return stub<thiscall_t<class Vector3&, aiPath*, i32, i16>>(0x544300, this, arg1, arg2);
}

void aiPath::SubSectionDir(class Vector3& arg1, i32 arg2, f32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, aiPath*, class Vector3&, i32, f32, i32>>(0x548AD0, this, arg1, arg2, arg3, arg4);
}

f32 aiPath::SubSectionDist(f32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<f32, aiPath*, f32, i32, i32>>(0x5474E0, this, arg1, arg2, arg3);
}

f32 aiPath::SubSectionLength(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<f32, aiPath*, i32, i32, i32>>(0x547360, this, arg1, arg2, arg3);
}

void aiPath::SubSectionPt(class Vector3& arg1, i32 arg2, i32 arg3, f32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, aiPath*, class Vector3&, i32, i32, f32, i32>>(
        0x548A30, this, arg1, arg2, arg3, arg4, arg5);
}

void aiPath::UpdateAmbients()
{
    return stub<thiscall_t<void, aiPath*>>(0x543FC0, this);
}

void aiPath::UpdatePedestrians()
{
    return stub<thiscall_t<void, aiPath*>>(0x544150, this);
}

define_dummy_symbol(ai_aiPath);
