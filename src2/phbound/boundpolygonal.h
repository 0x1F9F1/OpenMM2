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
    phbound:boundpolygonal

    0x487760 | protected: static void __cdecl phBoundPolygonal::BackupDispByPenetration(class Vector3 &,class Vector3 const &,float) | ?BackupDispByPenetration@phBoundPolygonal@@KAXAAVVector3@@ABV2@M@Z
    0x487840 | public: float __thiscall phBoundPolygonal::MaxDot(class Vector3 const &,class Matrix34 const &,class Vector3 &) const | ?MaxDot@phBoundPolygonal@@QBEMABVVector3@@ABVMatrix34@@AAV2@@Z
    0x487910 | public: float __thiscall phBoundPolygonal::MinDot(class Vector3 const &,class Matrix34 const &,class Vector3 &) const | ?MinDot@phBoundPolygonal@@QBEMABVVector3@@ABVMatrix34@@AAV2@@Z
    0x487950 | public: virtual void __thiscall phBoundPolygonal::CenterBound(void) | ?CenterBound@phBoundPolygonal@@UAEXXZ
    public: virtual void __thiscall phBoundPolygonal::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundPolygonal@@UBEXABVVector3@@@Z
    0x4879A0 | public: virtual bool __thiscall phBoundPolygonal::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBoundPolygonal@@UBE_NABVVector3@@MAAV2@1AAM@Z
    0x4879D0 | public: int __thiscall phBoundPolygonal::FindImpactsSphereToPoly(class phBoundSphere const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsSphereToPoly@phBoundPolygonal@@QBEHPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    0x487DF0 | public: virtual int __thiscall phBoundPolygonal::TestBoundPolyPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,int,int *,int *,class Vector3 const &,bool) const | ?TestBoundPolyPoly@phBoundPolygonal@@UBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    0x487F00 | public: virtual int __thiscall phBoundPolygonal::TestBoundPolyPolyUseDot(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int,int *,float,class Vector3 const *,bool) const | ?TestBoundPolyPolyUseDot@phBoundPolygonal@@UBEHPBV1@PAVphColliderBase@@PBVMatrix34@@222PAVphIntersection@@HPAHMPBVVector3@@_N@Z
    0x488250 | public: void __thiscall phBoundPolygonal::RewindSegments(bool,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 *,class Matrix34 *,int &,int &) const | ?RewindSegments@phBoundPolygonal@@QBEX_NPBVMatrix34@@111PAV2@2AAH3@Z
    0x4882C0 | public: void __thiscall phBoundPolygonal::RewindSegments(bool,class Matrix34 const *,class Matrix34 const *,class Matrix34 *,class Matrix34 *,int &,int &) const | ?RewindSegments@phBoundPolygonal@@QBEX_NPBVMatrix34@@1PAV2@2AAH3@Z
    0x488310 | public: int __thiscall phBoundPolygonal::GetNextSegment(class phSegment &,long *,class Matrix34 const *,class Matrix34 const *,int &,int &) const | ?GetNextSegment@phBoundPolygonal@@QBEHAAVphSegment@@PAJPBVMatrix34@@2AAH3@Z
    0x488500 | public: int __thiscall phBoundPolygonal::GetNextSegment(class phSegment &,long *,class Matrix34 const *,class Matrix34 const *,float,class Vector3 const *,unsigned char *,class Vector3 *,int &,int &) const | ?GetNextSegment@phBoundPolygonal@@QBEHAAVphSegment@@PAJPBVMatrix34@@2MPBVVector3@@PAEPAV4@AAH6@Z
    0x488770 | public: static void __cdecl phBoundPolygonal::BackupAbyPenetration(class phSegment &) | ?BackupAbyPenetration@phBoundPolygonal@@SAXAAVphSegment@@@Z
    0x488850 | protected: static void __cdecl phBoundPolygonal::MakeBsInside(class phIntersection *,int) | ?MakeBsInside@phBoundPolygonal@@KAXPAVphIntersection@@H@Z
    0x488960 | protected: static void __cdecl phBoundPolygonal::CheckSaveEdgeEdge(class phIntersection *,int,bool,bool,class Vector3 const &,class Vector3 const &,class Vector3 const &,float,float,bool,float,float) | ?CheckSaveEdgeEdge@phBoundPolygonal@@KAXPAVphIntersection@@H_N1ABVVector3@@22MM1MM@Z
    0x488B00 | protected: static bool __cdecl phBoundPolygonal::GetCollideEdgePoly(class phIntersection const *,class Vector3 const &,class Matrix34 const &,class Matrix34 const &,class Vector3 const &,class Vector3 *,class Vector3 *,float *,int *,bool *) | ?GetCollideEdgePoly@phBoundPolygonal@@KA_NPBVphIntersection@@ABVVector3@@ABVMatrix34@@21PAV3@3PAMPAHPA_N@Z
    0x4891D0 | protected: int __thiscall phBoundPolygonal::AddInteriorEdges(class phIntersection *,int,class phIntersection *,int,int) const | ?AddInteriorEdges@phBoundPolygonal@@IBEHPAVphIntersection@@H0HH@Z
    0x489460 | protected: static void __cdecl phBoundPolygonal::GetNextEdgeIsect(int &,class phIntersection * &,bool) | ?GetNextEdgeIsect@phBoundPolygonal@@KAXAAHAAPAVphIntersection@@_N@Z
    0x489490 | protected: static void __cdecl phBoundPolygonal::DoEndPtSearch(class phBound const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,int,class phIntersection *,int,class phImpactBase * *,int &,bool) | ?DoEndPtSearch@phBoundPolygonal@@KAXPBVphBound@@PBVMatrix34@@111PAVphColliderBase@@2HPAVphIntersection@@HPAPAVphImpactBase@@AAH_N@Z
    0x489C30 | protected: static void __cdecl phBoundPolygonal::RetryVertPolyCollide(class phBound const *,class phColliderBase *,class phColliderBase *,class phIntersection *,int,class phImpactBase * *,int *,bool) | ?RetryVertPolyCollide@phBoundPolygonal@@KAXPBVphBound@@PAVphColliderBase@@1PAVphIntersection@@HPAPAVphImpactBase@@PAH_N@Z
    0x489DD0 | public: int __thiscall phBoundPolygonal::FindImpactsPolyToPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,class phImpactBase *,int,int,int *,int *) const | ?FindImpactsPolyToPoly@phBoundPolygonal@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3PAVphImpactBase@@HHPAH5@Z
    0x48A0C0 | protected: int __thiscall phBoundPolygonal::FindImpacts(class phBound const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,int,int,class phImpactBase *,int) const | ?FindImpacts@phBoundPolygonal@@IBEHPBVphBound@@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3HHPAVphImpactBase@@H@Z
    0x48B230 | protected: static void __cdecl phBoundPolygonal::ResetVertNeedsH(class phIntersection *,class phIntersection *,bool,bool) | ?ResetVertNeedsH@phBoundPolygonal@@KAXPAVphIntersection@@0_N1@Z
    0x48B270 | protected: static void __cdecl phBoundPolygonal::ResetVertNeedsH(class phIntersection *,class phIntersection *,bool,bool,float) | ?ResetVertNeedsH@phBoundPolygonal@@KAXPAVphIntersection@@0_N1M@Z
    0x48B300 | public: virtual bool __thiscall phBoundPolygonal::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x48B370 | public: virtual bool __thiscall phBoundPolygonal::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x48B3E0 | public: virtual bool __thiscall phBoundPolygonal::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x48B450 | public: virtual int __thiscall phBoundPolygonal::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundPolygonal@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x48B590 | public: void __thiscall phBoundPolygonal::GetAllSegments(float,struct phBoundPolygonal::DispSegment *,struct phBoundPolygonal::Segment *,class Matrix34 const &,class Matrix34 const &,float,class Vector3 const &,unsigned char *,class Vector4 *,int &,int &) const | ?GetAllSegments@phBoundPolygonal@@QBEXMPAUDispSegment@1@PAUSegment@1@ABVMatrix34@@2MABVVector3@@PAEPAVVector4@@AAH6@Z
    0x48B7A0 | public: virtual int __thiscall phBoundPolygonal::TestBoundPolyPolyUseDotSmall(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int *,float,class Vector3 const &,bool) const | ?TestBoundPolyPolyUseDotSmall@phBoundPolygonal@@UBEHPBV1@PAVphColliderBase@@PBVMatrix34@@222PAVphIntersection@@PAHMABVVector3@@_N@Z
    protected: static float const phBoundPolygonal::COSINEFACTOR | ?COSINEFACTOR@phBoundPolygonal@@1MB
    protected: static float phBoundPolygonal::ImpactPenetration | ?ImpactPenetration@phBoundPolygonal@@1MA
