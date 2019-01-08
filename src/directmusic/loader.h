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
    directmusic:loader

    0x517C00 | void __cdecl setUnicodeMode(void) | ?setUnicodeMode@@YAXXZ
    0x517C40 | public: __thiscall CLoader::CLoader(void) | ??0CLoader@@QAE@XZ
    0x517C70 | public: __thiscall CLoader::~CLoader(void) | ??1CLoader@@QAE@XZ
    0x517CC0 | public: long __thiscall CLoader::Init(void) | ?Init@CLoader@@QAEJXZ
    0x517E10 | public: virtual long __stdcall CLoader::QueryInterface(struct _GUID const &,void * *) | ?QueryInterface@CLoader@@UAGJABU_GUID@@PAPAX@Z
    0x517E70 | public: virtual unsigned long __stdcall CLoader::AddRef(void) | ?AddRef@CLoader@@UAGKXZ
    0x517E90 | public: unsigned long __thiscall CLoader::AddRefP(void) | ?AddRefP@CLoader@@QAEKXZ
    0x517EA0 | public: virtual unsigned long __stdcall CLoader::Release(void) | ?Release@CLoader@@UAGKXZ
    0x517F00 | public: unsigned long __thiscall CLoader::ReleaseP(void) | ?ReleaseP@CLoader@@QAEKXZ
    0x517F40 | public: virtual long __stdcall CLoader::GetObjectA(struct _DMUS_OBJECTDESC *,struct _GUID const &,void * *) | ?GetObjectA@CLoader@@UAGJPAU_DMUS_OBJECTDESC@@ABU_GUID@@PAPAX@Z
    0x5182A0 | private: long __thiscall CLoader::LoadFromFile(struct _DMUS_OBJECTDESC *,struct IDirectMusicObject * *) | ?LoadFromFile@CLoader@@AAEJPAU_DMUS_OBJECTDESC@@PAPAUIDirectMusicObject@@@Z
    0x5183F0 | private: long __thiscall CLoader::LoadFromMemory(struct _DMUS_OBJECTDESC *,struct IDirectMusicObject * *) | ?LoadFromMemory@CLoader@@AAEJPAU_DMUS_OBJECTDESC@@PAPAUIDirectMusicObject@@@Z
    0x5184E0 | public: virtual long __stdcall CLoader::SetObject(struct _DMUS_OBJECTDESC *) | ?SetObject@CLoader@@UAGJPAU_DMUS_OBJECTDESC@@@Z
    0x518510 | public: virtual long __stdcall CLoader::SetSearchDirectory(struct _GUID const &,unsigned short *,int) | ?SetSearchDirectory@CLoader@@UAGJABU_GUID@@PAGH@Z
    0x518530 | public: virtual long __stdcall CLoader::ScanDirectory(struct _GUID const &,unsigned short *,unsigned short *) | ?ScanDirectory@CLoader@@UAGJABU_GUID@@PAG1@Z
    0x518540 | public: virtual long __stdcall CLoader::CacheObject(struct IDirectMusicObject *) | ?CacheObject@CLoader@@UAGJPAUIDirectMusicObject@@@Z
    0x518550 | public: virtual long __stdcall CLoader::ReleaseObject(struct IDirectMusicObject *) | ?ReleaseObject@CLoader@@UAGJPAUIDirectMusicObject@@@Z
    0x518560 | public: virtual long __stdcall CLoader::ClearCache(struct _GUID const &) | ?ClearCache@CLoader@@UAGJABU_GUID@@@Z
    0x518570 | public: virtual long __stdcall CLoader::EnableCache(struct _GUID const &,int) | ?EnableCache@CLoader@@UAGJABU_GUID@@H@Z
    0x518580 | public: virtual long __stdcall CLoader::EnumObject(struct _GUID const &,unsigned long,struct _DMUS_OBJECTDESC *) | ?EnumObject@CLoader@@UAGJABU_GUID@@KPAU_DMUS_OBJECTDESC@@@Z
    0x518590 | public: void __thiscall CLoader::AddCFileStreamToList(class CFileStream *) | ?AddCFileStreamToList@CLoader@@QAEXPAVCFileStream@@@Z
    0x5185E0 | public: void __thiscall CLoader::DestroyCFileStreamList(void) | ?DestroyCFileStreamList@CLoader@@QAEXXZ
    0x5B4D30 | const CLoader::`vftable' | ??_7CLoader@@6B@
*/

#include "hooking.h"
