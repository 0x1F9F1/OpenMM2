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

#include "hooking.h"
