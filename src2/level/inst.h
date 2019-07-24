/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    0x464430 | public: virtual void __thiscall lvlInstance::DrawPhysics(class Vector3 const &) | ?DrawPhysics@lvlInstance@@UAEXABVVector3@@@Z
    public: static bool __cdecl lvlInstance::ComputeShadowMatrix(class Matrix34 &,int,class Matrix34 const &) | ?ComputeShadowMatrix@lvlInstance@@SA_NAAVMatrix34@@HABV2@@Z
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
    0x655764 | private: static unsigned int lvlInstance::sm_InstanceCount | ?sm_InstanceCount@lvlInstance@@0IA
    unsigned int accumTimeAMBIENT_VEHICLES | ?accumTimeAMBIENT_VEHICLES@@3IA
    protected: static char lvlInstance::TempBoundInUse | ?TempBoundInUse@lvlInstance@@1DA
    0x6316B8 | protected: static struct lvlInstance::GeomTableEntry * lvlInstance::GeomTable | ?GeomTable@lvlInstance@@1PAUGeomTableEntry@1@A
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
    protected: static int lvlInstance::GeomSetCount | ?GeomSetCount@lvlInstance@@1HA
    private: static bool lvlInstance::sm_EnableGlows | ?sm_EnableGlows@lvlInstance@@0_NA
    protected: static class phBoundBox * lvlInstance::Box1 | ?Box1@lvlInstance@@1PAVphBoundBox@@A
    protected: static class phBoundBox * lvlInstance::Box2 | ?Box2@lvlInstance@@1PAVphBoundBox@@A
    protected: static class phBoundHotdog * lvlInstance::Dog1 | ?Dog1@lvlInstance@@1PAVphBoundHotdog@@A
    protected: static class phBoundHotdog * lvlInstance::Dog2 | ?Dog2@lvlInstance@@1PAVphBoundHotdog@@A
    protected: static class phBoundSphere * lvlInstance::Sph1 | ?Sph1@lvlInstance@@1PAVphBoundSphere@@A
    protected: static class phBoundSphere * lvlInstance::Sph2 | ?Sph2@lvlInstance@@1PAVphBoundSphere@@A
    public: static bool lvlInstance::sm_EnableNoClip | ?sm_EnableNoClip@lvlInstance@@2_NA
    public: static bool lvlInstance::sm_DrawInstSpheres | ?sm_DrawInstSpheres@lvlInstance@@2_NA
*/

// 0x463190 | ?Init@@YAHPBDABVMatrix34@@@Z
inline int32_t Init(char const* arg1, class Matrix34 const& arg2)
{
    return stub<cdecl_t<int32_t, char const*, class Matrix34 const&>>(0x463190, arg1, arg2);
}

// 0x5C6650 | ?gInstanceAlignMask@@3IA
inline extern_var(0x5C6650, uint32_t, gInstanceAlignMask);

class lvlInstance
{
public:
    // lvlInstance::`vftable' @ 0x5B1988

    // 0x463110 | ??2lvlInstance@@SAPAXI@Z
    static inline void* operator new(uint32_t arg1)
    {
        return stub<cdecl_t<void*, uint32_t>>(0x463110, arg1);
    }

    // 0x463170 | ??3lvlInstance@@SAXPAX@Z
    static inline void operator delete(void* arg1)
    {
        return stub<cdecl_t<void, void*>>(0x463170, arg1);
    }

    // 0x4631A0 | ?ResetInstanceHeap@lvlInstance@@SAXXZ
    static inline void ResetInstanceHeap()
    {
        return stub<cdecl_t<void>>(0x4631A0);
    }

    // 0x4631E0 | ?ResetAll@lvlInstance@@SAXXZ
    static inline void ResetAll()
    {
        return stub<cdecl_t<void>>(0x4631E0);
    }

    // 0x4631F0 | ??0lvlInstance@@QAE@XZ
    inline lvlInstance()
    {
        stub<member_func_t<void, lvlInstance>>(0x4631F0, this);
    }

    // 0x463220 | ??1lvlInstance@@QAE@XZ
    inline ~lvlInstance()
    {
        stub<member_func_t<void, lvlInstance>>(0x463220, this);
    }

    // 0x463290 | ?SetShadowBillboardMtx@lvlInstance@@SAXAAVMatrix44@@@Z
    static inline void SetShadowBillboardMtx(class Matrix44& arg1)
    {
        return stub<cdecl_t<void, class Matrix44&>>(0x463290, arg1);
    }

