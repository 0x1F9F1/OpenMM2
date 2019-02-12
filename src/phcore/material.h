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
    phcore:material

    0x492FF0 | public: __thiscall phMaterial::phMaterial(void) | ??0phMaterial@@QAE@XZ
    0x493050 | public: void __thiscall phMaterial::SetName(char const *) | ?SetName@phMaterial@@QAEXPBD@Z
    0x493070 | public: void __thiscall phMaterial::Load(class datAsciiTokenizer &) | ?Load@phMaterial@@QAEXAAVdatAsciiTokenizer@@@Z
    0x493160 | public: virtual void __thiscall phMaterial::Save(class datAsciiTokenizer &) | ?Save@phMaterial@@UAEXAAVdatAsciiTokenizer@@@Z
    0x493270 | public: virtual void __thiscall phMaterial::Copy(class phMaterial const &) | ?Copy@phMaterial@@UAEXABV1@@Z
    0x4932A0 | public: void __thiscall phMaterial::LoadBinary(class Stream *) | ?LoadBinary@phMaterial@@QAEXPAVStream@@@Z
    0x493340 | public: virtual void __thiscall phMaterial::SaveBinary(class Stream *) | ?SaveBinary@phMaterial@@UAEXPAVStream@@@Z
    0x493420 | public: static class phMaterialMgr & __cdecl phMaterialMgr::CreateInstance(int) | ?CreateInstance@phMaterialMgr@@SAAAV1@H@Z
    0x4934A0 | protected: __thiscall phMaterialMgr::phMaterialMgr(void) | ??0phMaterialMgr@@IAE@XZ
    0x4934E0 | protected: __thiscall phMaterialMgr::phMaterialMgr(class phMaterial *,int) | ??0phMaterialMgr@@IAE@PAVphMaterial@@H@Z
    0x4935C0 | public: __thiscall phMaterialMgr::~phMaterialMgr(void) | ??1phMaterialMgr@@QAE@XZ
    0x493640 | public: class phMaterial * __thiscall phMaterialMgr::Find(char const *) | ?Find@phMaterialMgr@@QAEPAVphMaterial@@PBD@Z
    0x493660 | public: void __thiscall phMaterialMgr::AddToTable(class phMaterial *) | ?AddToTable@phMaterialMgr@@QAEXPAVphMaterial@@@Z
    0x493680 | public: bool __thiscall phMaterialMgr::LoadTable(char const *) | ?LoadTable@phMaterialMgr@@QAE_NPBD@Z
    0x493700 | public: virtual class phMaterial * __thiscall phMaterialMgr::Load(class datAsciiTokenizer *) | ?Load@phMaterialMgr@@UAEPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    0x493780 | public: virtual class phMaterial * __thiscall phMaterialMgr::Load(class Stream *) | ?Load@phMaterialMgr@@UAEPAVphMaterial@@PAVStream@@@Z
    0x493800 | public: void __thiscall phMaterialMgr::Save(class phMaterial *,class datAsciiTokenizer *) | ?Save@phMaterialMgr@@QAEXPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    0x493840 | public: char const * __thiscall phMaterialMgr::FindNameOfIndex(int) | ?FindNameOfIndex@phMaterialMgr@@QAEPBDH@Z
    0x493870 | public: int __thiscall phMaterialMgr::FindIndexOfName(char const *) | ?FindIndexOfName@phMaterialMgr@@QAEHPBD@Z
    0x5B2404 | const phMaterial::`vftable' | ??_7phMaterial@@6B@
    0x5B2410 | const phMaterialMgr::`vftable' | ??_7phMaterialMgr@@6B@
    0x66134C | protected: static int phMaterialMgr::RefCount | ?RefCount@phMaterialMgr@@1HA
    0x661350 | protected: static class phMaterialMgr * phMaterialMgr::Instance | ?Instance@phMaterialMgr@@1PAV1@A
    0x661354 | protected: static class phMaterial * phMaterialMgr::DefaultPhysMaterial | ?DefaultPhysMaterial@phMaterialMgr@@1PAVphMaterial@@A
*/

// #include "hooking.h"
