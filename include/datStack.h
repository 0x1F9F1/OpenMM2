#pragma once

#include <stdio.h>

class datStack
{
public:
    static int ExceptionFilter(struct _EXCEPTION_POINTERS* exception);

    static void LookupAddress(char* buffer, int address);
    static void DoTraceback(int maxDepth, int * ebp, FILE * fileOut, char const* seperator);
};
