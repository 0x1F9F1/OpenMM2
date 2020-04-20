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
    model:package

    0x4A46D0 | public: __thiscall modPackage::modPackage(void) | ??0modPackage@@QAE@XZ
    0x4A46F0 | public: __thiscall modPackage::~modPackage(void) | ??1modPackage@@QAE@XZ
    0x4A4700 | public: bool __thiscall modPackage::Open(char const *,char const *) | ?Open@modPackage@@QAE_NPBD0@Z
    public: bool __thiscall modPackage::Create(char const *,char const *) | ?Create@modPackage@@QAE_NPBD0@Z
    0x4A4790 | public: void __thiscall modPackage::Close(void) | ?Close@modPackage@@QAEXXZ
    0x4A47B0 | public: class Stream * __thiscall modPackage::OpenFile(char const *) | ?OpenFile@modPackage@@QAEPAVStream@@PBD@Z
    public: class Stream * __thiscall modPackage::CreateFile(char const *) | ?CreateFile@modPackage@@QAEPAVStream@@PBD@Z
    0x4A4800 | public: void __thiscall modPackage::CloseFile(void) | ?CloseFile@modPackage@@QAEXXZ
    0x4A4820 | private: void __thiscall modPackage::NextItem(void) | ?NextItem@modPackage@@AAEXXZ
    0x4A48D0 | public: void __thiscall modPackage::SkipTo(char const *) | ?SkipTo@modPackage@@QAEXPBD@Z
    0x4A4970 | public: void __thiscall modPackage::Skip(void) | ?Skip@modPackage@@QAEXXZ
    private: void __thiscall modPackage::FlushPrevious(void) | ?FlushPrevious@modPackage@@AAEXXZ
    float gPackageOpen | ?gPackageOpen@@3MA
    0x661924 | private: static class modPackage * modPackage::m_First | ?m_First@modPackage@@0PAV1@A
*/

class modPackage
{
public:
    // 0x4A46D0 | ??0modPackage@@QAE@XZ
    inline modPackage()
    {
        stub<member_func_t<void, modPackage>>(0x4A46D0, this);
    }

    // 0x4A46F0 | ??1modPackage@@QAE@XZ
    inline ~modPackage()
    {
        stub<member_func_t<void, modPackage>>(0x4A46F0, this);
    }

    // 0x4A4700 | ?Open@modPackage@@QAE_NPBD0@Z
    inline bool Open(char const* arg1, char const* arg2)
    {
        return stub<member_func_t<bool, modPackage, char const*, char const*>>(0x4A4700, this, arg1, arg2);
    }

    // 0x4A4790 | ?Close@modPackage@@QAEXXZ
    inline void Close()
    {
        return stub<member_func_t<void, modPackage>>(0x4A4790, this);
    }

    // 0x4A47B0 | ?OpenFile@modPackage@@QAEPAVStream@@PBD@Z
    inline class Stream* OpenFile(char const* arg1)
    {
        return stub<member_func_t<class Stream*, modPackage, char const*>>(0x4A47B0, this, arg1);
    }

    // 0x4A4800 | ?CloseFile@modPackage@@QAEXXZ
    inline void CloseFile()
    {
        return stub<member_func_t<void, modPackage>>(0x4A4800, this);
    }

    // 0x4A4820 | ?NextItem@modPackage@@AAEXXZ
    inline void NextItem()
    {
        return stub<member_func_t<void, modPackage>>(0x4A4820, this);
    }

    // 0x4A48D0 | ?SkipTo@modPackage@@QAEXPBD@Z
    inline void SkipTo(char const* arg1)
    {
        return stub<member_func_t<void, modPackage, char const*>>(0x4A48D0, this, arg1);
    }

    // 0x4A4970 | ?Skip@modPackage@@QAEXXZ
    inline void Skip()
    {
        return stub<member_func_t<void, modPackage>>(0x4A4970, this);
    }

    // 0x661924 | ?m_First@modPackage@@0PAV1@A
    inline extern_var(0x661924, class modPackage*, m_First);
};
