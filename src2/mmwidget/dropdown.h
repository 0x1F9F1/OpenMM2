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
    mmwidget:dropdown

    0x4F1DA0 | public: __thiscall mmDropDown::mmDropDown(void) | ??0mmDropDown@@QAE@XZ
    0x4F1E20 | public: virtual __thiscall mmDropDown::~mmDropDown(void) | ??1mmDropDown@@UAE@XZ
    0x4F1EA0 | public: void __thiscall mmDropDown::Init(void *,float,float,float,float,class string,int) | ?Init@mmDropDown@@QAEXPAXMMMMVstring@@H@Z
    0x4F2020 | public: void __thiscall mmDropDown::InitString(class string) | ?InitString@mmDropDown@@QAEXVstring@@@Z
    0x4F2420 | private: void __thiscall mmDropDown::SetString(class string) | ?SetString@mmDropDown@@AAEXVstring@@@Z
    0x4F2510 | public: void __thiscall mmDropDown::GetCurrentString(char *,int) | ?GetCurrentString@mmDropDown@@QAEXPADH@Z
    0x4F2560 | public: void __thiscall mmDropDown::SetDisabledColors(void) | ?SetDisabledColors@mmDropDown@@QAEXXZ
    0x4F25E0 | public: int __thiscall mmDropDown::FindFirstEnabled(void) | ?FindFirstEnabled@mmDropDown@@QAEHXZ
    0x4F2610 | public: void __thiscall mmDropDown::SetHighlight(int) | ?SetHighlight@mmDropDown@@QAEXH@Z
    0x4F2680 | public: int __thiscall mmDropDown::GetHit(float,float) | ?GetHit@mmDropDown@@QAEHMM@Z
    0x4F2750 | public: virtual void __thiscall mmDropDown::Update(void) | ?Update@mmDropDown@@UAEXXZ
    0x4F2760 | public: float __thiscall mmDropDown::GetXmin(void) | ?GetXmin@mmDropDown@@QAEMXZ
    0x4F2770 | public: float __thiscall mmDropDown::GetYmin(void) | ?GetYmin@mmDropDown@@QAEMXZ
    0x4F2780 | public: float __thiscall mmDropDown::GetW(void) | ?GetW@mmDropDown@@QAEMXZ
    0x4F2790 | public: float __thiscall mmDropDown::GetH(void) | ?GetH@mmDropDown@@QAEMXZ
    public: virtual void * __thiscall mmDropDown::`vector deleting destructor'(unsigned int) | ??_EmmDropDown@@UAEPAXI@Z
    0x4F27A0 | public: virtual void * __thiscall mmDropDown::`scalar deleting destructor'(unsigned int) | ??_GmmDropDown@@UAEPAXI@Z
    0x5B3BD0 | const mmDropDown::`vftable' | ??_7mmDropDown@@6B@
*/

struct mmDropDown : asNode
{
public:
    // mmDropDown::`vftable' @ 0x5B3BD0

    // 0x4F1DA0 | ??0mmDropDown@@QAE@XZ
    inline mmDropDown()
    {
        stub<member_func_t<void, mmDropDown>>(0x4F1DA0, this);
    }

    // 0x4F1EA0 | ?Init@mmDropDown@@QAEXPAXMMMMVstring@@H@Z
    inline void Init(void* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, class string arg6, i32 arg7)
    {
        return stub<member_func_t<void, mmDropDown, void*, f32, f32, f32, f32, class string, i32>>(
            0x4F1EA0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4F2020 | ?InitString@mmDropDown@@QAEXVstring@@@Z
    inline void InitString(class string arg1)
    {
        return stub<member_func_t<void, mmDropDown, class string>>(0x4F2020, this, arg1);
    }

    // 0x4F2420 | ?SetString@mmDropDown@@AAEXVstring@@@Z
    inline void SetString(class string arg1)
    {
        return stub<member_func_t<void, mmDropDown, class string>>(0x4F2420, this, arg1);
    }

    // 0x4F2510 | ?GetCurrentString@mmDropDown@@QAEXPADH@Z
    inline void GetCurrentString(char* arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmDropDown, char*, i32>>(0x4F2510, this, arg1, arg2);
    }

    // 0x4F2560 | ?SetDisabledColors@mmDropDown@@QAEXXZ
    inline void SetDisabledColors()
    {
        return stub<member_func_t<void, mmDropDown>>(0x4F2560, this);
    }

    // 0x4F25E0 | ?FindFirstEnabled@mmDropDown@@QAEHXZ
    inline i32 FindFirstEnabled()
    {
        return stub<member_func_t<i32, mmDropDown>>(0x4F25E0, this);
    }

    // 0x4F2610 | ?SetHighlight@mmDropDown@@QAEXH@Z
    inline void SetHighlight(i32 arg1)
    {
        return stub<member_func_t<void, mmDropDown, i32>>(0x4F2610, this, arg1);
    }

    // 0x4F2680 | ?GetHit@mmDropDown@@QAEHMM@Z
    inline i32 GetHit(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<i32, mmDropDown, f32, f32>>(0x4F2680, this, arg1, arg2);
    }

    // 0x4F2760 | ?GetXmin@mmDropDown@@QAEMXZ
    inline f32 GetXmin()
    {
        return stub<member_func_t<f32, mmDropDown>>(0x4F2760, this);
    }

    // 0x4F2770 | ?GetYmin@mmDropDown@@QAEMXZ
    inline f32 GetYmin()
    {
        return stub<member_func_t<f32, mmDropDown>>(0x4F2770, this);
    }

    // 0x4F2780 | ?GetW@mmDropDown@@QAEMXZ
    inline f32 GetW()
    {
        return stub<member_func_t<f32, mmDropDown>>(0x4F2780, this);
    }

    // 0x4F2790 | ?GetH@mmDropDown@@QAEMXZ
    inline f32 GetH()
    {
        return stub<member_func_t<f32, mmDropDown>>(0x4F2790, this);
    }

    // 0x4F1E20 | ??1mmDropDown@@UAE@XZ
    inline ~mmDropDown() override
    {
        stub<member_func_t<void, mmDropDown>>(0x4F1E20, this);
    }

    // 0x4F2750 | ?Update@mmDropDown@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmDropDown>>(0x4F2750, this);
    }
};
