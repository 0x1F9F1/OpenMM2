#include "stdafx.h"
#include "String.h"

#include <cstring>

char* mm2_strdup(const char *string)
{
    if (string)
    {
        size_t len = strlen(string) + 1;
        char* result = new char[len];
        memcpy(result, string, len);
        return result;
    }

    return nullptr;
}