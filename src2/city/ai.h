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

#pragma once

/*
    city:ai

    0x45D520 | public: static void __cdecl lvlAiMap::Init(int) | ?Init@lvlAiMap@@SAXH@Z
    0x45D590 | public: static void __cdecl lvlAiMap::LoadCurrent(class lvlSDL const &,int,int,int,unsigned short const *,void *) | ?LoadCurrent@lvlAiMap@@SAXABVlvlSDL@@HHHPBGPAX@Z
    0x45D700 | public: static void __cdecl lvlAiMap::SetRoad(class lvlSDL const &,int,bool) | ?SetRoad@lvlAiMap@@SAXABVlvlSDL@@H_N@Z
    0x45D720 | public: static void __cdecl lvlAiMap::SetRoad(class lvlSDL const *,int,bool) | ?SetRoad@lvlAiMap@@SAXPBVlvlSDL@@H_N@Z
    0x45D840 | public: static class lvlAiRoad * __cdecl lvlAiMap::GetRoad(int) | ?GetRoad@lvlAiMap@@SAPAVlvlAiRoad@@H@Z
    0x45D860 | public: static unsigned int __cdecl lvlAiMap::GetNumRoads(void) | ?GetNumRoads@lvlAiMap@@SAIXZ
    public: static void __cdecl lvlAiMap::Draw(class lvlSDL const &) | ?Draw@lvlAiMap@@SAXABVlvlSDL@@@Z
    public: void __thiscall lvlAiRoad::SaveBinary(class Stream *) | ?SaveBinary@lvlAiRoad@@QAEXPAVStream@@@Z
    public: static void __cdecl lvlAiMap::SaveBinary(class Stream *) | ?SaveBinary@lvlAiMap@@SAXPAVStream@@@Z
    0x45D870 | public: void __thiscall lvlAiRoad::LoadBinary(class Stream *) | ?LoadBinary@lvlAiRoad@@QAEXPAVStream@@@Z
    0x45D910 | public: static void __cdecl lvlAiMap::LoadBinary(class Stream *) | ?LoadBinary@lvlAiMap@@SAXPAVStream@@@Z
    0x45D9C0 | public: static void __cdecl lvlAiMap::Delete(void) | ?Delete@lvlAiMap@@SAXXZ
    0x45DA00 | public: static int __cdecl lvlAiMap::GetRoom(int) | ?GetRoom@lvlAiMap@@SAHH@Z
    0x45DA20 | public: static bool __cdecl lvlAiMap::GetRoomChop(int) | ?GetRoomChop@lvlAiMap@@SA_NH@Z
    0x45DA50 | public: static int __cdecl lvlAiMap::GetNumRooms(void) | ?GetNumRooms@lvlAiMap@@SAHXZ
    0x45DA60 | public: static int __cdecl lvlAiMap::GetNumVertexs(void) | ?GetNumVertexs@lvlAiMap@@SAHXZ
    0x45DA70 | public: static int __cdecl lvlAiMap::GetNumLanes(int) | ?GetNumLanes@lvlAiMap@@SAHH@Z
    0x45DAA0 | public: static int __cdecl lvlAiMap::GetNumCablecarLanes(int) | ?GetNumCablecarLanes@lvlAiMap@@SAHH@Z
    0x45DAB0 | public: static int __cdecl lvlAiMap::GetNumSubwayLanes(int) | ?GetNumSubwayLanes@lvlAiMap@@SAHH@Z
    0x45DAE0 | public: static int __cdecl lvlAiMap::GetNumSidewalks(int) | ?GetNumSidewalks@lvlAiMap@@SAHH@Z
    0x45DAF0 | public: static class Vector3 __cdecl lvlAiMap::GetNormal(int) | ?GetNormal@lvlAiMap@@SA?AVVector3@@H@Z
    0x45DC30 | public: static class Vector3 __cdecl lvlAiMap::GetSidewalkVertex(int,int,int) | ?GetSidewalkVertex@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45DF60 | public: static class Vector3 __cdecl lvlAiMap::GetSidewalkVertexMulti(int,int,int) | ?GetSidewalkVertexMulti@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45E130 | public: static class Vector3 __cdecl lvlAiMap::GetSidewalkVertexSingle(int,int,int) | ?GetSidewalkVertexSingle@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45E260 | public: static class Vector3 __cdecl lvlAiMap::GetCablecarVertex(int,int,int) | ?GetCablecarVertex@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45E2A0 | public: static class Vector3 __cdecl lvlAiMap::GetSubwayVertex(int,int,int) | ?GetSubwayVertex@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45E2E0 | public: static class Vector3 __cdecl lvlAiMap::GetVertex(int,int,int) | ?GetVertex@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45E5F0 | public: static class Vector3 __cdecl lvlAiMap::GetVertexMulti(int,int,int) | ?GetVertexMulti@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45E710 | public: static class Vector3 __cdecl lvlAiMap::GetVertexSingle(int,int,int) | ?GetVertexSingle@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45E7F0 | public: static class Vector3 __cdecl lvlAiMap::GetVertexSingleCenter(int,int,int) | ?GetVertexSingleCenter@lvlAiMap@@SA?AVVector3@@HHH@Z
    0x45E8C0 | public: static int __cdecl lvlAiMap::IsBlocked(int) | ?IsBlocked@lvlAiMap@@SAHH@Z
    0x45E8D0 | public: static int __cdecl lvlAiMap::IsPedBlocked(int) | ?IsPedBlocked@lvlAiMap@@SAHH@Z
    0x45E8E0 | public: static int __cdecl lvlAiMap::IsDivided(void) | ?IsDivided@lvlAiMap@@SAHXZ
    0x45E8F0 | public: static int __cdecl lvlAiMap::IsAlley(void) | ?IsAlley@lvlAiMap@@SAHXZ
    0x45E900 | public: static int __cdecl lvlAiMap::IsFreeway(void) | ?IsFreeway@lvlAiMap@@SAHXZ
    0x45E910 | public: static int __cdecl lvlAiMap::GetRoadIntersection(int) | ?GetRoadIntersection@lvlAiMap@@SAHH@Z
    0x45E930 | public: static int __cdecl lvlAiMap::GetIntersectionType(int) | ?GetIntersectionType@lvlAiMap@@SAHH@Z
    0x45E980 | public: static void __cdecl lvlAiMap::GetStopLightPos(int,class Vector3 &,class Vector3 &,bool) | ?GetStopLightPos@lvlAiMap@@SAXHAAVVector3@@0_N@Z
    0x45EC80 | public: static char * __cdecl lvlAiMap::GetStopLightName(int) | ?GetStopLightName@lvlAiMap@@SAPADH@Z
    0x45ECC0 | public: static int __cdecl lvlAiMap::GetStopLightType(int) | ?GetStopLightType@lvlAiMap@@SAHH@Z
    0x5C6030 | public: static bool lvlAiMap::m_BevelMode | ?m_BevelMode@lvlAiMap@@2_NA
    0x5C6034 | char * * m_StopPropName | ?m_StopPropName@@3PAPADA
    0x631258 | public: static struct lvlAiCurrent lvlAiMap::m_Current | ?m_Current@lvlAiMap@@2UlvlAiCurrent@@A
    0x631588 | public: static unsigned int lvlAiMap::m_RoadCount | ?m_RoadCount@lvlAiMap@@2IA
    0x63158C | public: static class lvlAiRoad * lvlAiMap::m_AiRoads | ?m_AiRoads@lvlAiMap@@2PAVlvlAiRoad@@A
*/

