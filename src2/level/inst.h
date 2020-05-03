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
    level:inst

    0x4630B0 | public: virtual void __thiscall lvlInstance::GetLightInfo(int,class cltLight *) | ?GetLightInfo@lvlInstance@@UAEXHPAVcltLight@@@Z
    0x463110 | public: static void * __cdecl lvlInstance::operator new(unsigned int) | ??2lvlInstance@@SAPAXI@Z
    0x463170 | public: static void __cdecl lvlInstance::operator delete(void *) | ??3lvlInstance@@SAXPAX@Z
    0x463180 | public: virtual bool __thiscall lvlInstance::IsLandmark(void) | ?IsLandmark@lvlInstance@@UAE_NXZ
    0x463190 | int __cdecl Init(char const *,class Matrix34 const &) | ?Init@@YAHPBDABVMatrix34@@@Z
    0x4631A0 | public: static void __cdecl lvlInstance::ResetInstanceHeap(void) | ?ResetInstanceHeap@lvlInstance@@SAXXZ
    0x4631E0 | public: static void __cdecl lvlInstance::ResetAll(void) | ?ResetAll@lvlInstance@@SAXXZ
    0x4631F0 | public: __thiscall lvlInstance::lvlInstance(void) | ??0lvlInstance@@QAE@XZ
    0x463220 | public: __thiscall lvlInstance::~lvlInstance(void) | ??1lvlInstance@@QAE@XZ
    0x463280 | public: virtual void __thiscall lvlInstance::Reset(void) | ?Reset@lvlInstance@@UAEXXZ
    0x463290 | public: static void __cdecl lvlInstance::SetShadowBillboardMtx(class Matrix44 &) | ?SetShadowBillboardMtx@lvlInstance@@SAXAAVMatrix44@@@Z
    0x4632B0 | public: virtual int __thiscall lvlInstance::GetNumLightSources(void) | ?GetNumLightSources@lvlInstance@@UAEHXZ
    0x4632C0 | protected: static int __cdecl lvlInstance::GetGeomSet(char const *,char const *,int) | ?GetGeomSet@lvlInstance@@KAHPBD0H@Z
    0x463940 | public: bool __thiscall lvlInstance::LoadBoundOnLastEntry(char const *) | ?LoadBoundOnLastEntry@lvlInstance@@QAE_NPBD@Z
    0x463A40 | public: class Vector4 & __thiscall lvlInstance::GetBoundSphere(class Vector4 &) | ?GetBoundSphere@lvlInstance@@QAEAAVVector4@@AAV2@@Z
    0x463A80 | public: bool __thiscall lvlInstance::BeginGeom(char const *,char const *,int) | ?BeginGeom@lvlInstance@@QAE_NPBD0H@Z
    0x463BA0 | public: int __thiscall lvlInstance::AddGeom(char const *,char const *,int) | ?AddGeom@lvlInstance@@QAEHPBD0H@Z
    0x463BC0 | public: void __thiscall lvlInstance::EndGeom(void) | ?EndGeom@lvlInstance@@QAEXXZ
    0x463D50 | public: static int __cdecl lvlInstance::AddSphere(float) | ?AddSphere@lvlInstance@@SAHM@Z
    0x463D90 | public: virtual int __thiscall lvlInstance::Init(char const *,class Matrix34 const &,int) | ?Init@lvlInstance@@UAEHPBDABVMatrix34@@H@Z
    0x463DA0 | public: bool __thiscall lvlInstance::InitBoundTerrain(char const *) | ?InitBoundTerrain@lvlInstance@@QAE_NPBD@Z
    0x463F50 | public: bool __thiscall lvlInstance::InitBoundTerrainLocal(char const *) | ?InitBoundTerrainLocal@lvlInstance@@QAE_NPBD@Z
    0x4641A0 | public: bool __thiscall lvlInstance::NeedGhostBound(class Vector3 const *,int) | ?NeedGhostBound@lvlInstance@@QAE_NPBVVector3@@H@Z
    0x464200 | public: bool __thiscall lvlInstance::InitGhostBound(class phBound *,class Vector3 const *,int) | ?InitGhostBound@lvlInstance@@QAE_NPAVphBound@@PBVVector3@@H@Z
    0x464330 | public: int __thiscall lvlInstance::InitGhost(char const *,class Matrix34 const &) | ?InitGhost@lvlInstance@@QAEHPBDABVMatrix34@@@Z
    0x4643A0 | public: virtual class Vector3 const & __thiscall lvlInstance::GetVelocity(void) | ?GetVelocity@lvlInstance@@UAEABVVector3@@XZ
    0x4643B0 | public: virtual class dgPhysEntity * __thiscall lvlInstance::GetEntity(void) | ?GetEntity@lvlInstance@@UAEPAVdgPhysEntity@@XZ
    0x4643C0 | public: virtual class dgPhysEntity * __thiscall lvlInstance::AttachEntity(void) | ?AttachEntity@lvlInstance@@UAEPAVdgPhysEntity@@XZ
    0x4643D0 | public: virtual void __thiscall lvlInstance::SetVariant(int) | ?SetVariant@lvlInstance@@UAEXH@Z
    0x4643E0 | public: virtual float const __thiscall lvlInstance::GetRadius(void) | ?GetRadius@lvlInstance@@UAE?BMXZ
    0x4643F0 | public: virtual void __thiscall lvlInstance::DrawShadow(void) | ?DrawShadow@lvlInstance@@UAEXXZ
    0x464400 | public: virtual void __thiscall lvlInstance::DrawShadowMap(void) | ?DrawShadowMap@lvlInstance@@UAEXXZ
    0x464410 | public: virtual void __thiscall lvlInstance::DrawGlow(void) | ?DrawGlow@lvlInstance@@UAEXXZ
    0x464420 | public: virtual void __thiscall lvlInstance::DrawReflected(float) | ?DrawReflected@lvlInstance@@UAEXM@Z
    public: virtual void __thiscall lvlInstance::DrawPhysics(class Vector3 const &) | ?DrawPhysics@lvlInstance@@UAEXABVVector3@@@Z
    0x464430 | public: static bool __cdecl lvlInstance::ComputeShadowMatrix(class Matrix34 &,int,class Matrix34 const &) | ?ComputeShadowMatrix@lvlInstance@@SA_NAAVMatrix34@@HABV2@@Z
    0x464670 | public: virtual int __thiscall lvlInstance::SetupGfxLights(class Matrix34 const &) | ?SetupGfxLights@lvlInstance@@UAEHABVMatrix34@@@Z
    0x464680 | protected: static void __cdecl lvlInstance::CreateTempBounds(void) | ?CreateTempBounds@lvlInstance@@KAXXZ
    0x4647E0 | protected: static void __cdecl lvlInstance::DeleteTempBounds(void) | ?DeleteTempBounds@lvlInstance@@KAXXZ
    0x4648B0 | public: virtual void __thiscall lvlInstance::DrawReflectedParts(int) | ?DrawReflectedParts@lvlInstance@@UAEXH@Z
    0x4648C0 | public: virtual class phBound const * __thiscall lvlInstance::GetBound(int) | ?GetBound@lvlInstance@@UAEPBVphBound@@H@Z
    0x4649F0 | public: virtual int __thiscall lvlInstance::IsVisible(class gfxViewport const &) | ?IsVisible@lvlInstance@@UAEHABVgfxViewport@@@Z
    0x464B00 | public: void __thiscall lvlInstance::PreLoadShader(int) | ?PreLoadShader@lvlInstance@@QAEXH@Z
    0x464B70 | public: void __thiscall lvlInstance::Optimize(int) | ?Optimize@lvlInstance@@QAEXH@Z
    public: static void __cdecl lvlInstance::AddWidgets(class bkBank &) | ?AddWidgets@lvlInstance@@SAXAAVbkBank@@@Z
    0x5B1988 | const lvlInstance::`vftable' | ??_7lvlInstance@@6B@
    private: static bool lvlInstance::sm_EnableShadows | ?sm_EnableShadows@lvlInstance@@0_NA
    0x5C6650 | unsigned int gInstanceAlignMask | ?gInstanceAlignMask@@3IA
    0x5C6654 | public: static float lvlInstance::sm_ObjNoDrawThresh | ?sm_ObjNoDrawThresh@lvlInstance@@2MA
    0x5C6658 | public: static float lvlInstance::sm_ObjVLowThresh | ?sm_ObjVLowThresh@lvlInstance@@2MA
    0x5C665C | public: static float lvlInstance::sm_ObjLowThresh | ?sm_ObjLowThresh@lvlInstance@@2MA
    0x5C6660 | public: static float lvlInstance::sm_ObjMedThresh | ?sm_ObjMedThresh@lvlInstance@@2MA
    0x6316CC | private: static unsigned int lvlInstance::sm_InstanceCount | ?sm_InstanceCount@lvlInstance@@0IA
    unsigned int accumTimeAMBIENT_VEHICLES | ?accumTimeAMBIENT_VEHICLES@@3IA
    protected: static char lvlInstance::TempBoundInUse | ?TempBoundInUse@lvlInstance@@1DA
    0x6316D8 | protected: static struct lvlInstance::GeomTableEntry * lvlInstance::GeomTable | ?GeomTable@lvlInstance@@1PAUGeomTableEntry@1@A
    int accumTriPLAYER_VEHICLES | ?accumTriPLAYER_VEHICLES@@3HA
    0x6516D8 | private: static unsigned char * lvlInstance::sm_Heap | ?sm_Heap@lvlInstance@@0PAEA
    int accumTriWHEELS | ?accumTriWHEELS@@3HA
    0x6516E0 | public: static class Matrix44 lvlInstance::sm_ShadowBillBoardMtx | ?sm_ShadowBillBoardMtx@lvlInstance@@2VMatrix44@@A
    0x651748 | private: static class HashTable lvlInstance::sm_XrefHash | ?sm_XrefHash@lvlInstance@@0VHashTable@@A
    0x651760 | protected: static char const * * lvlInstance::GeomNames | ?GeomNames@lvlInstance@@1PAPBDA
    unsigned int accumTimeWHEELS | ?accumTimeWHEELS@@3IA
    0x655760 | private: static unsigned int lvlInstance::sm_HeapTop | ?sm_HeapTop@lvlInstance@@0IA
    unsigned int accumTimePLAYER_VEHICLES | ?accumTimePLAYER_VEHICLES@@3IA
    int accumTriAMBIENT_VEHICLES | ?accumTriAMBIENT_VEHICLES@@3HA
    0x655764 | protected: static int lvlInstance::GeomSetCount | ?GeomSetCount@lvlInstance@@1HA
    0x6B2FA4 | private: static bool lvlInstance::sm_EnableGlows | ?sm_EnableGlows@lvlInstance@@0_NA
    0x65576C | protected: static class phBoundBox * lvlInstance::Box1 | ?Box1@lvlInstance@@1PAVphBoundBox@@A
    0x655770 | protected: static class phBoundBox * lvlInstance::Box2 | ?Box2@lvlInstance@@1PAVphBoundBox@@A
    0x655774 | protected: static class phBoundHotdog * lvlInstance::Dog1 | ?Dog1@lvlInstance@@1PAVphBoundHotdog@@A
    0x655778 | protected: static class phBoundHotdog * lvlInstance::Dog2 | ?Dog2@lvlInstance@@1PAVphBoundHotdog@@A
    0x65577C | protected: static class phBoundSphere * lvlInstance::Sph1 | ?Sph1@lvlInstance@@1PAVphBoundSphere@@A
    0x655780 | protected: static class phBoundSphere * lvlInstance::Sph2 | ?Sph2@lvlInstance@@1PAVphBoundSphere@@A
    0x655784 | public: static bool lvlInstance::sm_EnableNoClip | ?sm_EnableNoClip@lvlInstance@@2_NA
    public: static bool lvlInstance::sm_DrawInstSpheres | ?sm_DrawInstSpheres@lvlInstance@@2_NA
*/

class lvlInstance
{
    // const lvlInstance::`vftable' @ 0x5B1988

