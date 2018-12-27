#pragma once

class Stream;

class datOutput
{
public:
    static void CallBeforeMsgBoxFunction(void);
    static void CallAfterMsgBoxFunction(void);

    static bool OpenLog(char const * fileName);
    static void CloseLog(void);

    inline_var(0x6A3D4C, bool, OutputSent);
    inline_var(0x6A3D4D, bool, OnExitAdded);
    inline_var(0x6A3D40, Stream*, DebugLogFile);

    static HANDLE DebugLogConsole;
};