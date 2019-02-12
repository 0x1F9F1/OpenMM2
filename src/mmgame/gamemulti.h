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
    mmgame:gamemulti

    unsigned long __cdecl SendPositionUpdates(void *) | ?SendPositionUpdates@@YAKPAX@Z
    0x438CC0 | public: __thiscall mmGameMulti::mmGameMulti(void) | ??0mmGameMulti@@QAE@XZ
    0x438E60 | public: virtual __thiscall mmGameMulti::~mmGameMulti(void) | ??1mmGameMulti@@UAE@XZ
    0x438F40 | public: virtual int __thiscall mmGameMulti::Init(void) | ?Init@mmGameMulti@@UAEHXZ
    0x439130 | public: virtual void __thiscall mmGameMulti::HitWaterHandler(void) | ?HitWaterHandler@mmGameMulti@@UAEXXZ
    0x439230 | public: virtual void __thiscall mmGameMulti::DropThruCityHandler(void) | ?DropThruCityHandler@mmGameMulti@@UAEXXZ
    0x439240 | public: virtual void __thiscall mmGameMulti::InitGameStrings(void) | ?InitGameStrings@mmGameMulti@@UAEXXZ
    0x439470 | public: void __thiscall mmGameMulti::SetFinishCam(void) | ?SetFinishCam@mmGameMulti@@QAEXXZ
    0x4394E0 | protected: void __thiscall mmGameMulti::StartXYZ(int,class Vector3 &,class Vector3 &,float,float) | ?StartXYZ@mmGameMulti@@IAEXHAAVVector3@@0MM@Z
    0x439710 | public: void __thiscall mmGameMulti::SystemMessageCB(void *,void *) | ?SystemMessageCB@mmGameMulti@@QAEXPAX0@Z
    0x439AF0 | public: void __thiscall mmGameMulti::GameMessageCB(void *,void *) | ?GameMessageCB@mmGameMulti@@QAEXPAX0@Z
    0x43A3B0 | public: void __thiscall mmGameMulti::BootStrapCars(void) | ?BootStrapCars@mmGameMulti@@QAEXXZ
    0x43A4D0 | public: virtual void __thiscall mmGameMulti::BeDone(int) | ?BeDone@mmGameMulti@@UAEXH@Z
    0x43A5D0 | public: virtual void __thiscall mmGameMulti::Reset(void) | ?Reset@mmGameMulti@@UAEXXZ
    0x43A6E0 | public: void __thiscall mmGameMulti::ClearNetObjects(void) | ?ClearNetObjects@mmGameMulti@@QAEXXZ
    0x43A720 | public: virtual void __thiscall mmGameMulti::InitOtherPlayers(void) | ?InitOtherPlayers@mmGameMulti@@UAEXXZ
    0x43A750 | public: virtual void __thiscall mmGameMulti::InitRoster(void) | ?InitRoster@mmGameMulti@@UAEXXZ
    0x43A7F0 | public: void __thiscall mmGameMulti::SendPosition(void) | ?SendPosition@mmGameMulti@@QAEXXZ
    0x43A900 | public: virtual void __thiscall mmGameMulti::Update(void) | ?Update@mmGameMulti@@UAEXXZ
    0x43A980 | public: virtual void __thiscall mmGameMulti::UpdateGame(void) | ?UpdateGame@mmGameMulti@@UAEXXZ
    0x43A9B0 | public: void __thiscall mmGameMulti::UpdateScore(void) | ?UpdateScore@mmGameMulti@@QAEXXZ
    0x43ADA0 | public: void __thiscall mmGameMulti::ClearRank(void) | ?ClearRank@mmGameMulti@@QAEXXZ
    0x43ADC0 | public: virtual void __thiscall mmGameMulti::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmGameMulti@@UAEXH@Z
    0x43ADD0 | public: void __thiscall mmGameMulti::RegisterMapNetObjects(int) | ?RegisterMapNetObjects@mmGameMulti@@QAEXH@Z
    0x43AEF0 | public: void __thiscall mmGameMulti::DeactivateMapNetObject(int) | ?DeactivateMapNetObject@mmGameMulti@@QAEXH@Z
    0x43AF20 | public: void __thiscall mmGameMulti::ActivateMapNetObject(int) | ?ActivateMapNetObject@mmGameMulti@@QAEXH@Z
    0x43AF60 | public: class mmNetObject * __thiscall mmGameMulti::GetInactiveNetObject(void) | ?GetInactiveNetObject@mmGameMulti@@QAEPAVmmNetObject@@XZ
    0x43AF90 | public: int __thiscall mmGameMulti::GetInactiveNetObjectIndex(void) | ?GetInactiveNetObjectIndex@mmGameMulti@@QAEHXZ
    0x43AFB0 | public: class mmNetObject * __thiscall mmGameMulti::GetNetObject(unsigned long,int) | ?GetNetObject@mmGameMulti@@QAEPAVmmNetObject@@KH@Z
    0x43AFF0 | public: int __thiscall mmGameMulti::GetNetObjectIndex(unsigned long,int) | ?GetNetObjectIndex@mmGameMulti@@QAEHKH@Z
    0x43B040 | protected: void __thiscall mmGameMulti::EnableRacers(void) | ?EnableRacers@mmGameMulti@@IAEXXZ
    0x43B0E0 | protected: void __thiscall mmGameMulti::DisableRacers(void) | ?DisableRacers@mmGameMulti@@IAEXXZ
    0x43B140 | public: void __thiscall mmGameMulti::QuitNetwork(void) | ?QuitNetwork@mmGameMulti@@QAEXXZ
    0x43B170 | public: void __thiscall mmGameMulti::PlayerFinishedLoading(void) | ?PlayerFinishedLoading@mmGameMulti@@QAEXXZ
    0x43B1D0 | public: void __thiscall mmGameMulti::PlayerClearLoaded(void) | ?PlayerClearLoaded@mmGameMulti@@QAEXXZ
    0x43B220 | public: int __thiscall mmGameMulti::ParseChatMessage(char *,int) | ?ParseChatMessage@mmGameMulti@@QAEHPADH@Z
    0x43B310 | protected: bool __thiscall mmGameMulti::SortResults(unsigned long,float,int) | ?SortResults@mmGameMulti@@IAE_NKMH@Z
    0x43B390 | protected: void __thiscall mmGameMulti::UpdateResults(int) | ?UpdateResults@mmGameMulti@@IAEXH@Z
    0x43B4C0 | public: void __thiscall mmGameMulti::BroadCastCarTuning(int) | ?BroadCastCarTuning@mmGameMulti@@QAEXH@Z
    0x43B530 | public: virtual void __thiscall mmGameMulti::SendChatMessage(char *) | ?SendChatMessage@mmGameMulti@@UAEXPAD@Z
    0x43B5A0 | public: void __thiscall mmGameMulti::SendToChatMessage(char *,unsigned long) | ?SendToChatMessage@mmGameMulti@@QAEXPADK@Z
    0x43B610 | public: void __thiscall mmGameMulti::SendTimeMsg(unsigned long) | ?SendTimeMsg@mmGameMulti@@QAEXK@Z
    0x43B630 | public: void __thiscall mmGameMulti::SendCarTuning(char const *,unsigned long) | ?SendCarTuning@mmGameMulti@@QAEXPBDK@Z
    0x43B640 | public: void __thiscall mmGameMulti::SendHostCars(unsigned long) | ?SendHostCars@mmGameMulti@@QAEXK@Z
    0x43B6C0 | public: void __thiscall mmGameMulti::FinishMessage(int) | ?FinishMessage@mmGameMulti@@QAEXH@Z
    0x43B780 | public: void __thiscall mmGameMulti::BootPlayerCB(void *,void *) | ?BootPlayerCB@mmGameMulti@@QAEXPAX0@Z
    0x43B7C0 | public: void __thiscall mmGameMulti::UpdateNetWorkAudio(void) | ?UpdateNetWorkAudio@mmGameMulti@@QAEXXZ
    0x43B7D0 | public: void __thiscall mmGameMulti::SendLobbyResults(int,unsigned int,float) | ?SendLobbyResults@mmGameMulti@@QAEXHIM@Z
    0x43B870 | protected: unsigned long __thiscall mmGameMulti::GetCarCRC(char *) | ?GetCarCRC@mmGameMulti@@IAEKPAD@Z
    0x43B8B0 | public: void __thiscall mmGameMulti::SendMsg(int) | ?SendMsg@mmGameMulti@@QAEXH@Z
    0x43B8D0 | public: void __thiscall mmGameMulti::SendBootMsg(unsigned long) | ?SendBootMsg@mmGameMulti@@QAEXK@Z
    0x43B8F0 | protected: void __thiscall mmGameMulti::SendFinishAck(unsigned long,float,int) | ?SendFinishAck@mmGameMulti@@IAEXKMH@Z
    0x43B930 | protected: void __thiscall mmGameMulti::SendFinishReq(float,int) | ?SendFinishReq@mmGameMulti@@IAEXMH@Z
    0x43B970 | protected: void __thiscall mmGameMulti::SendRaceReady(void) | ?SendRaceReady@mmGameMulti@@IAEXXZ
    0x43B9B0 | protected: void __thiscall mmGameMulti::SendGameSet(void) | ?SendGameSet@mmGameMulti@@IAEXXZ
    0x43B9E0 | protected: void __thiscall mmGameMulti::SendCheater(unsigned long) | ?SendCheater@mmGameMulti@@IAEXK@Z
    public: void __thiscall mmGameMulti::AddWidgets(class bkBank *) | ?AddWidgets@mmGameMulti@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall mmGameMulti::`vector deleting destructor'(unsigned int) | ??_EmmGameMulti@@UAEPAXI@Z
    0x43BB80 | public: virtual void * __thiscall mmGameMulti::`scalar deleting destructor'(unsigned int) | ??_GmmGameMulti@@UAEPAXI@Z
    0x43BBB0 | public: void __thiscall Vector3::Dot(class Vector3 const &,class Matrix34 const &) | ?Dot@Vector3@@QAEXABV1@ABVMatrix34@@@Z
    0x5B10A8 | const mmGameMulti::`vftable' | ??_7mmGameMulti@@6B@
    void * hSendThread | ?hSendThread@@3PAXA
    unsigned long dwSendThreadId | ?dwSendThreadId@@3KA
    bool timerdebug | ?timerdebug@@3_NA
    int stoopid | ?stoopid@@3HA
*/

// #include "hooking.h"
