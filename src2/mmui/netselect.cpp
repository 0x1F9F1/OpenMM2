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

#include "netselect.h"

NetSelectMenu::NetSelectMenu(i32 arg1)
{
    unimplemented();
}

NetSelectMenu::~NetSelectMenu()
{
    unimplemented();
}

void NetSelectMenu::AddModem(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, NetSelectMenu*, char*, i32>>(0x504E10, this, arg1, arg2);
}

void NetSelectMenu::AddWidgetToList(i32 arg1, class uiWidget* arg2)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32, class uiWidget*>>(0x504E00, this, arg1, arg2);
}

void NetSelectMenu::BuildComs()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504BF0, this);
}

void NetSelectMenu::ClearProtocol()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504F20, this);
}

void NetSelectMenu::DisableSessions()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504AD0, this);
}

void NetSelectMenu::EnableSearchLabel(bool arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, bool>>(0x505040, this, arg1);
}

void NetSelectMenu::FocusDescription(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32, i32>>(0x504A00, this, arg1, arg2);
}

struct NETCOMMPACK* NetSelectMenu::GetCommPack()
{
    return stub<thiscall_t<struct NETCOMMPACK*, NetSelectMenu*>>(0x505000, this);
}

i32 NetSelectMenu::GetHostJoin()
{
    return stub<thiscall_t<i32, NetSelectMenu*>>(0x5049F0, this);
}

i32 NetSelectMenu::GetSessionID()
{
    return stub<thiscall_t<i32, NetSelectMenu*>>(0x504B90, this);
}

class UITextScroll* NetSelectMenu::GetSessions()
{
    return stub<thiscall_t<class UITextScroll*, NetSelectMenu*>>(0x504B80, this);
}

void NetSelectMenu::HostCB()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x5049D0, this);
}

void NetSelectMenu::IPAddressCallback()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504BD0, this);
}

void NetSelectMenu::JoinCB()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x5049E0, this);
}

void NetSelectMenu::JoinCallback()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504AB0, this);
}

void NetSelectMenu::NetNameCB()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x505010, this);
}

void NetSelectMenu::PostSetup()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x5049B0, this);
}

void NetSelectMenu::PreSetup()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504930, this);
}

void NetSelectMenu::ProtocolBack()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504AE0, this);
}

void NetSelectMenu::ReparentWidgets(i32 arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32>>(0x504DE0, this, arg1);
}

void NetSelectMenu::SetComs()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504CE0, this);
}

void NetSelectMenu::SetDescription(struct LocString* arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, struct LocString*>>(0x504AA0, this, arg1);
}

void NetSelectMenu::SetIPAddress(char* arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, char*>>(0x504B60, this, arg1);
}

void NetSelectMenu::SetIPXButton(i32 arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32>>(0x504F30, this, arg1);
}

void NetSelectMenu::SetModemButton(i32 arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32>>(0x504FA0, this, arg1);
}

void NetSelectMenu::SetNetname(char* arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, char*>>(0x504B00, this, arg1);
}

void NetSelectMenu::SetPhoneNumber(char* arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, char*>>(0x504B40, this, arg1);
}

void NetSelectMenu::SetSerialButton(i32 arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32>>(0x504FD0, this, arg1);
}

void NetSelectMenu::SetSession(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, NetSelectMenu*, char*, i32>>(0x504BA0, this, arg1, arg2);
}

void NetSelectMenu::SetTCPLocalButton(i32 arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32>>(0x504F60, this, arg1);
}

void NetSelectMenu::SetTCPNetButton(i32 arg1)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32>>(0x504F70, this, arg1);
}

void NetSelectMenu::ShowTCPIPNetSessions()
{
    return stub<thiscall_t<void, NetSelectMenu*>>(0x504AC0, this);
}

void NetSelectMenu::WidgetSwitch(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, NetSelectMenu*, i32, i32>>(0x504DF0, this, arg1, arg2);
}

define_dummy_symbol(mmui_netselect);
