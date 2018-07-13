#pragma once

struct LocString
{
    char Buffer[512];
};

LocString* AngelReadString(uint32_t index);

#define LANG_STRING(index) (AngelReadString(index)->Buffer)