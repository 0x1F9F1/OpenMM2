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

#include "stack.h"

#include "core/output.h"

#include "minwin.h"

#include <DbgHelp.h>
#pragma comment(lib, "Dbghelp.lib")

#include <algorithm>

struct MapSymbol
{
    const char* Name;
    int Address;
};

inline extern_var(0x6A3C64, char[128], MapFileTimestamp);
inline extern_var(0x6A3CE4, MapSymbol*, MapFileAddresses);
inline extern_var(0x6A3CE8, int, MapFileAddressCount);
inline extern_var(0x6A3CEC, bool, IsMapInitialized);

bool DbgHelpLoaded = false;

void InitMap()
{
    if (!IsMapInitialized)
    {
        IsMapInitialized = 1;

        SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS);

        DbgHelpLoaded = SymInitialize(GetCurrentProcess(), NULL, TRUE);

        char moduleFileName[128];
        GetModuleFileNameA(nullptr, moduleFileName, 128);

        if (char* find = strrchr(moduleFileName, '.'))
        {
            *find = '\0';
        }

        strcat_s(moduleFileName, ".MAP");

        char* stringBuffer = 0;

        strcpy_s(MapFileTimestamp, "NO TIMESTAMP");

        FILE* hMap = nullptr;

        if (fopen_s(&hMap, moduleFileName, "r"))
        {
            char outputBuffer[256];

            sprintf_s(outputBuffer, "Couldn't open '%s'", moduleFileName);
            OutputDebugStringA(outputBuffer);

            return;
        }

        size_t stringBufferSize = 0;

        for (int state = 1; state <= 2; ++state)
        {
            size_t stringLengths = 0;
            bool parsingAddresses = false;

            MapFileAddressCount = 0;

            fseek(hMap, 0, SEEK_SET);

            char lineBuffer[256];

            while (fgets(lineBuffer, 256, hMap))
            {
                if (strstr(lineBuffer, "Timestamp is"))
                {
                    strcpy_s(MapFileTimestamp, lineBuffer);
                }
                else if (strstr(lineBuffer, "Publics by Value"))
                {
                    parsingAddresses = true;
                }
                else if (!parsingAddresses)
                {
                    continue;
                }

                int address;

                char valueBuffer[256];
                if (!strncmp(lineBuffer, " 0001:", 6u) && sscanf_s(lineBuffer, "%*s %s %x", valueBuffer, sizeof(valueBuffer), &address) == 2)
                {
                    if (state == 2)
                    {
                        strcpy_s(&stringBuffer[stringLengths], stringBufferSize - stringLengths, valueBuffer);
                        MapFileAddresses[MapFileAddressCount].Name = &stringBuffer[stringLengths];
                        MapFileAddresses[MapFileAddressCount].Address = address;
                    }

                    ++MapFileAddressCount;

                    stringLengths += strlen(valueBuffer) + 1;
                }
                else if (parsingAddresses && !strncmp(lineBuffer, " 0002:", 6u))
                {
                    break;
                }
            }

            if (state == 1)
            {
                MapFileAddresses = new MapSymbol[MapFileAddressCount];
                stringBufferSize = stringLengths;
                stringBuffer = new char[stringBufferSize];

                Errorf("%d symbols parsed from map file.", MapFileAddressCount);
            }
        }

        fclose(hMap);

        std::sort(MapFileAddresses, MapFileAddresses + MapFileAddressCount, [](const MapSymbol& lhs, const MapSymbol& rhs) {
            return lhs.Address < rhs.Address;
        });
    }
}

const MapSymbol* LookupMapSymbol(int address)
{
    const MapSymbol* first = MapFileAddresses;
    const MapSymbol* last = first + MapFileAddressCount;

    const MapSymbol* find = std::upper_bound(first, last, address, [](int address, const MapSymbol& entry) {
        return entry.Address >= address;
    });

    if (find == first || find == last)
    {
        return nullptr;
    }

    return find - 1;
}

