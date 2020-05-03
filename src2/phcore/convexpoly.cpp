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

#include "convexpoly.h"

void phConvexPoly::AdvanceV()
{
    return stub<cdecl_t<void>>(0x4976A0);
}

i32 phConvexPoly::ConvexPolyIntersect(
    i32 arg1, class Vector2 const* arg2, i32 arg3, class Vector2 const* arg4, struct phConvexPoly::Data* arg5)
{
    return stub<cdecl_t<i32, i32, class Vector2 const*, i32, class Vector2 const*, struct phConvexPoly::Data*>>(
        0x496F10, arg1, arg2, arg3, arg4, arg5);
}

void phConvexPoly::GetuHeadOut()
{
    return stub<cdecl_t<void>>(0x4977D0);
}

void phConvexPoly::GetuTailOut()
{
    return stub<cdecl_t<void>>(0x497870);
}

void phConvexPoly::GetvHeadOut()
{
    return stub<cdecl_t<void>>(0x497730);
}

void phConvexPoly::PrecomputeRays(i32 arg1, class Vector2 const* arg2, class Vector2* arg3, f32* arg4)
{
    return stub<cdecl_t<void, i32, class Vector2 const*, class Vector2*, f32*>>(0x497630, arg1, arg2, arg3, arg4);
}

void phConvexPoly::RecordEE()
{
    return stub<cdecl_t<void>>(0x4978F0);
}

void phConvexPoly::RecordInteriorCollides(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x497AF0, arg1);
}

void phConvexPoly::RecordNoIsect(i32 arg1)
{
    return stub<cdecl_t<void, i32>>(0x497AC0, arg1);
}

void phConvexPoly::RecordTail(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x497A00, arg1);
}

void phConvexPoly::RecordUTail()
{
    return stub<cdecl_t<void>>(0x4979D0);
}

void phConvexPoly::RecordVTail()
{
    return stub<cdecl_t<void>>(0x4979E0);
}

define_dummy_symbol(phcore_convexpoly);
