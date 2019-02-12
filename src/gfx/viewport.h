/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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

// #include "hooking.h"
