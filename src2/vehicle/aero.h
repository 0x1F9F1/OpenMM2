/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    vehicle:aero

    0x4D9320 | public: __thiscall vehAero::vehAero(void) | ??0vehAero@@QAE@XZ
    0x4D9360 | public: virtual void __thiscall vehAero::Update(void) | ?Update@vehAero@@UAEXXZ
    0x4D96E0 | public: virtual void __thiscall vehAero::FileIO(class datParser &) | ?FileIO@vehAero@@UAEXAAVdatParser@@@Z
    public: virtual void __thiscall vehAero::AddWidgets(class bkBank &) | ?AddWidgets@vehAero@@UAEXAAVbkBank@@@Z
    0x4D9760 | public: virtual void * __thiscall vehAero::`scalar deleting destructor'(unsigned int) | ??_GvehAero@@UAEPAXI@Z
    public: virtual void * __thiscall vehAero::`vector deleting destructor'(unsigned int) | ??_EvehAero@@UAEPAXI@Z
    0x4D9790 | public: virtual char * __thiscall vehAero::GetClassName(void) | ?GetClassName@vehAero@@UAEPADXZ
    0x5B3034 | const vehAero::`vftable' | ??_7vehAero@@6B@
*/

struct vehAero : asNode
{
public:
    // vehAero::`vftable' @ 0x5B3034

    // 0x4D9320 | ??0vehAero@@QAE@XZ
    inline vehAero()
    {
        stub<member_func_t<void, vehAero>>(0x4D9320, this);
    }

    // 0x4CCF00 | ??1vehAero@@UAE@XZ
    inline ~vehAero() override
    {
        stub<member_func_t<void, vehAero>>(0x4CCF00, this);
    }

    // 0x4D9360 | ?Update@vehAero@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehAero>>(0x4D9360, this);
    }

    // 0x4D96E0 | ?FileIO@vehAero@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehAero, class datParser&>>(0x4D96E0, this, arg1);
    }

    // 0x4D9790 | ?GetClassName@vehAero@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, vehAero>>(0x4D9790, this);
    }
};
