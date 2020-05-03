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

#include "rstate.h"

void gfxRenderState::Default()
{
    return stub<thiscall_t<void, gfxRenderState*>>(0x4B1DA0, this);
}

void gfxRenderState::DisableAllLights()
{
    return stub<thiscall_t<void, gfxRenderState*>>(0x4B22D0, this);
}

void gfxRenderState::DoFlush(class gfxRenderStateData* arg1)
{
    return stub<thiscall_t<void, gfxRenderState*, class gfxRenderStateData*>>(0x4B4C40, this, arg1);
}

void gfxRenderState::GetLight(i32 arg1, struct gfxLight* arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, i32, struct gfxLight*>>(0x4B2300, this, arg1, arg2);
}

u32 gfxRenderState::LerpRGBA(u32 arg1, u32 arg2, f32 arg3)
{
    return stub<thiscall_t<u32, gfxRenderState*, u32, u32, f32>>(0x4B2150, this, arg1, arg2, arg3);
}

void gfxRenderState::LightEnable(i32 arg1, bool arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, i32, bool>>(0x4B2220, this, arg1, arg2);
}

void gfxRenderState::SetBlendMatrix(i32 arg1, class Matrix44 const& arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, i32, class Matrix44 const&>>(0x4B2660, this, arg1, arg2);
}

void gfxRenderState::SetBlendSet(enum gfxBlendSet arg1, u8 arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, enum gfxBlendSet, u8>>(0x4B2350, this, arg1, arg2);
}

void gfxRenderState::SetLight(i32 arg1, struct gfxLight const* arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, i32, struct gfxLight const*>>(0x4B2270, this, arg1, arg2);
}

void gfxRenderState::SetTexMatrix(i32 arg1, class Matrix44 const& arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, i32, class Matrix44 const&>>(0x4B2640, this, arg1, arg2);
}

void gfxRenderState::SetTexMipmapBias(i32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, i32, f32>>(0x4B2620, this, arg1, arg2);
}

void gfxRenderState::SetTexSource(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, i32, i32>>(0x4B2330, this, arg1, arg2);
}

void gfxRenderState::SetTexTransform(i32 arg1, i32 arg2, bool arg3)
{
    return stub<thiscall_t<void, gfxRenderState*, i32, i32, bool>>(0x4B25F0, this, arg1, arg2, arg3);
}

void gfxRenderState::SetCamera(class Matrix34 const& arg1)
{
    return stub<cdecl_t<void, class Matrix34 const&>>(0x4B2970, arg1);
}

void gfxRenderState::SetCamera(class Matrix44 const& arg1)
{
    return stub<cdecl_t<void, class Matrix44 const&>>(0x4B2A20, arg1);
}

void gfxRenderState::SetCameraFull(class Matrix34 const& arg1)
{
    return stub<cdecl_t<void, class Matrix34 const&>>(0x4B2B50, arg1);
}

void gfxRenderState::SetCard(class Vector3 const& arg1)
{
    return stub<cdecl_t<void, class Vector3 const&>>(0x4B2680, arg1);
}

void gfxRenderState::SetCard(class Vector4 const& arg1)
{
    return stub<cdecl_t<void, class Vector4 const&>>(0x4B2750, arg1);
}

void gfxRenderState::_SetView(class Matrix34 const& arg1)
{
    return stub<cdecl_t<void, class Matrix34 const&>>(0x4B2A80, arg1);
}

void gfxRenderState::CheckSet(u8& arg1, u8 arg2)
{
    return stub<thiscall_t<void, gfxRenderState*, u8&, u8>>(0x43F480, this, arg1, arg2);
}

void gfxRenderState::Init()
{
    return stub<thiscall_t<void, gfxRenderState*>>(0x4B1C70, this);
}

void gfxRenderState::Regenerate()
{
    return stub<cdecl_t<void>>(0x4B2820);
}

void gfxMaterial::Reset()
{
    return stub<thiscall_t<void, gfxMaterial*>>(0x4B1BB0, this);
}

void gfxLight::Reset()
{
    return stub<thiscall_t<void, gfxLight*>>(0x4B1C00, this);
}

define_dummy_symbol(gfx_rstate);
