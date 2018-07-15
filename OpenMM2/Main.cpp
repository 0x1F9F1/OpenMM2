#include "stdafx.h"
#include "Main.h"

#include "memMemoryAllocator.h"
#include "datArgParser.h"
#include "datStack.h"
#include "memSafeHeap.h"

#include "localize.h"

#include "ioInput.h"
#include "lvlProgress.h"

#include "mmStatePack.h"
#include "gfxPipeline.h"

#include "datAssetManager.h"

#include "gfxImage.h"

#include "asRoot.h"
#include "zipFile.h"

#include "asNetwork.h"

#include "GameLoop.h"

#include "AudioOptions.h"

#include "datOutput.h"

#include <shellapi.h>

#pragma comment(lib, "imm32.lib")

defnvar(0x5E0CF9, ZoneStartup);

instvar(0x6B48A0, int, ArgC);
instvar(0x6B48A4, char**, ArgV);

defnvar(0x5C28D4, APPTITLE);
defnvar(0x5C28D8, DEFAULT_CITY);
defnvar(0x5C28DC, VERSION_STRING);

instvar(0x6614D4, char[256], ExecPath);

void CreateGameMutex(const char* name)
{
    HANDLE hMutex = CreateMutexA(0, 0, name);

    if (!hMutex || WaitForSingleObject(hMutex, 1u))
    {
        MessageBoxA(0, LANG_STRING(0xF7), APPTITLE, MB_ICONERROR);

        exit(0);
    }
}

uint32_t __ComputeCpuSpeed()
{
    DWORD64 cycleStart = __rdtsc();
    DWORD64 timeStart = GetTickCount64();

    Sleep(100);

    DWORD64 cycleDelta = __rdtsc() - cycleStart;
    DWORD64 timeDelta = GetTickCount64() - timeStart;

    return (uint32_t)((cycleDelta + timeDelta * 500) / (timeDelta * 1000));
}

uint32_t ComputeCpuSpeed()
{
    uint32_t speed0 = __ComputeCpuSpeed();
    uint32_t speed1 = __ComputeCpuSpeed();
    uint32_t speed2 = __ComputeCpuSpeed();

    return (speed0 + speed1 + speed2) / 3;
}

void CheckGlobalMemory()
{
    MEMORYSTATUSEX status;
    status.dwLength = sizeof(status);
    GlobalMemoryStatusEx(&status);

    Displayf(
        "Avail Phys: %dM  Avail Page: %dM  Avail addr: %dM",
        status.ullAvailPhys >> 20,
        status.ullAvailPageFile >> 20,
        status.ullAvailVirtual >> 20);

    if (status.ullAvailPageFile + status.ullAvailPhys < 0x5000000)
    {
        MessageBoxA(0, LANG_STRING(0xF8), APPTITLE, MB_ICONERROR);

        exit(0);
    }
}

void CheckDiskSpace()
{
    ULARGE_INTEGER FreeBytesAvailableToCaller;
    ULARGE_INTEGER TotalNumberOfBytes;
    ULARGE_INTEGER TotalNumberOfFreeBytes;

    if (GetDiskFreeSpaceExA(0, &FreeBytesAvailableToCaller, &TotalNumberOfBytes, &TotalNumberOfFreeBytes))
    {
        if (FreeBytesAvailableToCaller.QuadPart < 0x20000)
        {
            MessageBoxA(0, LANG_STRING(0xF9), APPTITLE, MB_OK);
        }
    }
}

bool FirstRunEula()
{
    bool result = false;

    HMODULE hEbuEula = LoadLibraryA("EBUEula.dll");
    if (hEbuEula)
    {
        auto EBUEula = (int(*)(const char *, const char *, const char *, int)) GetProcAddress(hEbuEula, "EBUEula");

        if (EBUEula)
        {
            char eula[MAX_PATH];
            char warranty[MAX_PATH];

            strcpy_s(eula, "eula.rtf");
            strcpy_s(warranty, "warranty.rtf");

            int response = EBUEula(
                "Software\\Microsoft\\Microsoft Games\\Midtown Madness\\2.0",
                eula,
                (GetFileAttributesA(warranty) != -1 ? warranty : 0),
                1);

            result = response != 0;
        }

        FreeLibrary(hEbuEula);
    }

    return result;
}

void ebolaPlayMovie(char * name)
{
    return stub<cdecl_t<void, char*>>(0x402780, name);
}

instvar(0x6B0454, uint32_t, mmCpuSpeed);
instvar(0x683108, int, gfxIcon);

