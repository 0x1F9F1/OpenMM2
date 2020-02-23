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
    mmui:vshow

    0x505470 | public: __thiscall VehShowcase::VehShowcase(int) | ??0VehShowcase@@QAE@H@Z
    0x5055C0 | public: virtual __thiscall VehShowcase::~VehShowcase(void) | ??1VehShowcase@@UAE@XZ
    0x505620 | public: virtual void __thiscall VehShowcase::PreSetup(void) | ?PreSetup@VehShowcase@@UAEXXZ
    0x505690 | public: virtual void __thiscall VehShowcase::PostSetup(void) | ?PostSetup@VehShowcase@@UAEXXZ
    public: virtual void * __thiscall VehShowcase::`vector deleting destructor'(unsigned int) | ??_EVehShowcase@@UAEPAXI@Z
    0x5056A0 | public: virtual void * __thiscall VehShowcase::`scalar deleting destructor'(unsigned int) | ??_GVehShowcase@@UAEPAXI@Z
    0x5B44F4 | const VehShowcase::`vftable' | ??_7VehShowcase@@6B@
*/

struct VehShowcase : UIMenu
{
public:
    // VehShowcase::`vftable' @ 0x5B44F4

    // 0x505470 | ??0VehShowcase@@QAE@H@Z
    inline VehShowcase(i32 arg1)
    {
        stub<member_func_t<void, VehShowcase, i32>>(0x505470, this, arg1);
    }

    // 0x5055C0 | ??1VehShowcase@@UAE@XZ
    inline ~VehShowcase() override
    {
        stub<member_func_t<void, VehShowcase>>(0x5055C0, this);
    }

    // 0x505620 | ?PreSetup@VehShowcase@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, VehShowcase>>(0x505620, this);
    }

    // 0x505690 | ?PostSetup@VehShowcase@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, VehShowcase>>(0x505690, this);
    }
};
