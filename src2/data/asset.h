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
    data:asset

    0x4C5540 | public: static void __cdecl datAssetManager::SetPath(char const *) | ?SetPath@datAssetManager@@SAXPBD@Z
    0x4C55E0 | public: static void __cdecl datAssetManager::FullPath(char *,int,char const *,char const *) | ?FullPath@datAssetManager@@SAXPADHPBD1@Z
    0x4C56F0 | public: static void __cdecl datAssetManager::FullPath(char *,int,char const *,char const *,char const *) | ?FullPath@datAssetManager@@SAXPADHPBD11@Z
    0x4C5870 | public: static class Stream * __cdecl datAssetManager::Open(char const *,char const *,bool,bool) | ?Open@datAssetManager@@SAPAVStream@@PBD0_N1@Z
    0x4C58C0 | public: static class Stream * __cdecl datAssetManager::Open(char const *,char const *,char const *,bool,bool) | ?Open@datAssetManager@@SAPAVStream@@PBD00_N1@Z
    0x4C5910 | public: static class Stream * __cdecl datAssetManager::Create(char const *,char const *,bool) | ?Create@datAssetManager@@SAPAVStream@@PBD0_N@Z
    0x4C5960 | public: static class Stream * __cdecl datAssetManager::Create(char const *,char const *,char const *,bool) | ?Create@datAssetManager@@SAPAVStream@@PBD00_N@Z
    0x4C59B0 | public: static bool __cdecl datAssetManager::Exists(char const *,char const *) | ?Exists@datAssetManager@@SA_NPBD0@Z
    0x4C59E0 | public: static bool __cdecl datAssetManager::Exists(char const *,char const *,char const *) | ?Exists@datAssetManager@@SA_NPBD00@Z
    0x4C5A10 | public: static char const * __cdecl datAssetManager::FileName(char const *) | ?FileName@datAssetManager@@SAPBDPBD@Z
    0x4C5A40 | public: static void __cdecl datAssetManager::BaseName(char const *,char *,int) | ?BaseName@datAssetManager@@SAXPBDPADH@Z
    0x4C5A80 | public: static int __cdecl datAssetManager::EnumFiles(char const *,void (__cdecl*)(char const *,bool,void *),void *,bool) | ?EnumFiles@datAssetManager@@SAHPBDP6AX0_NPAX@Z21@Z
    0x5CE760 | private: static bool datAssetManager::sm_IgnorePrefix | ?sm_IgnorePrefix@datAssetManager@@0_NA
    0x6A3B8C | private: static char * datAssetManager::sm_Path | ?sm_Path@datAssetManager@@0PADA
    0x6A3C0C | int assetDebug | ?assetDebug@@3HA
*/

struct datAssetManager
{
public:
    // 0x4C5A40 | ?BaseName@datAssetManager@@SAXPBDPADH@Z
    static void BaseName(char const* arg1, char* arg2, i32 arg3);

    // 0x4C5910 | ?Create@datAssetManager@@SAPAVStream@@PBD0_N@Z
    static class Stream* Create(char const* arg1, char const* arg2, bool arg3);

    // 0x4C5960 | ?Create@datAssetManager@@SAPAVStream@@PBD00_N@Z
    static class Stream* Create(char const* arg1, char const* arg2, char const* arg3, bool arg4);

    // 0x4C5A80 | ?EnumFiles@datAssetManager@@SAHPBDP6AX0_NPAX@Z21@Z
    static i32 EnumFiles(char const* arg1, void (*arg2)(char const*, bool, void*), void* arg3, bool arg4);

    // 0x4C59B0 | ?Exists@datAssetManager@@SA_NPBD0@Z
    static bool Exists(char const* arg1, char const* arg2);

    // 0x4C59E0 | ?Exists@datAssetManager@@SA_NPBD00@Z
    static bool Exists(char const* arg1, char const* arg2, char const* arg3);

    // 0x4C5A10 | ?FileName@datAssetManager@@SAPBDPBD@Z
    static char const* FileName(char const* arg1);

    // 0x4C55E0 | ?FullPath@datAssetManager@@SAXPADHPBD1@Z
    static void FullPath(char* arg1, i32 arg2, char const* arg3, char const* arg4);

    // 0x4C56F0 | ?FullPath@datAssetManager@@SAXPADHPBD11@Z
    static void FullPath(char* arg1, i32 arg2, char const* arg3, char const* arg4, char const* arg5);

    // 0x4C5870 | ?Open@datAssetManager@@SAPAVStream@@PBD0_N1@Z
    static class Stream* Open(char const* arg1, char const* arg2, bool arg3, bool arg4);

    // 0x4C58C0 | ?Open@datAssetManager@@SAPAVStream@@PBD00_N1@Z
    static class Stream* Open(char const* arg1, char const* arg2, char const* arg3, bool arg4, bool arg5);

    // 0x4C5540 | ?SetPath@datAssetManager@@SAXPBD@Z
    static void SetPath(char const* arg1);

private:
    // 0x5CE760 | ?sm_IgnorePrefix@datAssetManager@@0_NA
    static inline extern_var(0x5CE760, bool, sm_IgnorePrefix);

    // 0x6A3B8C | ?sm_Path@datAssetManager@@0PADA
    static inline extern_var(0x6A3B8C, char*, sm_Path);
};

// 0x6A3C0C | ?assetDebug@@3HA
inline extern_var(0x6A3C0C, i32, assetDebug);
