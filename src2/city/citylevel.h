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

#include "level/inst.h"
#include "level/level.h"

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
    0x5C5720 | bool sm_PerRoomLighting | ?sm_PerRoomLighting@@3_NA
    0x5C5721 | bool sm_LightInstances | ?sm_LightInstances@@3_NA
    0x5C5723 | bool sm_EnableEnvMaps | ?sm_EnableEnvMaps@@3_NA
    0x5C5724 | unsigned int sm_FogColor | ?sm_FogColor@@3IA
    0x5C5728 | public: static int cityLevel::sm_LightQuality | ?sm_LightQuality@cityLevel@@2HA
    0x627710 | unsigned short sm_CurrentTag | ?sm_CurrentTag@@3GA
    0x627714 | unsigned short * sm_CheckTag | ?sm_CheckTag@@3PAGA
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

struct cityTimeWeatherLighting
{
public:
    // 0x443290 | ??0cityTimeWeatherLighting@@QAE@XZ
    cityTimeWeatherLighting();

    // 0x443300 | ?ComputeAmbientLightLevels@cityTimeWeatherLighting@@QAEXXZ
    void ComputeAmbientLightLevels();

    // 0x443440 | ?FileIO@cityTimeWeatherLighting@@QAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1);
};

check_size(cityTimeWeatherLighting, 0x0);

// 0x443530 | ?LoadCityTimeWeatherLighting@@YAXXZ
void LoadCityTimeWeatherLighting();

// 0x627714 | ?sm_CheckTag@@3PAGA
inline extern_var(0x627714, u16*, sm_CheckTag);

// 0x627710 | ?sm_CurrentTag@@3GA
inline extern_var(0x627710, u16, sm_CurrentTag);

// 0x5C5723 | ?sm_EnableEnvMaps@@3_NA
inline extern_var(0x5C5723, bool, sm_EnableEnvMaps);

// 0x62B070 | ?sm_EnablePVS@@3_NA
inline extern_var(0x62B070, bool, sm_EnablePVS);

// 0x628918 | ?sm_FirstWarp@@3PAGA
inline extern_var(0x628918, u16*, sm_FirstWarp);

// 0x5C5724 | ?sm_FogColor@@3IA
inline extern_var(0x5C5724, u32, sm_FogColor);

// 0x5C5721 | ?sm_LightInstances@@3_NA
inline extern_var(0x5C5721, bool, sm_LightInstances);

// 0x62B074 | ?sm_PVS@@3PAPAEA
inline extern_var(0x62B074, u8**, sm_PVS);

// 0x5C5720 | ?sm_PerRoomLighting@@3_NA
inline extern_var(0x5C5720, bool, sm_PerRoomLighting);

// 0x6287D0 | ?sm_WarpCount@@3HA
inline extern_var(0x6287D0, i32, sm_WarpCount);

// 0x629E68 | ?sm_WarpList@@3PAU__unnamed@@A
inline extern_var(0x629E68, struct __unnamed*, sm_WarpList);

class cityLevel : public lvlLevel
{
    // const cityLevel::`vftable' @ 0x5B16A0

public:
    // 0x443860 | ??0cityLevel@@QAE@XZ
    cityLevel();

    // 0x4472C0 | ??_GcityLevel@@UAEPAXI@Z
    // 0x443910 | ??1cityLevel@@UAE@XZ
    ~cityLevel() override;

    // 0x447020 | ?Collide@cityLevel@@UAE_NHAAVlvlSegment@@PAVlvlIntersection@@@Z
    bool Collide(i32 arg1, class lvlSegment& arg2, class lvlIntersection* arg3) override;

    // 0x445400 | ?Draw@cityLevel@@UAEXABVgfxViewport@@I@Z
    void Draw(class gfxViewport const& arg1, u32 arg2) override;

    // 0x4472A0 | ?EnablePVS@cityLevel@@QAEX_N@Z
    void EnablePVS(bool arg1);

    // 0x447290 | ?EnableSky@cityLevel@@QAEX_N@Z
    void EnableSky(bool arg1);

    // 0x446A60 | ?FindRoomId@cityLevel@@UAEHABVVector3@@H@Z
    i32 FindRoomId(class Vector3 const& arg1, i32 arg2) override;

    // 0x443930 | ?GetBound@cityLevel@@UAEPBVlvlLevelBound@@XZ
    class lvlLevelBound const* GetBound() override;

    // 0x445310 | ?GetBoundSphere@cityLevel@@UAE_NAAVVector4@@H@Z
    bool GetBoundSphere(class Vector4& arg1, i32 arg2) override;

    // 0x443940 | ?GetEnvMap@cityLevel@@UAEPAVgfxTexture@@HABVVector3@@AAM@Z
    class gfxTexture* GetEnvMap(i32 arg1, class Vector3 const& arg2, f32& arg3) override;

    // 0x447010 | ?GetLastStartRoom@cityLevel@@QAEHXZ
    i32 GetLastStartRoom();

    // 0x445290 | ?GetLightingIntensity@cityLevel@@UBEMABVVector3@@@Z
    f32 GetLightingIntensity(class Vector3 const& arg1) override;

