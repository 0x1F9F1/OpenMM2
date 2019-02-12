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
    vehicle:breakable

    0x4D8530 | public: __thiscall vehBreakable::vehBreakable(class modStatic * *,class Matrix34 &,int,int,int) | ??0vehBreakable@@QAE@PAPAVmodStatic@@AAVMatrix34@@HHH@Z
    0x4D8580 | public: __thiscall vehBreakableMgr::vehBreakableMgr(void) | ??0vehBreakableMgr@@QAE@XZ
    0x4D85B0 | public: __thiscall vehBreakableMgr::~vehBreakableMgr(void) | ??1vehBreakableMgr@@QAE@XZ
    0x4D85E0 | public: bool __thiscall vehBreakableMgr::Init(class Matrix34 *) | ?Init@vehBreakableMgr@@QAE_NPAVMatrix34@@@Z
    0x4D8600 | public: class vehBreakable * __thiscall vehBreakableMgr::Create(char const *,char const *,class modStatic * *,int,int) | ?Create@vehBreakableMgr@@QAEPAVvehBreakable@@PBD0PAPAVmodStatic@@HH@Z
    0x4D86A0 | public: void __thiscall vehBreakableMgr::Add(char const *,char const *,class modStatic * *,int,int) | ?Add@vehBreakableMgr@@QAEXPBD0PAPAVmodStatic@@HH@Z
    0x4D86F0 | public: class vehBreakable * __thiscall vehBreakableMgr::Get(int) | ?Get@vehBreakableMgr@@QAEPAVvehBreakable@@H@Z
    0x4D8710 | public: void __thiscall vehBreakableMgr::Reset(void) | ?Reset@vehBreakableMgr@@QAEXXZ
    0x4D8770 | public: void __thiscall vehBreakableMgr::Update(void) | ?Update@vehBreakableMgr@@QAEXXZ
    0x4D8780 | public: void __thiscall vehBreakableMgr::Draw(class Matrix34 const &,class modShader *,int) | ?Draw@vehBreakableMgr@@QAEXABVMatrix34@@PAVmodShader@@H@Z
    0x4D8890 | public: void __thiscall vehBreakableMgr::DrawCityLit(class Matrix34 const &,class modShader *,int) | ?DrawCityLit@vehBreakableMgr@@QAEXABVMatrix34@@PAVmodShader@@H@Z
    0x4D88A0 | public: void __thiscall vehBreakableMgr::Impact(float,class Vector3 const &,int) | ?Impact@vehBreakableMgr@@QAEXMABVVector3@@H@Z
    0x4D8940 | public: void __thiscall vehBreakableMgr::Eject(class vehBreakable *,int) | ?Eject@vehBreakableMgr@@QAEXPAVvehBreakable@@H@Z
    0x4D8BB0 | public: void __thiscall vehBreakableMgr::EjectAll(int) | ?EjectAll@vehBreakableMgr@@QAEXH@Z
    public: void __thiscall vehBreakableMgr::AddWidgets(class bkBank *) | ?AddWidgets@vehBreakableMgr@@QAEXPAVbkBank@@@Z
    0x4D8BE0 | public: void __thiscall vehBreakable::Add(class vehBreakable *) | ?Add@vehBreakable@@QAEXPAV1@@Z
*/

// #include "hooking.h"
