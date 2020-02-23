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
    rgl:vgl

    0x4A5370 | void __cdecl vgl_VERTEX_VCT1(float,float,float) | ?vgl_VERTEX_VCT1@@YAXMMM@Z
    0x4A5400 | void __cdecl vgl_VERTEX_VNT1(float,float,float) | ?vgl_VERTEX_VNT1@@YAXMMM@Z
    0x4A5490 | void __cdecl vglSetFormat(unsigned int,unsigned int,unsigned int,unsigned int) | ?vglSetFormat@@YAXIIII@Z
    0x4A5500 | void __cdecl vglBegin(enum gfxDrawMode,int) | ?vglBegin@@YAXW4gfxDrawMode@@H@Z
    0x4A5A90 | void __cdecl vglEnd(void) | ?vglEnd@@YAXXZ
    0x4A5B10 | void __cdecl vglBeginBatch(void) | ?vglBeginBatch@@YAXXZ
    0x4A5B80 | void __cdecl vglEndBatch(void) | ?vglEndBatch@@YAXXZ
    0x4A5BA0 | void __cdecl vglBindTexture(class gfxTexture *) | ?vglBindTexture@@YAXPAVgfxTexture@@@Z
    0x4A5C50 | void __cdecl vglDrawLabel(class Vector3 const &,char const *) | ?vglDrawLabel@@YAXABVVector3@@PBD@Z
    0x4A5D00 | void __cdecl vglDrawLabelf(class Vector3 const &,char const *,...) | ?vglDrawLabelf@@YAXABVVector3@@PBDZZ
    0x4A5D30 | void __cdecl vglSetCloudMap(char const *) | ?vglSetCloudMap@@YAXPBD@Z
    0x4A5DE0 | void __cdecl vglSetOffset(float,float,float) | ?vglSetOffset@@YAXMMM@Z
    0x4A5F00 | bool __cdecl rglEnableDisable(enum rglToken,bool) | ?rglEnableDisable@@YA_NW4rglToken@@_N@Z
    0x4A6000 | bool __cdecl rglIsEnabled(enum rglToken) | ?rglIsEnabled@@YA_NW4rglToken@@@Z
    0x4A6060 | void __cdecl rglWorldMatrix(class Matrix34 const &) | ?rglWorldMatrix@@YAXABVMatrix34@@@Z
    0x4A6110 | void __cdecl rglWorldIdentity(void) | ?rglWorldIdentity@@YAXXZ
    0x4A6140 | void __cdecl rglCard(class Vector3 const &) | ?rglCard@@YAXABVVector3@@@Z
    0x4A6160 | void __cdecl rglBindTexture2(class gfxTexture const *) | ?rglBindTexture2@@YAXPBVgfxTexture@@@Z
    0x4A6190 | void __cdecl tglDrawParticle(class Vector3 const &,float,class Vector4 const &) | ?tglDrawParticle@@YAXABVVector3@@MABVVector4@@@Z
    0x4A6550 | void __cdecl tglDrawRotatedParticle(class Vector3 const &,float,float,class Vector4 const &) | ?tglDrawRotatedParticle@@YAXABVVector3@@MMABVVector4@@@Z
    0x4A7880 | unsigned int __cdecl mkfrgba(float,float,float,float) | ?mkfrgba@@YAIMMMM@Z
    0x682B64 | unsigned int vglCloudMapEnable | ?vglCloudMapEnable@@3IA
    0x661970 | void (__cdecl* vglVertex)(float,float,float) | ?vglVertex@@3P6AXMMM@ZA
    0x661974 | unsigned int vglCurrentColor | ?vglCurrentColor@@3IA
    0x682B48 | struct vglVCT1_t * vglVCT1 | ?vglVCT1@@3PAUvglVCT1_t@@A
    0x682B4C | float vglCurrentNZ | ?vglCurrentNZ@@3MA
    0x682B50 | float vglCurrentNX | ?vglCurrentNX@@3MA
    0x682B54 | float vglCurrentNY | ?vglCurrentNY@@3MA
    0x682B58 | int vglCount | ?vglCount@@3HA
    0x682B5C | float vglCurrentT | ?vglCurrentT@@3MA
    0x682B60 | float vglCurrentS | ?vglCurrentS@@3MA
    0x682B68 | struct vglVNT1_t * vglVNT1 | ?vglVNT1@@3PAUvglVNT1_t@@A
    0x682B74 | class gfxTexture * vglCloudMapTexture | ?vglCloudMapTexture@@3PAVgfxTexture@@A
*/

// 0x4A5370 | ?vgl_VERTEX_VCT1@@YAXMMM@Z
inline void vgl_VERTEX_VCT1(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<void, f32, f32, f32>>(0x4A5370, arg1, arg2, arg3);
}

// 0x4A5400 | ?vgl_VERTEX_VNT1@@YAXMMM@Z
inline void vgl_VERTEX_VNT1(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<void, f32, f32, f32>>(0x4A5400, arg1, arg2, arg3);
}

// 0x4A5490 | ?vglSetFormat@@YAXIIII@Z
inline void vglSetFormat(u32 arg1, u32 arg2, u32 arg3, u32 arg4)
{
    return stub<cdecl_t<void, u32, u32, u32, u32>>(0x4A5490, arg1, arg2, arg3, arg4);
}

// 0x4A5500 | ?vglBegin@@YAXW4gfxDrawMode@@H@Z
inline void vglBegin(enum gfxDrawMode arg1, i32 arg2)
{
    return stub<cdecl_t<void, enum gfxDrawMode, i32>>(0x4A5500, arg1, arg2);
}

// 0x4A5A90 | ?vglEnd@@YAXXZ
inline void vglEnd()
{
    return stub<cdecl_t<void>>(0x4A5A90);
}