*/

class phBoundPolygonal : phBound
{
public:
    // phBoundPolygonal::`vftable' @ 0x5B2158

    // 0x487760 | ?BackupDispByPenetration@phBoundPolygonal@@KAXAAVVector3@@ABV2@M@Z
    static inline void BackupDispByPenetration(class Vector3& arg1, class Vector3 const& arg2, f32 arg3)
    {
        return stub<cdecl_t<void, class Vector3&, class Vector3 const&, f32>>(0x487760, arg1, arg2, arg3);
    }

    // 0x487840 | ?MaxDot@phBoundPolygonal@@QBEMABVVector3@@ABVMatrix34@@AAV2@@Z
    inline f32 MaxDot(class Vector3 const& arg1, class Matrix34 const& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<f32, phBoundPolygonal, class Vector3 const&, class Matrix34 const&, class Vector3&>>(
            0x487840, this, arg1, arg2, arg3);
    }

    // 0x487910 | ?MinDot@phBoundPolygonal@@QBEMABVVector3@@ABVMatrix34@@AAV2@@Z
    inline f32 MinDot(class Vector3 const& arg1, class Matrix34 const& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<f32, phBoundPolygonal, class Vector3 const&, class Matrix34 const&, class Vector3&>>(
            0x487910, this, arg1, arg2, arg3);
    }

