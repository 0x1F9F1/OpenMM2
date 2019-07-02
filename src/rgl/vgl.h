/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#include "hooking.h"

/* Custom implementation of D3D[T]LVERTEX */
struct vglVCT1_t
{
    float sx;
    float sy;
    float sz;
    float rhw;
    unsigned int color;
    unsigned int specular;
    float tu;
    float tv;
};

check_size(vglVCT1_t, 0x20);

/* Custom implementation of D3DVERTEX */
struct vglVNT1_t
{
    float x; /* Homogeneous coordinates */
    float y;
    float z;
    float nx; /* Normal */
    float ny;
    float nz;
    float tu; /* Texture coordinates */
    float tv;
};

check_size(vglVNT1_t, 0x20);

void vglSetFormat(unsigned int format, unsigned int a2, unsigned int a3, unsigned int a4);
