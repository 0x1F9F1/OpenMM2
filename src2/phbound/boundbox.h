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
    phbound:boundbox

    0x479ED0 | public: __thiscall phBoundBox::phBoundBox(void) | ??0phBoundBox@@QAE@XZ
    0x47A020 | public: __thiscall phBoundBox::phBoundBox(class Vector3 const &) | ??0phBoundBox@@QAE@ABVVector3@@@Z
    0x47A160 | public: __thiscall phBoundBox::~phBoundBox(void) | ??1phBoundBox@@QAE@XZ
    0x47A180 | public: virtual class phMaterial const * __thiscall phBoundBox::GetMaterial(int) const | ?GetMaterial@phBoundBox@@UBEPBVphMaterial@@H@Z
    0x47A1A0 | public: void __thiscall phBoundBox::SetSize(class Vector3 const &) | ?SetSize@phBoundBox@@QAEXABVVector3@@@Z
    0x47A240 | public: void __thiscall phBoundBox::CreateOffset(class Vector3 const &) | ?CreateOffset@phBoundBox@@QAEXABVVector3@@@Z
    0x47A270 | public: void __thiscall phBoundBox::ShiftCentroid(class Vector3 const &) | ?ShiftCentroid@phBoundBox@@QAEXABVVector3@@@Z
    0x47A2B0 | public: void __thiscall phBoundBox::ScaleSize(class Vector3 const &) | ?ScaleSize@phBoundBox@@QAEXABVVector3@@@Z
    0x47A300 | public: void __thiscall phBoundBox::SetQuickTestInfo(void) | ?SetQuickTestInfo@phBoundBox@@QAEXXZ
    0x47A3A0 | public: bool __thiscall phBoundBox::Load(char const *) | ?Load@phBoundBox@@QAE_NPBD@Z
    0x47A6B0 | public: virtual class Vector3 const & __thiscall phBoundBox::GetEdgeNormal(int,class Vector3 &) const | ?GetEdgeNormal@phBoundBox@@UBEABVVector3@@HAAV2@@Z
    0x47A6D0 | public: int __thiscall phBoundBox::FindImpactSphereToBox(class phBoundSphere const *,class Matrix34 const &,class Matrix34 const &,class phColliderBase *,class phColliderBase *,class phImpactBase *,class Vector3 const &,class Vector3 const &) const | ?FindImpactSphereToBox@phBoundBox@@QBEHPBVphBoundSphere@@ABVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@4@Z
    0x47AFE0 | public: int __thiscall phBoundBox::FindImpactsBoxToBox(class phBoundBox const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &) const | ?FindImpactsBoxToBox@phBoundBox@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@@Z
    0x47BA90 | public: int __thiscall phBoundBox::FindImpactsBoxToBoxOffset(class phBoundBox const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &) const | ?FindImpactsBoxToBoxOffset@phBoundBox@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@@Z
    0x47C5D0 | private: static void __cdecl phBoundBox::AddEdgeChecks(int,int,bool) | ?AddEdgeChecks@phBoundBox@@CAXHH_N@Z
    0x47C690 | private: static void __cdecl phBoundBox::AvoidEdgeChecks(int,int,bool) | ?AvoidEdgeChecks@phBoundBox@@CAXHH_N@Z
    0x47C710 | private: static void __cdecl phBoundBox::AvoidEdgeChecks(int,int) | ?AvoidEdgeChecks@phBoundBox@@CAXHH@Z
    0x47C790 | private: static void __cdecl phBoundBox::MakeTransformedCorners(class Vector3 const &,class Vector3 const &,bool) | ?MakeTransformedCorners@phBoundBox@@CAXABVVector3@@0_N@Z
    0x47CAA0 | private: static void __cdecl phBoundBox::FindFaceDots(float,int *,int *) | ?FindFaceDots@phBoundBox@@CAXMPAH0@Z
    0x47CB50 | private: static void __cdecl phBoundBox::RemoveFaceDotZero(void) | ?RemoveFaceDotZero@phBoundBox@@CAXXZ
    0x47CBD0 | private: static bool __cdecl phBoundBox::CheckFourFaceDotPattern(void) | ?CheckFourFaceDotPattern@phBoundBox@@CA_NXZ
    0x47CC30 | private: static bool __cdecl phBoundBox::VerifyFaceDotPattern(void) | ?VerifyFaceDotPattern@phBoundBox@@CA_NXZ
    0x47CC80 | private: static void __cdecl phBoundBox::RemoveFifthFaceDotZero(void) | ?RemoveFifthFaceDotZero@phBoundBox@@CAXXZ
    0x47CD30 | private: static bool __cdecl phBoundBox::UseThisImpact(class Vector3 const &,class Vector3 const &,float,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *) | ?UseThisImpact@phBoundBox@@CA_NABVVector3@@0MPBVMatrix34@@111@Z
    0x47CE40 | private: static void __cdecl phBoundBox::BoxToBoxFaceImpactsOffset(class Vector3 const &,class Vector3 const &,class Vector3 const &,class phImpactBase *,int,bool,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *) | ?BoxToBoxFaceImpactsOffset@phBoundBox@@CAXABVVector3@@00PAVphImpactBase@@H_NPBVMatrix34@@333PAVphColliderBase@@4@Z
    0x47E4A0 | protected: void __thiscall phBoundBox::BoxToBoxFaceImpacts(class Vector3 const &,class phImpactBase *,int,bool,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *) const | ?BoxToBoxFaceImpacts@phBoundBox@@IBEXABVVector3@@PAVphImpactBase@@H_NPBVMatrix34@@333PAVphColliderBase@@4@Z
    0x47F9B0 | public: virtual int __thiscall phBoundBox::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundBox@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x480010 | public: virtual bool __thiscall phBoundBox::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x480060 | public: virtual bool __thiscall phBoundBox::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x480080 | public: virtual bool __thiscall phBoundBox::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x4800A0 | protected: bool __thiscall phBoundBox::TestProbeSlave(class phSegment &,class phIntersectionPoint *,long *,float) const | ?TestProbeSlave@phBoundBox@@IBE_NAAVphSegment@@PAVphIntersectionPoint@@PAJM@Z
    0x4805B0 | public: static bool __cdecl phBoundBox::ProbeVsBox(class Vector3 const &,class phSegment &,class phIntersectionPoint *,long *,float) | ?ProbeVsBox@phBoundBox@@SA_NABVVector3@@AAVphSegment@@PAVphIntersectionPoint@@PAJM@Z
    0x480AC0 | public: void __thiscall Vector3::Negate(class Vector3 const &) | ?Negate@Vector3@@QAEXABV1@@Z
    0x5B1F00 | public: static int const (* phBoundBox::EdgeFromFace)[4] | ?EdgeFromFace@phBoundBox@@2QAY03$$CBHA
    public: static int const (* phBoundBox::FaceFromEdge)[2] | ?FaceFromEdge@phBoundBox@@2QAY01$$CBHA
    public: static int const (* phBoundBox::EdgeFromCorner)[3] | ?EdgeFromCorner@phBoundBox@@2QAY02$$CBHA
    public: static int const (* phBoundBox::CornerFromEdge)[2] | ?CornerFromEdge@phBoundBox@@2QAY01$$CBHA
    public: static int const (* phBoundBox::CornerFromFace)[4] | ?CornerFromFace@phBoundBox@@2QAY03$$CBHA
    public: static int const * const phBoundBox::CornerFromEdgeDotFlag | ?CornerFromEdgeDotFlag@phBoundBox@@2QBHB
    0x5B2100 | const phBoundBox::`vftable' | ??_7phBoundBox@@6B@
    0x5B2158 | const phBoundPolygonal::`vftable' | ??_7phBoundPolygonal@@6B@
    private: static class Vector3 * phBoundBox::TrandFaceNormals | ?TrandFaceNormals@phBoundBox@@0PAVVector3@@A
    private: static float phBoundBox::BestTime | ?BestTime@phBoundBox@@0MA
    private: static int phBoundBox::NumImpacts | ?NumImpacts@phBoundBox@@0HA
    public: static class Vector3 const * const phBoundBox::CornerNormals | ?CornerNormals@phBoundBox@@2QBVVector3@@B
    private: static int (* phBoundBox::FaceDotsExact)[3] | ?FaceDotsExact@phBoundBox@@0PAY02HA
    private: static float phBoundBox::BestDepth | ?BestDepth@phBoundBox@@0MA
    private: static int (* phBoundBox::FaceDots)[3] | ?FaceDots@phBoundBox@@0PAY02HA
    private: static class Vector3 * phBoundBox::Corners | ?Corners@phBoundBox@@0PAVVector3@@A
    public: static class phHotEdge const * const phBoundBox::BoxEdges | ?BoxEdges@phBoundBox@@2QBVphHotEdge@@B
    public: static class Vector3 const * const phBoundBox::UnitCorners | ?UnitCorners@phBoundBox@@2QBVVector3@@B
    0x6611B0 | public: static class Vector3 const * const phBoundBox::EdgeNormals | ?EdgeNormals@phBoundBox@@2QBVVector3@@B
    public: static class Vector3 const * const phBoundBox::FaceNormals | ?FaceNormals@phBoundBox@@2QBVVector3@@B
    0x661288 | private: static char (* phBoundBox::EdgeChecks)[12] | ?EdgeChecks@phBoundBox@@0PAY0M@DA
    private: static float phBoundBox::MaxTime | ?MaxTime@phBoundBox@@0MA
    private: static float (* phBoundBox::FaceDotFloats)[3] | ?FaceDotFloats@phBoundBox@@0PAY02MA
