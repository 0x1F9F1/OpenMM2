/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

class HashTable
{
public:
    // 0x4C6630 | ??0HashTable@@QAE@H_NH@Z
    inline HashTable(int32_t arg1, bool arg2, int32_t arg3)
    {
        stub<member_func_t<void, HashTable, int32_t, bool, int32_t>>(0x4C6630, this, arg1, arg2, arg3);
    }

    // 0x4C6680 | ??1HashTable@@QAE@XZ
    inline ~HashTable()
    {
        stub<member_func_t<void, HashTable>>(0x4C6680, this);
    }

    // 0x4C66B0 | ?InitFixed@HashTable@@AAEXHH@Z
    inline void InitFixed(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, HashTable, int32_t, int32_t>>(0x4C66B0, this, arg1, arg2);
    }

    // 0x4C6770 | ?InitCommon@HashTable@@AAEXH@Z
    inline void InitCommon(int32_t arg1)
    {
        return stub<member_func_t<void, HashTable, int32_t>>(0x4C6770, this, arg1);
    }

    // 0x4C67B0 | ?Kill@HashTable@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, HashTable>>(0x4C67B0, this);
    }

    // 0x4C6850 | ?KillAll@HashTable@@SAXXZ
    static inline void KillAll()
    {
        return stub<cdecl_t<void>>(0x4C6850);
    }

    // 0x4C6870 | ?MakePermanent@HashTable@@QAEXXZ
    inline void MakePermanent()
    {
        return stub<member_func_t<void, HashTable>>(0x4C6870, this);
    }

    // 0x4C68A0 | ??4HashTable@@QAEXABV0@@Z
    inline void operator=(class HashTable const& arg1)
    {
        return stub<member_func_t<void, HashTable, class HashTable const&>>(0x4C68A0, this, arg1);
    }

    // 0x4C6900 | ?GetEmptySlot@HashTable@@QAEAAVHashEntry@@PBDPAXPAV2@@Z
    inline class HashEntry& GetEmptySlot(char const* arg1, void* arg2, class HashEntry* arg3)
    {
        return stub<member_func_t<class HashEntry&, HashTable, char const*, void*, class HashEntry*>>(
            0x4C6900, this, arg1, arg2, arg3);
    }

    // 0x4C69A0 | ?MakeEmpty@HashTable@@QAEXXZ
    inline void MakeEmpty()
    {
        return stub<member_func_t<void, HashTable>>(0x4C69A0, this);
    }

    // 0x4C69F0 | ?Insert@HashTable@@QAE_NPBDPAX@Z
    inline bool Insert(char const* arg1, void* arg2)
    {
        return stub<member_func_t<bool, HashTable, char const*, void*>>(0x4C69F0, this, arg1, arg2);
    }

    // 0x4C6B20 | ?Delete@HashTable@@QAE_NPBD@Z
    inline bool Delete(char const* arg1)
    {
        return stub<member_func_t<bool, HashTable, char const*>>(0x4C6B20, this, arg1);
    }

    // 0x4C6C60 | ?Change@HashTable@@QAE_NPBD0@Z
    inline bool Change(char const* arg1, char const* arg2)
    {
        return stub<member_func_t<bool, HashTable, char const*, char const*>>(0x4C6C60, this, arg1, arg2);
    }

    // 0x4C6CA0 | ?Access@HashTable@@QAEPAXPBD@Z
    inline void* Access(char const* arg1)
    {
        return stub<member_func_t<void*, HashTable, char const*>>(0x4C6CA0, this, arg1);
    }

    // 0x4C6D10 | ?Access@HashTable@@QAE_NPBDPAPBX@Z
    inline bool Access(char const* arg1, void const** arg2)
    {
        return stub<member_func_t<bool, HashTable, char const*, void const**>>(0x4C6D10, this, arg1, arg2);
    }

    // 0x4C6D80 | ?AccessName@HashTable@@QAEPBDH@Z
    inline char const* AccessName(int32_t arg1)
    {
        return stub<member_func_t<char const*, HashTable, int32_t>>(0x4C6D80, this, arg1);
    }

    // 0x4C6DA0 | ?AccessData@HashTable@@QAEPAXH@Z
    inline void* AccessData(int32_t arg1)
    {
        return stub<member_func_t<void*, HashTable, int32_t>>(0x4C6DA0, this, arg1);
    }

    // 0x4C6DC0 | ?Hash@HashTable@@AAEHPBD@Z
    inline int32_t Hash(char const* arg1)
    {
        return stub<member_func_t<int32_t, HashTable, char const*>>(0x4C6DC0, this, arg1);
    }

    // 0x4C6E40 | ?ComputePrime@HashTable@@AAEHH@Z
    inline int32_t ComputePrime(int32_t arg1)
    {
        return stub<member_func_t<int32_t, HashTable, int32_t>>(0x4C6E40, this, arg1);
    }

    // 0x4C6E90 | ?Recompute@HashTable@@AAEXH@Z
    inline void Recompute(int32_t arg1)
    {
        return stub<member_func_t<void, HashTable, int32_t>>(0x4C6E90, this, arg1);
    }

    // 0x4C6F80 | ?GetEntry@HashTable@@AAEPAVHashEntry@@H@Z
    inline class HashEntry* GetEntry(int32_t arg1)
    {
        return stub<member_func_t<class HashEntry*, HashTable, int32_t>>(0x4C6F80, this, arg1);
    }

    // 0x4C7000 | ?GetFirstEntry@HashTable@@QAE_NAAVHashPosition@@@Z
    inline bool GetFirstEntry(class HashPosition& arg1)
    {
        return stub<member_func_t<bool, HashTable, class HashPosition&>>(0x4C7000, this, arg1);
    }

    // 0x4C7050 | ?GetNextEntry@HashTable@@QAE_NAAVHashPosition@@@Z
    inline bool GetNextEntry(class HashPosition& arg1)
    {
        return stub<member_func_t<bool, HashTable, class HashPosition&>>(0x4C7050, this, arg1);
    }

    // 0x6A3C60 | ?First@HashTable@@0PAV1@A
    static inline extern_var(0x6A3C60, class HashTable*, First);
};

struct FixedHashEntry
{
public:
    // 0x4C70A0 | ??0FixedHashEntry@@AAE@XZ
    inline FixedHashEntry()
    {
        stub<member_func_t<void, FixedHashEntry>>(0x4C70A0, this);
    }

    // 0x4C70B0 | ??_EFixedHashEntry@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x4C7110 | ??1FixedHashEntry@@QAE@XZ
    inline ~FixedHashEntry()
    {
        stub<member_func_t<void, FixedHashEntry>>(0x4C7110, this);
    }
};
