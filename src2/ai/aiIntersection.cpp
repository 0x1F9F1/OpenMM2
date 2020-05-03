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

#include "aiIntersection.h"

aiIntersection::aiIntersection(i32 arg1)
{
    unimplemented();
}

aiIntersection::~aiIntersection()
{
    unimplemented();
}

void aiIntersection::AddBanger(class aiObstacle* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class aiObstacle*>>(0x54A110, this, arg1);
}

void aiIntersection::AddBangersToObsMap()
{
    return stub<thiscall_t<void, aiIntersection*>>(0x54A170, this);
}

void aiIntersection::AddRoad(class aiPath* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class aiPath*>>(0x549B40, this, arg1);
}

void aiIntersection::AddToStopSignCntl(class aiVehicle* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class aiVehicle*>>(0x54A3C0, this, arg1);
}

void aiIntersection::AddVehicle(class aiObstacle* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class aiObstacle*>>(0x54A0B0, this, arg1);
}

void aiIntersection::CreateRoadMap()
{
    return stub<thiscall_t<void, aiIntersection*>>(0x549E40, this);
}

void aiIntersection::Dump()
{
    return stub<thiscall_t<void, aiIntersection*>>(0x549DF0, this);
}

void aiIntersection::Init()
{
    return stub<thiscall_t<void, aiIntersection*>>(0x549A40, this);
}

bool aiIntersection::IsCableCarStart(i32* arg1, i16* arg2)
{
    return stub<thiscall_t<bool, aiIntersection*, i32*, i16*>>(0x54A220, this, arg1, arg2);
}

bool aiIntersection::IsSubwayEnd(i32* arg1)
{
    return stub<thiscall_t<bool, aiIntersection*, i32*>>(0x54A340, this, arg1);
}

bool aiIntersection::IsSubwayStart(i32* arg1, i32* arg2, i32* arg3)
{
    return stub<thiscall_t<bool, aiIntersection*, i32*, i32*, i32*>>(0x54A2B0, this, arg1, arg2, arg3);
}

i32 aiIntersection::NumAvailSinks(class aiPath* arg1)
{
    return stub<thiscall_t<i32, aiIntersection*, class aiPath*>>(0x54A060, this, arg1);
}

i32 aiIntersection::NumOneWays()
{
    return stub<thiscall_t<i32, aiIntersection*>>(0x54A010, this);
}

i32 aiIntersection::NumSinks()
{
    return stub<thiscall_t<i32, aiIntersection*>>(0x549D90, this);
}

i32 aiIntersection::NumSources()
{
    return stub<thiscall_t<i32, aiIntersection*>>(0x549D60, this);
}

class aiPath* aiIntersection::Path(i32 arg1)
{
    return stub<thiscall_t<class aiPath*, aiIntersection*, i32>>(0x54A030, this, arg1);
}

void aiIntersection::ReadBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class Stream*>>(0x549C20, this, arg1);
}

void aiIntersection::RemoveBanger(class aiObstacle* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class aiObstacle*>>(0x54A130, this, arg1);
}

void aiIntersection::RemoveFromStopSignCntl(class aiVehicle* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class aiVehicle*>>(0x54A400, this, arg1);
}

void aiIntersection::RemoveTotalFromStopSignCntl(class aiVehicle* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class aiVehicle*>>(0x54A460, this, arg1);
}

void aiIntersection::RemoveVehicle(class aiObstacle* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class aiObstacle*>>(0x54A0D0, this, arg1);
}

void aiIntersection::Reset()
{
    return stub<thiscall_t<void, aiIntersection*>>(0x549B20, this);
}

class aiPath* aiIntersection::Road(i32 arg1)
{
    return stub<thiscall_t<class aiPath*, aiIntersection*, i32>>(0x53C000, this, arg1);
}

void aiIntersection::SaveBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, aiIntersection*, class Stream*>>(0x549BB0, this, arg1);
}

void aiIntersection::SetFourWay()
{
    return stub<thiscall_t<void, aiIntersection*>>(0x549DD0, this);
}

bool aiIntersection::StopSignOkayToGo(class aiVehicle* arg1)
{
    return stub<thiscall_t<bool, aiIntersection*, class aiVehicle*>>(0x54A4E0, this, arg1);
}

void aiIntersection::StopSources(i32 arg1)
{
    return stub<thiscall_t<void, aiIntersection*, i32>>(0x54A5A0, this, arg1);
}

define_dummy_symbol(ai_aiIntersection);
