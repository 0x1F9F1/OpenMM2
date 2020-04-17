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

// 0x4BAD20 | ?InputWindowProc@@YGJPAUHWND__@@IIJ@Z
inline i32 __stdcall InputWindowProc(struct HWND__* arg1, u32 arg2, u32 arg3, i32 arg4)
{
    return stub<stdcall_t<i32, struct HWND__*, u32, u32, i32>>(0x4BAD20, arg1, arg2, arg3, arg4);
}

// 0x4BB1A0 | ?diInit@@YAXXZ
inline void diInit()
{
    return stub<cdecl_t<void>>(0x4BB1A0);
}

// 0x6A3880 | ?lpDI@@3PAUIDirectInputA@@A
inline extern_var(0x6A3880, struct IDirectInputA*, lpDI);

struct winDispatchable
{
public:
    // winDispatchable::`vftable' @ 0x5B2AFC

    // 0x4BACD0 | ??0winDispatchable@@QAE@I@Z
    winDispatchable(u32 arg1)
    {
        stub<member_func_t<void, winDispatchable, u32>>(0x4BACD0, this, arg1);
    }

    // 0x4BAD00 | ??1winDispatchable@@UAE@XZ
    virtual ~winDispatchable()
    {
        stub<member_func_t<void, winDispatchable>>(0x4BAD00, this);
    }

    // 0x582519 | __purecall
    virtual i32 WindowProc(struct HWND__* arg1, u32 arg2, u32 arg3, i32 arg4)
    {
        return stub<member_func_t<i32, winDispatchable, struct HWND__*, u32, u32, i32>>(
            0x582519, this, arg1, arg2, arg3, arg4);
    }
};
