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

#pragma once

/*
    gfx:swdev

    0x4B98B0 | public: virtual long __stdcall AgeDevice::GetInfo(unsigned long,void *,unsigned long) | ?GetInfo@AgeDevice@@UAGJKPAXK@Z
    0x4B98D0 | public: virtual long __stdcall AgeDevice::GetClipPlane(unsigned long,float *) | ?GetClipPlane@AgeDevice@@UAGJKPAM@Z
    0x4B98F0 | public: virtual long __stdcall AgeDevice::SetClipPlane(unsigned long,float *) | ?SetClipPlane@AgeDevice@@UAGJKPAM@Z
    0x4B9910 | public: virtual long __stdcall AgeDevice::GetLightEnable(unsigned long,int *) | ?GetLightEnable@AgeDevice@@UAGJKPAH@Z
    0x4B9930 | public: virtual long __stdcall AgeDevice::LightEnable(unsigned long,int) | ?LightEnable@AgeDevice@@UAGJKH@Z
    0x4B9950 | public: virtual long __stdcall AgeDevice::Load(struct IDirectDrawSurface7 *,struct tagPOINT *,struct IDirectDrawSurface7 *,struct tagRECT *,unsigned long) | ?Load@AgeDevice@@UAGJPAUIDirectDrawSurface7@@PAUtagPOINT@@0PAUtagRECT@@K@Z
    0x4B99B0 | public: virtual long __stdcall AgeDevice::CreateStateBlock(enum _D3DSTATEBLOCKTYPE,unsigned long *) | ?CreateStateBlock@AgeDevice@@UAGJW4_D3DSTATEBLOCKTYPE@@PAK@Z
    0x4B99D0 | public: virtual long __stdcall AgeDevice::DeleteStateBlock(unsigned long) | ?DeleteStateBlock@AgeDevice@@UAGJK@Z
    0x4B99F0 | public: virtual long __stdcall AgeDevice::CaptureStateBlock(unsigned long) | ?CaptureStateBlock@AgeDevice@@UAGJK@Z
    0x4B9A10 | public: virtual long __stdcall AgeDevice::ApplyStateBlock(unsigned long) | ?ApplyStateBlock@AgeDevice@@UAGJK@Z
    0x4B9A30 | public: virtual long __stdcall AgeDevice::ValidateDevice(unsigned long *) | ?ValidateDevice@AgeDevice@@UAGJPAK@Z
    0x4B9A50 | public: virtual long __stdcall AgeDevice::SetTextureStageState(unsigned long,enum _D3DTEXTURESTAGESTATETYPE,unsigned long) | ?SetTextureStageState@AgeDevice@@UAGJKW4_D3DTEXTURESTAGESTATETYPE@@K@Z
    0x4B9C90 | public: virtual long __stdcall AgeDevice::GetTextureStageState(unsigned long,enum _D3DTEXTURESTAGESTATETYPE,unsigned long *) | ?GetTextureStageState@AgeDevice@@UAGJKW4_D3DTEXTURESTAGESTATETYPE@@PAK@Z
    0x4B9CB0 | public: virtual long __stdcall AgeDevice::SetTexture(unsigned long,struct IDirectDrawSurface7 *) | ?SetTexture@AgeDevice@@UAGJKPAUIDirectDrawSurface7@@@Z
    0x4B9D50 | public: virtual long __stdcall AgeDevice::GetTexture(unsigned long,struct IDirectDrawSurface7 * *) | ?GetTexture@AgeDevice@@UAGJKPAPAUIDirectDrawSurface7@@@Z
    0x4B9D70 | public: virtual long __stdcall AgeDevice::ComputeSphereVisibility(struct _D3DVECTOR *,float *,unsigned long,unsigned long,unsigned long *) | ?ComputeSphereVisibility@AgeDevice@@UAGJPAU_D3DVECTOR@@PAMKKPAK@Z
    0x4B9D90 | public: virtual long __stdcall AgeDevice::DrawIndexedPrimitiveVB(enum _D3DPRIMITIVETYPE,struct IDirect3DVertexBuffer7 *,unsigned long,unsigned long,unsigned short *,unsigned long,unsigned long) | ?DrawIndexedPrimitiveVB@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@PAUIDirect3DVertexBuffer7@@KKPAGKK@Z
    0x4B9DB0 | public: virtual long __stdcall AgeDevice::DrawPrimitiveVB(enum _D3DPRIMITIVETYPE,struct IDirect3DVertexBuffer7 *,unsigned long,unsigned long,unsigned long) | ?DrawPrimitiveVB@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@PAUIDirect3DVertexBuffer7@@KKK@Z
    0x4B9DD0 | public: virtual long __stdcall AgeDevice::DrawIndexedPrimitiveStrided(enum _D3DPRIMITIVETYPE,unsigned long,struct _D3DDRAWPRIMITIVESTRIDEDDATA *,unsigned long,unsigned short *,unsigned long,unsigned long) | ?DrawIndexedPrimitiveStrided@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@KPAU_D3DDRAWPRIMITIVESTRIDEDDATA@@KPAGKK@Z
    0x4B9DF0 | public: virtual long __stdcall AgeDevice::DrawPrimitiveStrided(enum _D3DPRIMITIVETYPE,unsigned long,struct _D3DDRAWPRIMITIVESTRIDEDDATA *,unsigned long,unsigned long) | ?DrawPrimitiveStrided@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@KPAU_D3DDRAWPRIMITIVESTRIDEDDATA@@KK@Z
    0x4B9E10 | public: virtual long __stdcall AgeDevice::GetClipStatus(struct _D3DCLIPSTATUS *) | ?GetClipStatus@AgeDevice@@UAGJPAU_D3DCLIPSTATUS@@@Z
    0x4B9E30 | public: virtual long __stdcall AgeDevice::SetClipStatus(struct _D3DCLIPSTATUS *) | ?SetClipStatus@AgeDevice@@UAGJPAU_D3DCLIPSTATUS@@@Z
    0x4B9E50 | public: virtual long __stdcall AgeDevice::DrawIndexedPrimitive(enum _D3DPRIMITIVETYPE,unsigned long,void *,unsigned long,unsigned short *,unsigned long,unsigned long) | ?DrawIndexedPrimitive@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@KPAXKPAGKK@Z
    0x4B9FF0 | public: virtual long __stdcall AgeDevice::DrawPrimitive(enum _D3DPRIMITIVETYPE,unsigned long,void *,unsigned long,unsigned long) | ?DrawPrimitive@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@KPAXKK@Z
    0x4BA0F0 | public: virtual long __stdcall AgeDevice::PreLoad(struct IDirectDrawSurface7 *) | ?PreLoad@AgeDevice@@UAGJPAUIDirectDrawSurface7@@@Z
    0x4BA110 | public: virtual long __stdcall AgeDevice::EndStateBlock(unsigned long *) | ?EndStateBlock@AgeDevice@@UAGJPAK@Z
    0x4BA130 | public: virtual long __stdcall AgeDevice::BeginStateBlock(void) | ?BeginStateBlock@AgeDevice@@UAGJXZ
    0x4BA150 | public: virtual long __stdcall AgeDevice::GetRenderState(enum _D3DRENDERSTATETYPE,unsigned long *) | ?GetRenderState@AgeDevice@@UAGJW4_D3DRENDERSTATETYPE@@PAK@Z
    0x4BA170 | public: virtual long __stdcall AgeDevice::SetRenderState(enum _D3DRENDERSTATETYPE,unsigned long) | ?SetRenderState@AgeDevice@@UAGJW4_D3DRENDERSTATETYPE@@K@Z
    0x4BA190 | public: virtual long __stdcall AgeDevice::GetLight(unsigned long,struct _D3DLIGHT7 *) | ?GetLight@AgeDevice@@UAGJKPAU_D3DLIGHT7@@@Z
    0x4BA1C0 | public: virtual long __stdcall AgeDevice::SetLight(unsigned long,struct _D3DLIGHT7 *) | ?SetLight@AgeDevice@@UAGJKPAU_D3DLIGHT7@@@Z
    0x4BA1F0 | public: virtual long __stdcall AgeDevice::GetMaterial(struct _D3DMATERIAL7 *) | ?GetMaterial@AgeDevice@@UAGJPAU_D3DMATERIAL7@@@Z
    0x4BA210 | public: virtual long __stdcall AgeDevice::SetMaterial(struct _D3DMATERIAL7 *) | ?SetMaterial@AgeDevice@@UAGJPAU_D3DMATERIAL7@@@Z
    0x4BA230 | public: virtual long __stdcall AgeDevice::GetViewport(struct _D3DVIEWPORT7 *) | ?GetViewport@AgeDevice@@UAGJPAU_D3DVIEWPORT7@@@Z
    0x4BA250 | public: virtual long __stdcall AgeDevice::MultiplyTransform(enum _D3DTRANSFORMSTATETYPE,struct _D3DMATRIX *) | ?MultiplyTransform@AgeDevice@@UAGJW4_D3DTRANSFORMSTATETYPE@@PAU_D3DMATRIX@@@Z
    0x4BA270 | public: virtual long __stdcall AgeDevice::SetViewport(struct _D3DVIEWPORT7 *) | ?SetViewport@AgeDevice@@UAGJPAU_D3DVIEWPORT7@@@Z
    0x4BA280 | public: virtual long __stdcall AgeDevice::GetTransform(enum _D3DTRANSFORMSTATETYPE,struct _D3DMATRIX *) | ?GetTransform@AgeDevice@@UAGJW4_D3DTRANSFORMSTATETYPE@@PAU_D3DMATRIX@@@Z
    0x4BA2A0 | public: virtual long __stdcall AgeDevice::SetTransform(enum _D3DTRANSFORMSTATETYPE,struct _D3DMATRIX *) | ?SetTransform@AgeDevice@@UAGJW4_D3DTRANSFORMSTATETYPE@@PAU_D3DMATRIX@@@Z
    0x4BA2B0 | public: virtual long __stdcall AgeDevice::Clear(unsigned long,struct _D3DRECT *,unsigned long,unsigned long,float,unsigned long) | ?Clear@AgeDevice@@UAGJKPAU_D3DRECT@@KKMK@Z
    0x4BA370 | public: virtual long __stdcall AgeDevice::GetRenderTarget(struct IDirectDrawSurface7 * *) | ?GetRenderTarget@AgeDevice@@UAGJPAPAUIDirectDrawSurface7@@@Z
    0x4BA390 | public: virtual long __stdcall AgeDevice::SetRenderTarget(struct IDirectDrawSurface7 *,unsigned long) | ?SetRenderTarget@AgeDevice@@UAGJPAUIDirectDrawSurface7@@K@Z
    0x4BA550 | public: virtual long __stdcall AgeDevice::GetDirect3D(struct IDirect3D7 * *) | ?GetDirect3D@AgeDevice@@UAGJPAPAUIDirect3D7@@@Z
    0x4BA570 | public: virtual long __stdcall AgeDevice::EndScene(void) | ?EndScene@AgeDevice@@UAGJXZ
    0x4BA590 | public: virtual long __stdcall AgeDevice::BeginScene(void) | ?BeginScene@AgeDevice@@UAGJXZ
    0x4BA600 | public: virtual long __stdcall AgeDevice::EnumTextureFormats(long (__stdcall*)(struct _DDPIXELFORMAT *,void *),void *) | ?EnumTextureFormats@AgeDevice@@UAGJP6GJPAU_DDPIXELFORMAT@@PAX@Z1@Z
    0x4BA630 | public: virtual long __stdcall AgeDevice::GetCaps(struct _D3DDeviceDesc7 *) | ?GetCaps@AgeDevice@@UAGJPAU_D3DDeviceDesc7@@@Z
    0x4BA690 | public: virtual unsigned long __stdcall AgeDevice::Release(void) | ?Release@AgeDevice@@UAGKXZ
    0x4BA6C0 | public: virtual unsigned long __stdcall AgeDevice::AddRef(void) | ?AddRef@AgeDevice@@UAGKXZ
    0x4BA6D0 | public: virtual long __stdcall AgeDevice::QueryInterface(struct _GUID const &,void * *) | ?QueryInterface@AgeDevice@@UAGJABU_GUID@@PAPAX@Z
    0x4BA6F0 | public: virtual long __stdcall AgeDevice::Initialize(struct IDirectDrawSurface7 *) | ?Initialize@AgeDevice@@UAGJPAUIDirectDrawSurface7@@@Z
    0x4BA890 | _CreateAgeDevice
    0x5B2A34 | const AgeDevice::`vftable' | ??_7AgeDevice@@6B@
    float swPixelConvert | ?swPixelConvert@@3MA
*/

