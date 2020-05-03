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

#include "packet.h"

gfxPacket::gfxPacket(class gfxPacket const* arg1)
{
    unimplemented();
}

gfxPacket::gfxPacket(u32 arg1, u32 arg2, u32 arg3, u8 const* arg4, u32 arg5, u16 const* arg6, u32 arg7,
    class gfxReskin* arg8, u32 arg9, u8 arg10, u8 const* arg11, u8 const* arg12, bool arg13)
{
    unimplemented();
}

class gfxPacket* gfxPacket::Clone()
{
    return stub<thiscall_t<class gfxPacket*, gfxPacket*>>(0x4B40F0, this);
}

void gfxPacket::CopyFrom(class gfxPacket const* arg1)
{
    return stub<thiscall_t<void, gfxPacket*, class gfxPacket const*>>(0x4B4260, this, arg1);
}

void gfxPacket::Draw(u32 arg1)
{
    return stub<thiscall_t<void, gfxPacket*, u32>>(0x4B3340, this, arg1);
}

void gfxPacket::Draw(class Matrix44 const* arg1, u32 arg2)
{
    return stub<thiscall_t<void, gfxPacket*, class Matrix44 const*, u32>>(0x4B34E0, this, arg1, arg2);
}

void gfxPacket::GetNormal(class Vector3& arg1, i32 arg2)
{
    return stub<thiscall_t<void, gfxPacket*, class Vector3&, i32>>(0x4B3CF0, this, arg1, arg2);
}

void gfxPacket::GetPosition(class Vector3& arg1, i32 arg2)
{
    return stub<thiscall_t<void, gfxPacket*, class Vector3&, i32>>(0x4B3C10, this, arg1, arg2);
}

void gfxPacket::GetSkinnedVert(class Matrix34 const* arg1, class Vector3& arg2, i32 arg3)
{
    return stub<thiscall_t<void, gfxPacket*, class Matrix34 const*, class Vector3&, i32>>(
        0x4B3BE0, this, arg1, arg2, arg3);
}

void gfxPacket::GetTexCoord(class Vector2& arg1, i32 arg2)
{
    return stub<thiscall_t<void, gfxPacket*, class Vector2&, i32>>(0x4B3E20, this, arg1, arg2);
}

void gfxPacket::GetTri(i32* const arg1, i32 arg2)
{
    return stub<thiscall_t<void, gfxPacket*, i32* const, i32>>(0x4B3EC0, this, arg1, arg2);
}

void gfxPacket::OrthoMap(f32 arg1)
{
    return stub<thiscall_t<void, gfxPacket*, f32>>(0x4B4760, this, arg1);
}

void gfxPacket::SetNormal(class Vector3 const& arg1, i32 arg2)
{
    return stub<thiscall_t<void, gfxPacket*, class Vector3 const&, i32>>(0x4B3D90, this, arg1, arg2);
}

void gfxPacket::SetPosition(class Vector3 const& arg1, i32 arg2)
{
    return stub<thiscall_t<void, gfxPacket*, class Vector3 const&, i32>>(0x4B3C70, this, arg1, arg2);
}

void gfxPacket::AutoSetPacking(u32 arg1, u32 arg2, u8 const* arg3)
{
    return stub<cdecl_t<void, u32, u32, u8 const*>>(0x4B3F60, arg1, arg2, arg3);
}

void gfxPacket::BeginProp()
{
    return stub<cdecl_t<void>>(0x4B3330);
}

void gfxPacket::BeginRef()
{
    return stub<cdecl_t<void>>(0x4B3320);
}

void gfxPacket::DrawList(class gfxPacketList const* arg1)
{
    return stub<cdecl_t<void, class gfxPacketList const*>>(0x4B4870, arg1);
}

void gfxPacket::ForceCPV(u32 arg1)
{
    return stub<cdecl_t<void, u32>>(0x4B3310, arg1);
}

void gfxPacket::FreeAllVertexBuffers()
{
    return stub<cdecl_t<void>>(0x4B4640);
}

class gfxPacketList* gfxPacket::MakeList(class gfxPacket* arg1)
{
    return stub<cdecl_t<class gfxPacketList*, class gfxPacket*>>(0x4B4860, arg1);
}

void gfxPacket::ReserveVertexBuffer(u32 arg1, u32 arg2)
{
    return stub<cdecl_t<void, u32, u32>>(0x4B4570, arg1, arg2);
}

void gfxPacket::RestoreAllVertexBuffers()
{
    return stub<cdecl_t<void>>(0x4B4690);
}

void gfxPacket::SetDefaultPacking()
{
    return stub<cdecl_t<void>>(0x4B3F40);
}

void gfxPacket::SetPacking(f32 arg1, u8 arg2, u8 arg3, u8 arg4, f32 arg5, u8 arg6)
{
    return stub<cdecl_t<void, f32, u8, u8, u8, f32, u8>>(0x4B3F00, arg1, arg2, arg3, arg4, arg5, arg6);
}

void gfxPacket::AllocateVertexBuffer()
{
    return stub<thiscall_t<void, gfxPacket*>>(0x4B43E0, this);
}

void gfxPacket::DoLock()
{
    return stub<thiscall_t<void, gfxPacket*>>(0x4B4720, this);
}

void gfxPacket::DoUnlock()
{
    return stub<thiscall_t<void, gfxPacket*>>(0x4B4740, this);
}

u8* gfxPacket::Persist(struct IDirect3DVertexBuffer7* arg1, u32 arg2, void* arg3, u32 arg4)
{
    return stub<cdecl_t<u8*, struct IDirect3DVertexBuffer7*, u32, void*, u32>>(0x4B45D0, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(gfx_packet);
