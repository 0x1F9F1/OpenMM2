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
    vehicle:stuck

    0x4D5FB0 | public: __thiscall vehStuck::vehStuck(void) | ??0vehStuck@@QAE@XZ
    0x4D6060 | public: virtual void __thiscall vehStuck::Reset(void) | ?Reset@vehStuck@@UAEXXZ
    0x4D6080 | public: virtual char const * __thiscall vehStuck::GetDirName(void) | ?GetDirName@vehStuck@@UAEPBDXZ
    0x4D6090 | public: void __thiscall vehStuck::Init(class vehCarSim *,char const *) | ?Init@vehStuck@@QAEXPAVvehCarSim@@PBD@Z
    0x4D60C0 | public: void __thiscall vehStuck::Impact(void) | ?Impact@vehStuck@@QAEXXZ
    0x4D6100 | public: int __thiscall vehStuck::Pegged(void) | ?Pegged@vehStuck@@QAEHXZ
    0x4D6140 | public: virtual void __thiscall vehStuck::Update(void) | ?Update@vehStuck@@UAEXXZ
    0x4D6510 | public: virtual void __thiscall vehStuck::FileIO(class datParser &) | ?FileIO@vehStuck@@UAEXAAVdatParser@@@Z
    public: virtual void __thiscall vehStuck::AddWidgets(class bkBank &) | ?AddWidgets@vehStuck@@UAEXAAVbkBank@@@Z
    0x4D65B0 | public: virtual void * __thiscall vehStuck::`scalar deleting destructor'(unsigned int) | ??_GvehStuck@@UAEPAXI@Z
    public: virtual void * __thiscall vehStuck::`vector deleting destructor'(unsigned int) | ??_EvehStuck@@UAEPAXI@Z
    0x4D65E0 | public: virtual __thiscall vehStuck::~vehStuck(void) | ??1vehStuck@@UAE@XZ
    0x4D65F0 | public: virtual char * __thiscall vehStuck::GetClassName(void) | ?GetClassName@vehStuck@@UAEPADXZ
    0x5B2EB8 | const vehStuck::`vftable' | ??_7vehStuck@@6B@
*/

struct vehStuck : asNode
{
public:
    // vehStuck::`vftable' @ 0x5B2EB8

    // 0x4D5FB0 | ??0vehStuck@@QAE@XZ
    inline vehStuck()
    {
        stub<member_func_t<void, vehStuck>>(0x4D5FB0, this);
    }

    // 0x4D6090 | ?Init@vehStuck@@QAEXPAVvehCarSim@@PBD@Z
    inline void Init(class vehCarSim* arg1, char const* arg2)
    {
        return stub<member_func_t<void, vehStuck, class vehCarSim*, char const*>>(0x4D6090, this, arg1, arg2);
    }

    // 0x4D60C0 | ?Impact@vehStuck@@QAEXXZ
    inline void Impact()
    {
        return stub<member_func_t<void, vehStuck>>(0x4D60C0, this);
    }

    // 0x4D6100 | ?Pegged@vehStuck@@QAEHXZ
    inline int32_t Pegged()
    {
        return stub<member_func_t<int32_t, vehStuck>>(0x4D6100, this);
    }

    // 0x4D65E0 | ??1vehStuck@@UAE@XZ
    inline ~vehStuck() override
    {
        stub<member_func_t<void, vehStuck>>(0x4D65E0, this);
    }

    // 0x4D6140 | ?Update@vehStuck@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehStuck>>(0x4D6140, this);
    }

    // 0x4D6060 | ?Reset@vehStuck@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, vehStuck>>(0x4D6060, this);
    }

    // 0x4D6510 | ?FileIO@vehStuck@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehStuck, class datParser&>>(0x4D6510, this, arg1);
    }

    // 0x4D65F0 | ?GetClassName@vehStuck@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, vehStuck>>(0x4D65F0, this);
    }

    // 0x4D6080 | ?GetDirName@vehStuck@@UAEPBDXZ
    inline char const* GetDirName() override
    {
        return stub<member_func_t<char const*, vehStuck>>(0x4D6080, this);
    }
};
