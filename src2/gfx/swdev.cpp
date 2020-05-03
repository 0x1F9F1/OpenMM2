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

#include "swdev.h"

i32 __stdcall AgeDevice::QueryInterface(struct _GUID const& arg1, void** arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _GUID const&, void**>>(0x4BA6D0, this, arg1, arg2);
}

u32 __stdcall AgeDevice::AddRef()
{
    return stub<stdcall_t<u32, AgeDevice*>>(0x4BA6C0, this);
}

u32 __stdcall AgeDevice::Release()
{
    return stub<stdcall_t<u32, AgeDevice*>>(0x4BA690, this);
}

i32 __stdcall AgeDevice::GetCaps(struct _D3DDeviceDesc7* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _D3DDeviceDesc7*>>(0x4BA630, this, arg1);
}

i32 __stdcall AgeDevice::EnumTextureFormats(i32(__stdcall* arg1)(struct _DDPIXELFORMAT*, void*), void* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, i32(__stdcall*)(struct _DDPIXELFORMAT*, void*), void*>>(
        0x4BA600, this, arg1, arg2);
}

i32 __stdcall AgeDevice::BeginScene()
{
    return stub<stdcall_t<i32, AgeDevice*>>(0x4BA590, this);
}

i32 __stdcall AgeDevice::EndScene()
{
    return stub<stdcall_t<i32, AgeDevice*>>(0x4BA570, this);
}

i32 __stdcall AgeDevice::GetDirect3D(struct IDirect3D7** arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct IDirect3D7**>>(0x4BA550, this, arg1);
}

