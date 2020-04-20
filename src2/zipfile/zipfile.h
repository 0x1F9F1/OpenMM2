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
    static inline int32_t zipOpen(char const* arg1, bool arg2)
    {
        return stub<cdecl_t<int32_t, char const*, bool>>(0x5731A0, arg1, arg2);
    }

    // 0x5731F0 | ?zipCreate@zipFile@@SAHPBD@Z
    static inline int32_t zipCreate(char const* arg1)
    {
        return stub<cdecl_t<int32_t, char const*>>(0x5731F0, arg1);
    }

    // 0x573210 | ?zipRead@zipFile@@SAHHPAXH@Z
    static inline int32_t zipRead(int32_t arg1, void* arg2, int32_t arg3)
    {
        return stub<cdecl_t<int32_t, int32_t, void*, int32_t>>(0x573210, arg1, arg2, arg3);
    }

    // 0x573230 | ?zipWrite@zipFile@@SAHHPBXH@Z
    static inline int32_t zipWrite(int32_t arg1, void const* arg2, int32_t arg3)
    {
        return stub<cdecl_t<int32_t, int32_t, void const*, int32_t>>(0x573230, arg1, arg2, arg3);
    }

    // 0x573250 | ?zipSeek@zipFile@@SAHHHW4seekWhence@@@Z
    static inline int32_t zipSeek(int32_t arg1, int32_t arg2, enum seekWhence arg3)
    {
        return stub<cdecl_t<int32_t, int32_t, int32_t, enum seekWhence>>(0x573250, arg1, arg2, arg3);
    }

    // 0x573270 | ?zipClose@zipFile@@SAHH@Z
    static inline int32_t zipClose(int32_t arg1)
    {
        return stub<cdecl_t<int32_t, int32_t>>(0x573270, arg1);
    }

    // 0x5732A0 | ?zipEnumFiles@zipFile@@SAHPBDP6AX0_NPAX@Z2@Z
    static inline int32_t zipEnumFiles(char const* arg1, void(__cdecl* arg2)(char const*, bool, void*), void* arg3)
    {
        return stub<cdecl_t<int32_t, char const*, void(__cdecl*)(char const*, bool, void*), void*>>(
            0x5732A0, arg1, arg2, arg3);
    }

    // 0x5732E0 | ?zipSize@zipFile@@SAHH@Z
    static inline int32_t zipSize(int32_t arg1)
    {
        return stub<cdecl_t<int32_t, int32_t>>(0x5732E0, arg1);
    }

    // 0x573300 | ??0zipFile@@QAE@XZ
    inline zipFile()
    {
        stub<member_func_t<void, zipFile>>(0x573300, this);
    }

    // 0x573320 | ??1zipFile@@QAE@XZ
    inline ~zipFile()
    {
        stub<member_func_t<void, zipFile>>(0x573320, this);
    }

    // 0x573360 | ?KillAll@zipFile@@SAXXZ
    static inline void KillAll()
    {
        return stub<cdecl_t<void>>(0x573360);
    }

    // 0x573390 | ?internalSeek@zipFile@@AAEHH@Z
    inline int32_t internalSeek(int32_t arg1)
    {
        return stub<member_func_t<int32_t, zipFile, int32_t>>(0x573390, this, arg1);
    }

    // 0x573410 | ?internalRead@zipFile@@AAEHPAXH_N@Z
    inline int32_t internalRead(void* arg1, int32_t arg2, bool arg3)
    {
        return stub<member_func_t<int32_t, zipFile, void*, int32_t, bool>>(0x573410, this, arg1, arg2, arg3);
    }

    // 0x573480 | ?Init@zipFile@@QAE_NPBD@Z
    inline bool Init(char const* arg1)
    {
        return stub<member_func_t<bool, zipFile, char const*>>(0x573480, this, arg1);
    }

    // 0x573A80 | ?Open@zipFile@@QAEHPBD@Z
    inline int32_t Open(char const* arg1)
    {
        return stub<member_func_t<int32_t, zipFile, char const*>>(0x573A80, this, arg1);
    }

    // 0x573B60 | ?EnumFiles@zipFile@@QAEHPBDP6AX0_NPAX@Z2@Z
    inline int32_t EnumFiles(char const* arg1, void(__cdecl* arg2)(char const*, bool, void*), void* arg3)
    {
        return stub<member_func_t<int32_t, zipFile, char const*, void(__cdecl*)(char const*, bool, void*), void*>>(
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
    inline int32_t Read(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, zipHandle, void*, int32_t>>(0x572F80, this, arg1, arg2);
    }

    // 0x573080 | ?Seek@zipHandle@@QAEHHW4seekWhence@@@Z
    inline int32_t Seek(int32_t arg1, enum seekWhence arg2)
    {
        return stub<member_func_t<int32_t, zipHandle, int32_t, enum seekWhence>>(0x573080, this, arg1, arg2);
    }
};
