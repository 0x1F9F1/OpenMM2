#include "stdafx.h"
#include "OpenMM2.h"

#include <dinput.h>

using DirectInputCreateA_t = HRESULT(WINAPI*)(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUTA *ppDI, LPUNKNOWN punkOuter);

DirectInputCreateA_t pDirectInputCreate = nullptr;

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
            Displayf("Loaded real dinput.dll at 0x%zX", (uintptr_t)(hDinput));

            pDirectInputCreate = (DirectInputCreateA_t) GetProcAddress(hDinput, "DirectInputCreateA");

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