i32 __stdcall AgeDevice::SetRenderTarget(struct IDirectDrawSurface7* arg1, u32 arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, struct IDirectDrawSurface7*, u32>>(0x4BA390, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetRenderTarget(struct IDirectDrawSurface7** arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct IDirectDrawSurface7**>>(0x4BA370, this, arg1);
}

i32 __stdcall AgeDevice::Clear(u32 arg1, struct _D3DRECT* arg2, u32 arg3, u32 arg4, f32 arg5, u32 arg6)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, struct _D3DRECT*, u32, u32, f32, u32>>(
        0x4BA2B0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 __stdcall AgeDevice::SetTransform(enum _D3DTRANSFORMSTATETYPE arg1, struct _D3DMATRIX* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DTRANSFORMSTATETYPE, struct _D3DMATRIX*>>(
        0x4BA2A0, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetTransform(enum _D3DTRANSFORMSTATETYPE arg1, struct _D3DMATRIX* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DTRANSFORMSTATETYPE, struct _D3DMATRIX*>>(
        0x4BA280, this, arg1, arg2);
}

i32 __stdcall AgeDevice::SetViewport(struct _D3DVIEWPORT7* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _D3DVIEWPORT7*>>(0x4BA270, this, arg1);
}

i32 __stdcall AgeDevice::MultiplyTransform(enum _D3DTRANSFORMSTATETYPE arg1, struct _D3DMATRIX* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DTRANSFORMSTATETYPE, struct _D3DMATRIX*>>(
        0x4BA250, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetViewport(struct _D3DVIEWPORT7* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _D3DVIEWPORT7*>>(0x4BA230, this, arg1);
}

i32 __stdcall AgeDevice::SetMaterial(struct _D3DMATERIAL7* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _D3DMATERIAL7*>>(0x4BA210, this, arg1);
}

i32 __stdcall AgeDevice::GetMaterial(struct _D3DMATERIAL7* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _D3DMATERIAL7*>>(0x4BA1F0, this, arg1);
}

i32 __stdcall AgeDevice::SetLight(u32 arg1, struct _D3DLIGHT7* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, struct _D3DLIGHT7*>>(0x4BA1C0, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetLight(u32 arg1, struct _D3DLIGHT7* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, struct _D3DLIGHT7*>>(0x4BA190, this, arg1, arg2);
}

i32 __stdcall AgeDevice::SetRenderState(enum _D3DRENDERSTATETYPE arg1, u32 arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DRENDERSTATETYPE, u32>>(0x4BA170, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetRenderState(enum _D3DRENDERSTATETYPE arg1, u32* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DRENDERSTATETYPE, u32*>>(0x4BA150, this, arg1, arg2);
}

i32 __stdcall AgeDevice::BeginStateBlock()
{
    return stub<stdcall_t<i32, AgeDevice*>>(0x4BA130, this);
}

i32 __stdcall AgeDevice::EndStateBlock(u32* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, u32*>>(0x4BA110, this, arg1);
}

i32 __stdcall AgeDevice::PreLoad(struct IDirectDrawSurface7* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct IDirectDrawSurface7*>>(0x4BA0F0, this, arg1);
}

i32 __stdcall AgeDevice::DrawPrimitive(enum _D3DPRIMITIVETYPE arg1, u32 arg2, void* arg3, u32 arg4, u32 arg5)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DPRIMITIVETYPE, u32, void*, u32, u32>>(
        0x4B9FF0, this, arg1, arg2, arg3, arg4, arg5);
}

i32 __stdcall AgeDevice::DrawIndexedPrimitive(
    enum _D3DPRIMITIVETYPE arg1, u32 arg2, void* arg3, u32 arg4, u16* arg5, u32 arg6, u32 arg7)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DPRIMITIVETYPE, u32, void*, u32, u16*, u32, u32>>(
        0x4B9E50, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 __stdcall AgeDevice::SetClipStatus(struct _D3DCLIPSTATUS* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _D3DCLIPSTATUS*>>(0x4B9E30, this, arg1);
}

i32 __stdcall AgeDevice::GetClipStatus(struct _D3DCLIPSTATUS* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _D3DCLIPSTATUS*>>(0x4B9E10, this, arg1);
}

i32 __stdcall AgeDevice::DrawPrimitiveStrided(
    enum _D3DPRIMITIVETYPE arg1, u32 arg2, struct _D3DDRAWPRIMITIVESTRIDEDDATA* arg3, u32 arg4, u32 arg5)
{
    return stub<
        stdcall_t<i32, AgeDevice*, enum _D3DPRIMITIVETYPE, u32, struct _D3DDRAWPRIMITIVESTRIDEDDATA*, u32, u32>>(
        0x4B9DF0, this, arg1, arg2, arg3, arg4, arg5);
}

i32 __stdcall AgeDevice::DrawIndexedPrimitiveStrided(enum _D3DPRIMITIVETYPE arg1, u32 arg2,
    struct _D3DDRAWPRIMITIVESTRIDEDDATA* arg3, u32 arg4, u16* arg5, u32 arg6, u32 arg7)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DPRIMITIVETYPE, u32, struct _D3DDRAWPRIMITIVESTRIDEDDATA*, u32, u16*,
        u32, u32>>(0x4B9DD0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 __stdcall AgeDevice::DrawPrimitiveVB(
    enum _D3DPRIMITIVETYPE arg1, struct IDirect3DVertexBuffer7* arg2, u32 arg3, u32 arg4, u32 arg5)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DPRIMITIVETYPE, struct IDirect3DVertexBuffer7*, u32, u32, u32>>(
        0x4B9DB0, this, arg1, arg2, arg3, arg4, arg5);
}

i32 __stdcall AgeDevice::DrawIndexedPrimitiveVB(
    enum _D3DPRIMITIVETYPE arg1, struct IDirect3DVertexBuffer7* arg2, u32 arg3, u32 arg4, u16* arg5, u32 arg6, u32 arg7)
{
    return stub<
        stdcall_t<i32, AgeDevice*, enum _D3DPRIMITIVETYPE, struct IDirect3DVertexBuffer7*, u32, u32, u16*, u32, u32>>(
        0x4B9D90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 __stdcall AgeDevice::ComputeSphereVisibility(struct _D3DVECTOR* arg1, f32* arg2, u32 arg3, u32 arg4, u32* arg5)
{
    return stub<stdcall_t<i32, AgeDevice*, struct _D3DVECTOR*, f32*, u32, u32, u32*>>(
        0x4B9D70, this, arg1, arg2, arg3, arg4, arg5);
}

i32 __stdcall AgeDevice::GetTexture(u32 arg1, struct IDirectDrawSurface7** arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, struct IDirectDrawSurface7**>>(0x4B9D50, this, arg1, arg2);
}

i32 __stdcall AgeDevice::SetTexture(u32 arg1, struct IDirectDrawSurface7* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, struct IDirectDrawSurface7*>>(0x4B9CB0, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetTextureStageState(u32 arg1, enum _D3DTEXTURESTAGESTATETYPE arg2, u32* arg3)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, enum _D3DTEXTURESTAGESTATETYPE, u32*>>(
        0x4B9C90, this, arg1, arg2, arg3);
}

i32 __stdcall AgeDevice::SetTextureStageState(u32 arg1, enum _D3DTEXTURESTAGESTATETYPE arg2, u32 arg3)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, enum _D3DTEXTURESTAGESTATETYPE, u32>>(0x4B9A50, this, arg1, arg2, arg3);
}

i32 __stdcall AgeDevice::ValidateDevice(u32* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, u32*>>(0x4B9A30, this, arg1);
}

i32 __stdcall AgeDevice::ApplyStateBlock(u32 arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, u32>>(0x4B9A10, this, arg1);
}

i32 __stdcall AgeDevice::CaptureStateBlock(u32 arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, u32>>(0x4B99F0, this, arg1);
}

i32 __stdcall AgeDevice::DeleteStateBlock(u32 arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, u32>>(0x4B99D0, this, arg1);
}

i32 __stdcall AgeDevice::CreateStateBlock(enum _D3DSTATEBLOCKTYPE arg1, u32* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, enum _D3DSTATEBLOCKTYPE, u32*>>(0x4B99B0, this, arg1, arg2);
}

i32 __stdcall AgeDevice::Load(struct IDirectDrawSurface7* arg1, struct tagPOINT* arg2, struct IDirectDrawSurface7* arg3,
    struct tagRECT* arg4, u32 arg5)
{
    return stub<stdcall_t<i32, AgeDevice*, struct IDirectDrawSurface7*, struct tagPOINT*, struct IDirectDrawSurface7*,
        struct tagRECT*, u32>>(0x4B9950, this, arg1, arg2, arg3, arg4, arg5);
}

i32 __stdcall AgeDevice::LightEnable(u32 arg1, i32 arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, i32>>(0x4B9930, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetLightEnable(u32 arg1, i32* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, i32*>>(0x4B9910, this, arg1, arg2);
}

i32 __stdcall AgeDevice::SetClipPlane(u32 arg1, f32* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, f32*>>(0x4B98F0, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetClipPlane(u32 arg1, f32* arg2)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, f32*>>(0x4B98D0, this, arg1, arg2);
}

i32 __stdcall AgeDevice::GetInfo(u32 arg1, void* arg2, u32 arg3)
{
    return stub<stdcall_t<i32, AgeDevice*, u32, void*, u32>>(0x4B98B0, this, arg1, arg2, arg3);
}

i32 __stdcall AgeDevice::Initialize(struct IDirectDrawSurface7* arg1)
{
    return stub<stdcall_t<i32, AgeDevice*, struct IDirectDrawSurface7*>>(0x4BA6F0, this, arg1);
}

define_dummy_symbol(gfx_swdev);
