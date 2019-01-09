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

#include "localize.h"

#include "minwin.h"

int MyLoadStringA(HINSTANCE hInstance, UINT uID, char *lpBuffer, int cchBufferMax)
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

    char* rawBuffer = (char*) GlobalAlloc(GPTR, 2 * cchBufferMax);

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

    for (; *current != '\0'; ++current)
    {
        if (IsDBCSLeadByte(*current))
        {
            if (current[1])
            {
                ++current;
            }
            else
            {
                break;
            }
        }
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

run_once([ ]
{
    create_hook("AngelReadString", "", 0x534790, &AngelReadString);
});
