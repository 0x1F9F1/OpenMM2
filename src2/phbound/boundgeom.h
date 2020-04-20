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
    phbound:boundgeom

    0x4855E0 | public: __thiscall phBoundGeometry::phBoundGeometry(void) | ??0phBoundGeometry@@QAE@XZ
    0x485620 | public: __thiscall phBoundGeometry::~phBoundGeometry(void) | ??1phBoundGeometry@@QAE@XZ
    0x485670 | public: void __thiscall phBoundGeometry::Init(int,int,int,int) | ?Init@phBoundGeometry@@QAEXHHHH@Z
    0x485780 | public: virtual void __thiscall phBoundGeometry::PostLoadCompute(void) | ?PostLoadCompute@phBoundGeometry@@UAEXXZ
    0x4857AB | public: bool __thiscall phBoundGeometry::Load(char const *,class Vector3 const *) | ?Load@phBoundGeometry@@QAE_NPBDPBVVector3@@@Z
    public: bool __thiscall phBoundGeometry::Save(char const *) | ?Save@phBoundGeometry@@QAE_NPBD@Z
    0x4860B9 | public: bool __thiscall phBoundGeometry::LoadBinary(char const *) | ?LoadBinary@phBoundGeometry@@QAE_NPBD@Z
    public: bool __thiscall phBoundGeometry::SaveBinary(char const *) | ?SaveBinary@phBoundGeometry@@QAE_NPBD@Z
    0x4862C9 | public: void __thiscall phBoundGeometry::ScaleSize(float,float,float) | ?ScaleSize@phBoundGeometry@@QAEXMMM@Z
    0x4863A9 | public: void __thiscall phBoundGeometry::ShiftCentroid(class Vector3 const &) | ?ShiftCentroid@phBoundGeometry@@QAEXABVVector3@@@Z
    public: bool __thiscall phBoundGeometry::WeldVertices(void) | ?WeldVertices@phBoundGeometry@@QAE_NXZ
    public: bool __thiscall phBoundGeometry::ConvertTrianglesToQuads(void) | ?ConvertTrianglesToQuads@phBoundGeometry@@QAE_NXZ
    public: bool __thiscall phBoundGeometry::EdgeHasTheseVerts(int,int,int) | ?EdgeHasTheseVerts@phBoundGeometry@@QAE_NHHH@Z
    0x4863F9 | public: void __thiscall phBoundGeometry::ComputeEdges(void) | ?ComputeEdges@phBoundGeometry@@QAEXXZ
    0x486609 | protected: static long __cdecl phBoundGeometry::EdgeInList(int,int,long,class phHotEdge *) | ?EdgeInList@phBoundGeometry@@KAJHHJPAVphHotEdge@@@Z
    0x486659 | public: void __thiscall phBoundGeometry::ComputeEdgeNums(void) | ?ComputeEdgeNums@phBoundGeometry@@QAEXXZ
    0x486739 | public: void __thiscall phBoundGeometry::ComputeEdgeNormals(void) | ?ComputeEdgeNormals@phBoundGeometry@@QAEXXZ
    0x4867A9 | public: void __thiscall phBoundGeometry::ReComputeEdgeNormals(void) | ?ReComputeEdgeNormals@phBoundGeometry@@QAEXXZ
    0x486B89 | public: void __thiscall phBoundGeometry::SetQuickTestInfo(void) | ?SetQuickTestInfo@phBoundGeometry@@QAEXXZ
    0x486C39 | public: void __thiscall phBoundGeometry::CalculatePolyNormals(void) | ?CalculatePolyNormals@phBoundGeometry@@QAEXXZ
    0x486C69 | public: bool __thiscall phBoundGeometry::OverlapRegion(class Vector3 const *,int,float,float) | ?OverlapRegion@phBoundGeometry@@QAE_NPBVVector3@@HMM@Z
    0x486D39 | public: bool __thiscall phBoundGeometry::GhostSection(class phBoundGeometry const *,class Vector3 const *,int,float,float) | ?GhostSection@phBoundGeometry@@QAE_NPBV1@PBVVector3@@HMM@Z
    0x4871A0 | public: virtual class phMaterial const * __thiscall phBoundGeometry::GetMaterial(int) const | ?GetMaterial@phBoundGeometry@@UBEPBVphMaterial@@H@Z
    0x5B2248 | const phBoundGeometry::`vftable' | ??_7phBoundGeometry@@6B@
    0x5B22A4 | const datBaseTokenizer::`vftable' | ??_7datBaseTokenizer@@6B@
    private: static char phBoundGeometry::sm_Version | ?sm_Version@phBoundGeometry@@0DA
    float gBoundGeometryLoad | ?gBoundGeometryLoad@@3MA
    float gBoundGeometryLoadBinary | ?gBoundGeometryLoadBinary@@3MA
*/

class phBoundGeometry : phBoundPolygonal
{
public:
    // phBoundGeometry::`vftable' @ 0x5B2248

    // 0x4855E0 | ??0phBoundGeometry@@QAE@XZ
    inline phBoundGeometry()
    {
        stub<member_func_t<void, phBoundGeometry>>(0x4855E0, this);
    }

    // 0x485620 | ??1phBoundGeometry@@QAE@XZ
    inline ~phBoundGeometry()
    {
        stub<member_func_t<void, phBoundGeometry>>(0x485620, this);
    }

