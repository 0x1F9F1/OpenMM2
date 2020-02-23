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
    gfx:viewport

    0x4B13A0 | private: __thiscall gfxViewport::gfxViewport(void) | ??0gfxViewport@@AAE@XZ
    0x4B14A0 | public: void __thiscall gfxViewport::ResetWindow(void) | ?ResetWindow@gfxViewport@@QAEXXZ
    0x4B14C0 | public: void __thiscall gfxViewport::SetWindow(int,int,int,int,float,float) | ?SetWindow@gfxViewport@@QAEXHHHHMM@Z
    0x4B1640 | public: void __thiscall gfxViewport::Perspective(float,float,float,float) | ?Perspective@gfxViewport@@QAEXMMMM@Z
    0x4B1800 | public: void __thiscall gfxViewport::Ortho(float,float,float,float,float,float) | ?Ortho@gfxViewport@@QAEXMMMMMM@Z
    0x4B18D0 | private: void __thiscall gfxViewport::DoFlush(void) | ?DoFlush@gfxViewport@@AAEXXZ
    0x4B1960 | public: void __thiscall gfxViewport::Project(class Vector4 &,class Vector4 &) | ?Project@gfxViewport@@QAEXAAVVector4@@0@Z
    0x4B19B0 | public: float __thiscall gfxViewport::ComputeVFOV(float) const | ?ComputeVFOV@gfxViewport@@QBEMM@Z
    0x4B19D0 | public: enum gfxCullStatus __thiscall gfxViewport::IsSphereVisible(float,float,float,float,float *) const | ?IsSphereVisible@gfxViewport@@QBE?AW4gfxCullStatus@@MMMMPAM@Z
    0x4B2B50 | public: static void __cdecl gfxViewport::DoPerspective(class gfxViewport *) | ?DoPerspective@gfxViewport@@SAXPAV1@@Z
    public: void __thiscall gfxViewport::AddWidgets(class bkBank &) | ?AddWidgets@gfxViewport@@QAEXAAVbkBank@@@Z
    public: __thiscall Vector4::Vector4(float,float,float,float) | ??0Vector4@@QAE@MMMM@Z
*/

class gfxViewport
{
public:
    // 0x4B13A0 | ??0gfxViewport@@AAE@XZ
    inline gfxViewport()
    {
        stub<member_func_t<void, gfxViewport>>(0x4B13A0, this);
    }

    // 0x4B14A0 | ?ResetWindow@gfxViewport@@QAEXXZ
    inline void ResetWindow()
    {
        return stub<member_func_t<void, gfxViewport>>(0x4B14A0, this);
    }

    // 0x4B14C0 | ?SetWindow@gfxViewport@@QAEXHHHHMM@Z
    inline void SetWindow(i32 arg1, i32 arg2, i32 arg3, i32 arg4, f32 arg5, f32 arg6)
    {
        return stub<member_func_t<void, gfxViewport, i32, i32, i32, i32, f32, f32>>(
            0x4B14C0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4B1640 | ?Perspective@gfxViewport@@QAEXMMMM@Z
    inline void Perspective(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
    {
        return stub<member_func_t<void, gfxViewport, f32, f32, f32, f32>>(0x4B1640, this, arg1, arg2, arg3, arg4);
    }

    // 0x4B1800 | ?Ortho@gfxViewport@@QAEXMMMMMM@Z
    inline void Ortho(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
    {
        return stub<member_func_t<void, gfxViewport, f32, f32, f32, f32, f32, f32>>(
            0x4B1800, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4B18D0 | ?DoFlush@gfxViewport@@AAEXXZ
    inline void DoFlush()
    {
        return stub<member_func_t<void, gfxViewport>>(0x4B18D0, this);
    }

    // 0x4B1960 | ?Project@gfxViewport@@QAEXAAVVector4@@0@Z
    inline void Project(class Vector4& arg1, class Vector4& arg2)
    {
        return stub<member_func_t<void, gfxViewport, class Vector4&, class Vector4&>>(0x4B1960, this, arg1, arg2);
    }

    // 0x4B19B0 | ?ComputeVFOV@gfxViewport@@QBEMM@Z
    inline f32 ComputeVFOV(f32 arg1)
    {
        return stub<member_func_t<f32, gfxViewport, f32>>(0x4B19B0, this, arg1);
    }

    // 0x4B19D0 | ?IsSphereVisible@gfxViewport@@QBE?AW4gfxCullStatus@@MMMMPAM@Z
    inline enum gfxCullStatus IsSphereVisible(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32* arg5)
    {
        return stub<member_func_t<enum gfxCullStatus, gfxViewport, f32, f32, f32, f32, f32*>>(
            0x4B19D0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4B2B50 | ?DoPerspective@gfxViewport@@SAXPAV1@@Z
    static inline void DoPerspective(class gfxViewport* arg1)
    {
        return stub<cdecl_t<void, class gfxViewport*>>(0x4B2B50, arg1);
    }
};