struct AgeDevice
{
    // const AgeDevice::`vftable' @ 0x5B2A34

public:
    // 0x4BA6D0 | ?QueryInterface@AgeDevice@@UAGJABU_GUID@@PAPAX@Z
    virtual i32 __stdcall QueryInterface(struct _GUID const& arg1, void** arg2);

    // 0x4BA6C0 | ?AddRef@AgeDevice@@UAGKXZ
    virtual u32 __stdcall AddRef();

    // 0x4BA690 | ?Release@AgeDevice@@UAGKXZ
    virtual u32 __stdcall Release();

    // 0x4BA630 | ?GetCaps@AgeDevice@@UAGJPAU_D3DDeviceDesc7@@@Z
    virtual i32 __stdcall GetCaps(struct _D3DDeviceDesc7* arg1);

    // 0x4BA600 | ?EnumTextureFormats@AgeDevice@@UAGJP6GJPAU_DDPIXELFORMAT@@PAX@Z1@Z
    virtual i32 __stdcall EnumTextureFormats(i32(__stdcall* arg1)(struct _DDPIXELFORMAT*, void*), void* arg2);

    // 0x4BA590 | ?BeginScene@AgeDevice@@UAGJXZ
    virtual i32 __stdcall BeginScene();

    // 0x4BA570 | ?EndScene@AgeDevice@@UAGJXZ
    virtual i32 __stdcall EndScene();

