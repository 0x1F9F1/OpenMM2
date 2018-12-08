#pragma once

class Stream;

class datOutput
{
public:
    static void CallBeforeMsgBoxFunction(void);
    static void CallAfterMsgBoxFunction(void);

    static bool OpenLog(char const * fileName);
    static void CloseLog(void);

    declstatic(bool, OutputSent);
    declstatic(bool, OnExitAdded);
    declstatic(Stream*, DebugLogFile);

    static HANDLE DebugLogConsole;
};
