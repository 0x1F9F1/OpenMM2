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
    node:str

    0x49F150 | public: __thiscall string::string(void) | ??0string@@QAE@XZ
    0x49F180 | public: class string __thiscall string::operator+(char const *) const | ??Hstring@@QBE?AV0@PBD@Z
    0x49F2B0 | class string __cdecl operator+(char const *,class string const &) | ??H@YA?AVstring@@PBDABV0@@Z
    0x49F3E0 | public: void __thiscall string::operator+=(char const *) | ??Ystring@@QAEXPBD@Z
    0x49F4C0 | public: void __thiscall string::operator+=(char) | ??Ystring@@QAEXD@Z
    0x49F560 | public: class string __thiscall string::operator-(char const *) const | ??Gstring@@QBE?AV0@PBD@Z
    0x49F6D0 | public: void __thiscall string::operator-=(char const *) | ??Zstring@@QAEXPBD@Z
    0x49F790 | public: void __thiscall string::MinusEqual(char) | ?MinusEqual@string@@QAEXD@Z
    0x49F8E0 | public: int __thiscall string::Contains(class string &) const | ?Contains@string@@QBEHAAV1@@Z
    0x49F970 | public: void __thiscall string::SaveName(class string const &,int,class string const &,class string const &) | ?SaveName@string@@QAEXABV1@H00@Z
    0x49FB30 | public: int __thiscall string::FindFile(class string const &,int,class string const &,class string const &) | ?FindFile@string@@QAEHABV1@H00@Z
    0x49FEB0 | public: int __thiscall string::FileExists(void) const | ?FileExists@string@@QBEHXZ
    0x49FEE0 | public: void __thiscall string::DirFileExt(class string &,class string &,class string &) const | ?DirFileExt@string@@QBEXAAV1@00@Z
    0x4A0100 | public: int __thiscall string::CommaFile(void) const | ?CommaFile@string@@QBEHXZ
    0x4A02E0 | public: class string __thiscall string::FileName(void) const | ?FileName@string@@QBE?AV1@XZ
    0x4A0460 | public: class string __thiscall string::Extension(void) const | ?Extension@string@@QBE?AV1@XZ
    0x4A0580 | public: void __thiscall string::ChangeExtension(class string const &) | ?ChangeExtension@string@@QAEXABV1@@Z
    0x4A0730 | public: void __thiscall string::RemoveExtension(void) | ?RemoveExtension@string@@QAEXXZ
    0x4A0760 | public: void __thiscall string::ExpandEnvs(void) | ?ExpandEnvs@string@@QAEXXZ
    0x4A0910 | public: class string __thiscall string::SubString(int) const | ?SubString@string@@QBE?AV1@H@Z
    0x4A0A20 | public: int __thiscall string::NumSubStrings(void) const | ?NumSubStrings@string@@QBEHXZ
    0x4A0A60 | public: int __thiscall string::IsNumeric(void) const | ?IsNumeric@string@@QBEHXZ
    0x4A0A90 | public: void __thiscall string::operator=(char const *) | ??4string@@QAEXPBD@Z
    0x4A0B00 | public: class string __thiscall string::operator+(class string const &) const | ??Hstring@@QBE?AV0@ABV0@@Z
    char * ProjPath | ?ProjPath@@3PADA
    char * ImageExts | ?ImageExts@@3PADA
    0x6614D4 | char * ExecPath | ?ExecPath@@3PADA
*/

#include "hooking.h"