*/

class phBoundBox : phBoundPolygonal
{
public:
    // phBoundBox::`vftable' @ 0x5B2100

    // 0x479ED0 | ??0phBoundBox@@QAE@XZ
    phBoundBox()
    {
        stub<member_func_t<void, phBoundBox>>(0x479ED0, this);
    }

    // 0x47A020 | ??0phBoundBox@@QAE@ABVVector3@@@Z
    phBoundBox(class Vector3 const& arg1)
    {
        stub<member_func_t<void, phBoundBox, class Vector3 const&>>(0x47A020, this, arg1);
    }

    // 0x47A160 | ??1phBoundBox@@QAE@XZ
    ~phBoundBox()
    {
        stub<member_func_t<void, phBoundBox>>(0x47A160, this);
    }

    // 0x47A1A0 | ?SetSize@phBoundBox@@QAEXABVVector3@@@Z
    void SetSize(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundBox, class Vector3 const&>>(0x47A1A0, this, arg1);
    }

    // 0x47A240 | ?CreateOffset@phBoundBox@@QAEXABVVector3@@@Z
    void CreateOffset(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundBox, class Vector3 const&>>(0x47A240, this, arg1);
    }

    // 0x47A270 | ?ShiftCentroid@phBoundBox@@QAEXABVVector3@@@Z
    void ShiftCentroid(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundBox, class Vector3 const&>>(0x47A270, this, arg1);
    }