public:
    // 0x4631F0 | ??0lvlInstance@@QAE@XZ
    lvlInstance();

    // 0x463220 | ??1lvlInstance@@QAE@XZ
    ~lvlInstance();

    // 0x463BA0 | ?AddGeom@lvlInstance@@QAEHPBD0H@Z
    i32 AddGeom(char const* arg1, char const* arg2, i32 arg3);

    // 0x463A80 | ?BeginGeom@lvlInstance@@QAE_NPBD0H@Z
    bool BeginGeom(char const* arg1, char const* arg2, i32 arg3);

    // 0x463BC0 | ?EndGeom@lvlInstance@@QAEXXZ
    void EndGeom();

    // 0x463A40 | ?GetBoundSphere@lvlInstance@@QAEAAVVector4@@AAV2@@Z
    class Vector4& GetBoundSphere(class Vector4& arg1);

    // 0x463DA0 | ?InitBoundTerrain@lvlInstance@@QAE_NPBD@Z
    bool InitBoundTerrain(char const* arg1);

    // 0x463F50 | ?InitBoundTerrainLocal@lvlInstance@@QAE_NPBD@Z
    bool InitBoundTerrainLocal(char const* arg1);

    // 0x464330 | ?InitGhost@lvlInstance@@QAEHPBDABVMatrix34@@@Z
    i32 InitGhost(char const* arg1, class Matrix34 const& arg2);

    // 0x464200 | ?InitGhostBound@lvlInstance@@QAE_NPAVphBound@@PBVVector3@@H@Z
    bool InitGhostBound(class phBound* arg1, class Vector3 const* arg2, i32 arg3);

    // 0x463940 | ?LoadBoundOnLastEntry@lvlInstance@@QAE_NPBD@Z
    bool LoadBoundOnLastEntry(char const* arg1);

    // 0x4641A0 | ?NeedGhostBound@lvlInstance@@QAE_NPBVVector3@@H@Z
    bool NeedGhostBound(class Vector3 const* arg1, i32 arg2);

    // 0x464B70 | ?Optimize@lvlInstance@@QAEXH@Z
    void Optimize(i32 arg1);

    // 0x464B00 | ?PreLoadShader@lvlInstance@@QAEXH@Z
    void PreLoadShader(i32 arg1);

    // 0x463280 | ?Reset@lvlInstance@@UAEXXZ
    virtual void Reset();

    virtual class Vector3 const& GetPosition() = 0;

    // 0x4649F0 | ?IsVisible@lvlInstance@@UAEHABVgfxViewport@@@Z
    virtual i32 IsVisible(class gfxViewport const& arg1);

    virtual class Matrix34 const& GetMatrix(class Matrix34& arg1) = 0;

    virtual void SetMatrix(class Matrix34 const& arg1) = 0;

    // 0x4643D0 | ?SetVariant@lvlInstance@@UAEXH@Z
    virtual void SetVariant(i32 arg1);

    // 0x4643E0 | ?GetRadius@lvlInstance@@UAE?BMXZ
    virtual f32 const GetRadius();

    // 0x4643B0 | ?GetEntity@lvlInstance@@UAEPAVdgPhysEntity@@XZ
    virtual class dgPhysEntity* GetEntity();

    // 0x4643C0 | ?AttachEntity@lvlInstance@@UAEPAVdgPhysEntity@@XZ
    virtual class dgPhysEntity* AttachEntity();

    // 0x4643A0 | ?GetVelocity@lvlInstance@@UAEABVVector3@@XZ
    virtual class Vector3 const& GetVelocity();

    // 0x43FC30 | ?Detach@lvlInstance@@UAEXXZ
    virtual void Detach();

    virtual void Draw(i32 arg1) = 0;

    // 0x4643F0 | ?DrawShadow@lvlInstance@@UAEXXZ
    virtual void DrawShadow();

    // 0x464400 | ?DrawShadowMap@lvlInstance@@UAEXXZ
    virtual void DrawShadowMap();

    // 0x464410 | ?DrawGlow@lvlInstance@@UAEXXZ
    virtual void DrawGlow();

    // 0x464420 | ?DrawReflected@lvlInstance@@UAEXM@Z
    virtual void DrawReflected(f32 arg1);

    // 0x4648B0 | ?DrawReflectedParts@lvlInstance@@UAEXH@Z
    virtual void DrawReflectedParts(i32 arg1);

    // 0x463D90 | ?Init@lvlInstance@@UAEHPBDABVMatrix34@@H@Z
    virtual i32 Init(char const* arg1, class Matrix34 const& arg2, i32 arg3);

    virtual u32 SizeOf() = 0;

    // 0x463180 | ?IsLandmark@lvlInstance@@UAE_NXZ
    virtual bool IsLandmark();

    // 0x43FC40 | ?IsCollidable@lvlInstance@@UAE_NXZ
    virtual bool IsCollidable();

    // 0x43FC50 | ?IsTerrainCollidable@lvlInstance@@UAE_NXZ
    virtual bool IsTerrainCollidable();

    // 0x4632B0 | ?GetNumLightSources@lvlInstance@@UAEHXZ
    virtual i32 GetNumLightSources();

    // 0x4630B0 | ?GetLightInfo@lvlInstance@@UAEXHPAVcltLight@@@Z
    virtual void GetLightInfo(i32 arg1, class cltLight* arg2);

    // 0x464670 | ?SetupGfxLights@lvlInstance@@UAEHABVMatrix34@@@Z
    virtual i32 SetupGfxLights(class Matrix34 const& arg1);

    // 0x4648C0 | ?GetBound@lvlInstance@@UAEPBVphBound@@H@Z
    virtual class phBound const* GetBound(i32 arg1);

    // 0x463170 | ??3lvlInstance@@SAXPAX@Z
    static void operator delete(void* arg1);

    // 0x463110 | ??2lvlInstance@@SAPAXI@Z
    static void* operator new(u32 arg1);

    // 0x463D50 | ?AddSphere@lvlInstance@@SAHM@Z
    static i32 AddSphere(f32 arg1);

    // 0x464430 | ?ComputeShadowMatrix@lvlInstance@@SA_NAAVMatrix34@@HABV2@@Z
    static bool ComputeShadowMatrix(class Matrix34& arg1, i32 arg2, class Matrix34 const& arg3);

    // 0x4631E0 | ?ResetAll@lvlInstance@@SAXXZ
    static void ResetAll();

    // 0x4631A0 | ?ResetInstanceHeap@lvlInstance@@SAXXZ
    static void ResetInstanceHeap();

    // 0x463290 | ?SetShadowBillboardMtx@lvlInstance@@SAXAAVMatrix44@@@Z
    static void SetShadowBillboardMtx(class Matrix44& arg1);

    // 0x655784 | ?sm_EnableNoClip@lvlInstance@@2_NA
    static inline extern_var(0x655784, bool, sm_EnableNoClip);

    // 0x5C665C | ?sm_ObjLowThresh@lvlInstance@@2MA
    static inline extern_var(0x5C665C, f32, sm_ObjLowThresh);

    // 0x5C6660 | ?sm_ObjMedThresh@lvlInstance@@2MA
    static inline extern_var(0x5C6660, f32, sm_ObjMedThresh);

    // 0x5C6654 | ?sm_ObjNoDrawThresh@lvlInstance@@2MA
    static inline extern_var(0x5C6654, f32, sm_ObjNoDrawThresh);

    // 0x5C6658 | ?sm_ObjVLowThresh@lvlInstance@@2MA
    static inline extern_var(0x5C6658, f32, sm_ObjVLowThresh);

    // 0x6516E0 | ?sm_ShadowBillBoardMtx@lvlInstance@@2VMatrix44@@A
    static inline extern_var(0x6516E0, class Matrix44, sm_ShadowBillBoardMtx);

