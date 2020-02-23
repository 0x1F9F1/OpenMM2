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
    node:linear

    0x4A32F0 | public: __thiscall asLinearCS::asLinearCS(void) | ??0asLinearCS@@QAE@XZ
    0x4A3370 | public: virtual void __thiscall asLinearCS::Update(void) | ?Update@asLinearCS@@UAEXXZ
    0x4A3400 | public: virtual void __thiscall asLinearCS::Cull(void) | ?Cull@asLinearCS@@UAEXXZ
    0x4A3410 | public: virtual void * __thiscall asLinearCS::`vector deleting destructor'(unsigned int) | ??_EasLinearCS@@UAEPAXI@Z
    public: virtual void * __thiscall asLinearCS::`scalar deleting destructor'(unsigned int) | ??_GasLinearCS@@UAEPAXI@Z
    public: virtual char * __thiscall asLinearCS::GetClassName(void) | ?GetClassName@asLinearCS@@UAEPADXZ
    0x5B29AC | const asLinearCS::`vftable' | ??_7asLinearCS@@6B@
    private: static int asLinearCS::FrameHeight | ?FrameHeight@asLinearCS@@0HA
    0x6617A8 | private: static class asLinearCS asLinearCS::RootFrame | ?RootFrame@asLinearCS@@0V1@A
    0x661828 | private: static class asLinearCS * * asLinearCS::FrameStack | ?FrameStack@asLinearCS@@0PAPAV1@A
    0x6618AC | private: static class Matrix34 * asLinearCS::CurrentMatrix | ?CurrentMatrix@asLinearCS@@0PAVMatrix34@@A
*/

class asLinearCS : asNode
{
public:
    // asLinearCS::`vftable' @ 0x5B29AC

    // 0x4A32F0 | ??0asLinearCS@@QAE@XZ
    inline asLinearCS()
    {
        stub<member_func_t<void, asLinearCS>>(0x4A32F0, this);
    }

    // 0x6617A8 | ?RootFrame@asLinearCS@@0V1@A
    static inline extern_var(0x6617A8, class asLinearCS, RootFrame);

    // 0x661828 | ?FrameStack@asLinearCS@@0PAPAV1@A
    inline extern_var(0x661828, class asLinearCS**, FrameStack);

    // 0x6618AC | ?CurrentMatrix@asLinearCS@@0PAVMatrix34@@A
    inline extern_var(0x6618AC, class Matrix34*, CurrentMatrix);

    // 0x431B80 | ??1asLinearCS@@UAE@XZ
    inline ~asLinearCS() override
    {
        stub<member_func_t<void, asLinearCS>>(0x431B80, this);
    }

    // 0x4A3400 | ?Cull@asLinearCS@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, asLinearCS>>(0x4A3400, this);
    }

    // 0x4A3370 | ?Update@asLinearCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asLinearCS>>(0x4A3370, this);
    }
};
