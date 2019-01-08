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
    mmui:pu_roster

    0x50A8B0 | public: __thiscall PURoster::PURoster(int,float,float,float,float) | ??0PURoster@@QAE@HMMMM@Z
    0x50AA60 | public: virtual __thiscall PURoster::~PURoster(void) | ??1PURoster@@UAE@XZ
    0x50AA70 | public: virtual void __thiscall PURoster::Reset(void) | ?Reset@PURoster@@UAEXXZ
    0x50AA80 | public: void __thiscall PURoster::BootButtonCB(void) | ?BootButtonCB@PURoster@@QAEXXZ
    0x50AAE0 | public: void __thiscall PURoster::SetHost(int) | ?SetHost@PURoster@@QAEXH@Z
    0x50AB50 | public: void __thiscall PURoster::AddName(char const *,unsigned long,int) | ?AddName@PURoster@@QAEXPBDKH@Z
    0x50AC30 | public: void __thiscall PURoster::RemoveName(char const *,unsigned long) | ?RemoveName@PURoster@@QAEXPBDK@Z
    0x50AD70 | public: void __thiscall PURoster::RemoveName(unsigned long) | ?RemoveName@PURoster@@QAEXK@Z
    0x50AEA0 | public: void __thiscall PURoster::ClearNames(void) | ?ClearNames@PURoster@@QAEXXZ
    0x50AF20 | public: void __thiscall PURoster::PostNames(void) | ?PostNames@PURoster@@QAEXXZ
    0x50AF50 | public: void __thiscall PURoster::SetBootCB(class datCallback) | ?SetBootCB@PURoster@@QAEXVdatCallback@@@Z
    0x50AF70 | public: int __thiscall PURoster::FindRosterName(char const *) | ?FindRosterName@PURoster@@QAEHPBD@Z
    0x50AFE0 | public: int __thiscall PURoster::FindRosterName(unsigned long) | ?FindRosterName@PURoster@@QAEHK@Z
    public: virtual void * __thiscall PURoster::`vector deleting destructor'(unsigned int) | ??_EPURoster@@UAEPAXI@Z
    0x50B010 | public: virtual void * __thiscall PURoster::`scalar deleting destructor'(unsigned int) | ??_GPURoster@@UAEPAXI@Z
    0x5B4768 | const PURoster::`vftable' | ??_7PURoster@@6B@
*/

#include "hooking.h"
