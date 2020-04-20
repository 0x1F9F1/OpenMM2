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
    camera:pointcs

    0x520610 | public: __thiscall camPointCS::camPointCS(void) | ??0camPointCS@@QAE@XZ
    0x520690 | public: virtual void __thiscall camPointCS::Reset(void) | ?Reset@camPointCS@@UAEXXZ
    0x5206A0 | public: virtual void __thiscall camPointCS::MakeActive(void) | ?MakeActive@camPointCS@@UAEXXZ
    0x5206B0 | public: void __thiscall camPointCS::SetPos(class Vector3 &) | ?SetPos@camPointCS@@QAEXAAVVector3@@@Z
    0x5206F0 | public: void __thiscall camPointCS::SetMaxDist(float) | ?SetMaxDist@camPointCS@@QAEXM@Z
    0x520710 | public: void __thiscall camPointCS::SetMinDist(float) | ?SetMinDist@camPointCS@@QAEXM@Z
    0x520730 | public: void __thiscall camPointCS::SetAppRate(float) | ?SetAppRate@camPointCS@@QAEXM@Z
    0x520740 | public: void __thiscall camPointCS::SetVel(class Vector3 &) | ?SetVel@camPointCS@@QAEXAAVVector3@@@Z
    0x520760 | public: class Vector3 __thiscall camPointCS::GetPos(void) | ?GetPos@camPointCS@@QAE?AVVector3@@XZ
    0x520790 | public: virtual void __thiscall camPointCS::Update(void) | ?Update@camPointCS@@UAEXXZ
    0x5209F0 | public: virtual void * __thiscall camPointCS::`scalar deleting destructor'(unsigned int) | ??_GcamPointCS@@UAEPAXI@Z
    public: virtual void * __thiscall camPointCS::`vector deleting destructor'(unsigned int) | ??_EcamPointCS@@UAEPAXI@Z
    0x520A20 | public: virtual char * __thiscall camPointCS::GetClassName(void) | ?GetClassName@camPointCS@@UAEPADXZ
    0x5B4FD8 | const camPointCS::`vftable' | ??_7camPointCS@@6B@
*/

struct camPointCS : camCarCS
{
public:
    // camPointCS::`vftable' @ 0x5B4FD8

    // 0x520610 | ??0camPointCS@@QAE@XZ
    inline camPointCS()
    {
        stub<member_func_t<void, camPointCS>>(0x520610, this);
    }

    // 0x5206B0 | ?SetPos@camPointCS@@QAEXAAVVector3@@@Z
    inline void SetPos(class Vector3& arg1)
    {
        return stub<member_func_t<void, camPointCS, class Vector3&>>(0x5206B0, this, arg1);
    }

    // 0x5206F0 | ?SetMaxDist@camPointCS@@QAEXM@Z
    inline void SetMaxDist(float arg1)
    {
        return stub<member_func_t<void, camPointCS, float>>(0x5206F0, this, arg1);
    }

    // 0x520710 | ?SetMinDist@camPointCS@@QAEXM@Z
    inline void SetMinDist(float arg1)
    {
        return stub<member_func_t<void, camPointCS, float>>(0x520710, this, arg1);
    }

    // 0x520730 | ?SetAppRate@camPointCS@@QAEXM@Z
    inline void SetAppRate(float arg1)
    {
        return stub<member_func_t<void, camPointCS, float>>(0x520730, this, arg1);
    }

    // 0x520740 | ?SetVel@camPointCS@@QAEXAAVVector3@@@Z
    inline void SetVel(class Vector3& arg1)
    {
        return stub<member_func_t<void, camPointCS, class Vector3&>>(0x520740, this, arg1);
    }

    // 0x520760 | ?GetPos@camPointCS@@QAE?AVVector3@@XZ
    inline class Vector3 GetPos()
    {
        return stub<member_func_t<class Vector3, camPointCS>>(0x520760, this);
    }

    // 0x406820 | ??1camPointCS@@UAE@XZ
    inline ~camPointCS() override
    {
        stub<member_func_t<void, camPointCS>>(0x406820, this);
    }

    // 0x520790 | ?Update@camPointCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, camPointCS>>(0x520790, this);
    }

    // 0x520690 | ?Reset@camPointCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, camPointCS>>(0x520690, this);
    }

    // 0x520A20 | ?GetClassName@camPointCS@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, camPointCS>>(0x520A20, this);
    }

    // 0x5206A0 | ?MakeActive@camPointCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, camPointCS>>(0x5206A0, this);
    }
};
