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

// 0x4C4810 | ?AddIntersection@@YAHMPAM0HPAH1H@Z
i32 AddIntersection(f32 arg1, f32* arg2, f32* arg3, i32 arg4, i32* arg5, i32* arg6, i32 arg7);

// 0x4C4740 | ?AddIntersection@@YAHMPAM0ABVVector3@@PAV1@2HHPAH3@Z
i32 AddIntersection(f32 arg1, f32* arg2, f32* arg3, class Vector3 const& arg4, class Vector3* arg5, class Vector3* arg6,
    i32 arg7, i32 arg8, i32* arg9, i32* arg10);

// 0x4C49B0 | ?CollidePlane@@YA_NABVVector3@@0ABVVector4@@PAM@Z
bool CollidePlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector4 const& arg3, f32* arg4);

// 0x4C4A10 | ?CollideRayTriangle@@YA_NABVVector3@@0000PAM@Z
bool CollideRayTriangle(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5, f32* arg6);

// 0x4C1ED0 | ?ComputeBoundInfo@@YAXHQBMIPAVVector3@@11PAM@Z
void ComputeBoundInfo(i32 arg1, f32 const* const arg2, u32 arg3, class Vector3* arg4, class Vector3* arg5,
    class Vector3* arg6, f32* arg7);

// 0x4C1E80 | ?ComputeBoundSphere@@YAXHQBMIAAVVector4@@@Z
void ComputeBoundSphere(i32 arg1, f32 const* const arg2, u32 arg3, class Vector4& arg4);

// 0x4C2DB0 | ?DistanceLineToLine@@YAMABVVector3@@000PAV1@M@Z
f32 DistanceLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3* arg5, f32 arg6);

// 0x4C30A0 | ?DistanceLineToPoint@@YAMABVVector3@@00@Z
f32 DistanceLineToPoint(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3);

// 0x4C2FF0 | ?DistanceLineToYAxis@@YAMABVVector3@@0PAV1@@Z
f32 DistanceLineToYAxis(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3* arg3);

// 0x4C2F00 | ?DistanceParallelLineToLine@@YAMABVVector3@@000PAV1@@Z
f32 DistanceParallelLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3* arg5);

// 0x4C2CD0 | ?FindClosestPointSegToOrigin@@YAHABVVector3@@0PAV1@PAM@Z
i32 FindClosestPointSegToOrigin(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3* arg3, f32* arg4);

// 0x4C2C50 | ?FindClosestPointSegToPoint@@YAHABVVector3@@00PAV1@PAM@Z
i32 FindClosestPointSegToPoint(
    class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, class Vector3* arg4, f32* arg5);

// 0x4C28C0 | ?FindImpactEdgeToShaft@@YAHABVVector3@@000MPAHPAV1@PAM2@Z
i32 FindImpactEdgeToShaft(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32 arg5, i32* arg6, class Vector3* arg7, f32* arg8, class Vector3* arg9);

// 0x4C23F0 | ?FindImpactPolygonToSphere@@YAHABVVector3@@MPBV1@H0PAV1@PAH2PAM@Z
i32 FindImpactPolygonToSphere(class Vector3 const& arg1, f32 arg2, class Vector3 const* arg3, i32 arg4,
    class Vector3 const& arg5, class Vector3* arg6, i32* arg7, class Vector3* arg8, f32* arg9);

// 0x4C31B0 | ?FindTValueSegToOrigin@@YAMABVVector3@@0@Z
f32 FindTValueSegToOrigin(class Vector3 const& arg1, class Vector3 const& arg2);

// 0x4C3170 | ?FindTValueSegToPoint@@YAMABVVector3@@00@Z
f32 FindTValueSegToPoint(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3);

// 0x4C3910 | ?FindTValuesLineToBoxFace@@YA_NABVVector3@@000PAM1PAH2@Z
bool FindTValuesLineToBoxFace(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32* arg5, f32* arg6, i32* arg7, i32* arg8);

// 0x4C3530 | ?FindTValuesLineToLine@@YA_NABVVector3@@000PAM1@Z
bool FindTValuesLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32* arg5, f32* arg6);

// 0x4C3740 | ?FindTValuesLineToYAxis@@YA_NABVVector3@@0MMPAM1@Z
bool FindTValuesLineToYAxis(
    class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4, f32* arg5, f32* arg6);

// 0x4C3230 | ?FindTValuesSegToSeg@@YA_NABVVector3@@000PAM1@Z
bool FindTValuesSegToSeg(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32* arg5, f32* arg6);

// 0x4C2C20 | ?IsNearZero@@YAHMM@Z
i32 IsNearZero(f32 arg1, f32 arg2);

// 0x4C2B30 | ?IsPointBehindPlane@@YA_NABVVector3@@00M@Z
bool IsPointBehindPlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, f32 arg4);

// 0x4C2BC0 | ?IsPointInBox@@YA_NABVVector3@@MMM@Z
bool IsPointInBox(class Vector3 const& arg1, f32 arg2, f32 arg3, f32 arg4);

// 0x4C48D0 | ?IsPointInRegion@@YA_NMMPBVVector3@@H@Z
bool IsPointInRegion(f32 arg1, f32 arg2, class Vector3 const* arg3, i32 arg4);

// 0x4C2B70 | ?IsPointNearPlane@@YA_NABVVector3@@00M@Z
bool IsPointNearPlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, f32 arg4);

// 0x4C4890 | ?OrderIntersections@@YAXPAM000PAH1@Z
void OrderIntersections(f32* arg1, f32* arg2, f32* arg3, f32* arg4, i32* arg5, i32* arg6);

// 0x4C4380 | ?SegmentToBoxIntersections@@YAHABVVector3@@0MMMPAM1PAV1@2PAH3@Z
i32 SegmentToBoxIntersections(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4, f32 arg5,
    f32* arg6, f32* arg7, class Vector3* arg8, class Vector3* arg9, i32* arg10, i32* arg11);

// 0x4C3FA0 | ?SegmentToDiskIntersection@@YA_NABVVector3@@0MPAM@Z
bool SegmentToDiskIntersection(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32* arg4);

// 0x4C3D80 | ?SegmentToHemisphereIntersections@@YAHABVVector3@@0MPAM1_N@Z
i32 SegmentToHemisphereIntersections(
    class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32* arg4, f32* arg5, bool arg6);

// 0x4C4190 | ?SegmentToInfCylIsects@@YAHABVVector3@@000MPAM1@Z
i32 SegmentToInfCylIsects(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32 arg5, f32* arg6, f32* arg7);

// 0x4C3C20 | ?SegmentToSphereIntersections@@YAHABVVector3@@0MPAM1@Z
i32 SegmentToSphereIntersections(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32* arg4, f32* arg5);

// 0x4C4020 | ?SegmentToUprightCylIsects@@YAHABVVector3@@0MMPAM111@Z
i32 SegmentToUprightCylIsects(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4, f32* arg5,
    f32* arg6, f32* arg7, f32* arg8);