    // 0x4BA550 | ?GetDirect3D@AgeDevice@@UAGJPAPAUIDirect3D7@@@Z
    virtual i32 __stdcall GetDirect3D(struct IDirect3D7** arg1);

    // 0x4BA390 | ?SetRenderTarget@AgeDevice@@UAGJPAUIDirectDrawSurface7@@K@Z
    virtual i32 __stdcall SetRenderTarget(struct IDirectDrawSurface7* arg1, u32 arg2);

    // 0x4BA370 | ?GetRenderTarget@AgeDevice@@UAGJPAPAUIDirectDrawSurface7@@@Z
    virtual i32 __stdcall GetRenderTarget(struct IDirectDrawSurface7** arg1);

    // 0x4BA2B0 | ?Clear@AgeDevice@@UAGJKPAU_D3DRECT@@KKMK@Z
    virtual i32 __stdcall Clear(u32 arg1, struct _D3DRECT* arg2, u32 arg3, u32 arg4, f32 arg5, u32 arg6);

    // 0x4BA2A0 | ?SetTransform@AgeDevice@@UAGJW4_D3DTRANSFORMSTATETYPE@@PAU_D3DMATRIX@@@Z
    virtual i32 __stdcall SetTransform(enum _D3DTRANSFORMSTATETYPE arg1, struct _D3DMATRIX* arg2);