    // 0x4632C0 | ?GetGeomSet@lvlInstance@@KAHPBD0H@Z
    static inline int32_t GetGeomSet(char const* arg1, char const* arg2, int32_t arg3)
    {
        return stub<cdecl_t<int32_t, char const*, char const*, int32_t>>(0x4632C0, arg1, arg2, arg3);
    }

    // 0x463940 | ?LoadBoundOnLastEntry@lvlInstance@@QAE_NPBD@Z
    inline bool LoadBoundOnLastEntry(char const* arg1)
    {
        return stub<member_func_t<bool, lvlInstance, char const*>>(0x463940, this, arg1);
    }

    // 0x463A40 | ?GetBoundSphere@lvlInstance@@QAEAAVVector4@@AAV2@@Z
    inline class Vector4& GetBoundSphere(class Vector4& arg1)
    {
        return stub<member_func_t<class Vector4&, lvlInstance, class Vector4&>>(0x463A40, this, arg1);
    }

    // 0x463A80 | ?BeginGeom@lvlInstance@@QAE_NPBD0H@Z
    inline bool BeginGeom(char const* arg1, char const* arg2, int32_t arg3)
    {
        return stub<member_func_t<bool, lvlInstance, char const*, char const*, int32_t>>(
            0x463A80, this, arg1, arg2, arg3);
    }

    // 0x463BA0 | ?AddGeom@lvlInstance@@QAEHPBD0H@Z
    inline int32_t AddGeom(char const* arg1, char const* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, lvlInstance, char const*, char const*, int32_t>>(
            0x463BA0, this, arg1, arg2, arg3);
    }

    // 0x463BC0 | ?EndGeom@lvlInstance@@QAEXXZ
    inline void EndGeom()
    {
        return stub<member_func_t<void, lvlInstance>>(0x463BC0, this);
    }

    // 0x463D50 | ?AddSphere@lvlInstance@@SAHM@Z
    static inline int32_t AddSphere(float arg1)
    {
        return stub<cdecl_t<int32_t, float>>(0x463D50, arg1);
    }

    // 0x463DA0 | ?InitBoundTerrain@lvlInstance@@QAE_NPBD@Z
    inline bool InitBoundTerrain(char const* arg1)
    {
        return stub<member_func_t<bool, lvlInstance, char const*>>(0x463DA0, this, arg1);
    }

    // 0x463F50 | ?InitBoundTerrainLocal@lvlInstance@@QAE_NPBD@Z
    inline bool InitBoundTerrainLocal(char const* arg1)
    {
        return stub<member_func_t<bool, lvlInstance, char const*>>(0x463F50, this, arg1);
    }

    // 0x4641A0 | ?NeedGhostBound@lvlInstance@@QAE_NPBVVector3@@H@Z
    inline bool NeedGhostBound(class Vector3 const* arg1, int32_t arg2)
    {
        return stub<member_func_t<bool, lvlInstance, class Vector3 const*, int32_t>>(0x4641A0, this, arg1, arg2);
    }

    // 0x464200 | ?InitGhostBound@lvlInstance@@QAE_NPAVphBound@@PBVVector3@@H@Z
    inline bool InitGhostBound(class phBound* arg1, class Vector3 const* arg2, int32_t arg3)
    {
        return stub<member_func_t<bool, lvlInstance, class phBound*, class Vector3 const*, int32_t>>(
            0x464200, this, arg1, arg2, arg3);
    }

    // 0x464330 | ?InitGhost@lvlInstance@@QAEHPBDABVMatrix34@@@Z
    inline int32_t InitGhost(char const* arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<int32_t, lvlInstance, char const*, class Matrix34 const&>>(
            0x464330, this, arg1, arg2);
    }

    // 0x464680 | ?CreateTempBounds@lvlInstance@@KAXXZ
    static inline void CreateTempBounds()
    {
        return stub<cdecl_t<void>>(0x464680);
    }

    // 0x4647E0 | ?DeleteTempBounds@lvlInstance@@KAXXZ
    static inline void DeleteTempBounds()
    {
        return stub<cdecl_t<void>>(0x4647E0);
    }