int Main(void)
{
    ioInput::bUseJoystick = false;
    mmCpuSpeed = ComputeCpuSpeed();
    gfxIcon = 0x6F;
    MMSTATE.AudioFlags = 0xC73;

    DEVMODEA device;
    memset(&device, 0, sizeof(device));
    device.dmSize = sizeof(device);

    EnumDisplaySettingsA(0, 0xFFFFFFFF, &device);

    if (device.dmBitsPerPel < 8)
    {
        MessageBoxA(0, LANG_STRING(0x292), APPTITLE, MB_ICONERROR);

        exit(0);
    }

    CreateGameMutex("MidtownMadness2Mutex");
    CheckGlobalMemory();
    CheckDiskSpace();

    if (!FirstRunEula())
    {
        Displayf("Failed to load EBUeula.dll or user declined.");
        exit(0);
    }

    lvlProgress::SetCallback(&ProgressCB);

    int firstLoad = 0;

    ROOT.Init(datArgParser::Exists("nan"));

    Displayf("%s - %s", APPTITLE, VERSION_STRING);

    const char* currentCity = "sf";
    const char* currentCar = "vpcoop";

    datArgParser::Get("level", 0, currentCity);
    datArgParser::Get("car", 0, currentCar);

    MMSTATE.SetDefaults(currentCity, currentCar);

    bool parseStateArgs = MMSTATE.ParseStateArgs();

    strcpy_s(ExecPath, ".");

    datAssetManager::SetPath(".");
    datAssetManager::sm_IgnorePrefix = false;

    if (datArgParser::Exists("ime"))
    {
        MMSTATE.UseIME = 1;
    }

    inWindow = 0;
    gfxPipeline::SetTitle(APPTITLE);

    gfxMinScreenWidth = atoi(LANG_STRING(612u));
    gfxMinScreenHeight = atoi(LANG_STRING(613u));

    bool success = 0;

    if (!gfxAutoDetect(&success))
    {
        MessageBoxA(0, LANG_STRING(0xFAu), APPTITLE, MB_ICONERROR);

        exit(0);
    }

    gfxPipeline::SetRes(640, 480, 16, 16, 0);

    InitDirectDraw();

    Displayf("Playing movie now...");
    if (!datArgParser::Exists("nomovie") && !inWindow)
    {
        FILE* hLogos = nullptr;

        if (fopen_s(&hLogos, "logos.avi", "r") == NO_ERROR)
        {
            fclose(hLogos);

            ebolaPlayMovie("logos.avi");
        }
        else
        {
            Warningf("Logo movie not found in current working directory.");
        }
    }

    Displayf("Done playing movie.");

    if (!datArgParser::Exists("noime"))
    {
        if (ImmGetContext(hwndMain))
        {
            int systemLangID = GetSystemDefaultLangID();

            if (systemLangID == MAKELANGID(LANG_JAPANESE, SUBLANG_JAPANESE_JAPAN) || systemLangID == MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_TRADITIONAL))
            {
                MMSTATE.UseIME = 1;

                MMSTATE.IMEContext = ImmAssociateContext(hwndMain, 0);
            }
            else if (systemLangID == MAKELANGID(LANG_KOREAN, SUBLANG_KOREAN))
            {
                HIMC imm = ImmAssociateContext(hwndMain, 0);

                if (imm)
                {
                    ImmDestroyContext(imm);
                }
            }
        }
    }

    if (MMSTATE.UseIME)
    {
        gfxPipeline::EndGfx2D();
    }

    if (datArgParser::Exists("archive"))
    {
        zipAutoInit();
    }
    else
    {
        zipMultiAutoInit("*.ar");
    }

    InstallJPEGSupport();
    InstallTextureVariantHandler();

    do
    {
        MainPhase(parseStateArgs, firstLoad);

        firstLoad = 1;
    } while (!MMSTATE.Shutdown);

    NETMGR.Logout();

    gfxPipeline::EndGfx2D();

    if (ZoneStartup)
    {
        ShellExecuteA(0, "open", LANG_STRING(74u), 0, 0, 1);
    }

    return 0;
}

int ExceptMain()
{
    int result = -1;

    __try
    {
        result = Main();
    }
    __except (datStack::ExceptionFilter(GetExceptionInformation()))
    {
        Displayf("ExceptMain: Abnormal exit.");
    }

    datArgParser::Kill();

    return result;
}

void InitHooks()
{
    Displayf("Begin Hooking");

    Timer start;

    mem::init_function::init();

    hook::create_patch("sfPointer::Update", "Enables pointer in windowed mode", 0x4F136E, "\x90\x90", 2);

    Displayf("Hooks completed in %.3f Seconds", start.ElapsedSeconds());
}

int CALLBACK MidtownMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine,
    int       nCmdShow
)
{
    (void)hInstance, hPrevInstance, lpCmdLine, nCmdShow;

    datOutput::OpenLog("mm2.log");

    InitHooks();

    datArgParser::Init(ArgC, ArgV);

    int result = ExceptMain();

    Displayf("Good Bye.");

    datOutput::CloseLog();

    return result;
}

