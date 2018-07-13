#include "stdafx.h"
#include "localize.h"

#include "Main.h"

int WINAPI MyLoadStringA(HINSTANCE hInstance, UINT uID, char *lpBuffer, int cchBufferMax)
{
    SetLastError(8);

    if (cchBufferMax <= 0)
    {
        return 0;
    }

    if (!lpBuffer)
    {
        return 0;
    }

    *lpBuffer = 0;

    char* rawBuffer = (char*) GlobalAlloc(0x40u, 2 * cchBufferMax);

    if (!rawBuffer)
    {
        return 0;
    }

    SetLastError(0);

    if (!LoadStringA(hInstance, uID, rawBuffer, cchBufferMax))
    {
        DWORD lastError = GetLastError();
        GlobalFree(rawBuffer);
        SetLastError(lastError);

        return 0;
    }

    memcpy(lpBuffer, rawBuffer, cchBufferMax);

    GlobalFree(rawBuffer);

    lpBuffer[cchBufferMax - 1] = 0;

    char* current = lpBuffer;

    while (current[0] && current[1] && IsDBCSLeadByte(current[0]))
    {
        current += 2;
    }

    *current = 0;

    SetLastError(0);

    return current - lpBuffer;
}

HMODULE hMMLANG = nullptr;

#define LOC_STRING_COUNT 16

LocString LocalStrings[LOC_STRING_COUNT];
uint32_t LocalStringIndex = 0;

LocString* AngelReadString(uint32_t index)
{
    if (!hMMLANG)
    {
        hMMLANG = LoadLibraryA("MMLANG.DLL");

        if (!hMMLANG)
        {
            MessageBoxA(0, "MMLANG.DLL not found.", "Midtown Madness 2", MB_ICONERROR);

            exit(0);
        }
    }

    LocalStringIndex = (LocalStringIndex + 1) % LOC_STRING_COUNT;

    LocString* result = &LocalStrings[LocalStringIndex];

    MyLoadStringA(hMMLANG, index, result->Buffer, 512);

    return result;
}
