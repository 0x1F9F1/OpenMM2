/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    phbound:boundterrain

    0x48C150 | public: __thiscall phBoundTerrain::phBoundTerrain(void) | ??0phBoundTerrain@@QAE@XZ
    0x48C1D0 | public: __thiscall phBoundTerrain::~phBoundTerrain(void) | ??1phBoundTerrain@@QAE@XZ
    0x48C270 | public: void __thiscall phBoundTerrain::SetHotEdges(bool) | ?SetHotEdges@phBoundTerrain@@QAEX_N@Z
    0x48C2D0 | public: virtual void __thiscall phBoundTerrain::PostLoadCompute(void) | ?PostLoadCompute@phBoundTerrain@@UAEXXZ
    0x48C2E0 | public: bool __thiscall phBoundTerrain::Load(char const *) | ?Load@phBoundTerrain@@QAE_NPBD@Z
    0x48C690 | public: bool __thiscall phBoundTerrain::Save(char const *) | ?Save@phBoundTerrain@@QAE_NPBD@Z
    0x48C8A0 | public: int __thiscall phBoundTerrain::TestBoundTerrainPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,int,int *,int *,class Vector3 const &,bool) const | ?TestBoundTerrainPoly@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@1PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    0x48C960 | public: int __thiscall phBoundTerrain::TestBoundTerrainEdgesVsPoly(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class phIntersection *,int,int *) const | ?TestBoundTerrainEdgesVsPoly@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@PAVphIntersection@@HPAH@Z
    0x48CD00 | public: int __thiscall phBoundTerrain::TestBoundPolyTerrain(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int,int *,class Vector3 const *,bool) const | ?TestBoundPolyTerrain@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@2PAVphIntersection@@HPAHPBVVector3@@_N@Z
    0x48D790 | public: virtual bool __thiscall phBoundTerrain::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBoundTerrain@@UBE_NABVVector3@@MAAV2@1AAM@Z
    public: virtual void __thiscall phBoundTerrain::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundTerrain@@UBEXABVVector3@@@Z
    0x48D9C0 | public: void __thiscall phBoundTerrain::InitPolyIterator(class Vector3 const &,float) const | ?InitPolyIterator@phBoundTerrain@@QBEXABVVector3@@M@Z
    0x48DDC0 | public: void __thiscall phBoundTerrain::InitPolyIterator(class phSegment const &) const | ?InitPolyIterator@phBoundTerrain@@QBEXABVphSegment@@@Z
    0x48E0C0 | public: void __thiscall phBoundTerrain::ClearPolyTouched(void) const | ?ClearPolyTouched@phBoundTerrain@@QBEXXZ
    0x48E100 | public: virtual bool __thiscall phBoundTerrain::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x48E200 | public: virtual bool __thiscall phBoundTerrain::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x48E310 | public: virtual bool __thiscall phBoundTerrain::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x48E480 | public: virtual int __thiscall phBoundTerrain::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundTerrain@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x48E680 | protected: void __thiscall phBoundTerrain::CalculateBuckets(float,float,float,float) const | ?CalculateBuckets@phBoundTerrain@@IBEXMMMM@Z
    0x48EF50 | public: int __thiscall phBoundTerrain::FindImpactsSphereToTerrain(class phBoundSphere const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsSphereToTerrain@phBoundTerrain@@QBEHPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    0x48F440 | public: int __thiscall phBoundTerrain::FindImpactsHotdogToTerrain(class phBoundHotdog const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsHotdogToTerrain@phBoundTerrain@@QBEHPBVphBoundHotdog@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    0x4901F0 | public: static void __cdecl phBoundTerrain::PackNormal(unsigned int &,class Vector4 const &) | ?PackNormal@phBoundTerrain@@SAXAAIABVVector4@@@Z
    0x490280 | public: static void __cdecl phBoundTerrain::UnpackNormal(class Vector4 &,unsigned int) | ?UnpackNormal@phBoundTerrain@@SAXAAVVector4@@I@Z
    protected: static float const phBoundTerrain::FileVersion | ?FileVersion@phBoundTerrain@@1MB
    0x5B2344 | const phBoundTerrain::`vftable' | ??_7phBoundTerrain@@6B@
    float gBoundTerrainLoad | ?gBoundTerrainLoad@@3MA
    protected: static bool phBoundTerrain::HotEdgesDefault | ?HotEdgesDefault@phBoundTerrain@@1_NA
*/

struct phBoundTerrain : phBoundGeometry
{
public:
    // phBoundTerrain::`vftable' @ 0x5B2344

    // 0x48C150 | ??0phBoundTerrain@@QAE@XZ
    inline phBoundTerrain()
    {
        stub<member_func_t<void, phBoundTerrain>>(0x48C150, this);
    }

    // 0x48C1D0 | ??1phBoundTerrain@@QAE@XZ
    inline ~phBoundTerrain()
    {
        stub<member_func_t<void, phBoundTerrain>>(0x48C1D0, this);
    }

    // 0x48C270 | ?SetHotEdges@phBoundTerrain@@QAEX_N@Z
    inline void SetHotEdges(bool arg1)
    {
        return stub<member_func_t<void, phBoundTerrain, bool>>(0x48C270, this, arg1);
    }

    // 0x48C2E0 | ?Load@phBoundTerrain@@QAE_NPBD@Z
    inline bool Load(char const* arg1)
    {
        return stub<member_func_t<bool, phBoundTerrain, char const*>>(0x48C2E0, this, arg1);
    }

    // 0x48C690 | ?Save@phBoundTerrain@@QAE_NPBD@Z
    inline bool Save(char const* arg1)
    {
        return stub<member_func_t<bool, phBoundTerrain, char const*>>(0x48C690, this, arg1);
    }

    // 0x48C8A0 | ?TestBoundTerrainPoly@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@1PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    inline int32_t TestBoundTerrainPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phIntersection* arg6,
        class phIntersection* arg7, int32_t arg8, int32_t* arg9, int32_t* arg10, class Vector3 const& arg11, bool arg12)
    {
        return stub<member_func_t<int32_t, phBoundTerrain, class phBoundPolygonal const*, class Matrix34 const*,
            class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phIntersection*,
            class phIntersection*, int32_t, int32_t*, int32_t*, class Vector3 const&, bool>>(
            0x48C8A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    // 0x48C960 | ?TestBoundTerrainEdgesVsPoly@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@PAVphIntersection@@HPAH@Z
    inline int32_t TestBoundTerrainEdgesVsPoly(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
        class Matrix34 const* arg3, class phIntersection* arg4, int32_t arg5, int32_t* arg6)
    {
        return stub<member_func_t<int32_t, phBoundTerrain, class phBoundPolygonal const*, class phColliderBase*,
            class Matrix34 const*, class phIntersection*, int32_t, int32_t*>>(
            0x48C960, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x48CD00 | ?TestBoundPolyTerrain@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@2PAVphIntersection@@HPAHPBVVector3@@_N@Z
    inline int32_t TestBoundPolyTerrain(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
        class Matrix34 const* arg3, class Matrix34 const* arg4, class phIntersection* arg5, int32_t arg6, int32_t* arg7,
        class Vector3 const* arg8, bool arg9)
    {
        return stub<member_func_t<int32_t, phBoundTerrain, class phBoundPolygonal const*, class phColliderBase*,
            class Matrix34 const*, class Matrix34 const*, class phIntersection*, int32_t, int32_t*,
            class Vector3 const*, bool>>(0x48CD00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x48D9C0 | ?InitPolyIterator@phBoundTerrain@@QBEXABVVector3@@M@Z
    inline void InitPolyIterator(class Vector3 const& arg1, float arg2)
    {
        return stub<member_func_t<void, phBoundTerrain, class Vector3 const&, float>>(0x48D9C0, this, arg1, arg2);
    }

    // 0x48DDC0 | ?InitPolyIterator@phBoundTerrain@@QBEXABVphSegment@@@Z
    inline void InitPolyIterator(class phSegment const& arg1)
    {
        return stub<member_func_t<void, phBoundTerrain, class phSegment const&>>(0x48DDC0, this, arg1);
    }

    // 0x48E0C0 | ?ClearPolyTouched@phBoundTerrain@@QBEXXZ
    inline void ClearPolyTouched()
    {
        return stub<member_func_t<void, phBoundTerrain>>(0x48E0C0, this);
    }

    // 0x48E680 | ?CalculateBuckets@phBoundTerrain@@IBEXMMMM@Z
    inline void CalculateBuckets(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, phBoundTerrain, float, float, float, float>>(
            0x48E680, this, arg1, arg2, arg3, arg4);
    }

    // 0x48EF50 | ?FindImpactsSphereToTerrain@phBoundTerrain@@QBEHPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    inline int32_t FindImpactsSphereToTerrain(class phBoundSphere const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
        int32_t arg7, class Vector3 const& arg8, class Vector3 const& arg9)
    {
        return stub<member_func_t<int32_t, phBoundTerrain, class phBoundSphere const*, class Matrix34 const*,
            class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, int32_t,
            class Vector3 const&, class Vector3 const&>>(
            0x48EF50, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x48F440 | ?FindImpactsHotdogToTerrain@phBoundTerrain@@QBEHPBVphBoundHotdog@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    inline int32_t FindImpactsHotdogToTerrain(class phBoundHotdog const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
        int32_t arg7, class Vector3 const& arg8, class Vector3 const& arg9)
    {
        return stub<member_func_t<int32_t, phBoundTerrain, class phBoundHotdog const*, class Matrix34 const*,
            class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, int32_t,
            class Vector3 const&, class Vector3 const&>>(
            0x48F440, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4901F0 | ?PackNormal@phBoundTerrain@@SAXAAIABVVector4@@@Z
    static inline void PackNormal(uint32_t& arg1, class Vector4 const& arg2)
    {
        return stub<cdecl_t<void, uint32_t&, class Vector4 const&>>(0x4901F0, arg1, arg2);
    }

    // 0x490280 | ?UnpackNormal@phBoundTerrain@@SAXAAVVector4@@I@Z
    static inline void UnpackNormal(class Vector4& arg1, uint32_t arg2)
    {
        return stub<cdecl_t<void, class Vector4&, uint32_t>>(0x490280, arg1, arg2);
    }

    // 0x48E200 | ?TestProbePoint@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    inline bool TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, float arg3) override
    {
        return stub<member_func_t<bool, phBoundTerrain, class phSegment&, class phIntersectionPoint*, float>>(
            0x48E200, this, arg1, arg2, arg3);
    }

    // 0x48E100 | ?TestAIPoint@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    inline bool TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2) override
    {
        return stub<member_func_t<bool, phBoundTerrain, class phSegment&, class phIntersectionPoint*>>(
            0x48E100, this, arg1, arg2);
    }

    // 0x48E480 | ?TestEdge@phBoundTerrain@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    inline int32_t TestEdge(class phSegment& arg1, class phIntersection* arg2, int32_t arg3) override
    {
        return stub<member_func_t<int32_t, phBoundTerrain, class phSegment&, class phIntersection*, int32_t>>(
            0x48E480, this, arg1, arg2, arg3);
    }

    // 0x48E310 | ?TestProbe@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    inline bool TestProbe(class phSegment& arg1, class phIntersection* arg2, float arg3) override
    {
        return stub<member_func_t<bool, phBoundTerrain, class phSegment&, class phIntersection*, float>>(
            0x48E310, this, arg1, arg2, arg3);
    }

    // 0x48D790 | ?TestSphere@phBoundTerrain@@UBE_NABVVector3@@MAAV2@1AAM@Z
    inline bool TestSphere(
        class Vector3 const& arg1, float arg2, class Vector3& arg3, class Vector3& arg4, float& arg5) override
    {
        return stub<
            member_func_t<bool, phBoundTerrain, class Vector3 const&, float, class Vector3&, class Vector3&, float&>>(
            0x48D790, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x48C2D0 | ?PostLoadCompute@phBoundTerrain@@UAEXXZ
    inline void PostLoadCompute() override
    {
        return stub<member_func_t<void, phBoundTerrain>>(0x48C2D0, this);
    }
};