    // 0x4BA280 | ?GetTransform@AgeDevice@@UAGJW4_D3DTRANSFORMSTATETYPE@@PAU_D3DMATRIX@@@Z
    virtual i32 __stdcall GetTransform(enum _D3DTRANSFORMSTATETYPE arg1, struct _D3DMATRIX* arg2);

    // 0x4BA270 | ?SetViewport@AgeDevice@@UAGJPAU_D3DVIEWPORT7@@@Z
    virtual i32 __stdcall SetViewport(struct _D3DVIEWPORT7* arg1);

    // 0x4BA250 | ?MultiplyTransform@AgeDevice@@UAGJW4_D3DTRANSFORMSTATETYPE@@PAU_D3DMATRIX@@@Z
    virtual i32 __stdcall MultiplyTransform(enum _D3DTRANSFORMSTATETYPE arg1, struct _D3DMATRIX* arg2);

    // 0x4BA230 | ?GetViewport@AgeDevice@@UAGJPAU_D3DVIEWPORT7@@@Z
    virtual i32 __stdcall GetViewport(struct _D3DVIEWPORT7* arg1);

    // 0x4BA210 | ?SetMaterial@AgeDevice@@UAGJPAU_D3DMATERIAL7@@@Z
    virtual i32 __stdcall SetMaterial(struct _D3DMATERIAL7* arg1);

    // 0x4BA1F0 | ?GetMaterial@AgeDevice@@UAGJPAU_D3DMATERIAL7@@@Z
    virtual i32 __stdcall GetMaterial(struct _D3DMATERIAL7* arg1);

