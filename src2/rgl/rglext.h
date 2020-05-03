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
    0x682B90 | class Matrix44 * mtxstack | ?mtxstack@@3PAVMatrix44@@A
*/

// 0x4A6A70 | ?rglAlive@@YAHXZ
i32 rglAlive();

// 0x4A6A10 | ?rglBeginFrame@@YAXI@Z
void rglBeginFrame(u32 arg1);

// 0x4A6A50 | ?rglCameraMatrix@@YAXABVMatrix34@@@Z
void rglCameraMatrix(class Matrix34 const& arg1);

// 0x4A6A00 | ?rglClosePipe@@YAXXZ
void rglClosePipe();

// 0x4A7050 | ?rglDrawAxis@@YAXMABVMatrix34@@@Z
void rglDrawAxis(f32 arg1, class Matrix34 const& arg2);

// 0x4A6AB0 | ?rglDrawBox@@YAXABVVector3@@ABVMatrix34@@@Z
void rglDrawBox(class Vector3 const& arg1, class Matrix34 const& arg2);

// 0x4A7230 | ?rglDrawEllipsoid@@YAXABVVector3@@ABVMatrix34@@H@Z
void rglDrawEllipsoid(class Vector3 const& arg1, class Matrix34 const& arg2, i32 arg3);

// 0x4A7310 | ?rglDrawParticle@@YAXABVVector3@@MABVVector4@@@Z
void rglDrawParticle(class Vector3 const& arg1, f32 arg2, class Vector4 const& arg3);

// 0x4A6D30 | ?rglDrawSolidBox@@YAXABVVector3@@ABVMatrix34@@0@Z
void rglDrawSolidBox(class Vector3 const& arg1, class Matrix34 const& arg2, class Vector3 const& arg3);

// 0x4A70F0 | ?rglDrawSphere@@YAXMH@Z
void rglDrawSphere(f32 arg1, i32 arg2);

// 0x4A7200 | ?rglDrawSphere@@YAXMABVMatrix34@@H@Z
void rglDrawSphere(f32 arg1, class Matrix34 const& arg2, i32 arg3);

// 0x4A7560 | ?rglDrawTexture@@YAXPAVgfxTexture@@@Z
void rglDrawTexture(class gfxTexture* arg1);

// 0x4A6A40 | ?rglEndFrame@@YAXXZ
void rglEndFrame();

// 0x4A77D0 | ?rglMultMatrix@@YAXAAVMatrix34@@@Z
void rglMultMatrix(class Matrix34& arg1);

// 0x4A6970 | ?rglOpenPipe@@YAXHH_N@Z
void rglOpenPipe(i32 arg1, i32 arg2, bool arg3);

// 0x4A7790 | ?rglPopMatrix@@YAXXZ
void rglPopMatrix();

// 0x4A7750 | ?rglPushMatrix@@YAXXZ
void rglPushMatrix();

// 0x4A7540 | ?rglResetDrawTexture@@YAXXZ
void rglResetDrawTexture();

// 0x682B90 | ?mtxstack@@3PAVMatrix44@@A
inline extern_var(0x682B90, class Matrix44*, mtxstack);
