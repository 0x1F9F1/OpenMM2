// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

#include "OpenMM2.h"
#include "Main.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
    (void) hModule, lpReserved;

    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        if (strcmp(mem::pointer(0x5C28FC).as<const char*>(), "Angel: 3393 / Nov  3 2000 14:34:22") != 0)
        {
            MessageBoxA(NULL, "Invalid MM2 Version Detected", "Fatal Error", MB_OK);

            exit(1);
        }

        Printer = &CustomPrinter;
        PrintString = &CustomPrintString;

        hook::create_hook("WinMain", "Entry Point", 0x582025, &MidtownMain, HookType::CALL);
    }

    return TRUE;
}
