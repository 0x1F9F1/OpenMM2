#include "stdafx.h"
#include "HashTable.h"

int HashTable::Hash(const char *string)
{
    if (!EntryList)
    {
        EntryList = new HashEntry*[MaxSlots];

        std::fill(EntryList, EntryList + MaxSlots, nullptr);
    }

    uint32_t hash = 0;

    for (char currentChar; (currentChar = *string) != '\0'; ++string)
    {
        hash = (hash << 4) + currentChar;

        if (hash & 0xF0000000)
        {
            hash ^= hash & 0xF0000000 ^ ((hash & 0xF0000000) >> 24);
        }
    }

    return hash % MaxSlots;
}

void * HashTable::Access(const char *name)
{
    for (HashEntry* i = EntryList[Hash(name)]; i; i = i->Next)
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
    return stub<thiscall_t<bool, HashTable, const char*, void*>>(0x4C69F0, this, name, value);
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
    return stub<thiscall_t<void, HashTable>>(0x4C67B0, this);
}
