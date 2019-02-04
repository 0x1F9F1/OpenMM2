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

#include "hooking.h"

class Stream;

class datAssetManager
{
public:
    static void SetPath(const char* path);

    static Stream* Open(char const* path, char const* ext, bool a2, bool readOnly);
    static Stream* Open(const char* prefix, const char *path, const char *ext, bool a4, bool readOnly);

    static void FullPath(char * buffer, int bufferLength, const char* path, const char* ext);
    static void FullPath(char * buffer, int bufferLength, const char *prefix, const char *path, const char *ext);

    static inline extern_var(0x6A3B8C, char[128], sm_Path);
    static inline extern_var(0x5CE760, bool, sm_IgnorePrefix);
};

inline extern_var(0x6A3C0C, int, assetDebug);
