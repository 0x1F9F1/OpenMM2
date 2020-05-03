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

#include "inst.h"

lvlInstance::lvlInstance()
{
    unimplemented();
}

lvlInstance::~lvlInstance()
{
    unimplemented();
}

i32 lvlInstance::AddGeom(char const* arg1, char const* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, lvlInstance*, char const*, char const*, i32>>(0x463BA0, this, arg1, arg2, arg3);
}

bool lvlInstance::BeginGeom(char const* arg1, char const* arg2, i32 arg3)
{
    return stub<thiscall_t<bool, lvlInstance*, char const*, char const*, i32>>(0x463A80, this, arg1, arg2, arg3);
}

void lvlInstance::EndGeom()
{
    return stub<thiscall_t<void, lvlInstance*>>(0x463BC0, this);
}

class Vector4& lvlInstance::GetBoundSphere(class Vector4& arg1)
{
    return stub<thiscall_t<class Vector4&, lvlInstance*, class Vector4&>>(0x463A40, this, arg1);
}

bool lvlInstance::InitBoundTerrain(char const* arg1)
{
    return stub<thiscall_t<bool, lvlInstance*, char const*>>(0x463DA0, this, arg1);
}

bool lvlInstance::InitBoundTerrainLocal(char const* arg1)
{
    return stub<thiscall_t<bool, lvlInstance*, char const*>>(0x463F50, this, arg1);
}

i32 lvlInstance::InitGhost(char const* arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<i32, lvlInstance*, char const*, class Matrix34 const&>>(0x464330, this, arg1, arg2);
}

bool lvlInstance::InitGhostBound(class phBound* arg1, class Vector3 const* arg2, i32 arg3)
{
    return stub<thiscall_t<bool, lvlInstance*, class phBound*, class Vector3 const*, i32>>(
        0x464200, this, arg1, arg2, arg3);
}

bool lvlInstance::LoadBoundOnLastEntry(char const* arg1)
{
    return stub<thiscall_t<bool, lvlInstance*, char const*>>(0x463940, this, arg1);
}

bool lvlInstance::NeedGhostBound(class Vector3 const* arg1, i32 arg2)
{
    return stub<thiscall_t<bool, lvlInstance*, class Vector3 const*, i32>>(0x4641A0, this, arg1, arg2);
}

void lvlInstance::Optimize(i32 arg1)
{
    return stub<thiscall_t<void, lvlInstance*, i32>>(0x464B70, this, arg1);
}

void lvlInstance::PreLoadShader(i32 arg1)
{
    return stub<thiscall_t<void, lvlInstance*, i32>>(0x464B00, this, arg1);
}

void lvlInstance::Reset()
{
    return stub<thiscall_t<void, lvlInstance*>>(0x463280, this);
}

class Vector3 const& lvlInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, lvlInstance*>>(0x0, this);
}

i32 lvlInstance::IsVisible(class gfxViewport const& arg1)
{
    return stub<thiscall_t<i32, lvlInstance*, class gfxViewport const&>>(0x4649F0, this, arg1);
}

class Matrix34 const& lvlInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, lvlInstance*, class Matrix34&>>(0x0, this, arg1);
}

void lvlInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, lvlInstance*, class Matrix34 const&>>(0x0, this, arg1);
}

void lvlInstance::SetVariant(i32 arg1)
{
    return stub<thiscall_t<void, lvlInstance*, i32>>(0x4643D0, this, arg1);
}

f32 const lvlInstance::GetRadius()
{
    return stub<thiscall_t<f32 const, lvlInstance*>>(0x4643E0, this);
}

class dgPhysEntity* lvlInstance::GetEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, lvlInstance*>>(0x4643B0, this);
}

class dgPhysEntity* lvlInstance::AttachEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, lvlInstance*>>(0x4643C0, this);
}

class Vector3 const& lvlInstance::GetVelocity()
{
    return stub<thiscall_t<class Vector3 const&, lvlInstance*>>(0x4643A0, this);
}

void lvlInstance::Detach()
{
    return stub<thiscall_t<void, lvlInstance*>>(0x43FC30, this);
}

void lvlInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, lvlInstance*, i32>>(0x0, this, arg1);
}

void lvlInstance::DrawShadow()
{
    return stub<thiscall_t<void, lvlInstance*>>(0x4643F0, this);
}

void lvlInstance::DrawShadowMap()
{
    return stub<thiscall_t<void, lvlInstance*>>(0x464400, this);
}

void lvlInstance::DrawGlow()
{
    return stub<thiscall_t<void, lvlInstance*>>(0x464410, this);
}

void lvlInstance::DrawReflected(f32 arg1)
{
    return stub<thiscall_t<void, lvlInstance*, f32>>(0x464420, this, arg1);
}

void lvlInstance::DrawReflectedParts(i32 arg1)
{
    return stub<thiscall_t<void, lvlInstance*, i32>>(0x4648B0, this, arg1);
}

i32 lvlInstance::Init(char const* arg1, class Matrix34 const& arg2, i32 arg3)
{
    return stub<thiscall_t<i32, lvlInstance*, char const*, class Matrix34 const&, i32>>(
        0x463D90, this, arg1, arg2, arg3);
}

u32 lvlInstance::SizeOf()
{
    return stub<thiscall_t<u32, lvlInstance*>>(0x0, this);
}

bool lvlInstance::IsLandmark()
{
    return stub<thiscall_t<bool, lvlInstance*>>(0x463180, this);
}

bool lvlInstance::IsCollidable()
{
    return stub<thiscall_t<bool, lvlInstance*>>(0x43FC40, this);
}

bool lvlInstance::IsTerrainCollidable()
{
    return stub<thiscall_t<bool, lvlInstance*>>(0x43FC50, this);
}

i32 lvlInstance::GetNumLightSources()
{
    return stub<thiscall_t<i32, lvlInstance*>>(0x4632B0, this);
}

void lvlInstance::GetLightInfo(i32 arg1, class cltLight* arg2)
{
    return stub<thiscall_t<void, lvlInstance*, i32, class cltLight*>>(0x4630B0, this, arg1, arg2);
}

i32 lvlInstance::SetupGfxLights(class Matrix34 const& arg1)
{
    return stub<thiscall_t<i32, lvlInstance*, class Matrix34 const&>>(0x464670, this, arg1);
}

class phBound const* lvlInstance::GetBound(i32 arg1)
{
    return stub<thiscall_t<class phBound const*, lvlInstance*, i32>>(0x4648C0, this, arg1);
}

void lvlInstance::operator delete(void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x463170, arg1);
}

void* lvlInstance::operator new(u32 arg1)
{
    return stub<cdecl_t<void*, u32>>(0x463110, arg1);
}

i32 lvlInstance::AddSphere(f32 arg1)
{
    return stub<cdecl_t<i32, f32>>(0x463D50, arg1);
}

bool lvlInstance::ComputeShadowMatrix(class Matrix34& arg1, i32 arg2, class Matrix34 const& arg3)
{
    return stub<cdecl_t<bool, class Matrix34&, i32, class Matrix34 const&>>(0x464430, arg1, arg2, arg3);
}

void lvlInstance::ResetAll()
{
    return stub<cdecl_t<void>>(0x4631E0);
}

void lvlInstance::ResetInstanceHeap()
{
    return stub<cdecl_t<void>>(0x4631A0);
}

void lvlInstance::SetShadowBillboardMtx(class Matrix44& arg1)
{
    return stub<cdecl_t<void, class Matrix44&>>(0x463290, arg1);
}

void lvlInstance::CreateTempBounds()
{
    return stub<cdecl_t<void>>(0x464680);
}

void lvlInstance::DeleteTempBounds()
{
    return stub<cdecl_t<void>>(0x4647E0);
}

i32 lvlInstance::GetGeomSet(char const* arg1, char const* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, char const*, char const*, i32>>(0x4632C0, arg1, arg2, arg3);
}

i32 Init(char const* arg1, class Matrix34 const& arg2)
{
    return stub<cdecl_t<i32, char const*, class Matrix34 const&>>(0x463190, arg1, arg2);
}

define_dummy_symbol(level_inst);
