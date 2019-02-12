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
    city:psdl

    0x447300 | protected: bool __thiscall sdlPoly::InitNoArea(int,int,int,int,int) | ?InitNoArea@sdlPoly@@IAE_NHHHHH@Z
    0x447470 | public: bool __thiscall sdlPoly::SetQuad(int,int,float,int,float,int,float,int,float) | ?SetQuad@sdlPoly@@QAE_NHHMHMHMHM@Z
    0x447670 | public: bool __thiscall sdlPoly::SetFlatQuad(int,int,int,int,int,float) | ?SetFlatQuad@sdlPoly@@QAE_NHHHHHM@Z
    0x447850 | public: bool __thiscall sdlPoly::SetQuad(int,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?SetQuad@sdlPoly@@QAE_NHABVVector3@@000@Z
    0x4479D0 | public: bool __thiscall sdlPoly::SetTri(int,class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?SetTri@sdlPoly@@QAE_NHABVVector3@@00@Z
    0x447AF0 | public: bool __thiscall sdlPoly::SetFlatTri(int,int,int,int,float) | ?SetFlatTri@sdlPoly@@QAE_NHHHHM@Z
    0x447C70 | public: bool __thiscall sdlPoly::SetWall(int,int,int,float,float) | ?SetWall@sdlPoly@@QAE_NHHHMM@Z
    0x447D50 | public: bool __thiscall sdlPoly::SetWall(int,class Vector3 const &,class Vector3 const &,float,float) | ?SetWall@sdlPoly@@QAE_NHABVVector3@@0MM@Z
    0x447ED0 | public: void __thiscall sdlPolyCached::InitFromPoly(class sdlPoly const *) | ?InitFromPoly@sdlPolyCached@@QAEXPBVsdlPoly@@@Z
    0x448050 | public: __thiscall sdlCommon::sdlCommon(void) | ??0sdlCommon@@QAE@XZ
    0x448090 | public: static void __cdecl sdlCommon::UpdateLighting(void) | ?UpdateLighting@sdlCommon@@SAXXZ
    public: static void __cdecl sdlCommon::DebugLighting(int,class Vector3 const &,class Vector3 const &,float,float) | ?DebugLighting@sdlCommon@@SAXHABVVector3@@0MM@Z
    0x4482C0 | public: __thiscall sdlCommon::~sdlCommon(void) | ??1sdlCommon@@QAE@XZ
    0x4482E0 | public: virtual int __thiscall sdlCommon::CollideEdgePoint(class lvlSegment &,class lvlIntersectionPoint *,int) const | ?CollideEdgePoint@sdlCommon@@UBEHAAVlvlSegment@@PAVlvlIntersectionPoint@@H@Z
    0x4482F0 | public: virtual bool __thiscall sdlCommon::CollideProbePoint(class lvlSegment &,class lvlIntersectionPoint *,float) const | ?CollideProbePoint@sdlCommon@@UBE_NAAVlvlSegment@@PAVlvlIntersectionPoint@@M@Z
    0x448300 | public: virtual bool __thiscall sdlCommon::CollideAIPoint(class lvlSegment &,class lvlIntersectionPoint *) const | ?CollideAIPoint@sdlCommon@@UBE_NAAVlvlSegment@@PAVlvlIntersectionPoint@@@Z
    0x448310 | public: virtual char * __thiscall sdlCommon::AllocateState(void) const | ?AllocateState@sdlCommon@@UBEPADXZ
    0x448330 | public: void __thiscall sdlPage16::Draw(int,unsigned int) const | ?Draw@sdlPage16@@QBEXHI@Z
    0x450930 | public: int __thiscall sdlPage16::GetDrawnSDLPrims(int,int *,int) const | ?GetDrawnSDLPrims@sdlPage16@@QBEHHPAHH@Z
    0x455830 | public: int __thiscall sdlPage16::Collect(class Vector4 const *,class sdlPoly *,int,int &) const | ?Collect@sdlPage16@@QBEHPBVVector4@@PAVsdlPoly@@HAAH@Z
    0x45A4E0 | public: __thiscall sdlPage16::sdlPage16(int,int) | ??0sdlPage16@@QAE@HH@Z
    0x45A530 | public: __thiscall lvlSDL::lvlSDL(void) | ??0lvlSDL@@QAE@XZ
    0x45A550 | public: __thiscall lvlSDL::~lvlSDL(void) | ??1lvlSDL@@QAE@XZ
    0x45A560 | public: void __thiscall sdlPage16::ArcMap(float *,unsigned short const *,int,int,int) const | ?ArcMap@sdlPage16@@QBEXPAMPBGHHH@Z
    0x45A760 | public: void __thiscall sdlPage16::WallMap(float *,unsigned short const *,float,int,int) const | ?WallMap@sdlPage16@@QBEXPAMPBGMHH@Z
    0x45A900 | public: bool __thiscall sdlPage16::PointInPerimeter(float,float) const | ?PointInPerimeter@sdlPage16@@QBE_NMM@Z
    0x45A9F0 | public: void __thiscall sdlPage16::GetCentroid(class Vector3 &) const | ?GetCentroid@sdlPage16@@QBEXAAVVector3@@@Z
    0x45AB40 | public: static void __cdecl sdlPage16::FindBoundingIsoParams(class Vector4 const *,class Vector3 const *,unsigned short const *,int,int,int &,int &) | ?FindBoundingIsoParams@sdlPage16@@SAXPBVVector4@@PBVVector3@@PBGHHAAH3@Z
    0x45ADF0 | public: void __thiscall sdlPage16::ComputeBoundSphere(class Vector4 &) const | ?ComputeBoundSphere@sdlPage16@@QBEXAAVVector4@@@Z
    0x45AE90 | public: bool __thiscall sdlPage16::CollideSegment(class Vector4 const *,class lvlSegment &,class lvlIntersection &,float,float) const | ?CollideSegment@sdlPage16@@QBE_NPBVVector4@@AAVlvlSegment@@AAVlvlIntersection@@MM@Z
    0x45B060 | public: virtual int __thiscall lvlSDL::CollidePolyToLevel(class phBoundPolygonal const *,int *,int,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class lvlIntersection *,int,int *,bool) const | ?CollidePolyToLevel@lvlSDL@@UBEHPBVphBoundPolygonal@@PAHHPAVphColliderBase@@PBVMatrix34@@3PAVlvlIntersection@@H1_N@Z
    0x45BBA0 | public: virtual int __thiscall lvlSDL::CollideEdge(class lvlSegment &,class lvlIntersection *,int,int *,int) const | ?CollideEdge@lvlSDL@@UBEHAAVlvlSegment@@PAVlvlIntersection@@HPAHH@Z
    0x45BBB0 | public: virtual bool __thiscall lvlSDL::CollideProbe(class lvlSegment &,class lvlIntersection *,float) const | ?CollideProbe@lvlSDL@@UBE_NAAVlvlSegment@@PAVlvlIntersection@@M@Z
    0x45BE40 | public: virtual bool __thiscall lvlSDL::CollideAI(class lvlSegment &,class lvlIntersection *,int *,int) const | ?CollideAI@lvlSDL@@UBE_NAAVlvlSegment@@PAVlvlIntersection@@PAHH@Z
    0x45BE50 | public: void __thiscall lvlSDL::Enumerate(int,void (__cdecl*)(class lvlSDL const &,int,int,int,unsigned short const *,void *),void *) const | ?Enumerate@lvlSDL@@QBEXHP6AXABV1@HHHPBGPAX@Z2@Z
    0x45BF90 | public: static class sdlPage16 * __cdecl sdlPage16::LoadBinary(class Stream *) | ?LoadBinary@sdlPage16@@SAPAV1@PAVStream@@@Z
    0x45C040 | public: bool __thiscall lvlSDL::LoadBinary(char const *) | ?LoadBinary@lvlSDL@@QAE_NPBD@Z
    0x45C540 | private: static bool __cdecl lvlSDL::IsoLerp(class Vector3 &,int &,class Vector3 const *,int,unsigned short const *,int,float,bool,bool) | ?IsoLerp@lvlSDL@@CA_NAAVVector3@@AAHPBV2@HPBGHM_N4@Z
    0x45C660 | public: static void __cdecl lvlSDL::Propulate(class lvlSDL const &,int,int,int,unsigned short const *,void *) | ?Propulate@lvlSDL@@SAXABV1@HHHPBGPAX@Z
    0x45CB90 | public: virtual class Vector3 const & __thiscall lvlSDL::GetVertex(int) const | ?GetVertex@lvlSDL@@UBEABVVector3@@H@Z
    0x45CBB0 | _sqrtf
    0x45CBC0 | public: static bool __cdecl sdlCommon::BACKFACE(class Vector3 const &,class Vector3 const &) | ?BACKFACE@sdlCommon@@SA_NABVVector3@@0@Z
    0x45CC10 | float __cdecl Max(float,float) | ?Max@@YAMMM@Z
    0x45CC30 | float __cdecl Lerp(float,float,float) | ?Lerp@@YAMMMM@Z
    0x45CC50 | public: __thiscall Vector2::Vector2(void) | ??0Vector2@@QAE@XZ
    0x45CC60 | public: float __thiscall Vector2::Mag(void) const | ?Mag@Vector2@@QBEMXZ
    0x45CC80 | public: float __thiscall Vector2::Mag2(void) const | ?Mag2@Vector2@@QBEMXZ
    0x45CCB0 | public: void __thiscall Vector3::Set(float,float,float) | ?Set@Vector3@@QAEXMMM@Z
    0x45CD30 | public: void __thiscall Vector3::Subtract(class Vector3 const &) | ?Subtract@Vector3@@QAEXABV1@@Z
    public: void __thiscall Vector3::Subtract(class Vector3 const &,class Vector3 const &) | ?Subtract@Vector3@@QAEXABV1@0@Z
    0x45CD60 | public: void __thiscall Vector3::Normalize(void) | ?Normalize@Vector3@@QAEXXZ
    0x45CDC0 | public: float __thiscall Vector3::InvMag(void) const | ?InvMag@Vector3@@QBEMXZ
    public: class Vector3 __thiscall Vector3::operator+(class Vector3 const &) const | ??HVector3@@QBE?AV0@ABV0@@Z
    0x45CE80 | public: void __thiscall Vector3::Cross(class Vector3 const &) | ?Cross@Vector3@@QAEXABV1@@Z
    0x45CEC0 | public: float __thiscall Vector3::Dist(class Vector3 const &) const | ?Dist@Vector3@@QBEMABV1@@Z
    0x45CF00 | public: float __thiscall Vector3::FlatDist(class Vector3 const &) const | ?FlatDist@Vector3@@QBEMABV1@@Z
    0x45CF30 | public: virtual int __thiscall phBound::GetNumMaterials(void) const | ?GetNumMaterials@phBound@@UBEHXZ
    0x45CF40 | public: virtual void __thiscall phBound::SetFriction(float) | ?SetFriction@phBound@@UAEXM@Z
    0x45CF50 | public: virtual void __thiscall phBound::SetElasticity(float) | ?SetElasticity@phBound@@UAEXM@Z
    0x45CF60 | public: virtual float __thiscall phBound::SetFriction(void) | ?SetFriction@phBound@@UAEMXZ
    0x45CF70 | public: virtual float __thiscall phBound::SetElasticity(void) | ?SetElasticity@phBound@@UAEMXZ
    0x45CF80 | public: virtual void __thiscall phBound::ModifyInvMassMatrix(class Matrix34 *,int,class Vector3 const &) const | ?ModifyInvMassMatrix@phBound@@UBEXPAVMatrix34@@HABVVector3@@@Z
    0x45CF90 | public: virtual void __thiscall phBound::ModifyInvMassMatrix(class Matrix34 *,int,class Vector3 const &,class Vector3 const &) const | ?ModifyInvMassMatrix@phBound@@UBEXPAVMatrix34@@HABVVector3@@1@Z
    0x45CFA0 | public: virtual float __thiscall phBound::EffectiveMass(class Vector3 const &,class Vector3 const &,int,float) const | ?EffectiveMass@phBound@@UBEMABVVector3@@0HM@Z
    public: virtual void __thiscall lvlLevelBound::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@lvlLevelBound@@UBEXABVVector3@@@Z
    0x45CFB0 | private: virtual int __thiscall lvlLevelBound::FindImpactsSphereOneRoom(int,class phBoundSphere const *,class Vector3 const &,class phColliderBase *,class phColliderBase *,class phImpactBase *,int) const | ?FindImpactsSphereOneRoom@lvlLevelBound@@EBEHHPBVphBoundSphere@@ABVVector3@@PAVphColliderBase@@2PAVphImpactBase@@H@Z
    0x45CFC0 | private: virtual int __thiscall lvlLevelBound::FindImpactsHotdogOneRoom(int,class Vector3 const * const,class phBoundHotdog const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &) const | ?FindImpactsHotdogOneRoom@lvlLevelBound@@EBEHHQBVVector3@@PBVphBoundHotdog@@PBVMatrix34@@2PAVphColliderBase@@3PAVphImpactBase@@HABV2@@Z
    0x45CFD0 | void __cdecl vglTexCoord2f(float,float) | ?vglTexCoord2f@@YAXMM@Z
    0x45CFF0 | void __cdecl vglVertex3f(float,float,float) | ?vglVertex3f@@YAXMMM@Z
    0x45D080 | void __cdecl vglVertex3f(class Vector3) | ?vglVertex3f@@YAXVVector3@@@Z
    0x45D110 | public: int __thiscall sdlPage16::GetPerimeterCount(void) const | ?GetPerimeterCount@sdlPage16@@QBEHXZ
    0x45D120 | public: int __thiscall sdlPage16::GetPerimeterVertexIndex(int) const | ?GetPerimeterVertexIndex@sdlPage16@@QBEHH@Z
    0x45D140 | public: class Vector3 const & __thiscall sdlPage16::GetCodedVertex(int) const | ?GetCodedVertex@sdlPage16@@QBEABVVector3@@H@Z
    0x45D160 | public: float __thiscall sdlPage16::GetFloat(int) const | ?GetFloat@sdlPage16@@QBEMH@Z
    0x45D170 | public: class gfxTexture * __thiscall sdlPage16::GetTexture(int) const | ?GetTexture@sdlPage16@@QBEPAVgfxTexture@@H@Z
    0x45D180 | public: unsigned int __thiscall gfxTexture::GetColor(void) const | ?GetColor@gfxTexture@@QBEIXZ
    bool __cdecl SphereApprox2(class Vector3 const &,float,class Vector3 const &,class Vector3 const &) | ?SphereApprox2@@YA_NABVVector3@@M00@Z
    public: int __thiscall sdlPage16::GetMaterialIndex(int) const | ?GetMaterialIndex@sdlPage16@@QBEHH@Z
    public: bool __thiscall Vector3::IsZero(void) const | ?IsZero@Vector3@@QBE_NXZ
    0x5B17CC | const sdlCommon::`vftable' | ??_7sdlCommon@@6B@
    0x5B1868 | const lvlSDL::`vftable' | ??_7lvlSDL@@6B@
    bool sm_EnableFastIso | ?sm_EnableFastIso@@3_NA
    float sm_FastIsoFudgeFactor | ?sm_FastIsoFudgeFactor@@3MA
    unsigned int accumTimeSDL_Collect | ?accumTimeSDL_Collect@@3IA
    public: static int sdlPoly::CollideSegmentPlaneCalls | ?CollideSegmentPlaneCalls@sdlPoly@@2HA
    int accumTriSDL_CollideProbe | ?accumTriSDL_CollideProbe@@3HA
    protected: static int sdlPoly::sm_Available | ?sm_Available@sdlPoly@@1HA
    protected: static class Vector3 * sdlPoly::sm_Verts | ?sm_Verts@sdlPoly@@1PAVVector3@@A
    private: static unsigned short sdlCommon::sm_CurrentRoom | ?sm_CurrentRoom@sdlCommon@@0GA
    public: static bool sdlCommon::sm_EnableSolidColor | ?sm_EnableSolidColor@sdlCommon@@2_NA
    int accumTriSDL_Draw | ?accumTriSDL_Draw@@3HA
    private: static int lvlSDL::sm_AllocatedVertCount | ?sm_AllocatedVertCount@lvlSDL@@0HA
    private: static int lvlSDL::sm_AllocatedFloatCount | ?sm_AllocatedFloatCount@lvlSDL@@0HA
    unsigned int accumTimeSDL_Draw | ?accumTimeSDL_Draw@@3IA
    unsigned int accumTimeSDL_CollideProbe | ?accumTimeSDL_CollideProbe@@3IA
    int accumTriSDL_PointInPerimeter | ?accumTriSDL_PointInPerimeter@@3HA
    int Probe_Cache_Hits | ?Probe_Cache_Hits@@3HA
    public: static class Vector3 sdlCommon::sm_CamPos | ?sm_CamPos@sdlCommon@@2VVector3@@A
    int accumTriSDL_PolysToLevel | ?accumTriSDL_PolysToLevel@@3HA
    unsigned int accumTimeSDL_PointInPerimeter | ?accumTimeSDL_PointInPerimeter@@3IA
    int accumTriSDL_Collect | ?accumTriSDL_Collect@@3HA
    int Polys_Accepted | ?Polys_Accepted@@3HA
    private: static class gfxTexture * * lvlSDL::sm_Textures | ?sm_Textures@lvlSDL@@0PAPAVgfxTexture@@A
    protected: static int sdlPoly::sm_Count | ?sm_Count@sdlPoly@@1HA
    private: static int lvlSDL::sm_TextureCount | ?sm_TextureCount@lvlSDL@@0HA
    0x62B0A0 | public: static unsigned int * sdlCommon::sm_LightTable | ?sm_LightTable@sdlCommon@@2PAIA
    private: static int lvlSDL::sm_FloatCount | ?sm_FloatCount@lvlSDL@@0HA
    unsigned int accumTimeSDL_PolysToLevel | ?accumTimeSDL_PolysToLevel@@3IA
    private: static unsigned char * lvlSDL::sm_Materials | ?sm_Materials@lvlSDL@@0PAEA
    0x6311A0 | private: static int lvlSDL::sm_VertCount | ?sm_VertCount@lvlSDL@@0HA
    private: static float * lvlSDL::sm_Floats | ?sm_Floats@lvlSDL@@0PAMA
    int Polys_Scanned | ?Polys_Scanned@@3HA
    0x6311A4 | private: static class Vector3 * lvlSDL::sm_Verts | ?sm_Verts@lvlSDL@@0PAVVector3@@A
    int Probe_No_State | ?Probe_No_State@@3HA
    public: static int sdlPoly::CollideSegmentCalls | ?CollideSegmentCalls@sdlPoly@@2HA
    public: static int sdlPoly::CollideSegmentWallCalls | ?CollideSegmentWallCalls@sdlPoly@@2HA
    0x6311A8 | private: static class sdlCommon * sdlCommon::sm_Instance | ?sm_Instance@sdlCommon@@0PAV1@A
*/

// #include "hooking.h"
