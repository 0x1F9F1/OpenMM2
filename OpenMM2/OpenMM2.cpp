#include "stdafx.h"
#include "OpenMM2.h"

#include <dinput.h>

decltype(&DirectInputCreateA) pDirectInputCreate = nullptr;

#pragma comment(linker, "/EXPORT:DirectInputCreateA=_DirectInputCreateA_Impl@16")
#pragma comment(linker, "/EXPORT:DirectInputCreateW=_DirectInputCreateA_Impl@16")
extern "C" HRESULT WINAPI DirectInputCreateA_Impl(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA *ppDI, LPUNKNOWN punkOuter)
{
    if (pDirectInputCreate == nullptr)
    {
        char szDllFile[MAX_PATH];
        GetSystemDirectoryA(szDllFile, sizeof(szDllFile));
        strncat_s(szDllFile, "\\dinput.dll", sizeof(szDllFile));

        if (HMODULE hDinput = LoadLibraryA(szDllFile))
        {
            Displayf("Loaded real dinput.dll at %X", (uintptr_t)(hDinput));

            pDirectInputCreate = reinterpret_cast<decltype(&DirectInputCreateA)>(GetProcAddress(hDinput, "DirectInputCreateA"));

            if (pDirectInputCreate)
            {
                Displayf("Found DirectInputCreateA at %X", (uintptr_t)(pDirectInputCreate));
            }
            else
            {
                Displayf("Failed to find DirectInputCreateA");
            }
        }
        else
        {
            Displayf("Failed to load real dinput.dll");
        }
    }

    return pDirectInputCreate(hinst, dwVersion, ppDI, punkOuter);
}