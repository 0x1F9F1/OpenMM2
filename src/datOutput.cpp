#include "stdafx.h"
#include "datOutput.h"

#include "Stream.h"

static_var(0x6A3D44, void(*)(void), beforeMsgBoxCB);
static_var(0x6A3D48, void(*)(void), afterMsgBoxCB);

HANDLE datOutput::DebugLogConsole = INVALID_HANDLE_VALUE;

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
