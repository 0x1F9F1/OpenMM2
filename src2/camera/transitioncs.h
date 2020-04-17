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
    camera:transitioncs

    0x521530 | public: __thiscall camTransitionCS::camTransitionCS(void) | ??0camTransitionCS@@QAE@XZ
    0x5215C0 | public: virtual __thiscall camTransitionCS::~camTransitionCS(void) | ??1camTransitionCS@@UAE@XZ
    0x5215D0 | public: void __thiscall camTransitionCS::Init(class vehCar *) | ?Init@camTransitionCS@@QAEXPAVvehCar@@@Z
    0x521600 | public: virtual void __thiscall camTransitionCS::Reset(void) | ?Reset@camTransitionCS@@UAEXXZ
    0x521610 | public: virtual void __thiscall camTransitionCS::Update(void) | ?Update@camTransitionCS@@UAEXXZ
    0x521B90 | public: virtual void __thiscall camTransitionCS::ForceMatrixDelta(class Vector3 const &) | ?ForceMatrixDelta@camTransitionCS@@UAEXABVVector3@@@Z
    0x521BC0 | public: void __thiscall camTransitionCS::NewTransition(class camCarCS *,class camCarCS *) | ?NewTransition@camTransitionCS@@QAEXPAVcamCarCS@@0@Z
    0x521BF0 | public: void __thiscall camTransitionCS::NextTransition(class camCarCS *) | ?NextTransition@camTransitionCS@@QAEXPAVcamCarCS@@@Z
    0x521C30 | public: void __thiscall camTransitionCS::StartTransition(void) | ?StartTransition@camTransitionCS@@QAEXXZ
    0x521CA0 | public: void __thiscall camTransitionCS::StartNextTransition(void) | ?StartNextTransition@camTransitionCS@@QAEXXZ
    0x521CE0 | public: void __thiscall camTransitionCS::ReverseTransition(void) | ?ReverseTransition@camTransitionCS@@QAEXXZ
    public: virtual void * __thiscall camTransitionCS::`vector deleting destructor'(unsigned int) | ??_EcamTransitionCS@@UAEPAXI@Z
    0x521D30 | public: virtual void * __thiscall camTransitionCS::`scalar deleting destructor'(unsigned int) | ??_GcamTransitionCS@@UAEPAXI@Z
    0x5B50EC | const camTransitionCS::`vftable' | ??_7camTransitionCS@@6B@
*/

struct camTransitionCS : camCarCS
{
public:
    // camTransitionCS::`vftable' @ 0x5B50EC

    // 0x521530 | ??0camTransitionCS@@QAE@XZ
    camTransitionCS()
    {
        stub<member_func_t<void, camTransitionCS>>(0x521530, this);
    }

    // 0x5215D0 | ?Init@camTransitionCS@@QAEXPAVvehCar@@@Z
    void Init(class vehCar* arg1)
    {
        return stub<member_func_t<void, camTransitionCS, class vehCar*>>(0x5215D0, this, arg1);
    }

    // 0x521BC0 | ?NewTransition@camTransitionCS@@QAEXPAVcamCarCS@@0@Z
    void NewTransition(class camCarCS* arg1, class camCarCS* arg2)
    {
        return stub<member_func_t<void, camTransitionCS, class camCarCS*, class camCarCS*>>(0x521BC0, this, arg1, arg2);
    }

    // 0x521BF0 | ?NextTransition@camTransitionCS@@QAEXPAVcamCarCS@@@Z
    void NextTransition(class camCarCS* arg1)
    {
        return stub<member_func_t<void, camTransitionCS, class camCarCS*>>(0x521BF0, this, arg1);
    }

    // 0x521C30 | ?StartTransition@camTransitionCS@@QAEXXZ
    void StartTransition()
    {
        return stub<member_func_t<void, camTransitionCS>>(0x521C30, this);
    }

    // 0x521CA0 | ?StartNextTransition@camTransitionCS@@QAEXXZ
    void StartNextTransition()
    {
        return stub<member_func_t<void, camTransitionCS>>(0x521CA0, this);
    }

    // 0x521CE0 | ?ReverseTransition@camTransitionCS@@QAEXXZ
    void ReverseTransition()
    {
        return stub<member_func_t<void, camTransitionCS>>(0x521CE0, this);
    }

    // 0x5215C0 | ??1camTransitionCS@@UAE@XZ
    ~camTransitionCS() override
    {
        stub<member_func_t<void, camTransitionCS>>(0x5215C0, this);
    }

    // 0x521610 | ?Update@camTransitionCS@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, camTransitionCS>>(0x521610, this);
    }

    // 0x521600 | ?Reset@camTransitionCS@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, camTransitionCS>>(0x521600, this);
    }

    // 0x521B90 | ?ForceMatrixDelta@camTransitionCS@@UAEXABVVector3@@@Z
    void ForceMatrixDelta(class Vector3 const& arg1) override
    {
        return stub<member_func_t<void, camTransitionCS, class Vector3 const&>>(0x521B90, this, arg1);
    }
};
