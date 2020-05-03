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

#include "ai.h"

void lvlAiMap::Delete()
{
    return stub<cdecl_t<void>>(0x45D9C0);
}

class Vector3 lvlAiMap::GetCablecarVertex(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45E260, arg1, arg2, arg3);
}

i32 lvlAiMap::GetIntersectionType(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45E930, arg1);
}

class Vector3 lvlAiMap::GetNormal(i32 arg1)
{
    return stub<cdecl_t<class Vector3, i32>>(0x45DAF0, arg1);
}

i32 lvlAiMap::GetNumCablecarLanes(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45DAA0, arg1);
}

i32 lvlAiMap::GetNumLanes(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45DA70, arg1);
}

u32 lvlAiMap::GetNumRoads()
{
    return stub<cdecl_t<u32>>(0x45D860);
}

i32 lvlAiMap::GetNumRooms()
{
    return stub<cdecl_t<i32>>(0x45DA50);
}

i32 lvlAiMap::GetNumSidewalks(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45DAE0, arg1);
}

i32 lvlAiMap::GetNumSubwayLanes(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45DAB0, arg1);
}

i32 lvlAiMap::GetNumVertexs()
{
    return stub<cdecl_t<i32>>(0x45DA60);
}

class lvlAiRoad* lvlAiMap::GetRoad(i32 arg1)
{
    return stub<cdecl_t<class lvlAiRoad*, i32>>(0x45D840, arg1);
}

i32 lvlAiMap::GetRoadIntersection(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45E910, arg1);
}

i32 lvlAiMap::GetRoom(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45DA00, arg1);
}

bool lvlAiMap::GetRoomChop(i32 arg1)
{
    return stub<cdecl_t<bool, i32>>(0x45DA20, arg1);
}

class Vector3 lvlAiMap::GetSidewalkVertex(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45DC30, arg1, arg2, arg3);
}

class Vector3 lvlAiMap::GetSidewalkVertexMulti(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45DF60, arg1, arg2, arg3);
}

class Vector3 lvlAiMap::GetSidewalkVertexSingle(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45E130, arg1, arg2, arg3);
}

char* lvlAiMap::GetStopLightName(i32 arg1)
{
    return stub<cdecl_t<char*, i32>>(0x45EC80, arg1);
}

void lvlAiMap::GetStopLightPos(i32 arg1, class Vector3& arg2, class Vector3& arg3, bool arg4)
{
    return stub<cdecl_t<void, i32, class Vector3&, class Vector3&, bool>>(0x45E980, arg1, arg2, arg3, arg4);
}

i32 lvlAiMap::GetStopLightType(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45ECC0, arg1);
}

class Vector3 lvlAiMap::GetSubwayVertex(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45E2A0, arg1, arg2, arg3);
}

class Vector3 lvlAiMap::GetVertex(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45E2E0, arg1, arg2, arg3);
}

class Vector3 lvlAiMap::GetVertexMulti(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45E5F0, arg1, arg2, arg3);
}

class Vector3 lvlAiMap::GetVertexSingle(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45E710, arg1, arg2, arg3);
}

class Vector3 lvlAiMap::GetVertexSingleCenter(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Vector3, i32, i32, i32>>(0x45E7F0, arg1, arg2, arg3);
}

void lvlAiMap::Init(i32 arg1)
{
    return stub<cdecl_t<void, i32>>(0x45D520, arg1);
}

i32 lvlAiMap::IsAlley()
{
    return stub<cdecl_t<i32>>(0x45E8F0);
}

i32 lvlAiMap::IsBlocked(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45E8C0, arg1);
}

i32 lvlAiMap::IsDivided()
{
    return stub<cdecl_t<i32>>(0x45E8E0);
}

i32 lvlAiMap::IsFreeway()
{
    return stub<cdecl_t<i32>>(0x45E900);
}

i32 lvlAiMap::IsPedBlocked(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x45E8D0, arg1);
}

void lvlAiMap::LoadBinary(class Stream* arg1)
{
    return stub<cdecl_t<void, class Stream*>>(0x45D910, arg1);
}

void lvlAiMap::LoadCurrent(class lvlSDL const& arg1, i32 arg2, i32 arg3, i32 arg4, u16 const* arg5, void* arg6)
{
    return stub<cdecl_t<void, class lvlSDL const&, i32, i32, i32, u16 const*, void*>>(
        0x45D590, arg1, arg2, arg3, arg4, arg5, arg6);
}

void lvlAiMap::SetRoad(class lvlSDL const& arg1, i32 arg2, bool arg3)
{
    return stub<cdecl_t<void, class lvlSDL const&, i32, bool>>(0x45D700, arg1, arg2, arg3);
}

void lvlAiMap::SetRoad(class lvlSDL const* arg1, i32 arg2, bool arg3)
{
    return stub<cdecl_t<void, class lvlSDL const*, i32, bool>>(0x45D720, arg1, arg2, arg3);
}

void lvlAiRoad::LoadBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, lvlAiRoad*, class Stream*>>(0x45D870, this, arg1);
}

define_dummy_symbol(city_ai);