    // 0x47A2B0 | ?ScaleSize@phBoundBox@@QAEXABVVector3@@@Z
    void ScaleSize(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundBox, class Vector3 const&>>(0x47A2B0, this, arg1);
    }

    // 0x47A300 | ?SetQuickTestInfo@phBoundBox@@QAEXXZ
    void SetQuickTestInfo()
    {
        return stub<member_func_t<void, phBoundBox>>(0x47A300, this);
    }

    // 0x47A3A0 | ?Load@phBoundBox@@QAE_NPBD@Z
    bool Load(char const* arg1)
    {
        return stub<member_func_t<bool, phBoundBox, char const*>>(0x47A3A0, this, arg1);
    }

    // 0x47A6D0 | ?FindImpactSphereToBox@phBoundBox@@QBEHPBVphBoundSphere@@ABVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@4@Z
    i32 FindImpactSphereToBox(class phBoundSphere const* arg1, class Matrix34 const& arg2, class Matrix34 const& arg3,
        class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6, class Vector3 const& arg7,
        class Vector3 const& arg8)
    {
        return stub<member_func_t<i32, phBoundBox, class phBoundSphere const*, class Matrix34 const&,
            class Matrix34 const&, class phColliderBase*, class phColliderBase*, class phImpactBase*,
            class Vector3 const&, class Vector3 const&>>(
            0x47A6D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x47AFE0 | ?FindImpactsBoxToBox@phBoundBox@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@@Z
    i32 FindImpactsBoxToBox(class phBoundBox const* arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6, class phColliderBase* arg7,
        class phImpactBase* arg8, i32 arg9, class Vector3 const& arg10)
    {
        return stub<member_func_t<i32, phBoundBox, class phBoundBox const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class phColliderBase*,
            class phColliderBase*, class phImpactBase*, i32, class Vector3 const&>>(
            0x47AFE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x47BA90 | ?FindImpactsBoxToBoxOffset@phBoundBox@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@@Z
    i32 FindImpactsBoxToBoxOffset(class phBoundBox const* arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6, class phColliderBase* arg7,
        class phImpactBase* arg8, i32 arg9, class Vector3 const& arg10)
    {
        return stub<member_func_t<i32, phBoundBox, class phBoundBox const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class phColliderBase*,
            class phColliderBase*, class phImpactBase*, i32, class Vector3 const&>>(
            0x47BA90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x47C5D0 | ?AddEdgeChecks@phBoundBox@@CAXHH_N@Z
    static inline void AddEdgeChecks(i32 arg1, i32 arg2, bool arg3)
    {
        return stub<cdecl_t<void, i32, i32, bool>>(0x47C5D0, arg1, arg2, arg3);
    }

    // 0x47C690 | ?AvoidEdgeChecks@phBoundBox@@CAXHH_N@Z
    static inline void AvoidEdgeChecks(i32 arg1, i32 arg2, bool arg3)
    {
        return stub<cdecl_t<void, i32, i32, bool>>(0x47C690, arg1, arg2, arg3);
    }

    // 0x47C710 | ?AvoidEdgeChecks@phBoundBox@@CAXHH@Z
    static inline void AvoidEdgeChecks(i32 arg1, i32 arg2)
    {
        return stub<cdecl_t<void, i32, i32>>(0x47C710, arg1, arg2);
    }

    // 0x47C790 | ?MakeTransformedCorners@phBoundBox@@CAXABVVector3@@0_N@Z
    static inline void MakeTransformedCorners(class Vector3 const& arg1, class Vector3 const& arg2, bool arg3)
    {
        return stub<cdecl_t<void, class Vector3 const&, class Vector3 const&, bool>>(0x47C790, arg1, arg2, arg3);
    }

    // 0x47CAA0 | ?FindFaceDots@phBoundBox@@CAXMPAH0@Z
    static inline void FindFaceDots(f32 arg1, i32* arg2, i32* arg3)
    {
        return stub<cdecl_t<void, f32, i32*, i32*>>(0x47CAA0, arg1, arg2, arg3);
    }

    // 0x47CB50 | ?RemoveFaceDotZero@phBoundBox@@CAXXZ
    static inline void RemoveFaceDotZero()
    {
        return stub<cdecl_t<void>>(0x47CB50);
    }

    // 0x47CBD0 | ?CheckFourFaceDotPattern@phBoundBox@@CA_NXZ
    static inline bool CheckFourFaceDotPattern()
    {
        return stub<cdecl_t<bool>>(0x47CBD0);
    }

    // 0x47CC30 | ?VerifyFaceDotPattern@phBoundBox@@CA_NXZ
    static inline bool VerifyFaceDotPattern()
    {
        return stub<cdecl_t<bool>>(0x47CC30);
    }

    // 0x47CC80 | ?RemoveFifthFaceDotZero@phBoundBox@@CAXXZ
    static inline void RemoveFifthFaceDotZero()
    {
        return stub<cdecl_t<void>>(0x47CC80);
    }

    // 0x47CD30 | ?UseThisImpact@phBoundBox@@CA_NABVVector3@@0MPBVMatrix34@@111@Z
    static inline bool UseThisImpact(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6, class Matrix34 const* arg7)
    {
        return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, f32, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*>>(
            0x47CD30, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x47CE40 | ?BoxToBoxFaceImpactsOffset@phBoundBox@@CAXABVVector3@@00PAVphImpactBase@@H_NPBVMatrix34@@333PAVphColliderBase@@4@Z
    static inline void BoxToBoxFaceImpactsOffset(class Vector3 const& arg1, class Vector3 const& arg2,
        class Vector3 const& arg3, class phImpactBase* arg4, i32 arg5, bool arg6, class Matrix34 const* arg7,
        class Matrix34 const* arg8, class Matrix34 const* arg9, class Matrix34 const* arg10,
        class phColliderBase* arg11, class phColliderBase* arg12)
    {
        return stub<cdecl_t<void, class Vector3 const&, class Vector3 const&, class Vector3 const&, class phImpactBase*,
            i32, bool, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
            class phColliderBase*, class phColliderBase*>>(
            0x47CE40, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    // 0x47E4A0 | ?BoxToBoxFaceImpacts@phBoundBox@@IBEXABVVector3@@PAVphImpactBase@@H_NPBVMatrix34@@333PAVphColliderBase@@4@Z
    void BoxToBoxFaceImpacts(class Vector3 const& arg1, class phImpactBase* arg2, i32 arg3, bool arg4,
        class Matrix34 const* arg5, class Matrix34 const* arg6, class Matrix34 const* arg7, class Matrix34 const* arg8,
        class phColliderBase* arg9, class phColliderBase* arg10)
    {
        return stub<member_func_t<void, phBoundBox, class Vector3 const&, class phImpactBase*, i32, bool,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
            class phColliderBase*, class phColliderBase*>>(
            0x47E4A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4800A0 | ?TestProbeSlave@phBoundBox@@IBE_NAAVphSegment@@PAVphIntersectionPoint@@PAJM@Z
    bool TestProbeSlave(class phSegment& arg1, class phIntersectionPoint* arg2, i32* arg3, f32 arg4)
    {
        return stub<member_func_t<bool, phBoundBox, class phSegment&, class phIntersectionPoint*, i32*, f32>>(
            0x4800A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4805B0 | ?ProbeVsBox@phBoundBox@@SA_NABVVector3@@AAVphSegment@@PAVphIntersectionPoint@@PAJM@Z
    static inline bool ProbeVsBox(
        class Vector3 const& arg1, class phSegment& arg2, class phIntersectionPoint* arg3, i32* arg4, f32 arg5)
    {
        return stub<cdecl_t<bool, class Vector3 const&, class phSegment&, class phIntersectionPoint*, i32*, f32>>(
            0x4805B0, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5B1F00 | ?EdgeFromFace@phBoundBox@@2QAY03$$CBHA
    inline extern_var(0x5B1F00, int32_t const (*)[4], EdgeFromFace);

    // 0x6611B0 | ?EdgeNormals@phBoundBox@@2QBVVector3@@B
    inline extern_var(0x6611B0, class Vector3 const* const, EdgeNormals);

    // 0x661288 | ?EdgeChecks@phBoundBox@@0PAY0M@DA
    inline extern_var(0x661288, char (*)[12], EdgeChecks);

    // 0x47A180 | ?GetMaterial@phBoundBox@@UBEPBVphMaterial@@H@Z
    class phMaterial const* GetMaterial(i32 arg1) override
    {
        return stub<member_func_t<class phMaterial const*, phBoundBox, i32>>(0x47A180, this, arg1);
    }

    // 0x480060 | ?TestProbePoint@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    bool TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3) override
    {
        return stub<member_func_t<bool, phBoundBox, class phSegment&, class phIntersectionPoint*, f32>>(
            0x480060, this, arg1, arg2, arg3);
    }

    // 0x480080 | ?TestAIPoint@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    bool TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2) override
    {
        return stub<member_func_t<bool, phBoundBox, class phSegment&, class phIntersectionPoint*>>(
            0x480080, this, arg1, arg2);
    }

    // 0x47F9B0 | ?TestEdge@phBoundBox@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    i32 TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3) override
    {
        return stub<member_func_t<i32, phBoundBox, class phSegment&, class phIntersection*, i32>>(
            0x47F9B0, this, arg1, arg2, arg3);
    }

    // 0x480010 | ?TestProbe@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    bool TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3) override
    {
        return stub<member_func_t<bool, phBoundBox, class phSegment&, class phIntersection*, f32>>(
            0x480010, this, arg1, arg2, arg3);
    }

    // 0x46A610 | ?GetEdgeCosine@phBoundBox@@UBEMH@Z
    f32 GetEdgeCosine(i32 arg1) override
    {
        return stub<member_func_t<f32, phBoundBox, i32>>(0x46A610, this, arg1);
    }

    // 0x47A6B0 | ?GetEdgeNormal@phBoundBox@@UBEABVVector3@@HAAV2@@Z
    class Vector3 const& GetEdgeNormal(i32 arg1, class Vector3& arg2) override
    {
        return stub<member_func_t<class Vector3 const&, phBoundBox, i32, class Vector3&>>(0x47A6B0, this, arg1, arg2);
    }
};