const char* GetErrorCodeString(unsigned int code)
{
    switch (code)
    {
        case EXCEPTION_ACCESS_VIOLATION: return "EXCEPTION_ACCESS_VIOLATION";
        case EXCEPTION_ARRAY_BOUNDS_EXCEEDED: return "EXCEPTION_ARRAY_BOUNDS_EXCEEDED";
        case EXCEPTION_BREAKPOINT: return "EXCEPTION_BREAKPOINT";
        case EXCEPTION_DATATYPE_MISALIGNMENT: return "EXCEPTION_DATATYPE_MISALIGNMENT";
        case EXCEPTION_FLT_DENORMAL_OPERAND: return "EXCEPTION_FLT_DENORMAL_OPERAND";
        case EXCEPTION_FLT_DIVIDE_BY_ZERO: return "EXCEPTION_FLT_DIVIDE_BY_ZERO";
        case EXCEPTION_FLT_INEXACT_RESULT: return "EXCEPTION_FLT_INEXACT_RESULT";
        case EXCEPTION_FLT_INVALID_OPERATION: return "EXCEPTION_FLT_INVALID_OPERATION";
        case EXCEPTION_FLT_OVERFLOW: return "EXCEPTION_FLT_OVERFLOW";
        case EXCEPTION_FLT_STACK_CHECK: return "EXCEPTION_FLT_STACK_CHECK";
        case EXCEPTION_FLT_UNDERFLOW: return "EXCEPTION_FLT_UNDERFLOW";
        case EXCEPTION_ILLEGAL_INSTRUCTION: return "EXCEPTION_ILLEGAL_INSTRUCTION";
        case EXCEPTION_IN_PAGE_ERROR: return "EXCEPTION_IN_PAGE_ERROR";
        case EXCEPTION_INT_DIVIDE_BY_ZERO: return "EXCEPTION_INT_DIVIDE_BY_ZERO";
        case EXCEPTION_INT_OVERFLOW: return "EXCEPTION_INT_OVERFLOW";
        case EXCEPTION_INVALID_DISPOSITION: return "EXCEPTION_INVALID_DISPOSITION";
        case EXCEPTION_NONCONTINUABLE_EXCEPTION: return "EXCEPTION_NONCONTINUABLE_EXCEPTION";
        case EXCEPTION_PRIV_INSTRUCTION: return "EXCEPTION_PRIV_INSTRUCTION";
        case EXCEPTION_SINGLE_STEP: return "EXCEPTION_SINGLE_STEP";
        case EXCEPTION_STACK_OVERFLOW: return "EXCEPTION_STACK_OVERFLOW";
    };

    return nullptr;
}

int datStack::ExceptionFilter(_EXCEPTION_POINTERS* exception)
{
    CONTEXT* context = exception->ContextRecord;
    EXCEPTION_RECORD* record = exception->ExceptionRecord;

    char eipTrace[256];
    datStack::LookupAddress(eipTrace, context->Eip);

    Displayf(
        "EAX=%08X EBX=%08X ECX=%08X EDX=%08X\n"
        "ESI=%08X EDI=%08X EBP=%08X ESP=%08X",
        context->Eax, context->Ebx, context->Ecx, context->Edx,
        context->Esi, context->Edi, context->Ebp, context->Esp);

    const char* errorCode = GetErrorCodeString(record->ExceptionCode);

    if (errorCode)
    {
        Displayf("%s at EIP=%s", errorCode, eipTrace);
    }
    else
    {
        Displayf("Exception 0x%08X at EIP=%s", record->ExceptionCode, eipTrace);
    }

    datStack::DoTraceback(16, (int*) context->Ebp, 0, "\n");

    return EXCEPTION_EXECUTE_HANDLER;
}

void datStack::LookupAddress(char* buffer, int address)
{
    InitMap();

    if (DbgHelpLoaded)
    {
        DWORD64 dwDisplacement = 0;

        char symbolBuffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME * sizeof(TCHAR)];
        PSYMBOL_INFO pSymbol = (PSYMBOL_INFO) symbolBuffer;

        pSymbol->SizeOfStruct = sizeof(SYMBOL_INFO);
        pSymbol->MaxNameLen = MAX_SYM_NAME;

        IMAGEHLP_MODULE module = {0};
        module.SizeOfStruct = sizeof(IMAGEHLP_MODULE);

        if (SymFromAddr(GetCurrentProcess(), address, &dwDisplacement, pSymbol) && SymGetModuleInfo(GetCurrentProcess(), address, &module))
        {
            sprintf_s(buffer, 128, "0x%08X (%s.%s+0x%X)", address, module.ModuleName, pSymbol->Name, (int) dwDisplacement);

            return;
        }
    }

    const MapSymbol* entry = LookupMapSymbol(address);

    if (entry)
    {
        int offset = address - entry->Address;

        char undName[256];

        const char* functionName = UnDecorateSymbolName(entry->Name, undName, std::size(undName), UNDNAME_COMPLETE | UNDNAME_NO_FUNCTION_RETURNS | UNDNAME_NO_ALLOCATION_MODEL | UNDNAME_NO_ALLOCATION_LANGUAGE | UNDNAME_NO_ACCESS_SPECIFIERS | UNDNAME_NO_THROW_SIGNATURES | UNDNAME_NO_MEMBER_TYPE | UNDNAME_NO_RETURN_UDT_MODEL) ? undName : entry->Name;

        sprintf_s(buffer, 128, "0x%08X (Midtown2.%s+0x%X)", address, functionName, offset);

        return;
    }

    sprintf_s(buffer, 128, "0x%08X (Unknown)", address);
}

void datStack::DoTraceback(int maxDepth, int* ebp, FILE* fileOut, char const* seperator)
{
    (void) seperator;

    char buffer[128];

    while (maxDepth--)
    {
        __try
        {
            int returnAddress = ebp[1];

            ebp = (int*) *ebp;

            if (returnAddress < 0)
            {
                break;
            }

            datStack::LookupAddress(buffer, returnAddress);

            if (fileOut)
            {
                fprintf(fileOut, "%s,", buffer);
            }
            else
            {
                Displayf("%s", buffer);
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            break;
        }
    }
}
