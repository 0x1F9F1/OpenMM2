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
    mmgame:icons

    0x432140 | public: __thiscall mmIcons::mmIcons(void) | ??0mmIcons@@QAE@XZ
    0x432210 | public: virtual __thiscall mmIcons::~mmIcons(void) | ??1mmIcons@@UAE@XZ
    0x432290 | public: void __thiscall mmIcons::Init(class Matrix34 *,float,float,int) | ?Init@mmIcons@@QAEXPAVMatrix34@@MMH@Z
    0x4322F0 | public: void __thiscall mmIcons::RegisterOpponents(struct OppIconInfo *,int,void *) | ?RegisterOpponents@mmIcons@@QAEXPAUOppIconInfo@@HPAX@Z
    0x432390 | public: virtual void __thiscall mmIcons::Update(void) | ?Update@mmIcons@@UAEXXZ
    0x4323D0 | public: virtual void __thiscall mmIcons::Cull(void) | ?Cull@mmIcons@@UAEXXZ
    public: virtual void * __thiscall mmIcons::`vector deleting destructor'(unsigned int) | ??_EmmIcons@@UAEPAXI@Z
    0x432C10 | public: virtual void * __thiscall mmIcons::`scalar deleting destructor'(unsigned int) | ??_GmmIcons@@UAEPAXI@Z
    0x5B0E1C | const mmIcons::`vftable' | ??_7mmIcons@@6B@
*/

struct mmIcons : asNode
{
public:
    // mmIcons::`vftable' @ 0x5B0E1C

    // 0x432140 | ??0mmIcons@@QAE@XZ
    inline mmIcons()
    {
        stub<member_func_t<void, mmIcons>>(0x432140, this);
    }

    // 0x432290 | ?Init@mmIcons@@QAEXPAVMatrix34@@MMH@Z
    inline void Init(class Matrix34* arg1, f32 arg2, f32 arg3, i32 arg4)
    {
        return stub<member_func_t<void, mmIcons, class Matrix34*, f32, f32, i32>>(
            0x432290, this, arg1, arg2, arg3, arg4);
    }

    // 0x4322F0 | ?RegisterOpponents@mmIcons@@QAEXPAUOppIconInfo@@HPAX@Z
    inline void RegisterOpponents(struct OppIconInfo* arg1, i32 arg2, void* arg3)
    {
        return stub<member_func_t<void, mmIcons, struct OppIconInfo*, i32, void*>>(0x4322F0, this, arg1, arg2, arg3);
    }

    // 0x432210 | ??1mmIcons@@UAE@XZ
    inline ~mmIcons() override
    {
        stub<member_func_t<void, mmIcons>>(0x432210, this);
    }

    // 0x4323D0 | ?Cull@mmIcons@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmIcons>>(0x4323D0, this);
    }

    // 0x432390 | ?Update@mmIcons@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmIcons>>(0x432390, this);
    }
};