    // 0x464B00 | ?PreLoadShader@lvlInstance@@QAEXH@Z
    inline void PreLoadShader(int32_t arg1)
    {
        return stub<member_func_t<void, lvlInstance, int32_t>>(0x464B00, this, arg1);
    }

    // 0x464B70 | ?Optimize@lvlInstance@@QAEXH@Z
    inline void Optimize(int32_t arg1)
    {
        return stub<member_func_t<void, lvlInstance, int32_t>>(0x464B70, this, arg1);
    }

    // 0x5C6654 | ?sm_ObjNoDrawThresh@lvlInstance@@2MA
    static inline extern_var(0x5C6654, float, sm_ObjNoDrawThresh);

    // 0x5C6658 | ?sm_ObjVLowThresh@lvlInstance@@2MA
    static inline extern_var(0x5C6658, float, sm_ObjVLowThresh);

    // 0x5C665C | ?sm_ObjLowThresh@lvlInstance@@2MA
    static inline extern_var(0x5C665C, float, sm_ObjLowThresh);

    // 0x5C6660 | ?sm_ObjMedThresh@lvlInstance@@2MA
    static inline extern_var(0x5C6660, float, sm_ObjMedThresh);

    // 0x655764 | ?sm_InstanceCount@lvlInstance@@0IA
    static inline extern_var(0x655764, uint32_t, sm_InstanceCount);

    // 0x6316B8 | ?GeomTable@lvlInstance@@1PAUGeomTableEntry@1@A
    static inline extern_var(0x6316B8, struct lvlInstance::GeomTableEntry*, GeomTable);

    // 0x6516D8 | ?sm_Heap@lvlInstance@@0PAEA
    static inline extern_var(0x6516D8, uint8_t*, sm_Heap);

    // 0x6516E0 | ?sm_ShadowBillBoardMtx@lvlInstance@@2VMatrix44@@A
    static inline extern_var(0x6516E0, class Matrix44, sm_ShadowBillBoardMtx);

    // 0x651748 | ?sm_XrefHash@lvlInstance@@0VHashTable@@A
    static inline extern_var(0x651748, class HashTable, sm_XrefHash);

    // 0x651760 | ?GeomNames@lvlInstance@@1PAPBDA
    static inline extern_var(0x651760, char const**, GeomNames);

    // 0x655760 | ?sm_HeapTop@lvlInstance@@0IA
    static inline extern_var(0x655760, uint32_t, sm_HeapTop);

    // 0x463280 | ?Reset@lvlInstance@@UAEXXZ
    virtual inline void Reset()
    {
        return stub<member_func_t<void, lvlInstance>>(0x463280, this);
    }

    // 0x582519 | __purecall
    virtual inline class Vector3 const& GetPosition()
    {
        return stub<member_func_t<class Vector3 const&, lvlInstance>>(0x582519, this);
    }

