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

#include "levelbound.h"

class phMaterial const* lvlLevelBound::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, lvlLevelBound*, i32>>(0x46A720, this, arg1);
}

bool lvlLevelBound::TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class phSegment&, class phIntersectionPoint*>>(
        0x46A6E0, this, arg1, arg2);
}

i32 lvlLevelBound::TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, lvlLevelBound*, class phSegment&, class phIntersection*, i32>>(
        0x46A690, this, arg1, arg2, arg3);
}

bool lvlLevelBound::TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class phSegment&, class phIntersection*, f32>>(
        0x46A6A0, this, arg1, arg2, arg3);
}

bool lvlLevelBound::TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class phSegment&, class phIntersectionPoint*, f32>>(
        0x46A6D0, this, arg1, arg2, arg3);
}

bool lvlLevelBound::TestSphere(class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
        0x46A6F0, this, arg1, arg2, arg3, arg4, arg5);
}

bool lvlLevelBound::TestAI(class phSegment& arg1, class phIntersection* arg2)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class phSegment&, class phIntersection*>>(0x46A6B0, this, arg1, arg2);
}

i32 lvlLevelBound::TestEdgePoint(class phSegment& arg1, class phIntersectionPoint* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, lvlLevelBound*, class phSegment&, class phIntersectionPoint*, i32>>(
        0x46A6C0, this, arg1, arg2, arg3);
}

i32 lvlLevelBound::CollideEdge(class lvlSegment& arg1, class lvlIntersection* arg2, i32 arg3, i32* arg4, i32 arg5)
{
    return stub<thiscall_t<i32, lvlLevelBound*, class lvlSegment&, class lvlIntersection*, i32, i32*, i32>>(
        0x0, this, arg1, arg2, arg3, arg4, arg5);
}

bool lvlLevelBound::CollideProbe(class lvlSegment& arg1, class lvlIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class lvlSegment&, class lvlIntersection*, f32>>(
        0x0, this, arg1, arg2, arg3);
}

bool lvlLevelBound::CollideAI(class lvlSegment& arg1, class lvlIntersection* arg2, i32* arg3, i32 arg4)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class lvlSegment&, class lvlIntersection*, i32*, i32>>(
        0x0, this, arg1, arg2, arg3, arg4);
}

i32 lvlLevelBound::CollideEdgePoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, lvlLevelBound*, class lvlSegment&, class lvlIntersectionPoint*, i32>>(
        0x0, this, arg1, arg2, arg3);
}

bool lvlLevelBound::CollideProbePoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class lvlSegment&, class lvlIntersectionPoint*, f32>>(
        0x0, this, arg1, arg2, arg3);
}

bool lvlLevelBound::CollideAIPoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class lvlSegment&, class lvlIntersectionPoint*>>(
        0x0, this, arg1, arg2);
}

char* lvlLevelBound::AllocateState()
{
    return stub<thiscall_t<char*, lvlLevelBound*>>(0x46A680, this);
}

f32 lvlLevelBound::GetEdgeCosine(i32 arg1)
{
    return stub<thiscall_t<f32, lvlLevelBound*, i32>>(0x46A700, this, arg1);
}

class Vector3 const& lvlLevelBound::GetEdgeNormal(i32 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<class Vector3 const&, lvlLevelBound*, i32, class Vector3&>>(0x46A710, this, arg1, arg2);
}

bool lvlLevelBound::TrivialCollideBoxToLevel(class phBoundBox const* arg1, i32 arg2, class phColliderBase* arg3,
    class Matrix34 const* arg4, class Matrix34 const* arg5)
{
    return stub<thiscall_t<bool, lvlLevelBound*, class phBoundBox const*, i32, class phColliderBase*,
        class Matrix34 const*, class Matrix34 const*>>(0x46B580, this, arg1, arg2, arg3, arg4, arg5);
}

i32 lvlLevelBound::CollidePolyToLevel(class phBoundPolygonal const* arg1, i32* arg2, i32 arg3,
    class phColliderBase* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6, class lvlIntersection* arg7,
    i32 arg8, i32* arg9, bool arg10)
{
    return stub<thiscall_t<i32, lvlLevelBound*, class phBoundPolygonal const*, i32*, i32, class phColliderBase*,
        class Matrix34 const*, class Matrix34 const*, class lvlIntersection*, i32, i32*, bool>>(
        0x46A750, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

i32 lvlLevelBound::FindImpactsSphereOneRoom(i32 arg1, class phBoundSphere const* arg2, class Vector3 const& arg3,
    class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6, i32 arg7)
{
    return stub<thiscall_t<i32, lvlLevelBound*, i32, class phBoundSphere const*, class Vector3 const&,
        class phColliderBase*, class phColliderBase*, class phImpactBase*, i32>>(
        0x45CFB0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 lvlLevelBound::FindImpactsHotdogOneRoom(i32 arg1, class Vector3 const* const arg2, class phBoundHotdog const* arg3,
    class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6, class phColliderBase* arg7,
    class phImpactBase* arg8, i32 arg9, class Vector3 const& arg10)
{
    return stub<thiscall_t<i32, lvlLevelBound*, i32, class Vector3 const* const, class phBoundHotdog const*,
        class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*,
        i32, class Vector3 const&>>(0x45CFC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

define_dummy_symbol(phys_levelbound);
