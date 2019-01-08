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
    mmui:pu_results

    0x508FC0 | public: __thiscall PUResults::PUResults(int,float,float,float,float,char *,int,int) | ??0PUResults@@QAE@HMMMMPADHH@Z
    0x509120 | public: void __thiscall PUResults::Init320(void) | ?Init320@PUResults@@QAEXXZ
    0x509600 | public: void __thiscall PUResults::Init640(void) | ?Init640@PUResults@@QAEXXZ
    0x509B10 | public: virtual __thiscall PUResults::~PUResults(void) | ??1PUResults@@UAE@XZ
    0x509B20 | public: void __thiscall PUResults::AddTitle(struct LocString *,struct LocString *) | ?AddTitle@PUResults@@QAEXPAULocString@@0@Z
    0x509B50 | public: virtual void __thiscall PUResults::Reset(void) | ?Reset@PUResults@@UAEXXZ
    0x509B60 | public: void __thiscall PUResults::RosterRO(int) | ?RosterRO@PUResults@@QAEXH@Z
    0x509B80 | public: void __thiscall PUResults::RestartRO(int) | ?RestartRO@PUResults@@QAEXH@Z
    0x509BA0 | public: int __thiscall PUResults::IsRosterReadOnly(void) | ?IsRosterReadOnly@PUResults@@QAEHXZ
    0x509BB0 | public: int __thiscall PUResults::IsRaceMenuReadOnly(void) | ?IsRaceMenuReadOnly@PUResults@@QAEHXZ
    0x509BC0 | public: void __thiscall PUResults::RaceMenuRO(int) | ?RaceMenuRO@PUResults@@QAEXH@Z
    0x509BE0 | public: void __thiscall PUResults::AddName(int,char const *,float) | ?AddName@PUResults@@QAEXHPBDM@Z
    0x509CA0 | public: void __thiscall PUResults::AddName(int,char const *,char const *) | ?AddName@PUResults@@QAEXHPBD0@Z
    0x509D40 | public: void __thiscall PUResults::AddName(int,char const *,int) | ?AddName@PUResults@@QAEXHPBDH@Z
    0x509E10 | public: void __thiscall PUResults::AddLoser(int,char const *) | ?AddLoser@PUResults@@QAEXHPBD@Z
    0x509E70 | public: void __thiscall PUResults::ClearNames(void) | ?ClearNames@PUResults@@QAEXXZ
    0x509EE0 | public: void __thiscall PUResults::DisableNextRace(void) | ?DisableNextRace@PUResults@@QAEXXZ
    0x509EF0 | public: void __thiscall PUResults::EnableNextRace(void) | ?EnableNextRace@PUResults@@QAEXXZ
    0x509F00 | public: void __thiscall PUResults::SetMessage(struct LocString *) | ?SetMessage@PUResults@@QAEXPAULocString@@@Z
    0x509F20 | public: virtual void * __thiscall PUResults::`scalar deleting destructor'(unsigned int) | ??_GPUResults@@UAEPAXI@Z
    public: virtual void * __thiscall PUResults::`vector deleting destructor'(unsigned int) | ??_EPUResults@@UAEPAXI@Z
    0x5B4680 | const PUResults::`vftable' | ??_7PUResults@@6B@
*/

#include "hooking.h"