struct lvlAiMap
{
public:
    // 0x45D9C0 | ?Delete@lvlAiMap@@SAXXZ
    static void Delete();

    // 0x45E260 | ?GetCablecarVertex@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetCablecarVertex(i32 arg1, i32 arg2, i32 arg3);

    // 0x45E930 | ?GetIntersectionType@lvlAiMap@@SAHH@Z
    static i32 GetIntersectionType(i32 arg1);

    // 0x45DAF0 | ?GetNormal@lvlAiMap@@SA?AVVector3@@H@Z
    static class Vector3 GetNormal(i32 arg1);

    // 0x45DAA0 | ?GetNumCablecarLanes@lvlAiMap@@SAHH@Z
    static i32 GetNumCablecarLanes(i32 arg1);

    // 0x45DA70 | ?GetNumLanes@lvlAiMap@@SAHH@Z
    static i32 GetNumLanes(i32 arg1);

    // 0x45D860 | ?GetNumRoads@lvlAiMap@@SAIXZ
    static u32 GetNumRoads();

    // 0x45DA50 | ?GetNumRooms@lvlAiMap@@SAHXZ
    static i32 GetNumRooms();

    // 0x45DAE0 | ?GetNumSidewalks@lvlAiMap@@SAHH@Z
    static i32 GetNumSidewalks(i32 arg1);

    // 0x45DAB0 | ?GetNumSubwayLanes@lvlAiMap@@SAHH@Z
    static i32 GetNumSubwayLanes(i32 arg1);

    // 0x45DA60 | ?GetNumVertexs@lvlAiMap@@SAHXZ
    static i32 GetNumVertexs();

    // 0x45D840 | ?GetRoad@lvlAiMap@@SAPAVlvlAiRoad@@H@Z
    static class lvlAiRoad* GetRoad(i32 arg1);

    // 0x45E910 | ?GetRoadIntersection@lvlAiMap@@SAHH@Z
    static i32 GetRoadIntersection(i32 arg1);