    // 0x485670 | ?Init@phBoundGeometry@@QAEXHHHH@Z
    inline void Init(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, phBoundGeometry, int32_t, int32_t, int32_t, int32_t>>(
            0x485670, this, arg1, arg2, arg3, arg4);
    }

    // 0x4857AB | ?Load@phBoundGeometry@@QAE_NPBDPBVVector3@@@Z
    inline bool Load(char const* arg1, class Vector3 const* arg2)
    {
        return stub<member_func_t<bool, phBoundGeometry, char const*, class Vector3 const*>>(
            0x4857AB, this, arg1, arg2);
    }

    // 0x4860B9 | ?LoadBinary@phBoundGeometry@@QAE_NPBD@Z
    inline bool LoadBinary(char const* arg1)
    {
        return stub<member_func_t<bool, phBoundGeometry, char const*>>(0x4860B9, this, arg1);
    }

    // 0x4862C9 | ?ScaleSize@phBoundGeometry@@QAEXMMM@Z
    inline void ScaleSize(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, phBoundGeometry, float, float, float>>(0x4862C9, this, arg1, arg2, arg3);
    }

    // 0x4863A9 | ?ShiftCentroid@phBoundGeometry@@QAEXABVVector3@@@Z
    inline void ShiftCentroid(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, phBoundGeometry, class Vector3 const&>>(0x4863A9, this, arg1);
    }

    // 0x4863F9 | ?ComputeEdges@phBoundGeometry@@QAEXXZ
    inline void ComputeEdges()
    {
        return stub<member_func_t<void, phBoundGeometry>>(0x4863F9, this);
    }

    // 0x486609 | ?EdgeInList@phBoundGeometry@@KAJHHJPAVphHotEdge@@@Z
    static inline int32_t EdgeInList(int32_t arg1, int32_t arg2, int32_t arg3, class phHotEdge* arg4)
    {
        return stub<cdecl_t<int32_t, int32_t, int32_t, int32_t, class phHotEdge*>>(0x486609, arg1, arg2, arg3, arg4);
    }

    // 0x486659 | ?ComputeEdgeNums@phBoundGeometry@@QAEXXZ
    inline void ComputeEdgeNums()
    {
        return stub<member_func_t<void, phBoundGeometry>>(0x486659, this);
    }

    // 0x486739 | ?ComputeEdgeNormals@phBoundGeometry@@QAEXXZ
    inline void ComputeEdgeNormals()
    {
        return stub<member_func_t<void, phBoundGeometry>>(0x486739, this);
    }

    // 0x4867A9 | ?ReComputeEdgeNormals@phBoundGeometry@@QAEXXZ
    inline void ReComputeEdgeNormals()
    {
        return stub<member_func_t<void, phBoundGeometry>>(0x4867A9, this);
    }

    // 0x486B89 | ?SetQuickTestInfo@phBoundGeometry@@QAEXXZ
    inline void SetQuickTestInfo()
    {
        return stub<member_func_t<void, phBoundGeometry>>(0x486B89, this);
    }

    // 0x486C39 | ?CalculatePolyNormals@phBoundGeometry@@QAEXXZ
    inline void CalculatePolyNormals()
    {
        return stub<member_func_t<void, phBoundGeometry>>(0x486C39, this);
    }

    // 0x486C69 | ?OverlapRegion@phBoundGeometry@@QAE_NPBVVector3@@HMM@Z
    inline bool OverlapRegion(class Vector3 const* arg1, int32_t arg2, float arg3, float arg4)
    {
        return stub<member_func_t<bool, phBoundGeometry, class Vector3 const*, int32_t, float, float>>(
            0x486C69, this, arg1, arg2, arg3, arg4);
    }

    // 0x486D39 | ?GhostSection@phBoundGeometry@@QAE_NPBV1@PBVVector3@@HMM@Z
    inline bool GhostSection(
        class phBoundGeometry const* arg1, class Vector3 const* arg2, int32_t arg3, float arg4, float arg5)
    {
        return stub<member_func_t<bool, phBoundGeometry, class phBoundGeometry const*, class Vector3 const*, int32_t,
            float, float>>(0x486D39, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4871A0 | ?GetMaterial@phBoundGeometry@@UBEPBVphMaterial@@H@Z
    inline class phMaterial const* GetMaterial(int32_t arg1) override
    {
        return stub<member_func_t<class phMaterial const*, phBoundGeometry, int32_t>>(0x4871A0, this, arg1);
    }

    // 0x46A5C0 | ?GetEdgeCosine@phBoundGeometry@@UBEMH@Z
    inline float GetEdgeCosine(int32_t arg1) override
    {
        return stub<member_func_t<float, phBoundGeometry, int32_t>>(0x46A5C0, this, arg1);
    }

    // 0x46A5D0 | ?GetEdgeNormal@phBoundGeometry@@UBEABVVector3@@HAAV2@@Z
    inline class Vector3 const& GetEdgeNormal(int32_t arg1, class Vector3& arg2) override
    {
        return stub<member_func_t<class Vector3 const&, phBoundGeometry, int32_t, class Vector3&>>(
            0x46A5D0, this, arg1, arg2);
    }

    // 0x485780 | ?PostLoadCompute@phBoundGeometry@@UAEXXZ
    virtual inline void PostLoadCompute()
    {
        return stub<member_func_t<void, phBoundGeometry>>(0x485780, this);
    }
};
