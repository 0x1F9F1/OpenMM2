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
    phbound:boundterrainlocal

    0x4902F0 | public: __thiscall phBoundTerrainLocal::phBoundTerrainLocal(void) | ??0phBoundTerrainLocal@@QAE@XZ
    0x490310 | public: int __thiscall phBoundTerrainLocal::TestBoundTerrainPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,int,int *,int *,class Vector3 const &,bool) const | ?TestBoundTerrainPoly@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@11PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    0x4903D0 | public: int __thiscall phBoundTerrainLocal::TestBoundTerrainEdgesVsPoly(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int,int *) const | ?TestBoundTerrainEdgesVsPoly@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@2PAVphIntersection@@HPAH@Z
    0x4903F0 | public: int __thiscall phBoundTerrainLocal::TestBoundPolyTerrain(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int,int *,class Vector3 const *,bool) const | ?TestBoundPolyTerrain@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@22PAVphIntersection@@HPAHPBVVector3@@_N@Z
    0x490400 | public: int __thiscall phBoundTerrainLocal::FindImpactsHotdogToTerrainLocal(class phBoundHotdog const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsHotdogToTerrainLocal@phBoundTerrainLocal@@QBEHPBVphBoundHotdog@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    public: virtual void __thiscall phBoundTerrainLocal::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundTerrainLocal@@UBEXABVVector3@@@Z
    0x5B23A4 | const phBoundTerrainLocal::`vftable' | ??_7phBoundTerrainLocal@@6B@
*/

// #include "hooking.h"
