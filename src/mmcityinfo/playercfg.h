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
    mmcityinfo:playercfg

    0x5254B0 | public: __thiscall mmPlayerConfig::mmPlayerConfig(void) | ??0mmPlayerConfig@@QAE@XZ
    0x525560 | public: virtual __thiscall mmPlayerConfig::~mmPlayerConfig(void) | ??1mmPlayerConfig@@UAE@XZ
    0x5255D0 | public: void __thiscall mmPlayerConfig::operator=(class mmPlayerConfig &) | ??4mmPlayerConfig@@QAEXAAV0@@Z
    0x525750 | public: int __thiscall mmPlayerConfig::Load(char *) | ?Load@mmPlayerConfig@@QAEHPAD@Z
    0x5257B0 | public: int __thiscall mmPlayerConfig::LoadBinary(char *) | ?LoadBinary@mmPlayerConfig@@QAEHPAD@Z
    0x525A30 | public: int __thiscall mmPlayerConfig::SaveBinary(char *) | ?SaveBinary@mmPlayerConfig@@QAEHPAD@Z
    0x525C70 | public: void __thiscall mmPlayerConfig::SetDefaults(void) | ?SetDefaults@mmPlayerConfig@@QAEXXZ
    0x525C80 | public: int __thiscall mmPlayerConfig::Save(char *,int) | ?Save@mmPlayerConfig@@QAEHPADH@Z
    0x525D20 | public: void __thiscall mmPlayerConfig::SetAudio(void) | ?SetAudio@mmPlayerConfig@@QAEXXZ
    0x525E20 | public: void __thiscall mmPlayerConfig::SetControls(void) | ?SetControls@mmPlayerConfig@@QAEXXZ
    0x525F10 | public: void __thiscall mmPlayerConfig::GetCustom(void) | ?GetCustom@mmPlayerConfig@@QAEXXZ
    0x525F40 | public: void __thiscall mmPlayerConfig::SetCustom(void) | ?SetCustom@mmPlayerConfig@@QAEXXZ
    0x525F70 | public: __thiscall mmGfxCFG::mmGfxCFG(void) | ??0mmGfxCFG@@QAE@XZ
    0x525FB0 | public: void __thiscall mmGfxCFG::Get(void) | ?Get@mmGfxCFG@@QAEXXZ
    0x526020 | public: void __thiscall mmGfxCFG::Set(void) | ?Set@mmGfxCFG@@QAEXXZ
    0x526090 | public: void __thiscall mmPlayerConfig::GetGraphics(void) | ?GetGraphics@mmPlayerConfig@@QAEXXZ
    0x5260A0 | public: void __thiscall mmPlayerConfig::SetGraphics(void) | ?SetGraphics@mmPlayerConfig@@QAEXXZ
    0x5260B0 | public: void __thiscall mmPlayerConfig::GetAudio(void) | ?GetAudio@mmPlayerConfig@@QAEXXZ
    0x526120 | public: void __thiscall mmPlayerConfig::GetControls(void) | ?GetControls@mmPlayerConfig@@QAEXXZ
    0x526200 | public: void __thiscall mmPlayerConfig::GetViewSettings(void) | ?GetViewSettings@mmPlayerConfig@@QAEXXZ
    0x526220 | public: void __thiscall mmPlayerConfig::SetViewSettings(void) | ?SetViewSettings@mmPlayerConfig@@QAEXXZ
    0x526240 | public: void __thiscall mmPlayerConfig::DefaultAudio(void) | ?DefaultAudio@mmPlayerConfig@@QAEXXZ
    0x5262F0 | public: void __thiscall mmPlayerConfig::DefaultControls(void) | ?DefaultControls@mmPlayerConfig@@QAEXXZ
    0x526350 | public: void __thiscall mmPlayerConfig::DefaultViewSettings(void) | ?DefaultViewSettings@mmPlayerConfig@@QAEXXZ
    0x526390 | public: void __thiscall mmPlayerConfig::Reset(void) | ?Reset@mmPlayerConfig@@QAEXXZ
    0x5263A0 | public: void __thiscall mmPlayerConfig::DefaultGraphics(void) | ?DefaultGraphics@mmPlayerConfig@@QAEXXZ
    public: virtual void * __thiscall mmPlayerConfig::`vector deleting destructor'(unsigned int) | ??_EmmPlayerConfig@@UAEPAXI@Z
    0x5264D0 | public: virtual void * __thiscall mmPlayerConfig::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerConfig@@UAEPAXI@Z
    public: __thiscall mmCtrlCFG::~mmCtrlCFG(void) | ??1mmCtrlCFG@@QAE@XZ
    0x5B5224 | const mmPlayerConfig::`vftable' | ??_7mmPlayerConfig@@6B@
    float ParticleMultiplier | ?ParticleMultiplier@@3MA
*/

// #include "hooking.h"
