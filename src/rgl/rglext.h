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
    rgl:rglext

    0x4A6970 | void __cdecl rglOpenPipe(int,int,bool) | ?rglOpenPipe@@YAXHH_N@Z
    0x4A6A00 | void __cdecl rglClosePipe(void) | ?rglClosePipe@@YAXXZ
    0x4A6A10 | void __cdecl rglBeginFrame(unsigned int) | ?rglBeginFrame@@YAXI@Z
    0x4A6A40 | void __cdecl rglEndFrame(void) | ?rglEndFrame@@YAXXZ
    0x4A6A50 | void __cdecl rglCameraMatrix(class Matrix34 const &) | ?rglCameraMatrix@@YAXABVMatrix34@@@Z
    0x4A6A70 | int __cdecl rglAlive(void) | ?rglAlive@@YAHXZ
    0x4A6AB0 | void __cdecl rglDrawBox(class Vector3 const &,class Matrix34 const &) | ?rglDrawBox@@YAXABVVector3@@ABVMatrix34@@@Z
    0x4A6D30 | void __cdecl rglDrawSolidBox(class Vector3 const &,class Matrix34 const &,class Vector3 const &) | ?rglDrawSolidBox@@YAXABVVector3@@ABVMatrix34@@0@Z
    0x4A7050 | void __cdecl rglDrawAxis(float,class Matrix34 const &) | ?rglDrawAxis@@YAXMABVMatrix34@@@Z
    0x4A70F0 | void __cdecl rglDrawSphere(float,int) | ?rglDrawSphere@@YAXMH@Z
    0x4A7200 | void __cdecl rglDrawSphere(float,class Matrix34 const &,int) | ?rglDrawSphere@@YAXMABVMatrix34@@H@Z
    0x4A7230 | void __cdecl rglDrawEllipsoid(class Vector3 const &,class Matrix34 const &,int) | ?rglDrawEllipsoid@@YAXABVVector3@@ABVMatrix34@@H@Z
    0x4A7310 | void __cdecl rglDrawParticle(class Vector3 const &,float,class Vector4 const &) | ?rglDrawParticle@@YAXABVVector3@@MABVVector4@@@Z
    0x4A7540 | void __cdecl rglResetDrawTexture(void) | ?rglResetDrawTexture@@YAXXZ
    0x4A7560 | void __cdecl rglDrawTexture(class gfxTexture *) | ?rglDrawTexture@@YAXPAVgfxTexture@@@Z
    0x4A7750 | void __cdecl rglPushMatrix(void) | ?rglPushMatrix@@YAXXZ
    0x4A7790 | void __cdecl rglPopMatrix(void) | ?rglPopMatrix@@YAXXZ
    0x4A77D0 | void __cdecl rglMultMatrix(class Matrix34 &) | ?rglMultMatrix@@YAXAAVMatrix34@@@Z
    0x682F98 | class Matrix44 * mtxstack | ?mtxstack@@3PAVMatrix44@@A
*/

#include "hooking.h"
