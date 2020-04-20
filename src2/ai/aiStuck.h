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
    ai:aiStuck

    0x56F960 | public: __thiscall aiStuck::aiStuck(void) | ??0aiStuck@@QAE@XZ
    0x56F9F0 | public: void __thiscall aiStuck::Init(class vehCar *) | ?Init@aiStuck@@QAEXPAVvehCar@@@Z
    0x56FA10 | public: void __thiscall aiStuck::Impact(void) | ?Impact@aiStuck@@QAEXXZ
    0x56FA20 | public: virtual void __thiscall aiStuck::Reset(void) | ?Reset@aiStuck@@UAEXXZ
    0x56FA30 | public: int __thiscall aiStuck::Pegged(void) | ?Pegged@aiStuck@@QAEHXZ
    0x56FAA0 | public: virtual void __thiscall aiStuck::Update(void) | ?Update@aiStuck@@UAEXXZ
    public: void __thiscall aiStuck::AddWidgets(class bkBank *) | ?AddWidgets@aiStuck@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall aiStuck::`vector deleting destructor'(unsigned int) | ??_EaiStuck@@UAEPAXI@Z
    0x56FC60 | public: virtual void * __thiscall aiStuck::`scalar deleting destructor'(unsigned int) | ??_GaiStuck@@UAEPAXI@Z
    0x5B5C54 | const aiStuck::`vftable' | ??_7aiStuck@@6B@
*/

struct aiStuck : asNode
{
public:
    // aiStuck::`vftable' @ 0x5B5C54

    // 0x56F960 | ??0aiStuck@@QAE@XZ
    inline aiStuck()
    {
        stub<member_func_t<void, aiStuck>>(0x56F960, this);
    }

    // 0x56F9F0 | ?Init@aiStuck@@QAEXPAVvehCar@@@Z
    inline void Init(class vehCar* arg1)
    {
        return stub<member_func_t<void, aiStuck, class vehCar*>>(0x56F9F0, this, arg1);
    }

    // 0x56FA10 | ?Impact@aiStuck@@QAEXXZ
    inline void Impact()
    {
        return stub<member_func_t<void, aiStuck>>(0x56FA10, this);
    }

    // 0x56FA30 | ?Pegged@aiStuck@@QAEHXZ
    inline int32_t Pegged()
    {
        return stub<member_func_t<int32_t, aiStuck>>(0x56FA30, this);
    }

    // 0x567B80 | ??1aiStuck@@UAE@XZ
    inline ~aiStuck() override
    {
        stub<member_func_t<void, aiStuck>>(0x567B80, this);
    }

    // 0x56FAA0 | ?Update@aiStuck@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiStuck>>(0x56FAA0, this);
    }

    // 0x56FA20 | ?Reset@aiStuck@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiStuck>>(0x56FA20, this);
    }
};