    // 0x4649F0 | ?IsVisible@lvlInstance@@UAEHABVgfxViewport@@@Z
    virtual inline int32_t IsVisible(class gfxViewport const& arg1)
    {
        return stub<member_func_t<int32_t, lvlInstance, class gfxViewport const&>>(0x4649F0, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline class Matrix34 const& GetMatrix(class Matrix34& arg1)
    {
        return stub<member_func_t<class Matrix34 const&, lvlInstance, class Matrix34&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline void SetMatrix(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, lvlInstance, class Matrix34 const&>>(0x582519, this, arg1);
    }

    // 0x4643D0 | ?SetVariant@lvlInstance@@UAEXH@Z
    virtual inline void SetVariant(int32_t arg1)
    {
        return stub<member_func_t<void, lvlInstance, int32_t>>(0x4643D0, this, arg1);
    }

    // 0x4643E0 | ?GetRadius@lvlInstance@@UAE?BMXZ
    virtual inline float const GetRadius()
    {
        return stub<member_func_t<float const, lvlInstance>>(0x4643E0, this);
    }

    // 0x4643B0 | ?GetEntity@lvlInstance@@UAEPAVdgPhysEntity@@XZ
    virtual inline class dgPhysEntity* GetEntity()
    {
        return stub<member_func_t<class dgPhysEntity*, lvlInstance>>(0x4643B0, this);
    }

    // 0x4643C0 | ?AttachEntity@lvlInstance@@UAEPAVdgPhysEntity@@XZ
    virtual inline class dgPhysEntity* AttachEntity()
    {
        return stub<member_func_t<class dgPhysEntity*, lvlInstance>>(0x4643C0, this);
    }

    // 0x4643A0 | ?GetVelocity@lvlInstance@@UAEABVVector3@@XZ
    virtual inline class Vector3 const& GetVelocity()
    {
        return stub<member_func_t<class Vector3 const&, lvlInstance>>(0x4643A0, this);
    }

    // 0x43FC30 | ?Detach@lvlInstance@@UAEXXZ
    virtual inline void Detach()
    {
        return stub<member_func_t<void, lvlInstance>>(0x43FC30, this);
    }

    // 0x582519 | __purecall
    virtual inline void Draw(int32_t arg1)
    {
        return stub<member_func_t<void, lvlInstance, int32_t>>(0x582519, this, arg1);
    }

    // 0x4643F0 | ?DrawShadow@lvlInstance@@UAEXXZ
    virtual inline void DrawShadow()
    {
        return stub<member_func_t<void, lvlInstance>>(0x4643F0, this);
    }

    // 0x464400 | ?DrawShadowMap@lvlInstance@@UAEXXZ
    virtual inline void DrawShadowMap()
    {
        return stub<member_func_t<void, lvlInstance>>(0x464400, this);
    }

    // 0x464410 | ?DrawGlow@lvlInstance@@UAEXXZ
    virtual inline void DrawGlow()
    {
        return stub<member_func_t<void, lvlInstance>>(0x464410, this);
    }

    // 0x464420 | ?DrawReflected@lvlInstance@@UAEXM@Z
    virtual inline void DrawReflected(float arg1)
    {
        return stub<member_func_t<void, lvlInstance, float>>(0x464420, this, arg1);
    }

    // 0x4648B0 | ?DrawReflectedParts@lvlInstance@@UAEXH@Z
    virtual inline void DrawReflectedParts(int32_t arg1)
    {
        return stub<member_func_t<void, lvlInstance, int32_t>>(0x4648B0, this, arg1);
    }

    // 0x463D90 | ?Init@lvlInstance@@UAEHPBDABVMatrix34@@H@Z
    virtual inline int32_t Init(char const* arg1, class Matrix34 const& arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, lvlInstance, char const*, class Matrix34 const&, int32_t>>(
            0x463D90, this, arg1, arg2, arg3);
    }

    // 0x582519 | __purecall
    virtual inline uint32_t SizeOf()
    {
        return stub<member_func_t<uint32_t, lvlInstance>>(0x582519, this);
    }

    // 0x463180 | ?IsLandmark@lvlInstance@@UAE_NXZ
    virtual inline bool IsLandmark()
    {
        return stub<member_func_t<bool, lvlInstance>>(0x463180, this);
    }

    // 0x43FC40 | ?IsCollidable@lvlInstance@@UAE_NXZ
    virtual inline bool IsCollidable()
    {
        return stub<member_func_t<bool, lvlInstance>>(0x43FC40, this);
    }

    // 0x43FC50 | ?IsTerrainCollidable@lvlInstance@@UAE_NXZ
    virtual inline bool IsTerrainCollidable()
    {
        return stub<member_func_t<bool, lvlInstance>>(0x43FC50, this);
    }

    // 0x4632B0 | ?GetNumLightSources@lvlInstance@@UAEHXZ
    virtual inline int32_t GetNumLightSources()
    {
        return stub<member_func_t<int32_t, lvlInstance>>(0x4632B0, this);
    }

    // 0x4630B0 | ?GetLightInfo@lvlInstance@@UAEXHPAVcltLight@@@Z
    virtual inline void GetLightInfo(int32_t arg1, class cltLight* arg2)
    {
        return stub<member_func_t<void, lvlInstance, int32_t, class cltLight*>>(0x4630B0, this, arg1, arg2);
    }

    // 0x464670 | ?SetupGfxLights@lvlInstance@@UAEHABVMatrix34@@@Z
    virtual inline int32_t SetupGfxLights(class Matrix34 const& arg1)
    {
        return stub<member_func_t<int32_t, lvlInstance, class Matrix34 const&>>(0x464670, this, arg1);
    }

    // 0x4648C0 | ?GetBound@lvlInstance@@UAEPBVphBound@@H@Z
    virtual inline class phBound const* GetBound(int32_t arg1)
    {
        return stub<member_func_t<class phBound const*, lvlInstance, int32_t>>(0x4648C0, this, arg1);
    }
};
