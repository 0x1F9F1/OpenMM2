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
    zipfile:zipfile

    0x572F80 | public: int __thiscall zipHandle::Read(void *,int) | ?Read@zipHandle@@QAEHPAXH@Z
    0x573080 | public: int __thiscall zipHandle::Seek(int,enum seekWhence) | ?Seek@zipHandle@@QAEHHW4seekWhence@@@Z
    0x5731A0 | public: static int __cdecl zipFile::zipOpen(char const *,bool) | ?zipOpen@zipFile@@SAHPBD_N@Z
    0x5731F0 | public: static int __cdecl zipFile::zipCreate(char const *) | ?zipCreate@zipFile@@SAHPBD@Z
    0x573210 | public: static int __cdecl zipFile::zipRead(int,void *,int) | ?zipRead@zipFile@@SAHHPAXH@Z
    0x573230 | public: static int __cdecl zipFile::zipWrite(int,void const *,int) | ?zipWrite@zipFile@@SAHHPBXH@Z
    0x573250 | public: static int __cdecl zipFile::zipSeek(int,int,enum seekWhence) | ?zipSeek@zipFile@@SAHHHW4seekWhence@@@Z
    0x573270 | public: static int __cdecl zipFile::zipClose(int) | ?zipClose@zipFile@@SAHH@Z
    0x5732A0 | public: static int __cdecl zipFile::zipEnumFiles(char const *,void (__cdecl*)(char const *,bool,void *),void *) | ?zipEnumFiles@zipFile@@SAHPBDP6AX0_NPAX@Z2@Z
    0x5732E0 | public: static int __cdecl zipFile::zipSize(int) | ?zipSize@zipFile@@SAHH@Z
    0x573300 | public: __thiscall zipFile::zipFile(void) | ??0zipFile@@QAE@XZ
    0x573320 | public: __thiscall zipFile::~zipFile(void) | ??1zipFile@@QAE@XZ
    0x573360 | public: static void __cdecl zipFile::KillAll(void) | ?KillAll@zipFile@@SAXXZ
    0x573390 | private: int __thiscall zipFile::internalSeek(int) | ?internalSeek@zipFile@@AAEHH@Z
    0x573410 | private: int __thiscall zipFile::internalRead(void *,int,bool) | ?internalRead@zipFile@@AAEHPAXH_N@Z
    0x573480 | public: bool __thiscall zipFile::Init(char const *) | ?Init@zipFile@@QAE_NPBD@Z
    0x573A80 | public: int __thiscall zipFile::Open(char const *) | ?Open@zipFile@@QAEHPBD@Z
    0x573B60 | public: int __thiscall zipFile::EnumFiles(char const *,void (__cdecl*)(char const *,bool,void *),void *) | ?EnumFiles@zipFile@@QAEHPBDP6AX0_NPAX@Z2@Z
    public: static int zipFile::sm_SeekCount | ?sm_SeekCount@zipFile@@2HA
    0x6B4208 | public: static bool zipFile::sm_LogOpen | ?sm_LogOpen@zipFile@@2_NA
    public: static float zipFile::sm_ReadTime | ?sm_ReadTime@zipFile@@2MA
    public: static float zipFile::sm_SeekTime | ?sm_SeekTime@zipFile@@2MA
    0x6B4698 | private: static class zipFile * zipFile::sm_First | ?sm_First@zipFile@@0PAV1@A
*/

class zipFile
{
public:
    // 0x5731A0 | ?zipOpen@zipFile@@SAHPBD_N@Z
    static inline i32 zipOpen(char const* arg1, bool arg2)
    {
        return stub<cdecl_t<i32, char const*, bool>>(0x5731A0, arg1, arg2);
    }

    // 0x5731F0 | ?zipCreate@zipFile@@SAHPBD@Z
    static inline i32 zipCreate(char const* arg1)
    {
        return stub<cdecl_t<i32, char const*>>(0x5731F0, arg1);
    }

    // 0x573210 | ?zipRead@zipFile@@SAHHPAXH@Z
    static inline i32 zipRead(i32 arg1, void* arg2, i32 arg3)
    {
        return stub<cdecl_t<i32, i32, void*, i32>>(0x573210, arg1, arg2, arg3);
    }

