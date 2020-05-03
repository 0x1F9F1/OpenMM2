/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#pragma once

/*
    core:output

    0x4C94D0 | void __cdecl DisablePopUpErrors(void) | ?DisablePopUpErrors@@YAXXZ
    0x4C94E0 | void __cdecl DisablePopUpQuits(void) | ?DisablePopUpQuits@@YAXXZ
    0x4C94F0 | void __cdecl EnablePopUpErrors(void) | ?EnablePopUpErrors@@YAXXZ
    0x4C9500 | void __cdecl EnablePopUpQuits(void) | ?EnablePopUpQuits@@YAXXZ
    0x4C9530 | public: static void __cdecl datOutput::CloseLog(void) | ?CloseLog@datOutput@@SAXXZ
    0x4C9550 | public: static void __cdecl datOutput::SetBeforeMsgBoxFunction(void (__cdecl*)(void)) | ?SetBeforeMsgBoxFunction@datOutput@@SAXP6AXXZ@Z
    0x4C9560 | public: static void __cdecl datOutput::SetAfterMsgBoxFunction(void (__cdecl*)(void)) | ?SetAfterMsgBoxFunction@datOutput@@SAXP6AXXZ@Z
    0x4C9570 | public: static void __cdecl datOutput::CallBeforeMsgBoxFunction(void) | ?CallBeforeMsgBoxFunction@datOutput@@SAXXZ
    0x4C9580 | public: static void __cdecl datOutput::CallAfterMsgBoxFunction(void) | ?CallAfterMsgBoxFunction@datOutput@@SAXXZ
    0x4C9590 | public: static void __cdecl datOutput::SetOutputMask(unsigned int) | ?SetOutputMask@datOutput@@SAXI@Z
    0x4C95A0 | public: static bool __cdecl datOutput::OpenLog(char const *) | ?OpenLog@datOutput@@SA_NPBD@Z
    0x4C9720 | void __cdecl Printf(char const *,...) | ?Printf@@YAXPBDZZ
    0x4C9750 | void __cdecl Messagef(char const *,...) | ?Messagef@@YAXPBDZZ
    0x4C9780 | void __cdecl Displayf(char const *,...) | ?Displayf@@YAXPBDZZ
    void __cdecl Debugf1(int,char const *,...) | ?Debugf1@@YAXHPBDZZ
    void __cdecl Debugf2(int,char const *,...) | ?Debugf2@@YAXHPBDZZ
    void __cdecl Debugf3(int,char const *,...) | ?Debugf3@@YAXHPBDZZ
    0x4C97B0 | void __cdecl Warningf(char const *,...) | ?Warningf@@YAXPBDZZ
    0x4C97E0 | void __cdecl Errorf(char const *,...) | ?Errorf@@YAXPBDZZ
    0x4C9810 | void __cdecl Quitf(char const *,...) | ?Quitf@@YAXPBDZZ
    0x4C9850 | void __cdecl Abortf(char const *,...) | ?Abortf@@YAXPBDZZ
    void __cdecl AssertErrorf(int,char const *,char const *,int,char *,...) | ?AssertErrorf@@YAXHPBD0HPADZZ
    void __cdecl AssertWarningf(int,char const *,char const *,int,char *,...) | ?AssertWarningf@@YAXHPBD0HPADZZ
    void __cdecl AssertQuitf(int,char const *,char const *,int,char *,...) | ?AssertQuitf@@YAXHPBD0HPADZZ
    0x5CECF0 | void (__cdecl* PrintString)(char const *) | ?PrintString@@3P6AXPBD@ZA
    0x6A3D38 | void (__cdecl* gFatalMessageHandler)(char const *) | ?gFatalMessageHandler@@3P6AXPBD@ZA
    0x6A3D4C | private: static bool datOutput::OutputSent | ?OutputSent@datOutput@@0_NA
    0x6A3D50 | void (__cdecl* ageExternalDebugHandler)(void) | ?ageExternalDebugHandler@@3P6AXXZA
*/

// 0x4C9850 | ?Abortf@@YAXPBDZZ
void Abortf(char const* arg1, ...);

// 0x4C94D0 | ?DisablePopUpErrors@@YAXXZ
void DisablePopUpErrors();

// 0x4C94E0 | ?DisablePopUpQuits@@YAXXZ
void DisablePopUpQuits();

// 0x4C9780 | ?Displayf@@YAXPBDZZ
void Displayf(char const* arg1, ...);

// 0x4C94F0 | ?EnablePopUpErrors@@YAXXZ
void EnablePopUpErrors();

// 0x4C9500 | ?EnablePopUpQuits@@YAXXZ
void EnablePopUpQuits();

// 0x4C97E0 | ?Errorf@@YAXPBDZZ
void Errorf(char const* arg1, ...);

// 0x4C9750 | ?Messagef@@YAXPBDZZ
void Messagef(char const* arg1, ...);

// 0x4C9720 | ?Printf@@YAXPBDZZ
void Printf(char const* arg1, ...);

// 0x4C9810 | ?Quitf@@YAXPBDZZ
void Quitf(char const* arg1, ...);

// 0x4C97B0 | ?Warningf@@YAXPBDZZ
void Warningf(char const* arg1, ...);

// 0x5CECF0 | ?PrintString@@3P6AXPBD@ZA
inline extern_var(0x5CECF0, void (*)(char const*), PrintString);

// 0x6A3D50 | ?ageExternalDebugHandler@@3P6AXXZA
inline extern_var(0x6A3D50, void (*)(void), ageExternalDebugHandler);

// 0x6A3D38 | ?gFatalMessageHandler@@3P6AXPBD@ZA
inline extern_var(0x6A3D38, void (*)(char const*), gFatalMessageHandler);

struct datOutput
{
public:
    // 0x4C9580 | ?CallAfterMsgBoxFunction@datOutput@@SAXXZ
    static void CallAfterMsgBoxFunction();

    // 0x4C9570 | ?CallBeforeMsgBoxFunction@datOutput@@SAXXZ
    static void CallBeforeMsgBoxFunction();

    // 0x4C9530 | ?CloseLog@datOutput@@SAXXZ
    static void CloseLog();

    // 0x4C95A0 | ?OpenLog@datOutput@@SA_NPBD@Z
    static bool OpenLog(char const* arg1);

    // 0x4C9560 | ?SetAfterMsgBoxFunction@datOutput@@SAXP6AXXZ@Z
    static void SetAfterMsgBoxFunction(void (*arg1)(void));

    // 0x4C9550 | ?SetBeforeMsgBoxFunction@datOutput@@SAXP6AXXZ@Z
    static void SetBeforeMsgBoxFunction(void (*arg1)(void));

    // 0x4C9590 | ?SetOutputMask@datOutput@@SAXI@Z
    static void SetOutputMask(u32 arg1);

private:
    // 0x6A3D4C | ?OutputSent@datOutput@@0_NA
    static inline extern_var(0x6A3D4C, bool, OutputSent);
};