    // 0x4BA1C0 | ?SetLight@AgeDevice@@UAGJKPAU_D3DLIGHT7@@@Z
    virtual i32 __stdcall SetLight(u32 arg1, struct _D3DLIGHT7* arg2);

    // 0x4BA190 | ?GetLight@AgeDevice@@UAGJKPAU_D3DLIGHT7@@@Z
    virtual i32 __stdcall GetLight(u32 arg1, struct _D3DLIGHT7* arg2);

    // 0x4BA170 | ?SetRenderState@AgeDevice@@UAGJW4_D3DRENDERSTATETYPE@@K@Z
    virtual i32 __stdcall SetRenderState(enum _D3DRENDERSTATETYPE arg1, u32 arg2);

    // 0x4BA150 | ?GetRenderState@AgeDevice@@UAGJW4_D3DRENDERSTATETYPE@@PAK@Z
    virtual i32 __stdcall GetRenderState(enum _D3DRENDERSTATETYPE arg1, u32* arg2);

    // 0x4BA130 | ?BeginStateBlock@AgeDevice@@UAGJXZ
    virtual i32 __stdcall BeginStateBlock();

    // 0x4BA110 | ?EndStateBlock@AgeDevice@@UAGJPAK@Z
    virtual i32 __stdcall EndStateBlock(u32* arg1);

    // 0x4BA0F0 | ?PreLoad@AgeDevice@@UAGJPAUIDirectDrawSurface7@@@Z
    virtual i32 __stdcall PreLoad(struct IDirectDrawSurface7* arg1);

    // 0x4B9FF0 | ?DrawPrimitive@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@KPAXKK@Z
    virtual i32 __stdcall DrawPrimitive(enum _D3DPRIMITIVETYPE arg1, u32 arg2, void* arg3, u32 arg4, u32 arg5);

    // 0x4B9E50 | ?DrawIndexedPrimitive@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@KPAXKPAGKK@Z
    virtual i32 __stdcall DrawIndexedPrimitive(
        enum _D3DPRIMITIVETYPE arg1, u32 arg2, void* arg3, u32 arg4, u16* arg5, u32 arg6, u32 arg7);

    // 0x4B9E30 | ?SetClipStatus@AgeDevice@@UAGJPAU_D3DCLIPSTATUS@@@Z
    virtual i32 __stdcall SetClipStatus(struct _D3DCLIPSTATUS* arg1);

    // 0x4B9E10 | ?GetClipStatus@AgeDevice@@UAGJPAU_D3DCLIPSTATUS@@@Z
    virtual i32 __stdcall GetClipStatus(struct _D3DCLIPSTATUS* arg1);

    // 0x4B9DF0 | ?DrawPrimitiveStrided@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@KPAU_D3DDRAWPRIMITIVESTRIDEDDATA@@KK@Z
    virtual i32 __stdcall DrawPrimitiveStrided(
        enum _D3DPRIMITIVETYPE arg1, u32 arg2, struct _D3DDRAWPRIMITIVESTRIDEDDATA* arg3, u32 arg4, u32 arg5);

    // 0x4B9DD0 | ?DrawIndexedPrimitiveStrided@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@KPAU_D3DDRAWPRIMITIVESTRIDEDDATA@@KPAGKK@Z
    virtual i32 __stdcall DrawIndexedPrimitiveStrided(enum _D3DPRIMITIVETYPE arg1, u32 arg2,
        struct _D3DDRAWPRIMITIVESTRIDEDDATA* arg3, u32 arg4, u16* arg5, u32 arg6, u32 arg7);

    // 0x4B9DB0 | ?DrawPrimitiveVB@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@PAUIDirect3DVertexBuffer7@@KKK@Z
    virtual i32 __stdcall DrawPrimitiveVB(
        enum _D3DPRIMITIVETYPE arg1, struct IDirect3DVertexBuffer7* arg2, u32 arg3, u32 arg4, u32 arg5);

    // 0x4B9D90 | ?DrawIndexedPrimitiveVB@AgeDevice@@UAGJW4_D3DPRIMITIVETYPE@@PAUIDirect3DVertexBuffer7@@KKPAGKK@Z
    virtual i32 __stdcall DrawIndexedPrimitiveVB(enum _D3DPRIMITIVETYPE arg1, struct IDirect3DVertexBuffer7* arg2,
        u32 arg3, u32 arg4, u16* arg5, u32 arg6, u32 arg7);