    // 0x4879D0 | ?FindImpactsSphereToPoly@phBoundPolygonal@@QBEHPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    inline i32 FindImpactsSphereToPoly(class phBoundSphere const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
        i32 arg7, class Vector3 const& arg8, class Vector3 const& arg9)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phBoundSphere const*, class Matrix34 const*,
            class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32,
            class Vector3 const&, class Vector3 const&>>(
            0x4879D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x488250 | ?RewindSegments@phBoundPolygonal@@QBEX_NPBVMatrix34@@111PAV2@2AAH3@Z
    inline void RewindSegments(bool arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34* arg6, class Matrix34* arg7, i32& arg8,
        i32& arg9)
    {
        return stub<member_func_t<void, phBoundPolygonal, bool, class Matrix34 const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34*, class Matrix34*, i32&, i32&>>(
            0x488250, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4882C0 | ?RewindSegments@phBoundPolygonal@@QBEX_NPBVMatrix34@@1PAV2@2AAH3@Z
    inline void RewindSegments(bool arg1, class Matrix34 const* arg2, class Matrix34 const* arg3, class Matrix34* arg4,
        class Matrix34* arg5, i32& arg6, i32& arg7)
    {
        return stub<member_func_t<void, phBoundPolygonal, bool, class Matrix34 const*, class Matrix34 const*,
            class Matrix34*, class Matrix34*, i32&, i32&>>(0x4882C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x488310 | ?GetNextSegment@phBoundPolygonal@@QBEHAAVphSegment@@PAJPBVMatrix34@@2AAH3@Z
    inline i32 GetNextSegment(
        class phSegment& arg1, i32* arg2, class Matrix34 const* arg3, class Matrix34 const* arg4, i32& arg5, i32& arg6)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phSegment&, i32*, class Matrix34 const*,
            class Matrix34 const*, i32&, i32&>>(0x488310, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x488500 | ?GetNextSegment@phBoundPolygonal@@QBEHAAVphSegment@@PAJPBVMatrix34@@2MPBVVector3@@PAEPAV4@AAH6@Z
    inline i32 GetNextSegment(class phSegment& arg1, i32* arg2, class Matrix34 const* arg3, class Matrix34 const* arg4,
        f32 arg5, class Vector3 const* arg6, u8* arg7, class Vector3* arg8, i32& arg9, i32& arg10)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phSegment&, i32*, class Matrix34 const*,
            class Matrix34 const*, f32, class Vector3 const*, u8*, class Vector3*, i32&, i32&>>(
            0x488500, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x488770 | ?BackupAbyPenetration@phBoundPolygonal@@SAXAAVphSegment@@@Z
    static inline void BackupAbyPenetration(class phSegment& arg1)
    {
        return stub<cdecl_t<void, class phSegment&>>(0x488770, arg1);
    }

    // 0x488850 | ?MakeBsInside@phBoundPolygonal@@KAXPAVphIntersection@@H@Z
    static inline void MakeBsInside(class phIntersection* arg1, i32 arg2)
    {
        return stub<cdecl_t<void, class phIntersection*, i32>>(0x488850, arg1, arg2);
    }

    // 0x488960 | ?CheckSaveEdgeEdge@phBoundPolygonal@@KAXPAVphIntersection@@H_N1ABVVector3@@22MM1MM@Z
    static inline void CheckSaveEdgeEdge(class phIntersection* arg1, i32 arg2, bool arg3, bool arg4,
        class Vector3 const& arg5, class Vector3 const& arg6, class Vector3 const& arg7, f32 arg8, f32 arg9, bool arg10,
        f32 arg11, f32 arg12)
    {
        return stub<cdecl_t<void, class phIntersection*, i32, bool, bool, class Vector3 const&, class Vector3 const&,
            class Vector3 const&, f32, f32, bool, f32, f32>>(
            0x488960, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    // 0x488B00 | ?GetCollideEdgePoly@phBoundPolygonal@@KA_NPBVphIntersection@@ABVVector3@@ABVMatrix34@@21PAV3@3PAMPAHPA_N@Z
    static inline bool GetCollideEdgePoly(class phIntersection const* arg1, class Vector3 const& arg2,
        class Matrix34 const& arg3, class Matrix34 const& arg4, class Vector3 const& arg5, class Vector3* arg6,
        class Vector3* arg7, f32* arg8, i32* arg9, bool* arg10)
    {
        return stub<cdecl_t<bool, class phIntersection const*, class Vector3 const&, class Matrix34 const&,
            class Matrix34 const&, class Vector3 const&, class Vector3*, class Vector3*, f32*, i32*, bool*>>(
            0x488B00, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4891D0 | ?AddInteriorEdges@phBoundPolygonal@@IBEHPAVphIntersection@@H0HH@Z
    inline i32 AddInteriorEdges(class phIntersection* arg1, i32 arg2, class phIntersection* arg3, i32 arg4, i32 arg5)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phIntersection*, i32, class phIntersection*, i32, i32>>(
            0x4891D0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x489460 | ?GetNextEdgeIsect@phBoundPolygonal@@KAXAAHAAPAVphIntersection@@_N@Z
    static inline void GetNextEdgeIsect(i32& arg1, class phIntersection*& arg2, bool arg3)
    {
        return stub<cdecl_t<void, i32&, class phIntersection*&, bool>>(0x489460, arg1, arg2, arg3);
    }

    // 0x489490 | ?DoEndPtSearch@phBoundPolygonal@@KAXPBVphBound@@PBVMatrix34@@111PAVphColliderBase@@2HPAVphIntersection@@HPAPAVphImpactBase@@AAH_N@Z
    static inline void DoEndPtSearch(class phBound const* arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6, class phColliderBase* arg7,
        i32 arg8, class phIntersection* arg9, i32 arg10, class phImpactBase** arg11, i32& arg12, bool arg13)
    {
        return stub<cdecl_t<void, class phBound const*, class Matrix34 const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*, i32,
            class phIntersection*, i32, class phImpactBase**, i32&, bool>>(
            0x489490, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x489C30 | ?RetryVertPolyCollide@phBoundPolygonal@@KAXPBVphBound@@PAVphColliderBase@@1PAVphIntersection@@HPAPAVphImpactBase@@PAH_N@Z
    static inline void RetryVertPolyCollide(class phBound const* arg1, class phColliderBase* arg2,
        class phColliderBase* arg3, class phIntersection* arg4, i32 arg5, class phImpactBase** arg6, i32* arg7,
        bool arg8)
    {
        return stub<cdecl_t<void, class phBound const*, class phColliderBase*, class phColliderBase*,
            class phIntersection*, i32, class phImpactBase**, i32*, bool>>(
            0x489C30, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x489DD0 | ?FindImpactsPolyToPoly@phBoundPolygonal@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3PAVphImpactBase@@HHPAH5@Z
    inline i32 FindImpactsPolyToPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6,
        class phColliderBase* arg7, class phIntersection* arg8, class phIntersection* arg9, class phImpactBase* arg10,
        i32 arg11, i32 arg12, i32* arg13, i32* arg14)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phBoundPolygonal const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class phColliderBase*,
            class phColliderBase*, class phIntersection*, class phIntersection*, class phImpactBase*, i32, i32, i32*,
            i32*>>(
            0x489DD0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }

    // 0x48A0C0 | ?FindImpacts@phBoundPolygonal@@IBEHPBVphBound@@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3HHPAVphImpactBase@@H@Z
    inline i32 FindImpacts(class phBound const* arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6, class phColliderBase* arg7,
        class phIntersection* arg8, class phIntersection* arg9, i32 arg10, i32 arg11, class phImpactBase* arg12,
        i32 arg13)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phBound const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class phColliderBase*,
            class phColliderBase*, class phIntersection*, class phIntersection*, i32, i32, class phImpactBase*, i32>>(
            0x48A0C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x48B230 | ?ResetVertNeedsH@phBoundPolygonal@@KAXPAVphIntersection@@0_N1@Z
    static inline void ResetVertNeedsH(class phIntersection* arg1, class phIntersection* arg2, bool arg3, bool arg4)
    {
        return stub<cdecl_t<void, class phIntersection*, class phIntersection*, bool, bool>>(
            0x48B230, arg1, arg2, arg3, arg4);
    }

    // 0x48B270 | ?ResetVertNeedsH@phBoundPolygonal@@KAXPAVphIntersection@@0_N1M@Z
    static inline void ResetVertNeedsH(
        class phIntersection* arg1, class phIntersection* arg2, bool arg3, bool arg4, f32 arg5)
    {
        return stub<cdecl_t<void, class phIntersection*, class phIntersection*, bool, bool, f32>>(
            0x48B270, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x48B590 | ?GetAllSegments@phBoundPolygonal@@QBEXMPAUDispSegment@1@PAUSegment@1@ABVMatrix34@@2MABVVector3@@PAEPAVVector4@@AAH6@Z
    inline void GetAllSegments(f32 arg1, struct phBoundPolygonal::DispSegment* arg2,
        struct phBoundPolygonal::Segment* arg3, class Matrix34 const& arg4, class Matrix34 const& arg5, f32 arg6,
        class Vector3 const& arg7, u8* arg8, class Vector4* arg9, i32& arg10, i32& arg11)
    {
        return stub<member_func_t<void, phBoundPolygonal, f32, struct phBoundPolygonal::DispSegment*,
            struct phBoundPolygonal::Segment*, class Matrix34 const&, class Matrix34 const&, f32, class Vector3 const&,
            u8*, class Vector4*, i32&, i32&>>(
            0x48B590, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x487950 | ?CenterBound@phBoundPolygonal@@UAEXXZ
    inline void CenterBound() override
    {
        return stub<member_func_t<void, phBoundPolygonal>>(0x487950, this);
    }

    // 0x48B300 | ?TestProbePoint@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    inline bool TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3) override
    {
        return stub<member_func_t<bool, phBoundPolygonal, class phSegment&, class phIntersectionPoint*, f32>>(
            0x48B300, this, arg1, arg2, arg3);
    }

    // 0x48B370 | ?TestAIPoint@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    inline bool TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2) override
    {
        return stub<member_func_t<bool, phBoundPolygonal, class phSegment&, class phIntersectionPoint*>>(
            0x48B370, this, arg1, arg2);
    }

    // 0x48B450 | ?TestEdge@phBoundPolygonal@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    inline i32 TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3) override
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phSegment&, class phIntersection*, i32>>(
            0x48B450, this, arg1, arg2, arg3);
    }

    // 0x48B3E0 | ?TestProbe@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    inline bool TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3) override
    {
        return stub<member_func_t<bool, phBoundPolygonal, class phSegment&, class phIntersection*, f32>>(
            0x48B3E0, this, arg1, arg2, arg3);
    }

    // 0x4879A0 | ?TestSphere@phBoundPolygonal@@UBE_NABVVector3@@MAAV2@1AAM@Z
    inline bool TestSphere(
        class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5) override
    {
        return stub<
            member_func_t<bool, phBoundPolygonal, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
            0x4879A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x46A5A0 | ?GetVertex@phBoundPolygonal@@UBEABVVector3@@H@Z
    inline class Vector3 const& GetVertex(i32 arg1) override
    {
        return stub<member_func_t<class Vector3 const&, phBoundPolygonal, i32>>(0x46A5A0, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline f32 GetEdgeCosine(i32 arg1)
    {
        return stub<member_func_t<f32, phBoundPolygonal, i32>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline class Vector3 const& GetEdgeNormal(i32 arg1, class Vector3& arg2)
    {
        return stub<member_func_t<class Vector3 const&, phBoundPolygonal, i32, class Vector3&>>(
            0x582519, this, arg1, arg2);
    }

    // 0x487DF0 | ?TestBoundPolyPoly@phBoundPolygonal@@UBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    virtual inline i32 TestBoundPolyPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6,
        class phColliderBase* arg7, class phIntersection* arg8, class phIntersection* arg9, i32 arg10, i32* arg11,
        i32* arg12, class Vector3 const& arg13, bool arg14)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phBoundPolygonal const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class phColliderBase*,
            class phColliderBase*, class phIntersection*, class phIntersection*, i32, i32*, i32*, class Vector3 const&,
            bool>>(
            0x487DF0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }

    // 0x487F00 | ?TestBoundPolyPolyUseDot@phBoundPolygonal@@UBEHPBV1@PAVphColliderBase@@PBVMatrix34@@222PAVphIntersection@@HPAHMPBVVector3@@_N@Z
    virtual inline i32 TestBoundPolyPolyUseDot(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
        class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6,
        class phIntersection* arg7, i32 arg8, i32* arg9, f32 arg10, class Vector3 const* arg11, bool arg12)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phBoundPolygonal const*, class phColliderBase*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
            class phIntersection*, i32, i32*, f32, class Vector3 const*, bool>>(
            0x487F00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    // 0x48B7A0 | ?TestBoundPolyPolyUseDotSmall@phBoundPolygonal@@UBEHPBV1@PAVphColliderBase@@PBVMatrix34@@222PAVphIntersection@@PAHMABVVector3@@_N@Z
    virtual inline i32 TestBoundPolyPolyUseDotSmall(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
        class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6,
        class phIntersection* arg7, i32* arg8, f32 arg9, class Vector3 const& arg10, bool arg11)
    {
        return stub<member_func_t<i32, phBoundPolygonal, class phBoundPolygonal const*, class phColliderBase*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
            class phIntersection*, i32*, f32, class Vector3 const&, bool>>(
            0x48B7A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
};
