#include "stdafx.h"
#include "datOutput.h"

#include "Stream.h"

instvar(0x6A3D44, void(*)(void), beforeMsgBoxCB);
instvar(0x6A3D48, void(*)(void), afterMsgBoxCB);

defnvar(0x6A3D4C, datOutput::OutputSent);
defnvar(0x6A3D4D, datOutput::OnExitAdded);
defnvar(0x6A3D40, datOutput::DebugLogFile);

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

    return 1;
}

void datOutput::CloseLog(void)
{
    if (DebugLogFile)
    {
        DebugLogFile->Close();

        DebugLogFile = 0;
    }
}
