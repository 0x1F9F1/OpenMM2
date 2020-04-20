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
    mmwidget:toggle2

    0x4F3CB0 | public: __thiscall mmToggle2::mmToggle2(void) | ??0mmToggle2@@QAE@XZ
    0x4F3CD0 | public: virtual __thiscall mmToggle2::~mmToggle2(void) | ??1mmToggle2@@UAE@XZ
    0x4F3D30 | public: void __thiscall mmToggle2::Init(char *,float,float,int *) | ?Init@mmToggle2@@QAEXPADMMPAH@Z
    0x4F3D60 | private: void __thiscall mmToggle2::LoadBitmap(char *) | ?LoadBitmap@mmToggle2@@AAEXPAD@Z
    0x4F3DC0 | public: void __thiscall mmToggle2::SetPosition(float,float) | ?SetPosition@mmToggle2@@QAEXMM@Z
    0x4F3E60 | public: virtual void __thiscall mmToggle2::Update(void) | ?Update@mmToggle2@@UAEXXZ
    0x4F3E80 | public: virtual void __thiscall mmToggle2::Cull(void) | ?Cull@mmToggle2@@UAEXXZ
    public: virtual void * __thiscall mmToggle2::`vector deleting destructor'(unsigned int) | ??_EmmToggle2@@UAEPAXI@Z
    0x4F3F20 | public: virtual void * __thiscall mmToggle2::`scalar deleting destructor'(unsigned int) | ??_GmmToggle2@@UAEPAXI@Z
    0x5B3CA0 | const mmToggle2::`vftable' | ??_7mmToggle2@@6B@
*/

struct mmToggle2 : asNode
{
public:
    // mmToggle2::`vftable' @ 0x5B3CA0

    // 0x4F3CB0 | ??0mmToggle2@@QAE@XZ
    inline mmToggle2()
    {
        stub<member_func_t<void, mmToggle2>>(0x4F3CB0, this);
    }

    // 0x4F3D30 | ?Init@mmToggle2@@QAEXPADMMPAH@Z
    inline void Init(char* arg1, float arg2, float arg3, int32_t* arg4)
    {
        return stub<member_func_t<void, mmToggle2, char*, float, float, int32_t*>>(
            0x4F3D30, this, arg1, arg2, arg3, arg4);
    }

    // 0x4F3D60 | ?LoadBitmap@mmToggle2@@AAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmToggle2, char*>>(0x4F3D60, this, arg1);
    }

    // 0x4F3DC0 | ?SetPosition@mmToggle2@@QAEXMM@Z
    inline void SetPosition(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmToggle2, float, float>>(0x4F3DC0, this, arg1, arg2);
    }

    // 0x4F3CD0 | ??1mmToggle2@@UAE@XZ
    inline ~mmToggle2() override
    {
        stub<member_func_t<void, mmToggle2>>(0x4F3CD0, this);
    }

    // 0x4F3E80 | ?Cull@mmToggle2@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmToggle2>>(0x4F3E80, this);
    }

    // 0x4F3E60 | ?Update@mmToggle2@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmToggle2>>(0x4F3E60, this);
    }
};
