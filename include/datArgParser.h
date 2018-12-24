#pragma once

#include "HashTable.h"

class datArgParser
{
public:
    static bool Exists(const char* name);

    static bool Get(const char* name, uint32_t index, int& out);
    static bool Get(const char* name, uint32_t index, float& out);
    static bool Get(const char* name, uint32_t index, const char*& out);

    static void Init();
    static void Init(int argc, char** argv);
    static void Kill(void);

    decl_static(HashTable, ArgHash);
    decl_static(int, Argc);
    decl_static(char **, Argv);
};