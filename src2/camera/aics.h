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
    camera:aics

    0x520A30 | public: __thiscall camAICS::camAICS(void) | ??0camAICS@@QAE@XZ
    0x520A70 | public: void __thiscall camAICS::Init(class vehCar *) | ?Init@camAICS@@QAEXPAVvehCar@@@Z
    0x520AB0 | public: virtual void __thiscall camAICS::Reset(void) | ?Reset@camAICS@@UAEXXZ
    0x520AC0 | public: void __thiscall camAICS::SetPosition(class Vector3 &) | ?SetPosition@camAICS@@QAEXAAVVector3@@@Z
    0x520AE0 | public: void __thiscall camAICS::SetMatrix(class Matrix34 *) | ?SetMatrix@camAICS@@QAEXPAVMatrix34@@@Z
    0x520BA0 | public: virtual void __thiscall camAICS::MakeActive(void) | ?MakeActive@camAICS@@UAEXXZ
    0x520C50 | public: virtual void __thiscall camAICS::Update(void) | ?Update@camAICS@@UAEXXZ
    public: virtual void * __thiscall camAICS::`vector deleting destructor'(unsigned int) | ??_EcamAICS@@UAEPAXI@Z
    0x520F80 | public: virtual void * __thiscall camAICS::`scalar deleting destructor'(unsigned int) | ??_GcamAICS@@UAEPAXI@Z
    0x5B501C | const camAICS::`vftable' | ??_7camAICS@@6B@
*/

struct camAICS : camCarCS
{
public:
    // camAICS::`vftable' @ 0x5B501C

    // 0x520A30 | ??0camAICS@@QAE@XZ
    inline camAICS()
    {
        stub<member_func_t<void, camAICS>>(0x520A30, this);
    }

    // 0x520A70 | ?Init@camAICS@@QAEXPAVvehCar@@@Z
    inline void Init(class vehCar* arg1)
    {
        return stub<member_func_t<void, camAICS, class vehCar*>>(0x520A70, this, arg1);
    }

    // 0x520AC0 | ?SetPosition@camAICS@@QAEXAAVVector3@@@Z
    inline void SetPosition(class Vector3& arg1)
    {
        return stub<member_func_t<void, camAICS, class Vector3&>>(0x520AC0, this, arg1);
    }

    // 0x520AE0 | ?SetMatrix@camAICS@@QAEXPAVMatrix34@@@Z
    inline void SetMatrix(class Matrix34* arg1)
    {
        return stub<member_func_t<void, camAICS, class Matrix34*>>(0x520AE0, this, arg1);
    }

    // 0x406810 | ??1camAICS@@UAE@XZ
    inline ~camAICS() override
    {
        stub<member_func_t<void, camAICS>>(0x406810, this);
    }

    // 0x520C50 | ?Update@camAICS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, camAICS>>(0x520C50, this);
    }

    // 0x520AB0 | ?Reset@camAICS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, camAICS>>(0x520AB0, this);
    }

    // 0x520BA0 | ?MakeActive@camAICS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, camAICS>>(0x520BA0, this);
    }
};
