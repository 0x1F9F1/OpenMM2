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
    input:winpriv

    public: static void __cdecl ioKeyboard::AddHotKey(char const *,char const *,char const *,char const *) | ?AddHotKey@ioKeyboard@@SAXPBD000@Z
    0x4BACD0 | public: __thiscall winDispatchable::winDispatchable(unsigned int) | ??0winDispatchable@@QAE@I@Z
    0x4BAD00 | public: virtual __thiscall winDispatchable::~winDispatchable(void) | ??1winDispatchable@@UAE@XZ
    0x4BAD20 | long __stdcall InputWindowProc(struct HWND__ *,unsigned int,unsigned int,long) | ?InputWindowProc@@YGJPAUHWND__@@IIJ@Z
    0x4BB1A0 | void __cdecl diInit(void) | ?diInit@@YAXXZ
    public: virtual void * __thiscall winDispatchable::`vector deleting destructor'(unsigned int) | ??_EwinDispatchable@@UAEPAXI@Z
    0x4BB1F0 | public: virtual void * __thiscall winDispatchable::`scalar deleting destructor'(unsigned int) | ??_GwinDispatchable@@UAEPAXI@Z
    0x5B2AFC | const winDispatchable::`vftable' | ??_7winDispatchable@@6B@
    0x6A3880 | struct IDirectInputA * lpDI | ?lpDI@@3PAUIDirectInputA@@A
*/

#include "hooking.h"
