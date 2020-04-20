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
    mmui:pu_menu

    0x50CC90 | public: __thiscall PUMenuBase::PUMenuBase(int,float,float,float,float,char *,bool) | ??0PUMenuBase@@QAE@HMMMMPAD_N@Z
    0x50CE70 | public: virtual __thiscall PUMenuBase::~PUMenuBase(void) | ??1PUMenuBase@@UAE@XZ
    0x50CEF0 | public: class gfxBitmap * __thiscall PUMenuBase::CreateDummyBitmap(void) | ?CreateDummyBitmap@PUMenuBase@@QAEPAVgfxBitmap@@XZ
    0x50CF90 | public: float __thiscall PUMenuBase::CreateTitle(int) | ?CreateTitle@PUMenuBase@@QAEMH@Z
    0x50CFD0 | public: float __thiscall PUMenuBase::AddPrevious(float,float,float,float) | ?AddPrevious@PUMenuBase@@QAEMMMMM@Z
    0x50D050 | public: void __thiscall PUMenuBase::AddOKCancel(class datCallback,class datCallback) | ?AddOKCancel@PUMenuBase@@QAEXVdatCallback@@0@Z
    0x50D0F0 | public: float __thiscall PUMenuBase::AddExit(float,float,float,float) | ?AddExit@PUMenuBase@@QAEMMMMM@Z
    0x50D170 | public: virtual void __thiscall PUMenuBase::Update(void) | ?Update@PUMenuBase@@UAEXXZ
    0x50D1A0 | public: virtual void __thiscall PUMenuBase::Cull(void) | ?Cull@PUMenuBase@@UAEXXZ
    0x50D1E0 | public: void __thiscall PUMenuBase::DisableExit(void) | ?DisableExit@PUMenuBase@@QAEXXZ
    0x50D1F0 | public: void __thiscall PUMenuBase::EnableExit(void) | ?EnableExit@PUMenuBase@@QAEXXZ
    0x50D200 | public: virtual void * __thiscall PUMenuBase::`scalar deleting destructor'(unsigned int) | ??_GPUMenuBase@@UAEPAXI@Z
    public: virtual void * __thiscall PUMenuBase::`vector deleting destructor'(unsigned int) | ??_EPUMenuBase@@UAEPAXI@Z
    0x5B4A8C | const PUMenuBase::`vftable' | ??_7PUMenuBase@@6B@
*/

struct PUMenuBase : UIMenu
{
public:
    // PUMenuBase::`vftable' @ 0x5B4A8C

    // 0x50CC90 | ??0PUMenuBase@@QAE@HMMMMPAD_N@Z
    inline PUMenuBase(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6, bool arg7)
    {
        stub<member_func_t<void, PUMenuBase, int32_t, float, float, float, float, char*, bool>>(
            0x50CC90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x50CEF0 | ?CreateDummyBitmap@PUMenuBase@@QAEPAVgfxBitmap@@XZ
    inline class gfxBitmap* CreateDummyBitmap()
    {
        return stub<member_func_t<class gfxBitmap*, PUMenuBase>>(0x50CEF0, this);
    }

    // 0x50CF90 | ?CreateTitle@PUMenuBase@@QAEMH@Z
    inline float CreateTitle(int32_t arg1)
    {
        return stub<member_func_t<float, PUMenuBase, int32_t>>(0x50CF90, this, arg1);
    }

    // 0x50CFD0 | ?AddPrevious@PUMenuBase@@QAEMMMMM@Z
    inline float AddPrevious(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<float, PUMenuBase, float, float, float, float>>(
            0x50CFD0, this, arg1, arg2, arg3, arg4);
    }

    // 0x50D050 | ?AddOKCancel@PUMenuBase@@QAEXVdatCallback@@0@Z
    inline void AddOKCancel(class datCallback arg1, class datCallback arg2)
    {
        return stub<member_func_t<void, PUMenuBase, class datCallback, class datCallback>>(0x50D050, this, arg1, arg2);
    }

    // 0x50D0F0 | ?AddExit@PUMenuBase@@QAEMMMMM@Z
    inline float AddExit(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<float, PUMenuBase, float, float, float, float>>(
            0x50D0F0, this, arg1, arg2, arg3, arg4);
    }

    // 0x50D1E0 | ?DisableExit@PUMenuBase@@QAEXXZ
    inline void DisableExit()
    {
        return stub<member_func_t<void, PUMenuBase>>(0x50D1E0, this);
    }

    // 0x50D1F0 | ?EnableExit@PUMenuBase@@QAEXXZ
    inline void EnableExit()
    {
        return stub<member_func_t<void, PUMenuBase>>(0x50D1F0, this);
    }

    // 0x50CE70 | ??1PUMenuBase@@UAE@XZ
    inline ~PUMenuBase() override
    {
        stub<member_func_t<void, PUMenuBase>>(0x50CE70, this);
    }

    // 0x50D1A0 | ?Cull@PUMenuBase@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, PUMenuBase>>(0x50D1A0, this);
    }

    // 0x50D170 | ?Update@PUMenuBase@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, PUMenuBase>>(0x50D170, this);
    }
};
