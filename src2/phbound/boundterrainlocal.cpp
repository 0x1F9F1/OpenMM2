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

#include "boundterrainlocal.h"

phBoundTerrainLocal::phBoundTerrainLocal()
{
    unimplemented();
}

i32 phBoundTerrainLocal::FindImpactsHotdogToTerrainLocal(class phBoundHotdog const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    i32 arg7, class Vector3 const& arg8, class Vector3 const& arg9)
{
    return stub<thiscall_t<i32, phBoundTerrainLocal*, class phBoundHotdog const*, class Matrix34 const*,
        class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32,
        class Vector3 const&, class Vector3 const&>>(
        0x490400, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

i32 phBoundTerrainLocal::TestBoundPolyTerrain(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class phIntersection* arg6,
    i32 arg7, i32* arg8, class Vector3 const* arg9, bool arg10)
{
    return stub<thiscall_t<i32, phBoundTerrainLocal*, class phBoundPolygonal const*, class phColliderBase*,
        class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class phIntersection*, i32, i32*,
        class Vector3 const*, bool>>(0x4903F0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

i32 phBoundTerrainLocal::TestBoundTerrainEdgesVsPoly(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class phIntersection* arg5, i32 arg6, i32* arg7)
{
    return stub<thiscall_t<i32, phBoundTerrainLocal*, class phBoundPolygonal const*, class phColliderBase*,
        class Matrix34 const*, class Matrix34 const*, class phIntersection*, i32, i32*>>(
        0x4903D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 phBoundTerrainLocal::TestBoundTerrainPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class phColliderBase* arg5, class phColliderBase* arg6,
    class phIntersection* arg7, class phIntersection* arg8, i32 arg9, i32* arg10, i32* arg11,
    class Vector3 const& arg12, bool arg13)
{
    return stub<thiscall_t<i32, phBoundTerrainLocal*, class phBoundPolygonal const*, class Matrix34 const*,
        class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*,
        class phIntersection*, class phIntersection*, i32, i32*, i32*, class Vector3 const&, bool>>(
        0x490310, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

define_dummy_symbol(phbound_boundterrainlocal);
