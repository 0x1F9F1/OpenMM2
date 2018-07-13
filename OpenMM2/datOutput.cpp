#include "stdafx.h"
#include "datOutput.h"

instvar(0x6A3D44, void(*)(void), beforeMsgBoxCB);
instvar(0x6A3D48, void(*)(void), afterMsgBoxCB);

defnvar(0x6A3D4C, datOutput::OutputSent);

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
