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
    vehicle:wheelptx

    0x4D1C00 | public: __thiscall vehWheelPtx::vehWheelPtx(void) | ??0vehWheelPtx@@QAE@XZ
    0x4D1C60 | public: virtual __thiscall vehWheelPtx::~vehWheelPtx(void) | ??1vehWheelPtx@@UAE@XZ
    0x4D1CC0 | public: static void __cdecl vehWheelPtx::ConstructClass(char const *) | ?ConstructClass@vehWheelPtx@@SAXPBD@Z
    0x4D1D90 | public: static void __cdecl vehWheelPtx::DestroyClass(void) | ?DestroyClass@vehWheelPtx@@SAXXZ
    0x4D1DC0 | public: virtual void __thiscall vehWheelPtx::Reset(void) | ?Reset@vehWheelPtx@@UAEXXZ
    0x4D1DD0 | public: void __thiscall vehWheelPtx::Init(class vehCarSim *) | ?Init@vehWheelPtx@@QAEXPAVvehCarSim@@@Z
    0x4D1E40 | public: virtual void __thiscall vehWheelPtx::Update(void) | ?Update@vehWheelPtx@@UAEXXZ
    0x4D1E90 | public: void __thiscall vehWheelPtx::UpdateWheel(class vehWheel *) | ?UpdateWheel@vehWheelPtx@@QAEXPAVvehWheel@@@Z
    0x4D1EF0 | public: void __thiscall vehWheelPtx::Blast(class vehWheel *,float,int,int) | ?Blast@vehWheelPtx@@QAEXPAVvehWheel@@MHH@Z
    public: virtual void __thiscall vehWheelPtx::AddWidgets(class bkBank &) | ?AddWidgets@vehWheelPtx@@UAEXAAVbkBank@@@Z
    public: static void __cdecl vehWheelPtx::AddRuleWidgets(class bkBank &) | ?AddRuleWidgets@vehWheelPtx@@SAXAAVbkBank@@@Z
    public: virtual void * __thiscall vehWheelPtx::`vector deleting destructor'(unsigned int) | ??_EvehWheelPtx@@UAEPAXI@Z
    0x4D2160 | public: virtual void * __thiscall vehWheelPtx::`scalar deleting destructor'(unsigned int) | ??_GvehWheelPtx@@UAEPAXI@Z
    0x5B2D98 | const vehWheelPtx::`vftable' | ??_7vehWheelPtx@@6B@
    public: static char * vehWheelPtx::TexName | ?TexName@vehWheelPtx@@2PADA
    public: static char * * vehWheelPtx::PtxName | ?PtxName@vehWheelPtx@@2PAPADA
    0x6AFFAC | public: static class asBirthRule * * vehWheelPtx::Rule | ?Rule@vehWheelPtx@@2PAPAVasBirthRule@@A
*/

#include "hooking.h"
