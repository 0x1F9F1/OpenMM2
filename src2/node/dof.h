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
    node:dof

    0x596E20 | public: __thiscall asDofCS::asDofCS(void) | ??0asDofCS@@QAE@XZ
    0x596F10 | public: void __thiscall asDofCS::operator=(class asDofCS const &) | ??4asDofCS@@QAEXABV0@@Z
    0x597050 | public: virtual void __thiscall asDofCS::Reset(void) | ?Reset@asDofCS@@UAEXXZ
    0x597080 | public: void __thiscall asDofCS::SetTime(float,float,int) | ?SetTime@asDofCS@@QAEXMMH@Z
    0x5970F0 | public: virtual void __thiscall asDofCS::Update(void) | ?Update@asDofCS@@UAEXXZ
    0x597750 | public: void __thiscall asDofCS::AddWidgets(class Bank *) | ?AddWidgets@asDofCS@@QAEXPAVBank@@@Z
    0x597760 | public: virtual void * __thiscall asDofCS::`scalar deleting destructor'(unsigned int) | ??_GasDofCS@@UAEPAXI@Z
    public: virtual char * __thiscall asDofCS::GetClassName(void) | ?GetClassName@asDofCS@@UAEPADXZ
    0x5B86E8 | const asDofCS::`vftable' | ??_7asDofCS@@6B@
*/

class asDofCS : asLinearCS
{
public:
    // asDofCS::`vftable' @ 0x5B86E8

    // 0x596E20 | ??0asDofCS@@QAE@XZ
    inline asDofCS()
    {
        stub<member_func_t<void, asDofCS>>(0x596E20, this);
    }

    // 0x596F10 | ??4asDofCS@@QAEXABV0@@Z
    inline void operator=(class asDofCS const& arg1)
    {
        return stub<member_func_t<void, asDofCS, class asDofCS const&>>(0x596F10, this, arg1);
    }

    // 0x597080 | ?SetTime@asDofCS@@QAEXMMH@Z
    inline void SetTime(f32 arg1, f32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, asDofCS, f32, f32, i32>>(0x597080, this, arg1, arg2, arg3);
    }

    // 0x597750 | ?AddWidgets@asDofCS@@QAEXPAVBank@@@Z
    inline void AddWidgets(class Bank* arg1)
    {
        return stub<member_func_t<void, asDofCS, class Bank*>>(0x597750, this, arg1);
    }

    // 0x4F79F0 | ??1asDofCS@@UAE@XZ
    inline ~asDofCS() override
    {
        stub<member_func_t<void, asDofCS>>(0x4F79F0, this);
    }

    // 0x5970F0 | ?Update@asDofCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asDofCS>>(0x5970F0, this);
    }

    // 0x597050 | ?Reset@asDofCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, asDofCS>>(0x597050, this);
    }
};
