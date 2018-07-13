#include "stdafx.h"
#include "Logging.h"

#include "datOutput.h"
#include "Stream.h"

defnvar(0x5CECEC, PrinterFlags);
defnvar(0x5CED24, Printer);
defnvar(0x5CECF0, PrintString);

instvar(0x6A3D3C, bool, b_popUpErrors);
instvar(0x5CECE8, bool, b_popUpQuits);

instvar(0x6A3D40, Stream*, debugFile);

instvar(0x6A3D38, void(*)(const char *), gFatalMessageHandler);

const char* outputTypeStrings[6] =
{
    "",
    "",
    "",
    "Warning: ",
    "Error: ",
    "Fatal Error: "
};

const char *outputTypeLineEndings[6] =
{
    "",
    "\n",
    "\n",
    "\n",
    "\n",
    "\n"
};


void CustomPrinter(int level, const char *format, va_list args)
{
    char formatBuffer[4096]; // [sp+4h] [bp-2000h]@9
    char mainBuffer[4096]; // [sp+1004h] [bp-1000h]@1

    vsprintf_s(mainBuffer, format, args);

    if (b_popUpErrors && level == 4 || b_popUpQuits && level == 5)
    {
        datOutput::CallBeforeMsgBoxFunction();

        MessageBoxA(0, mainBuffer, outputTypeStrings[level], 0x10u);

        if (level == 4)
        {
            datOutput::CallAfterMsgBoxFunction();
        }
    }
    OutputDebugStringA(outputTypeStrings[level]);
    OutputDebugStringA(mainBuffer);

    if (level)
    {
        OutputDebugStringA("\n");
    }

    sprintf_s(formatBuffer, "%s%s%s", outputTypeStrings[level], mainBuffer, outputTypeLineEndings[level]);

    PrintString(formatBuffer);

    if (debugFile)
    {
        fprintf(debugFile, "%s%s%s", outputTypeStrings[level], mainBuffer, outputTypeLineEndings[level]);

        debugFile->Flush();
    }

    if (level == 5)
    {
        if (gFatalMessageHandler)
        {
            gFatalMessageHandler(mainBuffer);
        }
    }

    datOutput::OutputSent = 1;
}

void CustomPrintString(const char* string)
{
    printf_s("%s", string);
}

void Printf(const char* format, ...)
{
    if (PrinterFlags & 2)
    {
        va_list va;
        va_start(va, format);

        Printer(0, format, va);

        va_end(va);
    }
}

void Messagef(const char* format, ...)
{
    if (PrinterFlags & 2)
    {
        va_list va;
        va_start(va, format);

        Printer(1, format, va);

        va_end(va);
    }
}

void Displayf(const char* format, ...)
{
    if (PrinterFlags & 2)
    {
        va_list va;
        va_start(va, format);

        Printer(2, format, va);

        va_end(va);
    }
}

void Warningf(const char* format, ...)
{
    if (PrinterFlags & 4)
    {
        va_list va;
        va_start(va, format);

        Printer(3, format, va);

        va_end(va);
    }
}

void Errorf(const char* format, ...)
{
    if (PrinterFlags & 8)
    {
        va_list va;
        va_start(va, format);

        Printer(4, format, va);

        va_end(va);
    }
}

instvar(0x6A3D50, int(*)(void), JustBeforeQuit);

void Quitf(const char* format, ...)
{
    if (!format)
    {
        exit(0);
    }

    va_list va;
    va_start(va, format);
    Printer(5, format, va);
    va_end(va);

    if (JustBeforeQuit)
    {
        JustBeforeQuit();
    }

    DebugBreak();
    exit(1);
}

void Abortf(const char* format, ...)
{
    if (!format)
    {
        exit(0);
    }

    va_list va;
    va_start(va, format);
    Printer(5, format, va);
    va_end(va);

    if (JustBeforeQuit)
    {
        JustBeforeQuit();
    }
    DebugBreak();

    *static_cast<volatile bool*>(nullptr) = false;
}

void ageDebug(int enabled, char const * format, ...)
{
    if (enabled || true)
    {
        va_list va;
        va_start(va, format);
        Printer(1, format, va);
        va_end(va);
    }
}