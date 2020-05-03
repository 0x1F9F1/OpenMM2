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
    phcore:convexpoly

    0x496F10 | public: static int __cdecl phConvexPoly::ConvexPolyIntersect(int,class Vector2 const *,int,class Vector2 const *,struct phConvexPoly::Data *) | ?ConvexPolyIntersect@phConvexPoly@@SAHHPBVVector2@@H0PAUData@1@@Z
    0x497630 | public: static void __cdecl phConvexPoly::PrecomputeRays(int,class Vector2 const *,class Vector2 *,float *) | ?PrecomputeRays@phConvexPoly@@SAXHPBVVector2@@PAV2@PAM@Z
    0x4976A0 | public: static void __cdecl phConvexPoly::AdvanceV(void) | ?AdvanceV@phConvexPoly@@SAXXZ
    0x497730 | public: static void __cdecl phConvexPoly::GetvHeadOut(void) | ?GetvHeadOut@phConvexPoly@@SAXXZ
    0x4977D0 | public: static void __cdecl phConvexPoly::GetuHeadOut(void) | ?GetuHeadOut@phConvexPoly@@SAXXZ
    0x497870 | public: static void __cdecl phConvexPoly::GetuTailOut(void) | ?GetuTailOut@phConvexPoly@@SAXXZ
    0x4978F0 | public: static void __cdecl phConvexPoly::RecordEE(void) | ?RecordEE@phConvexPoly@@SAXXZ
    0x4979D0 | public: static void __cdecl phConvexPoly::RecordUTail(void) | ?RecordUTail@phConvexPoly@@SAXXZ
    0x4979E0 | public: static void __cdecl phConvexPoly::RecordVTail(void) | ?RecordVTail@phConvexPoly@@SAXXZ
    0x497A00 | public: static void __cdecl phConvexPoly::RecordTail(bool) | ?RecordTail@phConvexPoly@@SAX_N@Z
    0x497AC0 | public: static void __cdecl phConvexPoly::RecordNoIsect(int) | ?RecordNoIsect@phConvexPoly@@SAXH@Z
    0x497AF0 | public: static void __cdecl phConvexPoly::RecordInteriorCollides(bool) | ?RecordInteriorCollides@phConvexPoly@@SAX_N@Z
*/

struct phConvexPoly
{
public:
    // 0x4976A0 | ?AdvanceV@phConvexPoly@@SAXXZ
    static void AdvanceV();

    // 0x496F10 | ?ConvexPolyIntersect@phConvexPoly@@SAHHPBVVector2@@H0PAUData@1@@Z
    static i32 ConvexPolyIntersect(
        i32 arg1, class Vector2 const* arg2, i32 arg3, class Vector2 const* arg4, struct phConvexPoly::Data* arg5);

    // 0x4977D0 | ?GetuHeadOut@phConvexPoly@@SAXXZ
    static void GetuHeadOut();

    // 0x497870 | ?GetuTailOut@phConvexPoly@@SAXXZ
    static void GetuTailOut();

    // 0x497730 | ?GetvHeadOut@phConvexPoly@@SAXXZ
    static void GetvHeadOut();

    // 0x497630 | ?PrecomputeRays@phConvexPoly@@SAXHPBVVector2@@PAV2@PAM@Z
    static void PrecomputeRays(i32 arg1, class Vector2 const* arg2, class Vector2* arg3, f32* arg4);

    // 0x4978F0 | ?RecordEE@phConvexPoly@@SAXXZ
    static void RecordEE();

    // 0x497AF0 | ?RecordInteriorCollides@phConvexPoly@@SAX_N@Z
    static void RecordInteriorCollides(bool arg1);

    // 0x497AC0 | ?RecordNoIsect@phConvexPoly@@SAXH@Z
    static void RecordNoIsect(i32 arg1);

    // 0x497A00 | ?RecordTail@phConvexPoly@@SAX_N@Z
    static void RecordTail(bool arg1);

    // 0x4979D0 | ?RecordUTail@phConvexPoly@@SAXXZ
    static void RecordUTail();

    // 0x4979E0 | ?RecordVTail@phConvexPoly@@SAXXZ
    static void RecordVTail();
};
