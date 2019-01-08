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

#include "hooking.h"
