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

class HashTable
{
public:
    // 0x4C6630 | ??0HashTable@@QAE@H_NH@Z
    HashTable(i32 arg1, bool arg2, i32 arg3);

    // 0x4C6680 | ??1HashTable@@QAE@XZ
    ~HashTable();

    // 0x4C68A0 | ??4HashTable@@QAEXABV0@@Z
    void operator=(class HashTable const& arg1);

    // 0x4C6CA0 | ?Access@HashTable@@QAEPAXPBD@Z
    void* Access(char const* arg1);

    // 0x4C6D10 | ?Access@HashTable@@QAE_NPBDPAPBX@Z
    bool Access(char const* arg1, void const** arg2);

    // 0x4C6DA0 | ?AccessData@HashTable@@QAEPAXH@Z
    void* AccessData(i32 arg1);

    // 0x4C6D80 | ?AccessName@HashTable@@QAEPBDH@Z
    char const* AccessName(i32 arg1);

    // 0x4C6C60 | ?Change@HashTable@@QAE_NPBD0@Z
    bool Change(char const* arg1, char const* arg2);

    // 0x4C6B20 | ?Delete@HashTable@@QAE_NPBD@Z
    bool Delete(char const* arg1);

    // 0x4C6900 | ?GetEmptySlot@HashTable@@QAEAAVHashEntry@@PBDPAXPAV2@@Z
    class HashEntry& GetEmptySlot(char const* arg1, void* arg2, class HashEntry* arg3);

    // 0x4C7000 | ?GetFirstEntry@HashTable@@QAE_NAAVHashPosition@@@Z
    bool GetFirstEntry(class HashPosition& arg1);

    // 0x4C7050 | ?GetNextEntry@HashTable@@QAE_NAAVHashPosition@@@Z
    bool GetNextEntry(class HashPosition& arg1);

    // 0x4C69F0 | ?Insert@HashTable@@QAE_NPBDPAX@Z
    bool Insert(char const* arg1, void* arg2);

    // 0x4C67B0 | ?Kill@HashTable@@QAEXXZ
    void Kill();

    // 0x4C69A0 | ?MakeEmpty@HashTable@@QAEXXZ
    void MakeEmpty();

    // 0x4C6870 | ?MakePermanent@HashTable@@QAEXXZ
    void MakePermanent();

    // 0x4C6850 | ?KillAll@HashTable@@SAXXZ
    static void KillAll();

private:
    // 0x4C6E40 | ?ComputePrime@HashTable@@AAEHH@Z
    i32 ComputePrime(i32 arg1);

    // 0x4C6F80 | ?GetEntry@HashTable@@AAEPAVHashEntry@@H@Z
    class HashEntry* GetEntry(i32 arg1);

    // 0x4C6DC0 | ?Hash@HashTable@@AAEHPBD@Z
    i32 Hash(char const* arg1);

    // 0x4C6770 | ?InitCommon@HashTable@@AAEXH@Z
    void InitCommon(i32 arg1);

    // 0x4C66B0 | ?InitFixed@HashTable@@AAEXHH@Z
    void InitFixed(i32 arg1, i32 arg2);

    // 0x4C6E90 | ?Recompute@HashTable@@AAEXH@Z
    void Recompute(i32 arg1);

    // 0x6A3C60 | ?First@HashTable@@0PAV1@A
    static inline extern_var(0x6A3C60, class HashTable*, First);
};

check_size(HashTable, 0x18);

struct FixedHashEntry
{
public:
    // 0x4C7110 | ??1FixedHashEntry@@QAE@XZ
    // 0x4C70B0 | ??_EFixedHashEntry@@QAEPAXI@Z
    ~FixedHashEntry();

private:
    // 0x4C70A0 | ??0FixedHashEntry@@AAE@XZ
    FixedHashEntry();
};

check_size(FixedHashEntry, 0x10);