    // 0x4B9D70 | ?ComputeSphereVisibility@AgeDevice@@UAGJPAU_D3DVECTOR@@PAMKKPAK@Z
    virtual i32 __stdcall ComputeSphereVisibility(struct _D3DVECTOR* arg1, f32* arg2, u32 arg3, u32 arg4, u32* arg5);

    // 0x4B9D50 | ?GetTexture@AgeDevice@@UAGJKPAPAUIDirectDrawSurface7@@@Z
    virtual i32 __stdcall GetTexture(u32 arg1, struct IDirectDrawSurface7** arg2);

    // 0x4B9CB0 | ?SetTexture@AgeDevice@@UAGJKPAUIDirectDrawSurface7@@@Z
    virtual i32 __stdcall SetTexture(u32 arg1, struct IDirectDrawSurface7* arg2);

    // 0x4B9C90 | ?GetTextureStageState@AgeDevice@@UAGJKW4_D3DTEXTURESTAGESTATETYPE@@PAK@Z
    virtual i32 __stdcall GetTextureStageState(u32 arg1, enum _D3DTEXTURESTAGESTATETYPE arg2, u32* arg3);

    // 0x4B9A50 | ?SetTextureStageState@AgeDevice@@UAGJKW4_D3DTEXTURESTAGESTATETYPE@@K@Z
    virtual i32 __stdcall SetTextureStageState(u32 arg1, enum _D3DTEXTURESTAGESTATETYPE arg2, u32 arg3);

    // 0x4B9A30 | ?ValidateDevice@AgeDevice@@UAGJPAK@Z
    virtual i32 __stdcall ValidateDevice(u32* arg1);

    // 0x4B9A10 | ?ApplyStateBlock@AgeDevice@@UAGJK@Z
    virtual i32 __stdcall ApplyStateBlock(u32 arg1);

    // 0x4B99F0 | ?CaptureStateBlock@AgeDevice@@UAGJK@Z
    virtual i32 __stdcall CaptureStateBlock(u32 arg1);

    // 0x4B99D0 | ?DeleteStateBlock@AgeDevice@@UAGJK@Z
    virtual i32 __stdcall DeleteStateBlock(u32 arg1);

    // 0x4B99B0 | ?CreateStateBlock@AgeDevice@@UAGJW4_D3DSTATEBLOCKTYPE@@PAK@Z
    virtual i32 __stdcall CreateStateBlock(enum _D3DSTATEBLOCKTYPE arg1, u32* arg2);

    // 0x4B9950 | ?Load@AgeDevice@@UAGJPAUIDirectDrawSurface7@@PAUtagPOINT@@0PAUtagRECT@@K@Z
    virtual i32 __stdcall Load(struct IDirectDrawSurface7* arg1, struct tagPOINT* arg2,
        struct IDirectDrawSurface7* arg3, struct tagRECT* arg4, u32 arg5);

    // 0x4B9930 | ?LightEnable@AgeDevice@@UAGJKH@Z
    virtual i32 __stdcall LightEnable(u32 arg1, i32 arg2);

    // 0x4B9910 | ?GetLightEnable@AgeDevice@@UAGJKPAH@Z
    virtual i32 __stdcall GetLightEnable(u32 arg1, i32* arg2);

    // 0x4B98F0 | ?SetClipPlane@AgeDevice@@UAGJKPAM@Z
    virtual i32 __stdcall SetClipPlane(u32 arg1, f32* arg2);

    // 0x4B98D0 | ?GetClipPlane@AgeDevice@@UAGJKPAM@Z
    virtual i32 __stdcall GetClipPlane(u32 arg1, f32* arg2);

    // 0x4B98B0 | ?GetInfo@AgeDevice@@UAGJKPAXK@Z
    virtual i32 __stdcall GetInfo(u32 arg1, void* arg2, u32 arg3);

    // 0x4BA6F0 | ?Initialize@AgeDevice@@UAGJPAUIDirectDrawSurface7@@@Z
    virtual i32 __stdcall Initialize(struct IDirectDrawSurface7* arg1);
};

check_size(AgeDevice, 0x0);

// 0x4BA890 | _CreateAgeDevice (Skipped: void)
