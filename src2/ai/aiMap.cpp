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

#include "aiMap.h"

aiMap::aiMap()
{
    unimplemented();
}

aiMap::~aiMap()
{
    unimplemented();
}

void aiMap::AddAmbient(class aiVehicleSpline* arg1)
{
    return stub<thiscall_t<void, aiMap*, class aiVehicleSpline*>>(0x53A5B0, this, arg1);
}

void aiMap::AddPedestrian(class aiPedestrian* arg1)
{
    return stub<thiscall_t<void, aiMap*, class aiPedestrian*>>(0x539D30, this, arg1);
}

i32 aiMap::AddPlayer(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class vehCar*>>(0x53B640, this, arg1);
}

void aiMap::AddRoutingNode(i32 arg1)
{
    return stub<thiscall_t<void, aiMap*, i32>>(0x53B560, this, arg1);
}

void aiMap::AllwaysGreen()
{
    return stub<thiscall_t<void, aiMap*>>(0x537520, this);
}

void aiMap::AllwaysRed()
{
    return stub<thiscall_t<void, aiMap*>>(0x537560, this);
}

class aiCTFRacer* aiMap::CTFOpponent(i32 arg1)
{
    return stub<thiscall_t<class aiCTFRacer*, aiMap*, i32>>(0x534990, this, arg1);
}

class aiCableCar* aiMap::CableCar(i32 arg1)
{
    return stub<thiscall_t<class aiCableCar*, aiMap*, i32>>(0x534A30, this, arg1);
}

void aiMap::CalcRoute(class Matrix34 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, i16* arg4,
    i16* arg5, i16 arg6, i16 arg7, bool arg8)
{
    return stub<thiscall_t<void, aiMap*, class Matrix34 const&, class Vector3 const&, class Vector3 const&, i16*, i16*,
        i16, i16, bool>>(0x53A7A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

i32 aiMap::ChooseNextFreewayLink(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x539870, this, arg1);
}

i32 aiMap::ChooseNextLaneLink(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x539750, this, arg1);
}

i32 aiMap::ChooseNextLeftStraightLink(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x538BD0, this, arg1);
}

i32 aiMap::ChooseNextRandomLink(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x538A10, this, arg1);
}

i32 aiMap::ChooseNextRightLink(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x538EC0, this, arg1);
}

i32 aiMap::ChooseNextRightStraightFreewayLink(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x5399A0, this, arg1);
}

i32 aiMap::ChooseNextRightStraightLink(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x538FA0, this, arg1);
}

i32 aiMap::ChooseNextStraightLink(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x5392B0, this, arg1);
}

i32 aiMap::ChooseStraightLinkAt4Way(class aiRailSet* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class aiRailSet*>>(0x5396A0, this, arg1);
}

void aiMap::Clean()
{
    return stub<thiscall_t<void, aiMap*>>(0x534C10, this);
}

void aiMap::ClearPeds(class aiPath* arg1)
{
    return stub<thiscall_t<void, aiMap*, class aiPath*>>(0x539CF0, this, arg1);
}

i32 aiMap::CoreMapComponent(class Vector3 const& arg1, i16* arg2, i16* arg3, i16 arg4, i16 arg5)
{
    return stub<thiscall_t<i32, aiMap*, class Vector3 const&, i16*, i16*, i16, i16>>(
        0x537C70, this, arg1, arg2, arg3, arg4, arg5);
}

void aiMap::Cull()
{
    return stub<thiscall_t<void, aiMap*>>(0x5374F0, this);
}

class aiPath* aiMap::DetRdSegBetweenInts(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<class aiPath*, aiMap*, i32, i32>>(0x53A730, this, arg1, arg2);
}

class aiPath* aiMap::DetRdSegBetweenInts(class aiIntersection* arg1, class aiIntersection* arg2, bool* arg3)
{
    return stub<thiscall_t<class aiPath*, aiMap*, class aiIntersection*, class aiIntersection*, bool*>>(
        0x53A680, this, arg1, arg2, arg3);
}