protected:
    // 0x464680 | ?CreateTempBounds@lvlInstance@@KAXXZ
    static void CreateTempBounds();

    // 0x4647E0 | ?DeleteTempBounds@lvlInstance@@KAXXZ
    static void DeleteTempBounds();

    // 0x4632C0 | ?GetGeomSet@lvlInstance@@KAHPBD0H@Z
    static i32 GetGeomSet(char const* arg1, char const* arg2, i32 arg3);

    // 0x65576C | ?Box1@lvlInstance@@1PAVphBoundBox@@A
    static inline extern_var(0x65576C, class phBoundBox*, Box1);

    // 0x655770 | ?Box2@lvlInstance@@1PAVphBoundBox@@A
    static inline extern_var(0x655770, class phBoundBox*, Box2);

    // 0x655774 | ?Dog1@lvlInstance@@1PAVphBoundHotdog@@A
    static inline extern_var(0x655774, class phBoundHotdog*, Dog1);

    // 0x655778 | ?Dog2@lvlInstance@@1PAVphBoundHotdog@@A
    static inline extern_var(0x655778, class phBoundHotdog*, Dog2);

    // 0x651760 | ?GeomNames@lvlInstance@@1PAPBDA
    static inline extern_var(0x651760, char const**, GeomNames);

    // 0x655764 | ?GeomSetCount@lvlInstance@@1HA
    static inline extern_var(0x655764, i32, GeomSetCount);

    // 0x6316D8 | ?GeomTable@lvlInstance@@1PAUGeomTableEntry@1@A
    static inline extern_var(0x6316D8, struct lvlInstance::GeomTableEntry*, GeomTable);

    // 0x65577C | ?Sph1@lvlInstance@@1PAVphBoundSphere@@A
    static inline extern_var(0x65577C, class phBoundSphere*, Sph1);

    // 0x655780 | ?Sph2@lvlInstance@@1PAVphBoundSphere@@A
    static inline extern_var(0x655780, class phBoundSphere*, Sph2);

private:
    // 0x6B2FA4 | ?sm_EnableGlows@lvlInstance@@0_NA
    static inline extern_var(0x6B2FA4, bool, sm_EnableGlows);

    // 0x6516D8 | ?sm_Heap@lvlInstance@@0PAEA
    static inline extern_var(0x6516D8, u8*, sm_Heap);

    // 0x655760 | ?sm_HeapTop@lvlInstance@@0IA
    static inline extern_var(0x655760, u32, sm_HeapTop);

    // 0x6316CC | ?sm_InstanceCount@lvlInstance@@0IA
    static inline extern_var(0x6316CC, u32, sm_InstanceCount);

    // 0x651748 | ?sm_XrefHash@lvlInstance@@0VHashTable@@A
    static inline extern_var(0x651748, class HashTable, sm_XrefHash);
};

check_size(lvlInstance, 0x0);

// 0x463190 | ?Init@@YAHPBDABVMatrix34@@@Z
i32 Init(char const* arg1, class Matrix34 const& arg2);

// 0x5C6650 | ?gInstanceAlignMask@@3IA
inline extern_var(0x5C6650, u32, gInstanceAlignMask);
