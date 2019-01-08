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
    level:material

    0x4664C0 | public: __thiscall lvlMaterial::lvlMaterial(void) | ??0lvlMaterial@@QAE@XZ
    0x466510 | public: void __thiscall lvlMaterial::Load(class datAsciiTokenizer &) | ?Load@lvlMaterial@@QAEXAAVdatAsciiTokenizer@@@Z
    0x4666F0 | public: virtual void __thiscall lvlMaterial::Save(class datAsciiTokenizer &) | ?Save@lvlMaterial@@UAEXAAVdatAsciiTokenizer@@@Z
    0x4668E0 | public: void __thiscall lvlMaterial::Copy(class lvlMaterial const &) | ?Copy@lvlMaterial@@QAEXABV1@@Z
    public: void __thiscall lvlMaterial::AddWidgets(class bkBank &) | ?AddWidgets@lvlMaterial@@QAEXAAVbkBank@@@Z
    0x466930 | public: static class lvlMaterialMgr & __cdecl lvlMaterialMgr::CreateInstance(void) | ?CreateInstance@lvlMaterialMgr@@SAAAV1@XZ
    0x466990 | protected: __thiscall lvlMaterialMgr::lvlMaterialMgr(void) | ??0lvlMaterialMgr@@IAE@XZ
    0x466A00 | public: static void __cdecl lvlMaterialMgr::DeleteInstance(void) | ?DeleteInstance@lvlMaterialMgr@@SAXXZ
    0x466A30 | public: class lvlMaterial * __thiscall lvlMaterialMgr::Find(char const *) | ?Find@lvlMaterialMgr@@QAEPAVlvlMaterial@@PBD@Z
    0x466A40 | public: class lvlMaterial * __thiscall lvlMaterialMgr::Lookup(int) | ?Lookup@lvlMaterialMgr@@QAEPAVlvlMaterial@@H@Z
    0x466A50 | public: virtual class phMaterial * __thiscall lvlMaterialMgr::Load(class datAsciiTokenizer *) | ?Load@lvlMaterialMgr@@UAEPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    public: void __thiscall lvlMaterialMgr::AddWidgets(class bkBank &) | ?AddWidgets@lvlMaterialMgr@@QAEXAAVbkBank@@@Z
    0x5B1AF8 | const lvlMaterial::`vftable' | ??_7lvlMaterial@@6B@
    0x5B1B04 | const lvlMaterialMgr::`vftable' | ??_7lvlMaterialMgr@@6B@
*/

#include "hooking.h"
