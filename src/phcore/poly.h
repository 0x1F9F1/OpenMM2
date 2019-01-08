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
    phcore:poly

    0x4938E0 | public: __thiscall phPolygon::phPolygon(void) | ??0phPolygon@@QAE@XZ
    0x493910 | public: void __thiscall phPolygon::InitTriangle(unsigned short,unsigned short,unsigned short,class Vector3 const *) | ?InitTriangle@phPolygon@@QAEXGGGPBVVector3@@@Z
    0x493940 | public: void __thiscall phPolygon::InitQuad(unsigned short,unsigned short,unsigned short,unsigned short,class Vector3 const *) | ?InitQuad@phPolygon@@QAEXGGGGPBVVector3@@@Z
    0x493970 | public: void __thiscall phPolygon::Rotate(void) | ?Rotate@phPolygon@@QAEXXZ
    0x493A40 | public: void __thiscall phPolygon::CalculateNormal(class Vector3 const *) | ?CalculateNormal@phPolygon@@QAEXPBVVector3@@@Z
    0x493C00 | protected: void __thiscall phPolygon::ComputeEdgeNormalCross(class Vector4 *,class Vector3 const *) | ?ComputeEdgeNormalCross@phPolygon@@IAEXPAVVector4@@PBVVector3@@@Z
    0x493D40 | public: int __thiscall phPolygon::TestSegmentDirected(class Vector3 const *,class phSegment const &,class phIntersectionPoint *,float) const | ?TestSegmentDirected@phPolygon@@QBEHPBVVector3@@ABVphSegment@@PAVphIntersectionPoint@@M@Z
    0x4940D0 | public: int __thiscall phPolygon::TestSegmentUndirected(class Vector3 const *,class phSegment const &,class phIntersectionPoint *,float,float) const | ?TestSegmentUndirected@phPolygon@@QBEHPBVVector3@@ABVphSegment@@PAVphIntersectionPoint@@MM@Z
    0x4944B0 | public: int __thiscall phPolygon::DetectSegmentDirected(class Vector3 const *,class Vector3 const &,class Vector3 const &) const | ?DetectSegmentDirected@phPolygon@@QBEHPBVVector3@@ABV2@1@Z
    0x494780 | public: int __thiscall phPolygon::DetectSegmentUndirected(class Vector3 const *,class Vector4 const &,class Vector4 const &) const | ?DetectSegmentUndirected@phPolygon@@QBEHPBVVector3@@ABVVector4@@1@Z
    0x494A70 | protected: static bool __cdecl phPolygon::SegEdgeCheckUndirected(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector4 const &,class Vector4 const &) | ?SegEdgeCheckUndirected@phPolygon@@KA_NABVVector3@@00ABVVector4@@1@Z
    0x494B30 | protected: static bool __cdecl phPolygon::SegEdgeCheckDirected(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector4 const &,class Vector4 const &) | ?SegEdgeCheckDirected@phPolygon@@KA_NABVVector3@@00ABVVector4@@1@Z
    0x494C00 | public: void __thiscall Vector3::Lerp(float,class Vector3 const &,class Vector3 const &) | ?Lerp@Vector3@@QAEXMABV1@0@Z
    0x494C40 | public: void __thiscall Vector4::Subtract(class Vector3 const &,class Vector3 const &) | ?Subtract@Vector4@@QAEXABVVector3@@0@Z
    0x494C70 | public: float __thiscall Vector4::Dot3(class Vector4 const &) const | ?Dot3@Vector4@@QBEMABV1@@Z
    0x494C90 | public: void __thiscall Vector4::Cross(class Vector4 const &,class Vector4 const &) | ?Cross@Vector4@@QAEXABV1@0@Z
*/

#include "hooking.h"
