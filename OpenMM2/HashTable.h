#pragma once

class HashEntry
{
public:
    char* Name;
    void* Value;
    HashEntry *Next;

    HashEntry() = delete;
    ~HashEntry() = delete;
};

class FixedHashEntry
    : public HashEntry
{
public:
    bool IsFixed;

    FixedHashEntry() = delete;
    ~FixedHashEntry() = delete;
};

class HashTable
{
public:
    uint16_t word0;
    bool FixedSize;
    bool bool3;
    FixedHashEntry *FixedHashEntrys;
    int MaxSlots;
    uint32_t UsedSlots;
    HashEntry **EntryList;
    HashTable *Next;

    int Hash(const char *string);
    void * Access(const char *name);

    bool Insert(char const * name, void * value);

    void MakePermanent();

    declstatic(HashTable*, First);

    HashTable() = delete;
    ~HashTable() = delete;
};
