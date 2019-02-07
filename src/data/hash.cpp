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

#include "hash.h"

int HashTable::Hash(const char *string)
{
    if (!EntryList)
    {
        EntryList = new HashEntry*[MaxSlots];

        std::fill(EntryList, EntryList + MaxSlots, nullptr);
    }

    uint32_t hash = 0;

    while (*string)
    {
        hash = (hash << 4) + *string++;

        if (hash & 0xF0000000)
        {
            hash ^= (hash & 0xF0000000) ^ ((hash & 0xF0000000) >> 24);
        }
    }

    return hash % MaxSlots;
}

void * HashTable::Access(const char *name)
{
    int hash = Hash(name);

    for (HashEntry* i = EntryList[hash]; i; i = i->Next)
    {
        if (!strcmp(i->Name, name))
        {
            return i->Value;
        }
    }

    return nullptr;
}

bool HashTable::Insert(char const * name, void * value)
{
    return stub<member_func_t<bool, HashTable, const char*, void*>>(0x4C69F0, this, name, value);
}

void HashTable::MakePermanent()
{
    for (HashTable** i = &HashTable::First; *i; i = &((*i)->Next))
    {
        if (*i == this)
        {
            *i = Next;

            Next = nullptr;

            return;
        }
    }
}

void HashTable::Kill()
{
    return stub<member_func_t<void, HashTable>>(0x4C67B0, this);
}
