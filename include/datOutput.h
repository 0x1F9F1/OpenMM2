#pragma once

class Stream;

class datOutput
{
public:
    static void CallBeforeMsgBoxFunction(void);
    static void CallAfterMsgBoxFunction(void);

    static bool OpenLog(char const * fileName);
    static void CloseLog(void);

    decl_static(bool, OutputSent);
    decl_static(bool, OnExitAdded);
    decl_static(Stream*, DebugLogFile);

    static HANDLE DebugLogConsole;
};
