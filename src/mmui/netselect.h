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

#pragma once

/*
    mmui:netselect

    0x504130 | public: __thiscall NetSelectMenu::NetSelectMenu(int) | ??0NetSelectMenu@@QAE@H@Z
    0x5048B0 | public: virtual __thiscall NetSelectMenu::~NetSelectMenu(void) | ??1NetSelectMenu@@UAE@XZ
    0x504930 | public: virtual void __thiscall NetSelectMenu::PreSetup(void) | ?PreSetup@NetSelectMenu@@UAEXXZ
    0x5049B0 | public: virtual void __thiscall NetSelectMenu::PostSetup(void) | ?PostSetup@NetSelectMenu@@UAEXXZ
    0x5049D0 | public: void __thiscall NetSelectMenu::HostCB(void) | ?HostCB@NetSelectMenu@@QAEXXZ
    0x5049E0 | public: void __thiscall NetSelectMenu::JoinCB(void) | ?JoinCB@NetSelectMenu@@QAEXXZ
    0x5049F0 | public: int __thiscall NetSelectMenu::GetHostJoin(void) | ?GetHostJoin@NetSelectMenu@@QAEHXZ
    0x504A00 | public: void __thiscall NetSelectMenu::FocusDescription(int,int) | ?FocusDescription@NetSelectMenu@@QAEXHH@Z
    0x504AA0 | public: void __thiscall NetSelectMenu::SetDescription(struct LocString *) | ?SetDescription@NetSelectMenu@@QAEXPAULocString@@@Z
    0x504AB0 | public: void __thiscall NetSelectMenu::JoinCallback(void) | ?JoinCallback@NetSelectMenu@@QAEXXZ
    0x504AC0 | public: void __thiscall NetSelectMenu::ShowTCPIPNetSessions(void) | ?ShowTCPIPNetSessions@NetSelectMenu@@QAEXXZ
    0x504AD0 | public: void __thiscall NetSelectMenu::DisableSessions(void) | ?DisableSessions@NetSelectMenu@@QAEXXZ
    0x504AE0 | public: void __thiscall NetSelectMenu::ProtocolBack(void) | ?ProtocolBack@NetSelectMenu@@QAEXXZ
    0x504B00 | public: void __thiscall NetSelectMenu::SetNetname(char *) | ?SetNetname@NetSelectMenu@@QAEXPAD@Z
    0x504B40 | public: void __thiscall NetSelectMenu::SetPhoneNumber(char *) | ?SetPhoneNumber@NetSelectMenu@@QAEXPAD@Z
    0x504B60 | public: void __thiscall NetSelectMenu::SetIPAddress(char *) | ?SetIPAddress@NetSelectMenu@@QAEXPAD@Z
    0x504B80 | public: class UITextScroll * __thiscall NetSelectMenu::GetSessions(void) | ?GetSessions@NetSelectMenu@@QAEPAVUITextScroll@@XZ
    0x504B90 | public: int __thiscall NetSelectMenu::GetSessionID(void) | ?GetSessionID@NetSelectMenu@@QAEHXZ
    0x504BA0 | public: void __thiscall NetSelectMenu::SetSession(char *,int) | ?SetSession@NetSelectMenu@@QAEXPADH@Z
    0x504BD0 | public: void __thiscall NetSelectMenu::IPAddressCallback(void) | ?IPAddressCallback@NetSelectMenu@@QAEXXZ
    0x504BF0 | public: void __thiscall NetSelectMenu::BuildComs(void) | ?BuildComs@NetSelectMenu@@QAEXXZ
    0x504CE0 | public: void __thiscall NetSelectMenu::SetComs(void) | ?SetComs@NetSelectMenu@@QAEXXZ
    0x504DE0 | public: void __thiscall NetSelectMenu::ReparentWidgets(int) | ?ReparentWidgets@NetSelectMenu@@QAEXH@Z
    0x504DF0 | public: void __thiscall NetSelectMenu::WidgetSwitch(int,int) | ?WidgetSwitch@NetSelectMenu@@QAEXHH@Z
    0x504E00 | public: void __thiscall NetSelectMenu::AddWidgetToList(int,class uiWidget *) | ?AddWidgetToList@NetSelectMenu@@QAEXHPAVuiWidget@@@Z
    0x504E10 | public: void __thiscall NetSelectMenu::AddModem(char *,int) | ?AddModem@NetSelectMenu@@QAEXPADH@Z
    0x504F20 | public: void __thiscall NetSelectMenu::ClearProtocol(void) | ?ClearProtocol@NetSelectMenu@@QAEXXZ
    0x504F30 | public: void __thiscall NetSelectMenu::SetIPXButton(int) | ?SetIPXButton@NetSelectMenu@@QAEXH@Z
    0x504F60 | public: void __thiscall NetSelectMenu::SetTCPLocalButton(int) | ?SetTCPLocalButton@NetSelectMenu@@QAEXH@Z
    0x504F70 | public: void __thiscall NetSelectMenu::SetTCPNetButton(int) | ?SetTCPNetButton@NetSelectMenu@@QAEXH@Z
    0x504FA0 | public: void __thiscall NetSelectMenu::SetModemButton(int) | ?SetModemButton@NetSelectMenu@@QAEXH@Z
    0x504FD0 | public: void __thiscall NetSelectMenu::SetSerialButton(int) | ?SetSerialButton@NetSelectMenu@@QAEXH@Z
    0x505000 | public: struct NETCOMMPACK * __thiscall NetSelectMenu::GetCommPack(void) | ?GetCommPack@NetSelectMenu@@QAEPAUNETCOMMPACK@@XZ
    0x505010 | public: void __thiscall NetSelectMenu::NetNameCB(void) | ?NetNameCB@NetSelectMenu@@QAEXXZ
    0x505040 | public: void __thiscall NetSelectMenu::EnableSearchLabel(bool) | ?EnableSearchLabel@NetSelectMenu@@QAEX_N@Z
    0x505070 | public: __thiscall string::string(char const *) | ??0string@@QAE@PBD@Z
    0x5050E0 | public: virtual void * __thiscall NetSelectMenu::`scalar deleting destructor'(unsigned int) | ??_GNetSelectMenu@@UAEPAXI@Z
    public: virtual void * __thiscall NetSelectMenu::`vector deleting destructor'(unsigned int) | ??_ENetSelectMenu@@UAEPAXI@Z
    0x5B445C | const NetSelectMenu::`vftable' | ??_7NetSelectMenu@@6B@
*/

#include "hooking.h"
