/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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
    parse:csv

    0x4A8200 | int __cdecl ParseCSVLine(char const *,int,int,...) | ?ParseCSVLine@@YAHPBDHHZZ
    0x4A8270 | public: void __thiscall parCsvFile::Kill(void) | ?Kill@parCsvFile@@QAEXXZ
    0x4A82F0 | public: bool __thiscall parCsvFile::Load(char const *,char const *,bool,int) | ?Load@parCsvFile@@QAE_NPBD0_NH@Z
    0x4A8600 | public: void __thiscall parCsvFile::Print(void) const | ?Print@parCsvFile@@QBEXXZ
    0x4A86A0 | public: int __thiscall parCsvFile::GetInt(int,int) const | ?GetInt@parCsvFile@@QBEHHH@Z
    0x4A86D0 | public: float __thiscall parCsvFile::GetFloat(int,int) const | ?GetFloat@parCsvFile@@QBEMHH@Z
    0x4A8700 | public: int __thiscall parCsvFile::GetColumn(char const *) const | ?GetColumn@parCsvFile@@QBEHPBD@Z
    0x4A8760 | public: int __thiscall parCsvFile::GetRow(int,char const *) const | ?GetRow@parCsvFile@@QBEHHPBD@Z
    0x4A87D0 | public: int __thiscall parCsvFile::GetRowSafe(int,char const *) const | ?GetRowSafe@parCsvFile@@QBEHHPBD@Z
    0x4A8830 | public: void __thiscall parCsvFile::SetString(int,int,char const *) | ?SetString@parCsvFile@@QAEXHHPBD@Z
    0x4A8870 | public: void __thiscall parCsvFile::SetInt(int,int,int) | ?SetInt@parCsvFile@@QAEXHHH@Z
    0x4A88B0 | public: void __thiscall parCsvFile::SetFloat(int,int,float) | ?SetFloat@parCsvFile@@QAEXHHM@Z
*/

// 0x4A8200 | ?ParseCSVLine@@YAHPBDHHZZ
i32 ParseCSVLine(char const* arg1, i32 arg2, i32 arg3, ...);

struct parCsvFile
{
public:
    // 0x4A8700 | ?GetColumn@parCsvFile@@QBEHPBD@Z
    i32 GetColumn(char const* arg1);

    // 0x4A86D0 | ?GetFloat@parCsvFile@@QBEMHH@Z
    f32 GetFloat(i32 arg1, i32 arg2);

    // 0x4A86A0 | ?GetInt@parCsvFile@@QBEHHH@Z
    i32 GetInt(i32 arg1, i32 arg2);

    // 0x4A8760 | ?GetRow@parCsvFile@@QBEHHPBD@Z
    i32 GetRow(i32 arg1, char const* arg2);

    // 0x4A87D0 | ?GetRowSafe@parCsvFile@@QBEHHPBD@Z
    i32 GetRowSafe(i32 arg1, char const* arg2);

    // 0x4A8270 | ?Kill@parCsvFile@@QAEXXZ
    void Kill();

    // 0x4A82F0 | ?Load@parCsvFile@@QAE_NPBD0_NH@Z
    bool Load(char const* arg1, char const* arg2, bool arg3, i32 arg4);

    // 0x4A8600 | ?Print@parCsvFile@@QBEXXZ
    void Print();

    // 0x4A88B0 | ?SetFloat@parCsvFile@@QAEXHHM@Z
    void SetFloat(i32 arg1, i32 arg2, f32 arg3);

    // 0x4A8870 | ?SetInt@parCsvFile@@QAEXHHH@Z
    void SetInt(i32 arg1, i32 arg2, i32 arg3);

    // 0x4A8830 | ?SetString@parCsvFile@@QAEXHHPBD@Z
    void SetString(i32 arg1, i32 arg2, char const* arg3);
};

check_size(parCsvFile, 0x0);