// 0x4A5B10 | ?vglBeginBatch@@YAXXZ
inline void vglBeginBatch()
{
    return stub<cdecl_t<void>>(0x4A5B10);
}

// 0x4A5B80 | ?vglEndBatch@@YAXXZ
inline void vglEndBatch()
{
    return stub<cdecl_t<void>>(0x4A5B80);
}

// 0x4A5BA0 | ?vglBindTexture@@YAXPAVgfxTexture@@@Z
inline void vglBindTexture(class gfxTexture* arg1)
{
    return stub<cdecl_t<void, class gfxTexture*>>(0x4A5BA0, arg1);
}

// 0x4A5C50 | ?vglDrawLabel@@YAXABVVector3@@PBD@Z
inline void vglDrawLabel(class Vector3 const& arg1, char const* arg2)
{
    return stub<cdecl_t<void, class Vector3 const&, char const*>>(0x4A5C50, arg1, arg2);
}

// 0x4A5D00 | ?vglDrawLabelf@@YAXABVVector3@@PBDZZ
// Skipped (Variable Arguments)

// 0x4A5D30 | ?vglSetCloudMap@@YAXPBD@Z
inline void vglSetCloudMap(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x4A5D30, arg1);
}

// 0x4A5DE0 | ?vglSetOffset@@YAXMMM@Z
inline void vglSetOffset(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<void, f32, f32, f32>>(0x4A5DE0, arg1, arg2, arg3);
}

// 0x4A5F00 | ?rglEnableDisable@@YA_NW4rglToken@@_N@Z
inline bool rglEnableDisable(enum rglToken arg1, bool arg2)
{
    return stub<cdecl_t<bool, enum rglToken, bool>>(0x4A5F00, arg1, arg2);
}

// 0x4A6000 | ?rglIsEnabled@@YA_NW4rglToken@@@Z
inline bool rglIsEnabled(enum rglToken arg1)
{
    return stub<cdecl_t<bool, enum rglToken>>(0x4A6000, arg1);
}

// 0x4A6060 | ?rglWorldMatrix@@YAXABVMatrix34@@@Z
inline void rglWorldMatrix(class Matrix34 const& arg1)
{
    return stub<cdecl_t<void, class Matrix34 const&>>(0x4A6060, arg1);
}

// 0x4A6110 | ?rglWorldIdentity@@YAXXZ
inline void rglWorldIdentity()
{
    return stub<cdecl_t<void>>(0x4A6110);
}

// 0x4A6140 | ?rglCard@@YAXABVVector3@@@Z
inline void rglCard(class Vector3 const& arg1)
{
    return stub<cdecl_t<void, class Vector3 const&>>(0x4A6140, arg1);
}

// 0x4A6160 | ?rglBindTexture2@@YAXPBVgfxTexture@@@Z
inline void rglBindTexture2(class gfxTexture const* arg1)
{
    return stub<cdecl_t<void, class gfxTexture const*>>(0x4A6160, arg1);
}

// 0x4A6190 | ?tglDrawParticle@@YAXABVVector3@@MABVVector4@@@Z
inline void tglDrawParticle(class Vector3 const& arg1, f32 arg2, class Vector4 const& arg3)
{
    return stub<cdecl_t<void, class Vector3 const&, f32, class Vector4 const&>>(0x4A6190, arg1, arg2, arg3);
}

// 0x4A6550 | ?tglDrawRotatedParticle@@YAXABVVector3@@MMABVVector4@@@Z
inline void tglDrawRotatedParticle(class Vector3 const& arg1, f32 arg2, f32 arg3, class Vector4 const& arg4)
{
    return stub<cdecl_t<void, class Vector3 const&, f32, f32, class Vector4 const&>>(0x4A6550, arg1, arg2, arg3, arg4);
}

// 0x4A7880 | ?mkfrgba@@YAIMMMM@Z
inline u32 mkfrgba(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<cdecl_t<u32, f32, f32, f32, f32>>(0x4A7880, arg1, arg2, arg3, arg4);
}

// 0x682B64 | ?vglCloudMapEnable@@3IA
inline extern_var(0x682B64, uint32_t, vglCloudMapEnable);

// 0x661970 | ?vglVertex@@3P6AXMMM@ZA
inline extern_var(0x661970, void(__cdecl*)(float, float, float), vglVertex);

// 0x661974 | ?vglCurrentColor@@3IA
inline extern_var(0x661974, uint32_t, vglCurrentColor);

// 0x682B48 | ?vglVCT1@@3PAUvglVCT1_t@@A
inline extern_var(0x682B48, struct vglVCT1_t*, vglVCT1);

// 0x682B4C | ?vglCurrentNZ@@3MA
inline extern_var(0x682B4C, float, vglCurrentNZ);

// 0x682B50 | ?vglCurrentNX@@3MA
inline extern_var(0x682B50, float, vglCurrentNX);

// 0x682B54 | ?vglCurrentNY@@3MA
inline extern_var(0x682B54, float, vglCurrentNY);

// 0x682B58 | ?vglCount@@3HA
inline extern_var(0x682B58, int32_t, vglCount);

// 0x682B5C | ?vglCurrentT@@3MA
inline extern_var(0x682B5C, float, vglCurrentT);

// 0x682B60 | ?vglCurrentS@@3MA
inline extern_var(0x682B60, float, vglCurrentS);

// 0x682B68 | ?vglVNT1@@3PAUvglVNT1_t@@A
inline extern_var(0x682B68, struct vglVNT1_t*, vglVNT1);

// 0x682B74 | ?vglCloudMapTexture@@3PAVgfxTexture@@A
inline extern_var(0x682B74, class gfxTexture*, vglCloudMapTexture);
