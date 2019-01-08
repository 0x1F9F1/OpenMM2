#include "hooking.h"
#include "testgame.h"

#include "core/output.h"
#include "data/args.h"
#include "data/timer.h"
#include "memory/allocator.h"

#include <dinput.h>
#include <mem/init_function-inl.h>

using DirectInputCreateA_t = HRESULT(WINAPI*)(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA* ppDI, LPUNKNOWN punkOuter);

DirectInputCreateA_t pDirectInputCreate = nullptr;

#pragma comment(linker, "/EXPORT:DirectInputCreateA=_DirectInputCreateA_Impl@16")
#pragma comment(linker, "/EXPORT:DirectInputCreateW=_DirectInputCreateA_Impl@16")

extern "C" HRESULT WINAPI DirectInputCreateA_Impl(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA* ppDI, LPUNKNOWN punkOuter)
{
    if (pDirectInputCreate == nullptr)
    {
        char szDllFile[MAX_PATH];
        GetSystemDirectoryA(szDllFile, sizeof(szDllFile));
        strncat_s(szDllFile, "\\dinput.dll", sizeof(szDllFile));

        if (HMODULE hDinput = LoadLibraryA(szDllFile))
        {
            Displayf("Loaded real dinput.dll at 0x%zX", (uintptr_t)(hDinput));

            pDirectInputCreate = (DirectInputCreateA_t)GetProcAddress(hDinput, "DirectInputCreateA");

            if (pDirectInputCreate)
            {
                Displayf("Found DirectInputCreateA at 0x%zX", (uintptr_t)(pDirectInputCreate));
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

    return pDirectInputCreate(hinst, dwVersion, ppDI, punkOuter);
}

inline_var(0x6B48A0, int, ArgC);
inline_var(0x6B48A4, char**, ArgV);

int CALLBACK MidtownMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    (void)hInstance, hPrevInstance, lpCmdLine, nCmdShow;

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

BOOL APIENTRY DllMain(HMODULE /*hModule*/, DWORD ul_reason_for_call, LPVOID /*lpReserved*/)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
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
