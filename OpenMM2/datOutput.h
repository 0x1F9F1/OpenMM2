#pragma once

class datOutput
{
public:
    static void CallBeforeMsgBoxFunction(void);
    static void CallAfterMsgBoxFunction(void);

    declstatic(bool, OutputSent);
};
