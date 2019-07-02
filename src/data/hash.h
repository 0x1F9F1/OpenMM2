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
    data:hash

    0x4C6630 | public: __thiscall HashTable::HashTable(int,bool,int) | ??0HashTable@@QAE@H_NH@Z
    0x4C6680 | public: __thiscall HashTable::~HashTable(void) | ??1HashTable@@QAE@XZ
    0x4C66B0 | private: void __thiscall HashTable::InitFixed(int,int) | ?InitFixed@HashTable@@AAEXHH@Z
    0x4C6770 | private: void __thiscall HashTable::InitCommon(int) | ?InitCommon@HashTable@@AAEXH@Z
    0x4C67B0 | public: void __thiscall HashTable::Kill(void) | ?Kill@HashTable@@QAEXXZ
    0x4C6850 | public: static void __cdecl HashTable::KillAll(void) | ?KillAll@HashTable@@SAXXZ
    0x4C6870 | public: void __thiscall HashTable::MakePermanent(void) | ?MakePermanent@HashTable@@QAEXXZ
    0x4C68A0 | public: void __thiscall HashTable::operator=(class HashTable const &) | ??4HashTable@@QAEXABV0@@Z
    0x4C6900 | public: class HashEntry & __thiscall HashTable::GetEmptySlot(char const *,void *,class HashEntry *) | ?GetEmptySlot@HashTable@@QAEAAVHashEntry@@PBDPAXPAV2@@Z
    0x4C69A0 | public: void __thiscall HashTable::MakeEmpty(void) | ?MakeEmpty@HashTable@@QAEXXZ
    0x4C69F0 | public: bool __thiscall HashTable::Insert(char const *,void *) | ?Insert@HashTable@@QAE_NPBDPAX@Z
    0x4C6B20 | public: bool __thiscall HashTable::Delete(char const *) | ?Delete@HashTable@@QAE_NPBD@Z
    0x4C6C60 | public: bool __thiscall HashTable::Change(char const *,char const *) | ?Change@HashTable@@QAE_NPBD0@Z
    0x4C6CA0 | public: void * __thiscall HashTable::Access(char const *) | ?Access@HashTable@@QAEPAXPBD@Z
    0x4C6D10 | public: bool __thiscall HashTable::Access(char const *,void const * *) | ?Access@HashTable@@QAE_NPBDPAPBX@Z
    0x4C6D80 | public: char const * __thiscall HashTable::AccessName(int) | ?AccessName@HashTable@@QAEPBDH@Z
    0x4C6DA0 | public: void * __thiscall HashTable::AccessData(int) | ?AccessData@HashTable@@QAEPAXH@Z
    0x4C6DC0 | private: int __thiscall HashTable::Hash(char const *) | ?Hash@HashTable@@AAEHPBD@Z
    0x4C6E40 | private: int __thiscall HashTable::ComputePrime(int) | ?ComputePrime@HashTable@@AAEHH@Z
    0x4C6E90 | private: void __thiscall HashTable::Recompute(int) | ?Recompute@HashTable@@AAEXH@Z
    0x4C6F80 | private: class HashEntry * __thiscall HashTable::GetEntry(int) | ?GetEntry@HashTable@@AAEPAVHashEntry@@H@Z
    0x4C7000 | public: bool __thiscall HashTable::GetFirstEntry(class HashPosition &) | ?GetFirstEntry@HashTable@@QAE_NAAVHashPosition@@@Z
    0x4C7050 | public: bool __thiscall HashTable::GetNextEntry(class HashPosition &) | ?GetNextEntry@HashTable@@QAE_NAAVHashPosition@@@Z
    0x4C70A0 | private: __thiscall FixedHashEntry::FixedHashEntry(void) | ??0FixedHashEntry@@AAE@XZ
    0x4C70B0 | public: void * __thiscall FixedHashEntry::`vector deleting destructor'(unsigned int) | ??_EFixedHashEntry@@QAEPAXI@Z
    0x4C7110 | public: __thiscall FixedHashEntry::~FixedHashEntry(void) | ??1FixedHashEntry@@QAE@XZ
    0x6A3C60 | private: static class HashTable * HashTable::First | ?First@HashTable@@0PAV1@A
*/

#include "hooking.h"

class HashEntry
{
public:
    char* Name;
    void* Value;
    HashEntry* Next;

    HashEntry() = delete;
    ~HashEntry() = delete;
};

check_size(HashEntry, 0xC);

class FixedHashEntry : public HashEntry
{
public:
    bool IsFixed;

    FixedHashEntry() = delete;
    ~FixedHashEntry() = delete;
};

check_size(FixedHashEntry, 0x10);

class HashTable
{
public:
    uint16_t word0;
    bool FixedSize;
    bool bool3;
    FixedHashEntry* FixedHashEntrys;
    int MaxSlots;
    uint32_t UsedSlots;
    HashEntry** EntryList;
    HashTable* Next;

    int Hash(const char* string);
    void* Access(const char* name);

    bool Insert(char const* name, void* value);

    void MakePermanent();

    void Kill();

    static inline extern_var(0x6A3C60, HashTable*, First);

    HashTable() = delete;
    ~HashTable() = delete;
};

check_size(HashTable, 0x18);
