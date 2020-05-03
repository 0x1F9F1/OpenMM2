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

#include "boundgeom.h"

phBoundGeometry::phBoundGeometry()
{
    unimplemented();
}

phBoundGeometry::~phBoundGeometry()
{
    unimplemented();
}

void phBoundGeometry::CalculatePolyNormals()
{
    return stub<thiscall_t<void, phBoundGeometry*>>(0x486C39, this);
}

void phBoundGeometry::ComputeEdgeNormals()
{
    return stub<thiscall_t<void, phBoundGeometry*>>(0x486739, this);
}

void phBoundGeometry::ComputeEdgeNums()
{
    return stub<thiscall_t<void, phBoundGeometry*>>(0x486659, this);
}

void phBoundGeometry::ComputeEdges()
{
    return stub<thiscall_t<void, phBoundGeometry*>>(0x4863F9, this);
}

f32 phBoundGeometry::GetEdgeCosine(i32 arg1)
{
    return stub<thiscall_t<f32, phBoundGeometry*, i32>>(0x46A5C0, this, arg1);
}

class Vector3 const& phBoundGeometry::GetEdgeNormal(i32 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<class Vector3 const&, phBoundGeometry*, i32, class Vector3&>>(0x46A5D0, this, arg1, arg2);
}

class phMaterial const* phBoundGeometry::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, phBoundGeometry*, i32>>(0x4871A0, this, arg1);
}

bool phBoundGeometry::GhostSection(
    class phBoundGeometry const* arg1, class Vector3 const* arg2, i32 arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<bool, phBoundGeometry*, class phBoundGeometry const*, class Vector3 const*, i32, f32, f32>>(
        0x486D39, this, arg1, arg2, arg3, arg4, arg5);
}

void phBoundGeometry::Init(i32 arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, phBoundGeometry*, i32, i32, i32, i32>>(0x485670, this, arg1, arg2, arg3, arg4);
}

bool phBoundGeometry::Load(char const* arg1, class Vector3 const* arg2)
{
    return stub<thiscall_t<bool, phBoundGeometry*, char const*, class Vector3 const*>>(0x4857AB, this, arg1, arg2);
}

bool phBoundGeometry::LoadBinary(char const* arg1)
{
    return stub<thiscall_t<bool, phBoundGeometry*, char const*>>(0x4860B9, this, arg1);
}

bool phBoundGeometry::OverlapRegion(class Vector3 const* arg1, i32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<bool, phBoundGeometry*, class Vector3 const*, i32, f32, f32>>(
        0x486C69, this, arg1, arg2, arg3, arg4);
}

void phBoundGeometry::ReComputeEdgeNormals()
{
    return stub<thiscall_t<void, phBoundGeometry*>>(0x4867A9, this);
}

void phBoundGeometry::ScaleSize(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, phBoundGeometry*, f32, f32, f32>>(0x4862C9, this, arg1, arg2, arg3);
}

void phBoundGeometry::SetQuickTestInfo()
{
    return stub<thiscall_t<void, phBoundGeometry*>>(0x486B89, this);
}

void phBoundGeometry::ShiftCentroid(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundGeometry*, class Vector3 const&>>(0x4863A9, this, arg1);
}

void phBoundGeometry::PostLoadCompute()
{
    return stub<thiscall_t<void, phBoundGeometry*>>(0x485780, this);
}

i32 phBoundGeometry::EdgeInList(i32 arg1, i32 arg2, i32 arg3, class phHotEdge* arg4)
{
    return stub<cdecl_t<i32, i32, i32, i32, class phHotEdge*>>(0x486609, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(phbound_boundgeom);
