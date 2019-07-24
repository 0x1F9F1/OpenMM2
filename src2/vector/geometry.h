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
    vector:geometry

    0x4C1E80 | void __cdecl ComputeBoundSphere(int,float const * const,unsigned int,class Vector4 &) | ?ComputeBoundSphere@@YAXHQBMIAAVVector4@@@Z
    0x4C1ED0 | void __cdecl ComputeBoundInfo(int,float const * const,unsigned int,class Vector3 *,class Vector3 *,class Vector3 *,float *) | ?ComputeBoundInfo@@YAXHQBMIPAVVector3@@11PAM@Z
    0x4C23F0 | int __cdecl FindImpactPolygonToSphere(class Vector3 const &,float,class Vector3 const *,int,class Vector3 const &,class Vector3 *,int *,class Vector3 *,float *) | ?FindImpactPolygonToSphere@@YAHABVVector3@@MPBV1@H0PAV1@PAH2PAM@Z
    0x4C28C0 | int __cdecl FindImpactEdgeToShaft(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float,int *,class Vector3 *,float *,class Vector3 *) | ?FindImpactEdgeToShaft@@YAHABVVector3@@000MPAHPAV1@PAM2@Z
    0x4C2B30 | bool __cdecl IsPointBehindPlane(class Vector3 const &,class Vector3 const &,class Vector3 const &,float) | ?IsPointBehindPlane@@YA_NABVVector3@@00M@Z
    0x4C2B70 | bool __cdecl IsPointNearPlane(class Vector3 const &,class Vector3 const &,class Vector3 const &,float) | ?IsPointNearPlane@@YA_NABVVector3@@00M@Z
    0x4C2BC0 | bool __cdecl IsPointInBox(class Vector3 const &,float,float,float) | ?IsPointInBox@@YA_NABVVector3@@MMM@Z
    0x4C2C20 | int __cdecl IsNearZero(float,float) | ?IsNearZero@@YAHMM@Z
    0x4C2C50 | int __cdecl FindClosestPointSegToPoint(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 *,float *) | ?FindClosestPointSegToPoint@@YAHABVVector3@@00PAV1@PAM@Z
    0x4C2CD0 | int __cdecl FindClosestPointSegToOrigin(class Vector3 const &,class Vector3 const &,class Vector3 *,float *) | ?FindClosestPointSegToOrigin@@YAHABVVector3@@0PAV1@PAM@Z
    0x4C2DB0 | float __cdecl DistanceLineToLine(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 *,float) | ?DistanceLineToLine@@YAMABVVector3@@000PAV1@M@Z
    0x4C2F00 | float __cdecl DistanceParallelLineToLine(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 *) | ?DistanceParallelLineToLine@@YAMABVVector3@@000PAV1@@Z
    0x4C2FF0 | float __cdecl DistanceLineToYAxis(class Vector3 const &,class Vector3 const &,class Vector3 *) | ?DistanceLineToYAxis@@YAMABVVector3@@0PAV1@@Z
    0x4C30A0 | float __cdecl DistanceLineToPoint(class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?DistanceLineToPoint@@YAMABVVector3@@00@Z
    0x4C3170 | float __cdecl FindTValueSegToPoint(class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?FindTValueSegToPoint@@YAMABVVector3@@00@Z
    0x4C31B0 | float __cdecl FindTValueSegToOrigin(class Vector3 const &,class Vector3 const &) | ?FindTValueSegToOrigin@@YAMABVVector3@@0@Z
    0x4C3230 | bool __cdecl FindTValuesSegToSeg(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float *,float *) | ?FindTValuesSegToSeg@@YA_NABVVector3@@000PAM1@Z
    0x4C3530 | bool __cdecl FindTValuesLineToLine(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float *,float *) | ?FindTValuesLineToLine@@YA_NABVVector3@@000PAM1@Z
    0x4C3740 | bool __cdecl FindTValuesLineToYAxis(class Vector3 const &,class Vector3 const &,float,float,float *,float *) | ?FindTValuesLineToYAxis@@YA_NABVVector3@@0MMPAM1@Z
    0x4C3910 | bool __cdecl FindTValuesLineToBoxFace(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float *,float *,int *,int *) | ?FindTValuesLineToBoxFace@@YA_NABVVector3@@000PAM1PAH2@Z
    0x4C3C20 | int __cdecl SegmentToSphereIntersections(class Vector3 const &,class Vector3 const &,float,float *,float *) | ?SegmentToSphereIntersections@@YAHABVVector3@@0MPAM1@Z
    0x4C3D80 | int __cdecl SegmentToHemisphereIntersections(class Vector3 const &,class Vector3 const &,float,float *,float *,bool) | ?SegmentToHemisphereIntersections@@YAHABVVector3@@0MPAM1_N@Z
    0x4C3FA0 | bool __cdecl SegmentToDiskIntersection(class Vector3 const &,class Vector3 const &,float,float *) | ?SegmentToDiskIntersection@@YA_NABVVector3@@0MPAM@Z
    0x4C4020 | int __cdecl SegmentToUprightCylIsects(class Vector3 const &,class Vector3 const &,float,float,float *,float *,float *,float *) | ?SegmentToUprightCylIsects@@YAHABVVector3@@0MMPAM111@Z
    0x4C4190 | int __cdecl SegmentToInfCylIsects(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float,float *,float *) | ?SegmentToInfCylIsects@@YAHABVVector3@@000MPAM1@Z
    0x4C4380 | int __cdecl SegmentToBoxIntersections(class Vector3 const &,class Vector3 const &,float,float,float,float *,float *,class Vector3 *,class Vector3 *,int *,int *) | ?SegmentToBoxIntersections@@YAHABVVector3@@0MMMPAM1PAV1@2PAH3@Z
    0x4C4740 | int __cdecl AddIntersection(float,float *,float *,class Vector3 const &,class Vector3 *,class Vector3 *,int,int,int *,int *) | ?AddIntersection@@YAHMPAM0ABVVector3@@PAV1@2HHPAH3@Z
    0x4C4810 | int __cdecl AddIntersection(float,float *,float *,int,int *,int *,int) | ?AddIntersection@@YAHMPAM0HPAH1H@Z
    0x4C4890 | void __cdecl OrderIntersections(float *,float *,float *,float *,int *,int *) | ?OrderIntersections@@YAXPAM000PAH1@Z
    0x4C48D0 | bool __cdecl IsPointInRegion(float,float,class Vector3 const *,int) | ?IsPointInRegion@@YA_NMMPBVVector3@@H@Z
    0x4C49B0 | bool __cdecl CollidePlane(class Vector3 const &,class Vector3 const &,class Vector4 const &,float *) | ?CollidePlane@@YA_NABVVector3@@0ABVVector4@@PAM@Z
    0x4C4A10 | bool __cdecl CollideRayTriangle(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,float *) | ?CollideRayTriangle@@YA_NABVVector3@@0000PAM@Z
*/

// 0x4C1E80 | ?ComputeBoundSphere@@YAXHQBMIAAVVector4@@@Z
inline void ComputeBoundSphere(int32_t arg1, float const* const arg2, uint32_t arg3, class Vector4& arg4)
{
    return stub<cdecl_t<void, int32_t, float const* const, uint32_t, class Vector4&>>(0x4C1E80, arg1, arg2, arg3, arg4);
}

// 0x4C1ED0 | ?ComputeBoundInfo@@YAXHQBMIPAVVector3@@11PAM@Z
inline void ComputeBoundInfo(int32_t arg1, float const* const arg2, uint32_t arg3, class Vector3* arg4,
    class Vector3* arg5, class Vector3* arg6, float* arg7)
{
    return stub<
        cdecl_t<void, int32_t, float const* const, uint32_t, class Vector3*, class Vector3*, class Vector3*, float*>>(
        0x4C1ED0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// 0x4C23F0 | ?FindImpactPolygonToSphere@@YAHABVVector3@@MPBV1@H0PAV1@PAH2PAM@Z
inline int32_t FindImpactPolygonToSphere(class Vector3 const& arg1, float arg2, class Vector3 const* arg3, int32_t arg4,
    class Vector3 const& arg5, class Vector3* arg6, int32_t* arg7, class Vector3* arg8, float* arg9)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, float, class Vector3 const*, int32_t, class Vector3 const&,
        class Vector3*, int32_t*, class Vector3*, float*>>(
        0x4C23F0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

// 0x4C28C0 | ?FindImpactEdgeToShaft@@YAHABVVector3@@000MPAHPAV1@PAM2@Z
inline int32_t FindImpactEdgeToShaft(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, float arg5, int32_t* arg6, class Vector3* arg7, float* arg8, class Vector3* arg9)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        float, int32_t*, class Vector3*, float*, class Vector3*>>(
        0x4C28C0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

// 0x4C2B30 | ?IsPointBehindPlane@@YA_NABVVector3@@00M@Z
inline bool IsPointBehindPlane(
    class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, float arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, float>>(
        0x4C2B30, arg1, arg2, arg3, arg4);
}

// 0x4C2B70 | ?IsPointNearPlane@@YA_NABVVector3@@00M@Z
inline bool IsPointNearPlane(
    class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, float arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, float>>(
        0x4C2B70, arg1, arg2, arg3, arg4);
}

// 0x4C2BC0 | ?IsPointInBox@@YA_NABVVector3@@MMM@Z
inline bool IsPointInBox(class Vector3 const& arg1, float arg2, float arg3, float arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, float, float, float>>(0x4C2BC0, arg1, arg2, arg3, arg4);
}

// 0x4C2C20 | ?IsNearZero@@YAHMM@Z
inline int32_t IsNearZero(float arg1, float arg2)
{
    return stub<cdecl_t<int32_t, float, float>>(0x4C2C20, arg1, arg2);
}

// 0x4C2C50 | ?FindClosestPointSegToPoint@@YAHABVVector3@@00PAV1@PAM@Z
inline int32_t FindClosestPointSegToPoint(
    class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, class Vector3* arg4, float* arg5)
{
    return stub<
        cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3*, float*>>(
        0x4C2C50, arg1, arg2, arg3, arg4, arg5);
}

// 0x4C2CD0 | ?FindClosestPointSegToOrigin@@YAHABVVector3@@0PAV1@PAM@Z
inline int32_t FindClosestPointSegToOrigin(
    class Vector3 const& arg1, class Vector3 const& arg2, class Vector3* arg3, float* arg4)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, class Vector3*, float*>>(
        0x4C2CD0, arg1, arg2, arg3, arg4);
}

// 0x4C2DB0 | ?DistanceLineToLine@@YAMABVVector3@@000PAV1@M@Z
inline float DistanceLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3* arg5, float arg6)
{
    return stub<cdecl_t<float, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3*, float>>(0x4C2DB0, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x4C2F00 | ?DistanceParallelLineToLine@@YAMABVVector3@@000PAV1@@Z
inline float DistanceParallelLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3* arg5)
{
    return stub<cdecl_t<float, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3*>>(0x4C2F00, arg1, arg2, arg3, arg4, arg5);
}

// 0x4C2FF0 | ?DistanceLineToYAxis@@YAMABVVector3@@0PAV1@@Z
inline float DistanceLineToYAxis(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3* arg3)
{
    return stub<cdecl_t<float, class Vector3 const&, class Vector3 const&, class Vector3*>>(0x4C2FF0, arg1, arg2, arg3);
}

// 0x4C30A0 | ?DistanceLineToPoint@@YAMABVVector3@@00@Z
inline float DistanceLineToPoint(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<cdecl_t<float, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
        0x4C30A0, arg1, arg2, arg3);
}

// 0x4C3170 | ?FindTValueSegToPoint@@YAMABVVector3@@00@Z
inline float FindTValueSegToPoint(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<cdecl_t<float, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
        0x4C3170, arg1, arg2, arg3);
}

// 0x4C31B0 | ?FindTValueSegToOrigin@@YAMABVVector3@@0@Z
inline float FindTValueSegToOrigin(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<float, class Vector3 const&, class Vector3 const&>>(0x4C31B0, arg1, arg2);
}

// 0x4C3230 | ?FindTValuesSegToSeg@@YA_NABVVector3@@000PAM1@Z
inline bool FindTValuesSegToSeg(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, float* arg5, float* arg6)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        float*, float*>>(0x4C3230, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x4C3530 | ?FindTValuesLineToLine@@YA_NABVVector3@@000PAM1@Z
inline bool FindTValuesLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, float* arg5, float* arg6)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        float*, float*>>(0x4C3530, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x4C3740 | ?FindTValuesLineToYAxis@@YA_NABVVector3@@0MMPAM1@Z
inline bool FindTValuesLineToYAxis(
    class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float arg4, float* arg5, float* arg6)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, float, float, float*, float*>>(
        0x4C3740, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x4C3910 | ?FindTValuesLineToBoxFace@@YA_NABVVector3@@000PAM1PAH2@Z
inline bool FindTValuesLineToBoxFace(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, float* arg5, float* arg6, int32_t* arg7, int32_t* arg8)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        float*, float*, int32_t*, int32_t*>>(0x4C3910, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// 0x4C3C20 | ?SegmentToSphereIntersections@@YAHABVVector3@@0MPAM1@Z
inline int32_t SegmentToSphereIntersections(
    class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float* arg4, float* arg5)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, float, float*, float*>>(
        0x4C3C20, arg1, arg2, arg3, arg4, arg5);
}

// 0x4C3D80 | ?SegmentToHemisphereIntersections@@YAHABVVector3@@0MPAM1_N@Z
inline int32_t SegmentToHemisphereIntersections(
    class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float* arg4, float* arg5, bool arg6)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, float, float*, float*, bool>>(
        0x4C3D80, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x4C3FA0 | ?SegmentToDiskIntersection@@YA_NABVVector3@@0MPAM@Z
inline bool SegmentToDiskIntersection(class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float* arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, float, float*>>(
        0x4C3FA0, arg1, arg2, arg3, arg4);
}

// 0x4C4020 | ?SegmentToUprightCylIsects@@YAHABVVector3@@0MMPAM111@Z
inline int32_t SegmentToUprightCylIsects(class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float arg4,
    float* arg5, float* arg6, float* arg7, float* arg8)
{
    return stub<
        cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, float, float, float*, float*, float*, float*>>(
        0x4C4020, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// 0x4C4190 | ?SegmentToInfCylIsects@@YAHABVVector3@@000MPAM1@Z
inline int32_t SegmentToInfCylIsects(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, float arg5, float* arg6, float* arg7)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        float, float*, float*>>(0x4C4190, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// 0x4C4380 | ?SegmentToBoxIntersections@@YAHABVVector3@@0MMMPAM1PAV1@2PAH3@Z
inline int32_t SegmentToBoxIntersections(class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float arg4,
    float arg5, float* arg6, float* arg7, class Vector3* arg8, class Vector3* arg9, int32_t* arg10, int32_t* arg11)
{
    return stub<cdecl_t<int32_t, class Vector3 const&, class Vector3 const&, float, float, float, float*, float*,
        class Vector3*, class Vector3*, int32_t*, int32_t*>>(
        0x4C4380, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

// 0x4C4740 | ?AddIntersection@@YAHMPAM0ABVVector3@@PAV1@2HHPAH3@Z
inline int32_t AddIntersection(float arg1, float* arg2, float* arg3, class Vector3 const& arg4, class Vector3* arg5,
    class Vector3* arg6, int32_t arg7, int32_t arg8, int32_t* arg9, int32_t* arg10)
{
    return stub<cdecl_t<int32_t, float, float*, float*, class Vector3 const&, class Vector3*, class Vector3*, int32_t,
        int32_t, int32_t*, int32_t*>>(0x4C4740, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

// 0x4C4810 | ?AddIntersection@@YAHMPAM0HPAH1H@Z
inline int32_t AddIntersection(
    float arg1, float* arg2, float* arg3, int32_t arg4, int32_t* arg5, int32_t* arg6, int32_t arg7)
{
    return stub<cdecl_t<int32_t, float, float*, float*, int32_t, int32_t*, int32_t*, int32_t>>(
        0x4C4810, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// 0x4C4890 | ?OrderIntersections@@YAXPAM000PAH1@Z
inline void OrderIntersections(float* arg1, float* arg2, float* arg3, float* arg4, int32_t* arg5, int32_t* arg6)
{
    return stub<cdecl_t<void, float*, float*, float*, float*, int32_t*, int32_t*>>(
        0x4C4890, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x4C48D0 | ?IsPointInRegion@@YA_NMMPBVVector3@@H@Z
inline bool IsPointInRegion(float arg1, float arg2, class Vector3 const* arg3, int32_t arg4)
{
    return stub<cdecl_t<bool, float, float, class Vector3 const*, int32_t>>(0x4C48D0, arg1, arg2, arg3, arg4);
}

// 0x4C49B0 | ?CollidePlane@@YA_NABVVector3@@0ABVVector4@@PAM@Z
inline bool CollidePlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector4 const& arg3, float* arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector4 const&, float*>>(
        0x4C49B0, arg1, arg2, arg3, arg4);
}

// 0x4C4A10 | ?CollideRayTriangle@@YA_NABVVector3@@0000PAM@Z
inline bool CollideRayTriangle(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5, float* arg6)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, float*>>(0x4C4A10, arg1, arg2, arg3, arg4, arg5, arg6);
}
