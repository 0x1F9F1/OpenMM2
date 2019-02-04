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

#include "hooking.h"
#include "testgame.h"

#include "core/output.h"
#include "data/args.h"
#include "data/timer.h"
#include "memory/allocator.h"

#include "minwin.h"

#include <dinput.h>
#include <mem/init_function-inl.h>

static decltype(&DirectInputCreateA) DirectInputCreateA_Orig = nullptr;

#pragma comment(linker, "/EXPORT:DirectInputCreateA=_DirectInputCreateA_Impl@16")

extern "C" HRESULT WINAPI DirectInputCreateA_Impl(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA* ppDI, LPUNKNOWN punkOuter)
{
    if (DirectInputCreateA_Orig == nullptr)
    {
        char szDllFile[MAX_PATH];
        GetSystemDirectoryA(szDllFile, sizeof(szDllFile));
        strncat_s(szDllFile, "\\dinput.dll", sizeof(szDllFile));

        if (HMODULE hDinput = LoadLibraryA(szDllFile))
        {
            Displayf("Loaded real dinput.dll at 0x%zX", (uintptr_t)(hDinput));

            DirectInputCreateA_Orig = (decltype(DirectInputCreateA_Orig)) GetProcAddress(hDinput, "DirectInputCreateA");

            if (DirectInputCreateA_Orig)
            {
                Displayf("Found DirectInputCreateA at 0x%zX", (uintptr_t) DirectInputCreateA_Orig);
            }
            else
            {
                Quitf("Failed to find DirectInputCreateA");
            }
        }
        else
        {
            Quitf("Failed to load real dinput.dll");
        }
    }

    return DirectInputCreateA_Orig(hinst, dwVersion, ppDI, punkOuter);
}

static extern_var(0x6B48A0, int, ArgC);
static extern_var(0x6B48A4, char**, ArgV);

int CALLBACK MidtownMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPSTR /*lpCmdLine*/, int /*nCmdShow*/)
{
    datOutput::OpenLog("mm2.log");

    datArgParser::Init(ArgC, ArgV);

    Displayf("Begin Hooking");

    Timer start;

    mem::init_function::init();

    Displayf("Hooks completed in %.3f Seconds", start.ElapsedSeconds());

    int result = ExceptMain();

    Displayf("Good Bye.");

    datOutput::CloseLog();

    return result;
}

BOOL APIENTRY DllMain(HMODULE /*hinstDLL*/, DWORD fdwReason, LPVOID /*lpvReserved*/)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
    {
        if (strcmp(mem::pointer(0x5C28FC).as<const char*>(), "Angel: 3393 / Nov  3 2000 14:34:22") != 0)
        {
            MessageBoxA(NULL, "Invalid MM2 Version Detected", "Fatal Error", MB_OK);

            exit(1);
        }

        Printer = &CustomPrinter;
        PrintString = &CustomPrintString;

        InitMemoryHooks();

        create_hook("WinMain", "Entry Point", 0x402360, &MidtownMain);
    }

    return TRUE;
}
