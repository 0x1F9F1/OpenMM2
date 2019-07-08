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
    gfx:winpriv

    0x6830D0 | bool inWindow | ?inWindow@@3_NA
    0x5CA3EC | bool pageFlip | ?pageFlip@@3_NA
    0x5CA3ED | bool bWinBorder | ?bWinBorder@@3_NA
    0x5CA3EE | bool useMultiTexture | ?useMultiTexture@@3_NA
    0x682F9C | struct IDirectDrawSurface7 * lpdsBack2 | ?lpdsBack2@@3PAUIDirectDrawSurface7@@A
    0x682FA0 | struct HWND__ * hwndParent | ?hwndParent@@3PAUHWND__@@A
    0x682FA4 | struct IDirectDrawSurface7 * lpdsZ | ?lpdsZ@@3PAUIDirectDrawSurface7@@A
    0x682FA8 | char (* interfaceNames)[32] | ?interfaceNames@@3PAY0CA@DA
    0x6830A8 | struct IDirectDraw7 * lpDD | ?lpDD@@3PAUIDirectDraw7@@A
    0x6830AC | struct IDirect3D7 * lpD3D | ?lpD3D@@3PAUIDirect3D7@@A
    0x6830B0 | struct IDirectDrawSurface7 * lpdsFront | ?lpdsFront@@3PAUIDirectDrawSurface7@@A
    struct IDirect3DDevice7 * lpD3DDevReal | ?lpD3DDevReal@@3PAUIDirect3DDevice7@@A
    0x6830B8 | struct HWND__ * hwndMain | ?hwndMain@@3PAUHWND__@@A
    0x6830BC | struct IDirectDrawSurface7 * lpdsBack | ?lpdsBack@@3PAUIDirectDrawSurface7@@A
    0x6A2A60 | struct IDirect3DDevice7 * lpD3DDevSoftware | ?lpD3DDevSoftware@@3PAUIDirect3DDevice7@@A
    0x6830C4 | struct IDirectDrawClipper * lpClip | ?lpClip@@3PAUIDirectDrawClipper@@A
    0x6830C8 | struct IDirect3DDevice7 * lpD3DDev | ?lpD3DDev@@3PAUIDirect3DDevice7@@A
    0x6830CC | struct IDirectDrawSurface7 * lpdsRend | ?lpdsRend@@3PAUIDirectDrawSurface7@@A
    0x6830D1 | bool isMaximized | ?isMaximized@@3_NA
    0x6830D2 | bool tripleBuffer | ?tripleBuffer@@3_NA
    0x6830D3 | bool useReference | ?useReference@@3_NA
    0x6830D4 | bool useSoftware | ?useSoftware@@3_NA
    0x6830D5 | bool useAgeSoftware | ?useAgeSoftware@@3_NA
    0x6830D6 | bool useBlade | ?useBlade@@3_NA
    0x6830D7 | bool useSysMem | ?useSysMem@@3_NA
    0x6830D8 | int useInterface | ?useInterface@@3HA
    0x6830DC | int interfaceCount | ?interfaceCount@@3HA
*/

#include "hooking.h"

#include "d3dpipe.h"

inline extern_var(0x6830A8, IDirectDraw7*, lpDD);
inline extern_var(0x6830AC, IDirect3D7*, lpD3D);
inline extern_var(0x6830C8, IDirect3DDevice7*, lpD3DDev);
inline extern_var(0x6830CC, IDirectDrawSurface7*, lpdsRend);
inline extern_var(0x6830B0, IDirectDrawSurface7*, lpdsFront);
inline extern_var(0x6830BC, IDirectDrawSurface7*, lpdsBack);
inline extern_var(0x6830C4, IDirectDrawClipper*, lpClip);
inline extern_var(0x682FA4, IDirectDrawSurface7*, lpdsZ);

inline extern_var(0x682FA0, HWND, hwndParent);
inline extern_var(0x6830B8, HWND, hwndMain);
inline extern_var(0x68311C, LPCSTR, lpWindowTitle);
inline extern_var(0x6830F0, ATOM, ATOM_Class);
inline extern_var(0x683108, LPCSTR, IconID);
inline extern_var(0x5CA3EC, bool, pageFlip);
inline extern_var(0x5CA3ED, bool, bWinBorder);

inline extern_var(0x5CA3EE, bool, useMultiTexture);
inline extern_var(0x6830D0, bool, inWindow);
inline extern_var(0x6830D1, bool, isMaximized);
inline extern_var(0x6830D2, bool, tripleBuffer);
inline extern_var(0x6830D3, bool, useReference);
inline extern_var(0x6830D4, bool, useSoftware);
inline extern_var(0x6830D5, bool, useAgeSoftware);
inline extern_var(0x6830D6, bool, useBlade);
inline extern_var(0x6830D7, bool, useSysMem);
inline extern_var(0x6830D8, int, useInterface);

inline extern_var(0x683104, bool, gfxDebug);

inline extern_var(0x6844B8, void (*)(void), gfxRestoreCallback);