    // 0x573230 | ?zipWrite@zipFile@@SAHHPBXH@Z
    static inline i32 zipWrite(i32 arg1, void const* arg2, i32 arg3)
    {
        return stub<cdecl_t<i32, i32, void const*, i32>>(0x573230, arg1, arg2, arg3);
    }

    // 0x573250 | ?zipSeek@zipFile@@SAHHHW4seekWhence@@@Z
    static inline i32 zipSeek(i32 arg1, i32 arg2, enum seekWhence arg3)
    {
        return stub<cdecl_t<i32, i32, i32, enum seekWhence>>(0x573250, arg1, arg2, arg3);
    }

    // 0x573270 | ?zipClose@zipFile@@SAHH@Z
    static inline i32 zipClose(i32 arg1)
    {
        return stub<cdecl_t<i32, i32>>(0x573270, arg1);
    }

    // 0x5732A0 | ?zipEnumFiles@zipFile@@SAHPBDP6AX0_NPAX@Z2@Z
    static inline i32 zipEnumFiles(char const* arg1, void(__cdecl* arg2)(char const*, bool, void*), void* arg3)
    {
        return stub<cdecl_t<i32, char const*, void(__cdecl*)(char const*, bool, void*), void*>>(
            0x5732A0, arg1, arg2, arg3);
    }

    // 0x5732E0 | ?zipSize@zipFile@@SAHH@Z
    static inline i32 zipSize(i32 arg1)
    {
        return stub<cdecl_t<i32, i32>>(0x5732E0, arg1);
    }

    // 0x573300 | ??0zipFile@@QAE@XZ
    zipFile()
    {
        stub<member_func_t<void, zipFile>>(0x573300, this);
    }

    // 0x573320 | ??1zipFile@@QAE@XZ
    ~zipFile()
    {
        stub<member_func_t<void, zipFile>>(0x573320, this);
    }

    // 0x573360 | ?KillAll@zipFile@@SAXXZ
    static inline void KillAll()
    {
        return stub<cdecl_t<void>>(0x573360);
    }

    // 0x573390 | ?internalSeek@zipFile@@AAEHH@Z
    i32 internalSeek(i32 arg1)
    {
        return stub<member_func_t<i32, zipFile, i32>>(0x573390, this, arg1);
    }

    // 0x573410 | ?internalRead@zipFile@@AAEHPAXH_N@Z
    i32 internalRead(void* arg1, i32 arg2, bool arg3)
    {
        return stub<member_func_t<i32, zipFile, void*, i32, bool>>(0x573410, this, arg1, arg2, arg3);
    }

    // 0x573480 | ?Init@zipFile@@QAE_NPBD@Z
    bool Init(char const* arg1)
    {
        return stub<member_func_t<bool, zipFile, char const*>>(0x573480, this, arg1);
    }

    // 0x573A80 | ?Open@zipFile@@QAEHPBD@Z
    i32 Open(char const* arg1)
    {
        return stub<member_func_t<i32, zipFile, char const*>>(0x573A80, this, arg1);
    }

    // 0x573B60 | ?EnumFiles@zipFile@@QAEHPBDP6AX0_NPAX@Z2@Z
    i32 EnumFiles(char const* arg1, void(__cdecl* arg2)(char const*, bool, void*), void* arg3)
    {
        return stub<member_func_t<i32, zipFile, char const*, void(__cdecl*)(char const*, bool, void*), void*>>(
            0x573B60, this, arg1, arg2, arg3);
    }

    // 0x6B4208 | ?sm_LogOpen@zipFile@@2_NA
    static inline extern_var(0x6B4208, bool, sm_LogOpen);

    // 0x6B4698 | ?sm_First@zipFile@@0PAV1@A
    inline extern_var(0x6B4698, class zipFile*, sm_First);
};

struct zipHandle
{
public:
    // 0x572F80 | ?Read@zipHandle@@QAEHPAXH@Z
    i32 Read(void* arg1, i32 arg2)
    {
        return stub<member_func_t<i32, zipHandle, void*, i32>>(0x572F80, this, arg1, arg2);
    }

    // 0x573080 | ?Seek@zipHandle@@QAEHHW4seekWhence@@@Z
    i32 Seek(i32 arg1, enum seekWhence arg2)
    {
        return stub<member_func_t<i32, zipHandle, i32, enum seekWhence>>(0x573080, this, arg1, arg2);
    }
};
