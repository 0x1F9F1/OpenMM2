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
    phbound:boundterrainlocal

    0x4902F0 | public: __thiscall phBoundTerrainLocal::phBoundTerrainLocal(void) | ??0phBoundTerrainLocal@@QAE@XZ
    0x490310 | public: int __thiscall phBoundTerrainLocal::TestBoundTerrainPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,int,int *,int *,class Vector3 const &,bool) const | ?TestBoundTerrainPoly@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@11PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    0x4903D0 | public: int __thiscall phBoundTerrainLocal::TestBoundTerrainEdgesVsPoly(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int,int *) const | ?TestBoundTerrainEdgesVsPoly@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@2PAVphIntersection@@HPAH@Z
    0x4903F0 | public: int __thiscall phBoundTerrainLocal::TestBoundPolyTerrain(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int,int *,class Vector3 const *,bool) const | ?TestBoundPolyTerrain@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@22PAVphIntersection@@HPAHPBVVector3@@_N@Z
    0x490400 | public: int __thiscall phBoundTerrainLocal::FindImpactsHotdogToTerrainLocal(class phBoundHotdog const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsHotdogToTerrainLocal@phBoundTerrainLocal@@QBEHPBVphBoundHotdog@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    public: virtual void __thiscall phBoundTerrainLocal::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundTerrainLocal@@UBEXABVVector3@@@Z
    0x5B23A4 | const phBoundTerrainLocal::`vftable' | ??_7phBoundTerrainLocal@@6B@
*/

struct phBoundTerrainLocal : phBoundTerrain
{
public:
    // phBoundTerrainLocal::`vftable' @ 0x5B23A4

    // 0x4902F0 | ??0phBoundTerrainLocal@@QAE@XZ
    inline phBoundTerrainLocal()
    {
        stub<member_func_t<void, phBoundTerrainLocal>>(0x4902F0, this);
    }

    // 0x490310 | ?TestBoundTerrainPoly@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@11PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    inline i32 TestBoundTerrainPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class Matrix34 const* arg4, class phColliderBase* arg5, class phColliderBase* arg6,
        class phIntersection* arg7, class phIntersection* arg8, i32 arg9, i32* arg10, i32* arg11,
        class Vector3 const& arg12, bool arg13)
    {
        return stub<member_func_t<i32, phBoundTerrainLocal, class phBoundPolygonal const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*,
            class phIntersection*, class phIntersection*, i32, i32*, i32*, class Vector3 const&, bool>>(
            0x490310, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4903D0 | ?TestBoundTerrainEdgesVsPoly@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@2PAVphIntersection@@HPAH@Z
    inline i32 TestBoundTerrainEdgesVsPoly(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
        class Matrix34 const* arg3, class Matrix34 const* arg4, class phIntersection* arg5, i32 arg6, i32* arg7)
    {
        return stub<member_func_t<i32, phBoundTerrainLocal, class phBoundPolygonal const*, class phColliderBase*,
            class Matrix34 const*, class Matrix34 const*, class phIntersection*, i32, i32*>>(
            0x4903D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4903F0 | ?TestBoundPolyTerrain@phBoundTerrainLocal@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@22PAVphIntersection@@HPAHPBVVector3@@_N@Z
    inline i32 TestBoundPolyTerrain(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
        class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class phIntersection* arg6,
        i32 arg7, i32* arg8, class Vector3 const* arg9, bool arg10)
    {
        return stub<member_func_t<i32, phBoundTerrainLocal, class phBoundPolygonal const*, class phColliderBase*,
            class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class phIntersection*, i32, i32*,
            class Vector3 const*, bool>>(0x4903F0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x490400 | ?FindImpactsHotdogToTerrainLocal@phBoundTerrainLocal@@QBEHPBVphBoundHotdog@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    inline i32 FindImpactsHotdogToTerrainLocal(class phBoundHotdog const* arg1, class Matrix34 const* arg2,
        class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
        i32 arg7, class Vector3 const& arg8, class Vector3 const& arg9)
    {
        return stub<member_func_t<i32, phBoundTerrainLocal, class phBoundHotdog const*, class Matrix34 const*,
            class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32,
            class Vector3 const&, class Vector3 const&>>(
            0x490400, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
};
