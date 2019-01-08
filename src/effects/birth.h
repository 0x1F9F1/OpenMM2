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
    effects:birth

    0x45ECE0 | public: __thiscall asBirthRule::asBirthRule(void) | ??0asBirthRule@@QAE@XZ
    0x45EDB0 | public: virtual char const * __thiscall asBirthRule::GetDirName(void) | ?GetDirName@asBirthRule@@UAEPBDXZ
    0x45EDC0 | public: void __thiscall asBirthRule::InitSpark(struct asSparkInfo *,class asParticles &,int) | ?InitSpark@asBirthRule@@QAEXPAUasSparkInfo@@AAVasParticles@@H@Z
    0x45F0A0 | public: void __thiscall asBirthRule::Copy(class asBirthRule *) | ?Copy@asBirthRule@@QAEXPAV1@@Z
    public: virtual void __thiscall asBirthRule::AddWidgets(class bkBank &) | ?AddWidgets@asBirthRule@@UAEXAAVbkBank@@@Z
    0x45F210 | public: void __thiscall asBirthRule::Indent(class datBaseTokenizer *,int) | ?Indent@asBirthRule@@QAEXPAVdatBaseTokenizer@@H@Z
    0x45F240 | public: void __thiscall asBirthRule::Save(class datBaseTokenizer *,int) | ?Save@asBirthRule@@QAEXPAVdatBaseTokenizer@@H@Z
    0x45F720 | public: void __thiscall asBirthRule::Load(class datBaseTokenizer *) | ?Load@asBirthRule@@QAEXPAVdatBaseTokenizer@@@Z
    0x45F900 | public: virtual void __thiscall asBirthRule::FileIO(class datParser &) | ?FileIO@asBirthRule@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall asBirthRule::`vector deleting destructor'(unsigned int) | ??_EasBirthRule@@UAEPAXI@Z
    0x45FBC0 | public: virtual void * __thiscall asBirthRule::`scalar deleting destructor'(unsigned int) | ??_GasBirthRule@@UAEPAXI@Z
    0x45FBF0 | public: virtual __thiscall asBirthRule::~asBirthRule(void) | ??1asBirthRule@@UAE@XZ
    0x45FC00 | public: void __thiscall datParser::AddValue(char const *,int *,class datCallback *) | ?AddValue@datParser@@QAEXPBDPAHPAVdatCallback@@@Z
    0x45FC20 | public: virtual char * __thiscall asBirthRule::GetClassName(void) | ?GetClassName@asBirthRule@@UAEPADXZ
    0x5B18F8 | const asBirthRule::`vftable' | ??_7asBirthRule@@6B@
*/

#include "hooking.h"