    // 0x446C20 | ?GetNeighborCount@cityLevel@@UAEHH@Z
    i32 GetNeighborCount(i32 arg1) override;

    // 0x446C40 | ?GetNeighbors@cityLevel@@UAEHPAHH@Z
    i32 GetNeighbors(i32* arg1, i32 arg2) override;

    // 0x446FA0 | ?GetRoomPerimeter@cityLevel@@UAEHHQAVVector3@@H@Z
    i32 GetRoomPerimeter(i32 arg1, class Vector3* const arg2, i32 arg3) override;

    // 0x446CD0 | ?GetTouchedNeighbors@cityLevel@@UAEHPAHHHABVVector4@@@Z
    i32 GetTouchedNeighbors(i32* arg1, i32 arg2, i32 arg3, class Vector4 const& arg4) override;

    // 0x446D10 | ?GetTouchedNeighborsR@cityLevel@@QAEHPAHHHABVVector4@@H@Z
    i32 GetTouchedNeighborsR(i32* arg1, i32 arg2, i32 arg3, class Vector4 const& arg4, i32 arg5);

    // 0x447030 | ?GetVisitList@cityLevel@@UAEHPAHHABVVector3@@1HH@Z
    i32 GetVisitList(
        i32* arg1, i32 arg2, class Vector3 const& arg3, class Vector3 const& arg4, i32 arg5, i32 arg6) override;

    // 0x445280 | ?GetWaterLevel@cityLevel@@UBEMH@Z
    f32 GetWaterLevel(i32 arg1) override;

    // 0x443F30 | ?Load@cityLevel@@UAEXPBD@Z
    void Load(char const* arg1) override;

    // 0x445300 | ?PostDraw@cityLevel@@UAEXXZ
    void PostDraw() override;

    // 0x4452E0 | ?PreDraw@cityLevel@@UAEXXZ
    void PreDraw() override;

    // 0x443E50 | ?SetObjectDetail@cityLevel@@UAEXH@Z
    void SetObjectDetail(i32 arg1) override;

    // 0x4452A0 | ?SetPtxHeight@cityLevel@@UAEXAAVasParticles@@@Z
    void SetPtxHeight(class asParticles& arg1) override;

    // 0x4452B0 | ?Update@cityLevel@@UAEXXZ
    void Update() override;

    // 0x4436A0 | ?SetupLighting@cityLevel@@SAXABVVector3@@@Z
    static void SetupLighting(class Vector3 const& arg1);

    // 0x5C5728 | ?sm_LightQuality@cityLevel@@2HA
    static inline extern_var(0x5C5728, i32, sm_LightQuality);

protected:
    // 0x445340 | ?DecompressPvs@cityLevel@@IAEXH@Z
    void DecompressPvs(i32 arg1);

    // 0x445820 | ?DrawRooms@cityLevel@@IAEXABVgfxViewport@@IPBUcityRoomRec@@H@Z
    void DrawRooms(class gfxViewport const& arg1, u32 arg2, struct cityRoomRec const* arg3, i32 arg4);

    // 0x446920 | ?FullProbe@cityLevel@@IAEHABVVector3@@@Z
    i32 FullProbe(class Vector3 const& arg1);

    // 0x446370 | ?InitFullProbe@cityLevel@@IAEXHH@Z
    void InitFullProbe(i32 arg1, i32 arg2);

    // 0x443610 | ?IsInRoomCheckWarps@cityLevel@@IAE_NABVVector3@@H@Z
    bool IsInRoomCheckWarps(class Vector3 const& arg1, i32 arg2);

    // 0x4457B0 | ?SetupPerRoomLighting@cityLevel@@IAEXH@Z
    void SetupPerRoomLighting(i32 arg1);

private:
    // 0x629928 | ?SDL@cityLevel@@0VlvlSDL@@A
    static inline extern_var(0x629928, class lvlSDL, SDL);

    // 0x629920 | ?sm_LastPvsRoom@cityLevel@@0HA
    static inline extern_var(0x629920, i32, sm_LastPvsRoom);

    // 0x62AE68 | ?sm_PvsBuffer@cityLevel@@0PAEA
    static inline extern_var(0x62AE68, u8*, sm_PvsBuffer);
};

check_size(cityLevel, 0x0);

class dgRoadDecalInstance : public lvlInstance
{
    // const dgRoadDecalInstance::`vftable' @ 0x5B16FC

public:
    // 0x443970 | ??0dgRoadDecalInstance@@QAE@PBDABVdgPath@@@Z
    dgRoadDecalInstance(char const* arg1, class dgPath const& arg2);

    // 0x443B00 | ??1dgRoadDecalInstance@@QAE@XZ
    ~dgRoadDecalInstance();

    // 0x443E00 | ?Draw@dgRoadDecalInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x443B60 | ?DrawShadow@dgRoadDecalInstance@@UAEXXZ
    void DrawShadow() override;

    // 0x443E30 | ?GetMatrix@dgRoadDecalInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x443E10 | ?GetPosition@dgRoadDecalInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x443E40 | ?SetMatrix@dgRoadDecalInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x443E20 | ?SizeOf@dgRoadDecalInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(dgRoadDecalInstance, 0x0);
