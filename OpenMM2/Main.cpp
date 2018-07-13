#include "stdafx.h"
#include "Main.h"

#include "memMemoryAllocator.h"
#include "datArgParser.h"
#include "datStack.h"

#include <ctime>

defnvar(0x6B17C8, gameState);

instvar(0x6B48A0, int, ArgC);
instvar(0x6B48A4, char**, ArgV);

int Main(void)
{
    try
    {
        return stub<cdecl_t<int>>(0x4011E0);
    }
    catch (...)
    {
        Displayf("Main: Unknown Exception.");
    }

    return -1;
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
    Displayf("Initialization Begin");

    std::clock_t begin = std::clock();

    mem::init_function::init();

    hook::create_patch("sfPointer::Update", "Enables pointer in windowed mode", 0x4F136E, "\x90\x90", 2);

    Displayf("Initialize Completed in %.2f Seconds", double(std::clock() - begin) / CLOCKS_PER_SEC);
}

std::aligned_storage_t<0x4000, 0x8> ShadowMem;

int CALLBACK WinMain(
    _In_ HINSTANCE hInstance,
    _In_ HINSTANCE hPrevInstance,
    _In_ LPSTR     lpCmdLine,
    _In_ int       nCmdShow
)
{
    (void)(hInstance, hPrevInstance, lpCmdLine, nCmdShow);

    InitHooks();

    memMemoryAllocator allocator;

    allocator.Init(&ShadowMem, sizeof(ShadowMem), 1, 0);

    memMemoryAllocator::Current = &allocator;

    datArgParser::Init(ArgC, ArgV);

    return ExceptMain();
}

