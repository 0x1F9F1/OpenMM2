/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

// 0x49F2B0 | ??H@YA?AVstring@@PBDABV0@@Z
inline class string operator+(char const* arg1, class string const& arg2)
{
    return stub<cdecl_t<class string, char const*, class string const&>>(0x49F2B0, arg1, arg2);
}

// 0x6614D4 | ?ExecPath@@3PADA
inline extern_var(0x6614D4, char*, ExecPath);

class string
{
public:
    // 0x412500 | ?Init@string@@QAEXH@Z
    inline void Init(i32 arg1)
    {
        return stub<member_func_t<void, string, i32>>(0x412500, this, arg1);
    }

    // 0x49F150 | ??0string@@QAE@XZ
    inline string()
    {
        stub<member_func_t<void, string>>(0x49F150, this);
    }

    // 0x49F180 | ??Hstring@@QBE?AV0@PBD@Z
    inline class string operator+(char const* arg1)
    {
        return stub<member_func_t<class string, string, char const*>>(0x49F180, this, arg1);
    }

    // 0x49F3E0 | ??Ystring@@QAEXPBD@Z
    inline void operator+=(char const* arg1)
    {
        return stub<member_func_t<void, string, char const*>>(0x49F3E0, this, arg1);
    }

    // 0x49F4C0 | ??Ystring@@QAEXD@Z
    inline void operator+=(char arg1)
    {
        return stub<member_func_t<void, string, char>>(0x49F4C0, this, arg1);
    }

    // 0x49F560 | ??Gstring@@QBE?AV0@PBD@Z
    inline class string operator-(char const* arg1)
    {
        return stub<member_func_t<class string, string, char const*>>(0x49F560, this, arg1);
    }

    // 0x49F6D0 | ??Zstring@@QAEXPBD@Z
    inline void operator-=(char const* arg1)
    {
        return stub<member_func_t<void, string, char const*>>(0x49F6D0, this, arg1);
    }

    // 0x49F790 | ?MinusEqual@string@@QAEXD@Z
    inline void MinusEqual(char arg1)
    {
        return stub<member_func_t<void, string, char>>(0x49F790, this, arg1);
    }

    // 0x49F8E0 | ?Contains@string@@QBEHAAV1@@Z
    inline i32 Contains(class string& arg1)
    {
        return stub<member_func_t<i32, string, class string&>>(0x49F8E0, this, arg1);
    }

    // 0x49F970 | ?SaveName@string@@QAEXABV1@H00@Z
    inline void SaveName(class string const& arg1, i32 arg2, class string const& arg3, class string const& arg4)
    {
        return stub<member_func_t<void, string, class string const&, i32, class string const&, class string const&>>(
            0x49F970, this, arg1, arg2, arg3, arg4);
    }

    // 0x49FB30 | ?FindFile@string@@QAEHABV1@H00@Z
    inline i32 FindFile(class string const& arg1, i32 arg2, class string const& arg3, class string const& arg4)
    {
        return stub<member_func_t<i32, string, class string const&, i32, class string const&, class string const&>>(
            0x49FB30, this, arg1, arg2, arg3, arg4);
    }

    // 0x49FEB0 | ?FileExists@string@@QBEHXZ
    inline i32 FileExists()
    {
        return stub<member_func_t<i32, string>>(0x49FEB0, this);
    }

    // 0x49FEE0 | ?DirFileExt@string@@QBEXAAV1@00@Z
    inline void DirFileExt(class string& arg1, class string& arg2, class string& arg3)
    {
        return stub<member_func_t<void, string, class string&, class string&, class string&>>(
            0x49FEE0, this, arg1, arg2, arg3);
    }

    // 0x4A0100 | ?CommaFile@string@@QBEHXZ
    inline i32 CommaFile()
    {
        return stub<member_func_t<i32, string>>(0x4A0100, this);
    }

    // 0x4A02E0 | ?FileName@string@@QBE?AV1@XZ
    inline class string FileName()
    {
        return stub<member_func_t<class string, string>>(0x4A02E0, this);
    }

    // 0x4A0460 | ?Extension@string@@QBE?AV1@XZ
    inline class string Extension()
    {
        return stub<member_func_t<class string, string>>(0x4A0460, this);
    }

    // 0x4A0580 | ?ChangeExtension@string@@QAEXABV1@@Z
    inline void ChangeExtension(class string const& arg1)
    {
        return stub<member_func_t<void, string, class string const&>>(0x4A0580, this, arg1);
    }

    // 0x4A0730 | ?RemoveExtension@string@@QAEXXZ
    inline void RemoveExtension()
    {
        return stub<member_func_t<void, string>>(0x4A0730, this);
    }

    // 0x4A0760 | ?ExpandEnvs@string@@QAEXXZ
    inline void ExpandEnvs()
    {
        return stub<member_func_t<void, string>>(0x4A0760, this);
    }

    // 0x4A0910 | ?SubString@string@@QBE?AV1@H@Z
    inline class string SubString(i32 arg1)
    {
        return stub<member_func_t<class string, string, i32>>(0x4A0910, this, arg1);
    }

    // 0x4A0A20 | ?NumSubStrings@string@@QBEHXZ
    inline i32 NumSubStrings()
    {
        return stub<member_func_t<i32, string>>(0x4A0A20, this);
    }

    // 0x4A0A60 | ?IsNumeric@string@@QBEHXZ
    inline i32 IsNumeric()
    {
        return stub<member_func_t<i32, string>>(0x4A0A60, this);
    }

    // 0x4A0A90 | ??4string@@QAEXPBD@Z
    inline void operator=(char const* arg1)
    {
        return stub<member_func_t<void, string, char const*>>(0x4A0A90, this, arg1);
    }

    // 0x4A0B00 | ??Hstring@@QBE?AV0@ABV0@@Z
    inline class string operator+(class string const& arg1)
    {
        return stub<member_func_t<class string, string, class string const&>>(0x4A0B00, this, arg1);
    }

    // 0x4E2D80 | ??0string@@QAE@ABV0@@Z
    inline string(class string const& arg1)
    {
        stub<member_func_t<void, string, class string const&>>(0x4E2D80, this, arg1);
    }

    // 0x505070 | ??0string@@QAE@PBD@Z
    inline string(char const* arg1)
    {
        stub<member_func_t<void, string, char const*>>(0x505070, this, arg1);
    }
};
