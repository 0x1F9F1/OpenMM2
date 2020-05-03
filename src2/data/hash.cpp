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

#include "hash.h"

HashTable::HashTable(i32 arg1, bool arg2, i32 arg3)
{
    unimplemented();
}

HashTable::~HashTable()
{
    unimplemented();
}

void HashTable::operator=(class HashTable const& arg1)
{
    return stub<thiscall_t<void, HashTable*, class HashTable const&>>(0x4C68A0, this, arg1);
}

void* HashTable::Access(char const* arg1)
{
    return stub<thiscall_t<void*, HashTable*, char const*>>(0x4C6CA0, this, arg1);
}

bool HashTable::Access(char const* arg1, void const** arg2)
{
    return stub<thiscall_t<bool, HashTable*, char const*, void const**>>(0x4C6D10, this, arg1, arg2);
}

void* HashTable::AccessData(i32 arg1)
{
    return stub<thiscall_t<void*, HashTable*, i32>>(0x4C6DA0, this, arg1);
}

char const* HashTable::AccessName(i32 arg1)
{
    return stub<thiscall_t<char const*, HashTable*, i32>>(0x4C6D80, this, arg1);
}

bool HashTable::Change(char const* arg1, char const* arg2)
{
    return stub<thiscall_t<bool, HashTable*, char const*, char const*>>(0x4C6C60, this, arg1, arg2);
}

bool HashTable::Delete(char const* arg1)
{
    return stub<thiscall_t<bool, HashTable*, char const*>>(0x4C6B20, this, arg1);
}

class HashEntry& HashTable::GetEmptySlot(char const* arg1, void* arg2, class HashEntry* arg3)
{
    return stub<thiscall_t<class HashEntry&, HashTable*, char const*, void*, class HashEntry*>>(
        0x4C6900, this, arg1, arg2, arg3);
}

bool HashTable::GetFirstEntry(class HashPosition& arg1)
{
    return stub<thiscall_t<bool, HashTable*, class HashPosition&>>(0x4C7000, this, arg1);
}

bool HashTable::GetNextEntry(class HashPosition& arg1)
{
    return stub<thiscall_t<bool, HashTable*, class HashPosition&>>(0x4C7050, this, arg1);
}

bool HashTable::Insert(char const* arg1, void* arg2)
{
    return stub<thiscall_t<bool, HashTable*, char const*, void*>>(0x4C69F0, this, arg1, arg2);
}

void HashTable::Kill()
{
    return stub<thiscall_t<void, HashTable*>>(0x4C67B0, this);
}

void HashTable::MakeEmpty()
{
    return stub<thiscall_t<void, HashTable*>>(0x4C69A0, this);
}

void HashTable::MakePermanent()
{
    return stub<thiscall_t<void, HashTable*>>(0x4C6870, this);
}

void HashTable::KillAll()
{
    return stub<cdecl_t<void>>(0x4C6850);
}

i32 HashTable::ComputePrime(i32 arg1)
{
    return stub<thiscall_t<i32, HashTable*, i32>>(0x4C6E40, this, arg1);
}

class HashEntry* HashTable::GetEntry(i32 arg1)
{
    return stub<thiscall_t<class HashEntry*, HashTable*, i32>>(0x4C6F80, this, arg1);
}

i32 HashTable::Hash(char const* arg1)
{
    return stub<thiscall_t<i32, HashTable*, char const*>>(0x4C6DC0, this, arg1);
}

void HashTable::InitCommon(i32 arg1)
{
    return stub<thiscall_t<void, HashTable*, i32>>(0x4C6770, this, arg1);
}

void HashTable::InitFixed(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, HashTable*, i32, i32>>(0x4C66B0, this, arg1, arg2);
}

void HashTable::Recompute(i32 arg1)
{
    return stub<thiscall_t<void, HashTable*, i32>>(0x4C6E90, this, arg1);
}

FixedHashEntry::~FixedHashEntry()
{
    unimplemented();
}

FixedHashEntry::FixedHashEntry()
{
    unimplemented();
}

define_dummy_symbol(data_hash);
