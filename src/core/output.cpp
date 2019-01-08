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

#include "output.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <cstdarg>

#include "core/stream.h"

inline_var(0x6A3D44, void(*)(void), beforeMsgBoxCB);
inline_var(0x6A3D48, void(*)(void), afterMsgBoxCB);

HANDLE DebugLogConsole = INVALID_HANDLE_VALUE;

void datOutput::CallBeforeMsgBoxFunction(void)
{
    if (beforeMsgBoxCB)
    {
        beforeMsgBoxCB();
    }
}

void datOutput::CallAfterMsgBoxFunction(void)
{
    if (afterMsgBoxCB)
    {
        afterMsgBoxCB();
    }
}

bool datOutput::OpenLog(char const * fileName)
{
    if (!DebugLogFile)
    {
        DebugLogFile = Stream::Create(fileName);

        if (!DebugLogFile)
        {
            return 0;
        }

        if (!OnExitAdded)
        {
            OnExitAdded = 1;

            atexit(datOutput::CloseLog);
        }
    }

    if (DebugLogConsole == INVALID_HANDLE_VALUE)
    {
        AllocConsole();

        SetConsoleTitleA("OpenMM2");

        DebugLogConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    }

    return 1;
}

void datOutput::CloseLog(void)
{
    if (DebugLogFile)
    {
        DebugLogFile->Close();

        DebugLogFile = 0;
    }

    if (DebugLogConsole != INVALID_HANDLE_VALUE)
    {
        FreeConsole();

        DebugLogConsole = INVALID_HANDLE_VALUE;
    }
}

void gfxDebugf(int enabled, const char * format, ...)
{
    if (enabled)
    {
        va_list va;
        va_start(format, va);

        Printer(1, format, va);

        va_end(va);
    }
}

#define TEXTCOLOR_BLACK             0
#define TEXTCOLOR_BLUE              1
#define TEXTCOLOR_GREEN             2
#define TEXTCOLOR_CYAN              3
#define TEXTCOLOR_RED               4
#define TEXTCOLOR_MAGENTA           5
#define TEXTCOLOR_BROWN             6
#define TEXTCOLOR_LIGHTGRAY         7
#define TEXTCOLOR_DARKGRAY          8
#define TEXTCOLOR_LIGHTBLUE         9
#define TEXTCOLOR_LIGHTGREEN        10
#define TEXTCOLOR_LIGHTCYAN         11
#define TEXTCOLOR_LIGHTRED          12
#define TEXTCOLOR_LIGHTMAGENTA      13
#define TEXTCOLOR_YELLOW            14
#define TEXTCOLOR_WHITE             15

#define BACKCOLOR_BLACK             (0 << 4)
#define BACKCOLOR_BLUE              (1 << 4)
#define BACKCOLOR_GREEN             (2 << 4)
#define BACKCOLOR_CYAN              (3 << 4)
#define BACKCOLOR_RED               (4 << 4)
#define BACKCOLOR_MAGENTA           (5 << 4)
#define BACKCOLOR_BROWN             (6 << 4)
#define BACKCOLOR_LIGHTGRAY         (7 << 4)
#define BACKCOLOR_DARKGRAY          (8 << 4)
#define BACKCOLOR_LIGHTBLUE         (9 << 4)
#define BACKCOLOR_LIGHTGREEN        (10 << 4)
#define BACKCOLOR_LIGHTCYAN         (11 << 4)
#define BACKCOLOR_LIGHTRED          (12 << 4)
#define BACKCOLOR_LIGHTMAGENTA      (13 << 4)
#define BACKCOLOR_YELLOW            (14 << 4)
#define BACKCOLOR_WHITE             (15 << 4)

#define TEXTCOLOR_MASK              (0xF)
#define BACKCOLOR_MASK              (0xF << 4)
#define FULLCOLOR_MASK              (TEXTCOLOR_MASK | BACKCOLOR_MASK)

inline_var(0x6A3D3C, bool, b_popUpErrors);
inline_var(0x5CECE8, bool, b_popUpQuits);

inline_var(0x6A3D38, void(*)(const char *), gFatalMessageHandler);

short PrinterConsoleColors[6] = {
    TEXTCOLOR_WHITE,
    TEXTCOLOR_LIGHTGRAY,
    TEXTCOLOR_DARKGRAY,
    TEXTCOLOR_YELLOW,
    TEXTCOLOR_LIGHTRED,
    TEXTCOLOR_LIGHTRED,
};

const char* PrinterPrefixes[6] =
{
    "",
    "",
    "",
    "Warning: ",
    "Error: ",
    "Fatal Error: "
};

const char *PrinterSuffixes[6] =
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
    char formatBuffer[4096];
    char mainBuffer[4096];

    vsprintf_s(mainBuffer, format, args);

    if (b_popUpErrors && level == 4 || b_popUpQuits && level == 5)
    {
        datOutput::CallBeforeMsgBoxFunction();

        MessageBoxA(0, mainBuffer, PrinterPrefixes[level], 0x10u);

        if (level == 4)
        {
            datOutput::CallAfterMsgBoxFunction();
        }
    }
    OutputDebugStringA(PrinterPrefixes[level]);
    OutputDebugStringA(mainBuffer);

    if (level)
    {
        OutputDebugStringA("\n");
    }

    sprintf_s(formatBuffer, "%s%s%s", PrinterPrefixes[level], mainBuffer, PrinterSuffixes[level]);

    PrintString(formatBuffer);

    HANDLE debugConsole = DebugLogConsole;

    if (debugConsole != INVALID_HANDLE_VALUE)
    {
        SetConsoleTextAttribute(debugConsole, PrinterConsoleColors[level]);

        WriteConsoleA(debugConsole, formatBuffer, strlen(formatBuffer), nullptr, nullptr);

        SetConsoleTextAttribute(debugConsole, TEXTCOLOR_LIGHTGRAY);
    }

    Stream* logFile = datOutput::DebugLogFile;

    if (logFile)
    {
        fprintf(logFile, "%s%s%s", PrinterPrefixes[level], mainBuffer, PrinterSuffixes[level]);

        logFile->Flush();
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

inline_var(0x6A3D50, int(*)(void), JustBeforeQuit);

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

inline_var(0x6A3D1C, Stream*, debugLogStream);
inline_var(0x6A3D20, bool, debugLogAppend);

void DebugLogInit(bool append)
{
    DebugLogShutdown();

    debugLogAppend = append;

    if (!debugLogStream)
    {
        if (append)
        {
            debugLogAppend = append;
            debugLogStream = Stream::Open("debug.log", false);
        }
        else
        {
            debugLogAppend = 0;
            debugLogStream = Stream::Create("debug.log");
        }
    }
}

void DebugLogShutdown()
{
    if (debugLogStream)
    {
        debugLogStream->Close();

        debugLogStream = 0;
    }
}