i32 aiMap::DetermineRoadPosInfo(
    class Matrix34 const& arg1, class aiRailSet* arg2, i16* arg3, f32* arg4, i16* arg5, f32* arg6, i32 arg7, i32 arg8)
{
    return stub<thiscall_t<i32, aiMap*, class Matrix34 const&, class aiRailSet*, i16*, f32*, i16*, f32*, i32, i32>>(
        0x537E00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

void aiMap::DrawAppRoads()
{
    return stub<thiscall_t<void, aiMap*>>(0x5375A0, this);
}

void aiMap::DrawFinalCheckPoint()
{
    return stub<thiscall_t<void, aiMap*>>(0x53B860, this);
}

void aiMap::DrawMap()
{
    return stub<thiscall_t<void, aiMap*>>(0x5375C0, this);
}

void aiMap::DrawNextVisibleAmbient()
{
    return stub<thiscall_t<void, aiMap*>>(0x537500, this);
}

void aiMap::DrawPathIds()
{
    return stub<thiscall_t<void, aiMap*>>(0x5375E0, this);
}

void aiMap::DrawX(class Vector3& arg1)
{
    return stub<thiscall_t<void, aiMap*, class Vector3&>>(0x537510, this, arg1);
}

void aiMap::Dump()
{
    return stub<thiscall_t<void, aiMap*>>(0x538840, this);
}

i32 aiMap::FindAmbAppRoad(i32 arg1)
{
    return stub<thiscall_t<i32, aiMap*, i32>>(0x537F30, this, arg1);
}

i32 aiMap::FindPedAppRoad(i32 arg1)
{
    return stub<thiscall_t<i32, aiMap*, i32>>(0x537F60, this, arg1);
}

class aiPath* aiMap::GetPathFromID(i32 arg1)
{
    return stub<thiscall_t<class aiPath*, aiMap*, i32>>(0x538280, this, arg1);
}

i32 aiMap::GoodRoadForCopStartPos(i32 arg1)
{
    return stub<thiscall_t<i32, aiMap*, i32>>(0x53A760, this, arg1);
}

class mcHookman* aiMap::Hookman(i32 arg1)
{
    return stub<thiscall_t<class mcHookman*, aiMap*, i32>>(0x5349E0, this, arg1);
}

void aiMap::Init(
    char* arg1, char* arg2, char* arg3, struct dgStatePack const& arg4, i32 arg5, class vehCar** arg6, bool arg7)
{
    return stub<thiscall_t<void, aiMap*, char*, char*, char*, struct dgStatePack const&, i32, class vehCar**, bool>>(
        0x534FC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void aiMap::InitRouting()
{
    return stub<thiscall_t<void, aiMap*>>(0x534F60, this);
}

class aiIntersection* aiMap::Intersection(i32 arg1)
{
    return stub<thiscall_t<class aiIntersection*, aiMap*, i32>>(0x534880, this, arg1);
}

i32 aiMap::MapComponent(class Vector3 const& arg1, i16* arg2, i16* arg3, i16 arg4)
{
    return stub<thiscall_t<i32, aiMap*, class Vector3 const&, i16*, i16*, i16>>(0x537680, this, arg1, arg2, arg3, arg4);
}

i32 aiMap::MapComponent(class Vector3 const& arg1, i16* arg2, i16* arg3, i16 arg4, i16 arg5)
{
    return stub<thiscall_t<i32, aiMap*, class Vector3 const&, i16*, i16*, i16, i16>>(
        0x537AA0, this, arg1, arg2, arg3, arg4, arg5);
}

i32 aiMap::MapComponentType(i32 arg1, i32* arg2)
{
    return stub<thiscall_t<i32, aiMap*, i32, i32*>>(0x537600, this, arg1, arg2);
}

class aiRouteRacer* aiMap::Opponent(i32 arg1)
{
    return stub<thiscall_t<class aiRouteRacer*, aiMap*, i32>>(0x534940, this, arg1);
}

class aiPath* aiMap::Path(i32 arg1)
{
    return stub<thiscall_t<class aiPath*, aiMap*, i32>>(0x534850, this, arg1);
}

class aiPedestrian* aiMap::Pedestrian(i32 arg1)
{
    return stub<thiscall_t<class aiPedestrian*, aiMap*, i32>>(0x534AB0, this, arg1);
}

class aiVehiclePlayer* aiMap::Player(i32 arg1)
{
    return stub<thiscall_t<class aiVehiclePlayer*, aiMap*, i32>>(0x534AF0, this, arg1);
}

class aiPoliceOfficer* aiMap::Police(i32 arg1)
{
    return stub<thiscall_t<class aiPoliceOfficer*, aiMap*, i32>>(0x5348F0, this, arg1);
}

i32 aiMap::PositionToAIMapComp(class Vector3 const& arg1, i16* arg2, i16* arg3, i16* arg4, i16 arg5)
{
    return stub<thiscall_t<i32, aiMap*, class Vector3 const&, i16*, i16*, i16*, i16>>(
        0x5377B0, this, arg1, arg2, arg3, arg4, arg5);
}

class aiPath* aiMap::PredictAmbFreewayIntersectionPath(i32 arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<class aiPath*, aiMap*, i32, class Matrix34 const&>>(0x538530, this, arg1, arg2);
}

class aiPath* aiMap::PredictAmbIntersectionPath(i32 arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<class aiPath*, aiMap*, i32, class Matrix34 const&>>(0x5382C0, this, arg1, arg2);
}

class aiPath* aiMap::PredictIntersectionPath(i32 arg1, class Matrix34 const& arg2, i32 arg3, bool* arg4)
{
    return stub<thiscall_t<class aiPath*, aiMap*, i32, class Matrix34 const&, i32, bool*>>(
        0x537F90, this, arg1, arg2, arg3, arg4);
}

void aiMap::ReadBinary(char* arg1, char* arg2)
{
    return stub<thiscall_t<void, aiMap*, char*, char*>>(0x535EE0, this, arg1, arg2);
}

void aiMap::RemoveAmbient(class aiVehicleSpline* arg1)
{
    return stub<thiscall_t<void, aiMap*, class aiVehicleSpline*>>(0x53A600, this, arg1);
}

void aiMap::RemovePedestrian(class aiPedestrian* arg1)
{
    return stub<thiscall_t<void, aiMap*, class aiPedestrian*>>(0x539D70, this, arg1);
}

i32 aiMap::RemovePlayer(class vehCar* arg1)
{
    return stub<thiscall_t<i32, aiMap*, class vehCar*>>(0x53B700, this, arg1);
}

void aiMap::RemoveRoutingNode(i32 arg1)
{
    return stub<thiscall_t<void, aiMap*, i32>>(0x53B5D0, this, arg1);
}

void aiMap::Reset()
{
    return stub<thiscall_t<void, aiMap*>>(0x536A30, this);
}

void aiMap::SaveBinary(char* arg1, char* arg2)
{
    return stub<thiscall_t<void, aiMap*, char*, char*>>(0x535DF0, this, arg1, arg2);
}

void aiMap::SetWaypoints(class Vector4* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiMap*, class Vector4*, i32, i32>>(0x53B7B0, this, arg1, arg2, arg3);
}

class aiSubway* aiMap::Subway(i32 arg1)
{
    return stub<thiscall_t<class aiSubway*, aiMap*, i32>>(0x534A70, this, arg1);
}

void aiMap::TestProbes(i32 arg1)
{
    return stub<thiscall_t<void, aiMap*, i32>>(0x53B870, this, arg1);
}

void aiMap::Update()
{
    return stub<thiscall_t<void, aiMap*>>(0x536E50, this);
}

void aiMap::UpdatePaused()
{
    return stub<thiscall_t<void, aiMap*>>(0x5374E0, this);
}

class aiVehicleAmbient* aiMap::Vehicle(i32 arg1)
{
    return stub<thiscall_t<class aiVehicleAmbient*, aiMap*, i32>>(0x5348B0, this, arg1);
}

void aiMap::AdjustAmbients(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiMap*, i32, i32, i32>>(0x539DD0, this, arg1, arg2, arg3);
}

void aiMap::AdjustPedestrians(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, aiMap*, i32, i32, i32>>(0x539A20, this, arg1, arg2, arg3);
}

i32 aiMap::FindInt(i16* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, aiMap*, i16*, i32, i32>>(0x5389D0, this, arg1, arg2, arg3);
}

i32 aiMap::FindRoad(class CArrayList* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, aiMap*, class CArrayList*, i32>>(0x538990, this, arg1, arg2);
}

void aiMap::MapRoadToRooms(class aiPath* arg1, enum aiMapCompTypes arg2)
{
    return stub<thiscall_t<void, aiMap*, class aiPath*, enum aiMapCompTypes>>(0x5364A0, this, arg1, arg2);
}

i32 aiMap::NumCars(i32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<i32, aiMap*, i32, f32, f32>>(0x538960, this, arg1, arg2, arg3);
}

void aiMap::StopRoadTraffic(bool arg1)
{
    return stub<thiscall_t<void, aiMap*, bool>>(0x537410, this, arg1);
}

define_dummy_symbol(ai_aiMap);
