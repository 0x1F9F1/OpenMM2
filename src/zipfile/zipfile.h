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

#include "hooking.h"

class Stream;

struct zipEntry
{
    char *Name;
    int Data;
    int UncompresedSize;
    int CompressedSize;
};

struct zipFile
{
    zipFile *PrevFile {nullptr};
    int FileHandle {-1};
    std::unique_ptr<char[]> NamesBuffer {};
    std::unique_ptr<uint32_t[]> FileCrcs {};
    std::unique_ptr<zipEntry[]> Entries {};
    uint32_t EntryCount {0};
    uint32_t CurrentOffset {0};

    bool Init(char const * fileName);

    int Open(char const * fileName);

    static int EnumFiles2(const char* path, void(*callback)(Stream* stream, void *context), void* context);

    inline_var(0x6B4698, zipFile *, sm_First);
    inline_var(0x6B4208, bool, sm_LogOpen);

    zipFile();
    ~zipFile();
};