    // 0x45DA00 | ?GetRoom@lvlAiMap@@SAHH@Z
    static i32 GetRoom(i32 arg1);

    // 0x45DA20 | ?GetRoomChop@lvlAiMap@@SA_NH@Z
    static bool GetRoomChop(i32 arg1);

    // 0x45DC30 | ?GetSidewalkVertex@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetSidewalkVertex(i32 arg1, i32 arg2, i32 arg3);

    // 0x45DF60 | ?GetSidewalkVertexMulti@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetSidewalkVertexMulti(i32 arg1, i32 arg2, i32 arg3);

    // 0x45E130 | ?GetSidewalkVertexSingle@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetSidewalkVertexSingle(i32 arg1, i32 arg2, i32 arg3);

    // 0x45EC80 | ?GetStopLightName@lvlAiMap@@SAPADH@Z
    static char* GetStopLightName(i32 arg1);

    // 0x45E980 | ?GetStopLightPos@lvlAiMap@@SAXHAAVVector3@@0_N@Z
    static void GetStopLightPos(i32 arg1, class Vector3& arg2, class Vector3& arg3, bool arg4);

    // 0x45ECC0 | ?GetStopLightType@lvlAiMap@@SAHH@Z
    static i32 GetStopLightType(i32 arg1);

    // 0x45E2A0 | ?GetSubwayVertex@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetSubwayVertex(i32 arg1, i32 arg2, i32 arg3);

    // 0x45E2E0 | ?GetVertex@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetVertex(i32 arg1, i32 arg2, i32 arg3);

    // 0x45E5F0 | ?GetVertexMulti@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetVertexMulti(i32 arg1, i32 arg2, i32 arg3);

    // 0x45E710 | ?GetVertexSingle@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetVertexSingle(i32 arg1, i32 arg2, i32 arg3);

    // 0x45E7F0 | ?GetVertexSingleCenter@lvlAiMap@@SA?AVVector3@@HHH@Z
    static class Vector3 GetVertexSingleCenter(i32 arg1, i32 arg2, i32 arg3);

    // 0x45D520 | ?Init@lvlAiMap@@SAXH@Z
    static void Init(i32 arg1);

    // 0x45E8F0 | ?IsAlley@lvlAiMap@@SAHXZ
    static i32 IsAlley();

    // 0x45E8C0 | ?IsBlocked@lvlAiMap@@SAHH@Z
    static i32 IsBlocked(i32 arg1);

    // 0x45E8E0 | ?IsDivided@lvlAiMap@@SAHXZ
    static i32 IsDivided();

    // 0x45E900 | ?IsFreeway@lvlAiMap@@SAHXZ
    static i32 IsFreeway();

    // 0x45E8D0 | ?IsPedBlocked@lvlAiMap@@SAHH@Z
    static i32 IsPedBlocked(i32 arg1);

    // 0x45D910 | ?LoadBinary@lvlAiMap@@SAXPAVStream@@@Z
    static void LoadBinary(class Stream* arg1);

    // 0x45D590 | ?LoadCurrent@lvlAiMap@@SAXABVlvlSDL@@HHHPBGPAX@Z
    static void LoadCurrent(class lvlSDL const& arg1, i32 arg2, i32 arg3, i32 arg4, u16 const* arg5, void* arg6);

    // 0x45D700 | ?SetRoad@lvlAiMap@@SAXABVlvlSDL@@H_N@Z
    static void SetRoad(class lvlSDL const& arg1, i32 arg2, bool arg3);

    // 0x45D720 | ?SetRoad@lvlAiMap@@SAXPBVlvlSDL@@H_N@Z
    static void SetRoad(class lvlSDL const* arg1, i32 arg2, bool arg3);

    // 0x63158C | ?m_AiRoads@lvlAiMap@@2PAVlvlAiRoad@@A
    static inline extern_var(0x63158C, class lvlAiRoad*, m_AiRoads);

    // 0x5C6030 | ?m_BevelMode@lvlAiMap@@2_NA
    static inline extern_var(0x5C6030, bool, m_BevelMode);

    // 0x631258 | ?m_Current@lvlAiMap@@2UlvlAiCurrent@@A
    static inline extern_var(0x631258, struct lvlAiCurrent, m_Current);

    // 0x631588 | ?m_RoadCount@lvlAiMap@@2IA
    static inline extern_var(0x631588, u32, m_RoadCount);
};

class lvlAiRoad
{
public:
    // 0x45D870 | ?LoadBinary@lvlAiRoad@@QAEXPAVStream@@@Z
    void LoadBinary(class Stream* arg1);
};

check_size(lvlAiRoad, 0x0);

// 0x5C6034 | ?m_StopPropName@@3PAPADA
inline extern_var(0x5C6034, char**, m_StopPropName);
