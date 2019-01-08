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
    city:citylevel

    0x443290 | public: __thiscall cityTimeWeatherLighting::cityTimeWeatherLighting(void) | ??0cityTimeWeatherLighting@@QAE@XZ
    0x443300 | public: void __thiscall cityTimeWeatherLighting::ComputeAmbientLightLevels(void) | ?ComputeAmbientLightLevels@cityTimeWeatherLighting@@QAEXXZ
    public: void __thiscall cityTimeWeatherLighting::AddWidgets(class bkBank &) | ?AddWidgets@cityTimeWeatherLighting@@QAEXAAVbkBank@@@Z
    0x443440 | public: void __thiscall cityTimeWeatherLighting::FileIO(class datParser &) | ?FileIO@cityTimeWeatherLighting@@QAEXAAVdatParser@@@Z
    0x443530 | void __cdecl LoadCityTimeWeatherLighting(void) | ?LoadCityTimeWeatherLighting@@YAXXZ
    0x443610 | protected: bool __thiscall cityLevel::IsInRoomCheckWarps(class Vector3 const &,int) | ?IsInRoomCheckWarps@cityLevel@@IAE_NABVVector3@@H@Z
    0x4436A0 | public: static void __cdecl cityLevel::SetupLighting(class Vector3 const &) | ?SetupLighting@cityLevel@@SAXABVVector3@@@Z
    0x443860 | public: __thiscall cityLevel::cityLevel(void) | ??0cityLevel@@QAE@XZ
    0x443910 | public: virtual __thiscall cityLevel::~cityLevel(void) | ??1cityLevel@@UAE@XZ
    0x443930 | public: virtual class lvlLevelBound const * __thiscall cityLevel::GetBound(void) | ?GetBound@cityLevel@@UAEPBVlvlLevelBound@@XZ
    0x443940 | public: virtual class gfxTexture * __thiscall cityLevel::GetEnvMap(int,class Vector3 const &,float &) | ?GetEnvMap@cityLevel@@UAEPAVgfxTexture@@HABVVector3@@AAM@Z
    0x443970 | public: __thiscall dgRoadDecalInstance::dgRoadDecalInstance(char const *,class dgPath const &) | ??0dgRoadDecalInstance@@QAE@PBDABVdgPath@@@Z
    0x443B00 | public: __thiscall dgRoadDecalInstance::~dgRoadDecalInstance(void) | ??1dgRoadDecalInstance@@QAE@XZ
    0x443B60 | public: virtual void __thiscall dgRoadDecalInstance::DrawShadow(void) | ?DrawShadow@dgRoadDecalInstance@@UAEXXZ
    0x443E00 | public: virtual void __thiscall dgRoadDecalInstance::Draw(int) | ?Draw@dgRoadDecalInstance@@UAEXH@Z
    0x443E10 | public: virtual class Vector3 const & __thiscall dgRoadDecalInstance::GetPosition(void) | ?GetPosition@dgRoadDecalInstance@@UAEABVVector3@@XZ
    0x443E20 | public: virtual unsigned int __thiscall dgRoadDecalInstance::SizeOf(void) | ?SizeOf@dgRoadDecalInstance@@UAEIXZ
    0x443E30 | public: virtual class Matrix34 const & __thiscall dgRoadDecalInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@dgRoadDecalInstance@@UAEABVMatrix34@@AAV2@@Z
    0x443E40 | public: virtual void __thiscall dgRoadDecalInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@dgRoadDecalInstance@@UAEXABVMatrix34@@@Z
    0x443E50 | public: virtual void __thiscall cityLevel::SetObjectDetail(int) | ?SetObjectDetail@cityLevel@@UAEXH@Z
    0x443F30 | public: virtual void __thiscall cityLevel::Load(char const *) | ?Load@cityLevel@@UAEXPBD@Z
    0x445280 | public: virtual float __thiscall cityLevel::GetWaterLevel(int) const | ?GetWaterLevel@cityLevel@@UBEMH@Z
    0x445290 | public: virtual float __thiscall cityLevel::GetLightingIntensity(class Vector3 const &) const | ?GetLightingIntensity@cityLevel@@UBEMABVVector3@@@Z
    0x4452A0 | public: virtual void __thiscall cityLevel::SetPtxHeight(class asParticles &) | ?SetPtxHeight@cityLevel@@UAEXAAVasParticles@@@Z
    0x4452B0 | public: virtual void __thiscall cityLevel::Update(void) | ?Update@cityLevel@@UAEXXZ
    0x4452E0 | public: virtual void __thiscall cityLevel::PreDraw(void) | ?PreDraw@cityLevel@@UAEXXZ
    0x445300 | public: virtual void __thiscall cityLevel::PostDraw(void) | ?PostDraw@cityLevel@@UAEXXZ
    0x445310 | public: virtual bool __thiscall cityLevel::GetBoundSphere(class Vector4 &,int) | ?GetBoundSphere@cityLevel@@UAE_NAAVVector4@@H@Z
    0x445340 | protected: void __thiscall cityLevel::DecompressPvs(int) | ?DecompressPvs@cityLevel@@IAEXH@Z
    0x445400 | public: virtual void __thiscall cityLevel::Draw(class gfxViewport const &,unsigned int) | ?Draw@cityLevel@@UAEXABVgfxViewport@@I@Z
    0x4457B0 | protected: void __thiscall cityLevel::SetupPerRoomLighting(int) | ?SetupPerRoomLighting@cityLevel@@IAEXH@Z
    0x445820 | protected: void __thiscall cityLevel::DrawRooms(class gfxViewport const &,unsigned int,struct cityRoomRec const *,int) | ?DrawRooms@cityLevel@@IAEXABVgfxViewport@@IPBUcityRoomRec@@H@Z
    0x446370 | protected: void __thiscall cityLevel::InitFullProbe(int,int) | ?InitFullProbe@cityLevel@@IAEXHH@Z
    0x446920 | protected: int __thiscall cityLevel::FullProbe(class Vector3 const &) | ?FullProbe@cityLevel@@IAEHABVVector3@@@Z
    0x446A60 | public: virtual int __thiscall cityLevel::FindRoomId(class Vector3 const &,int) | ?FindRoomId@cityLevel@@UAEHABVVector3@@H@Z
    0x446C20 | public: virtual int __thiscall cityLevel::GetNeighborCount(int) | ?GetNeighborCount@cityLevel@@UAEHH@Z
    0x446C40 | public: virtual int __thiscall cityLevel::GetNeighbors(int *,int) | ?GetNeighbors@cityLevel@@UAEHPAHH@Z
    0x446CD0 | public: virtual int __thiscall cityLevel::GetTouchedNeighbors(int *,int,int,class Vector4 const &) | ?GetTouchedNeighbors@cityLevel@@UAEHPAHHHABVVector4@@@Z
    0x446D10 | public: int __thiscall cityLevel::GetTouchedNeighborsR(int *,int,int,class Vector4 const &,int) | ?GetTouchedNeighborsR@cityLevel@@QAEHPAHHHABVVector4@@H@Z
    0x446FA0 | public: virtual int __thiscall cityLevel::GetRoomPerimeter(int,class Vector3 * const,int) | ?GetRoomPerimeter@cityLevel@@UAEHHQAVVector3@@H@Z
    0x447010 | public: int __thiscall cityLevel::GetLastStartRoom(void) | ?GetLastStartRoom@cityLevel@@QAEHXZ
    0x447020 | public: virtual bool __thiscall cityLevel::Collide(int,class lvlSegment &,class lvlIntersection *) | ?Collide@cityLevel@@UAE_NHAAVlvlSegment@@PAVlvlIntersection@@@Z
    0x447030 | public: virtual int __thiscall cityLevel::GetVisitList(int *,int,class Vector3 const &,class Vector3 const &,int,int) | ?GetVisitList@cityLevel@@UAEHPAHHABVVector3@@1HH@Z
    0x447290 | public: void __thiscall cityLevel::EnableSky(bool) | ?EnableSky@cityLevel@@QAEX_N@Z
    0x4472A0 | public: void __thiscall cityLevel::EnablePVS(bool) | ?EnablePVS@cityLevel@@QAEX_N@Z
    public: virtual void __thiscall cityLevel::Stats(void) | ?Stats@cityLevel@@UAEXXZ
    public: virtual void __thiscall cityLevel::AddWidgets(class bkBank &) | ?AddWidgets@cityLevel@@UAEXAAVbkBank@@@Z
    0x4472C0 | public: virtual void * __thiscall cityLevel::`scalar deleting destructor'(unsigned int) | ??_GcityLevel@@UAEPAXI@Z
    public: virtual void * __thiscall cityLevel::`vector deleting destructor'(unsigned int) | ??_EcityLevel@@UAEPAXI@Z
    0x4472F0 | public: virtual bool __thiscall lvlLevel::ClampToWorld(class Vector3 &) | ?ClampToWorld@lvlLevel@@UAE_NAAVVector3@@@Z
    0x5B16A0 | const cityLevel::`vftable' | ??_7cityLevel@@6B@
    0x5B16FC | const dgRoadDecalInstance::`vftable' | ??_7dgRoadDecalInstance@@6B@
    0x5B1778 | const datAsciiTokenizer::`vftable' | ??_7datAsciiTokenizer@@6B@
    bool sm_PerRoomLighting | ?sm_PerRoomLighting@@3_NA
    bool sm_LightInstances | ?sm_LightInstances@@3_NA
    0x5C5723 | bool sm_EnableEnvMaps | ?sm_EnableEnvMaps@@3_NA
    0x5C5724 | unsigned int sm_FogColor | ?sm_FogColor@@3IA
    0x5C5728 | public: static int cityLevel::sm_LightQuality | ?sm_LightQuality@cityLevel@@2HA
    unsigned short sm_CurrentTag | ?sm_CurrentTag@@3GA
    unsigned short * sm_CheckTag | ?sm_CheckTag@@3PAGA
    0x6287D0 | int sm_WarpCount | ?sm_WarpCount@@3HA
    0x628918 | unsigned short * sm_FirstWarp | ?sm_FirstWarp@@3PAGA
    0x629920 | private: static int cityLevel::sm_LastPvsRoom | ?sm_LastPvsRoom@cityLevel@@0HA
    0x629928 | private: static class lvlSDL cityLevel::SDL | ?SDL@cityLevel@@0VlvlSDL@@A
    0x629E68 | struct __unnamed * sm_WarpList | ?sm_WarpList@@3PAU__unnamed@@A
    0x62AE68 | private: static unsigned char * cityLevel::sm_PvsBuffer | ?sm_PvsBuffer@cityLevel@@0PAEA
    0x62B070 | bool sm_EnablePVS | ?sm_EnablePVS@@3_NA
    0x62B074 | unsigned char * * sm_PVS | ?sm_PVS@@3PAPAEA
    bool LAME_WHEELS | ?LAME_WHEELS@@3_NA
*/

#include "hooking.h"
