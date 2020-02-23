/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

struct mmGameMulti : mmGame
{
public:
    // mmGameMulti::`vftable' @ 0x5B10A8

    // 0x438CC0 | ??0mmGameMulti@@QAE@XZ
    inline mmGameMulti()
    {
        stub<member_func_t<void, mmGameMulti>>(0x438CC0, this);
    }

    // 0x439470 | ?SetFinishCam@mmGameMulti@@QAEXXZ
    inline void SetFinishCam()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x439470, this);
    }

    // 0x4394E0 | ?StartXYZ@mmGameMulti@@IAEXHAAVVector3@@0MM@Z
    inline void StartXYZ(i32 arg1, class Vector3& arg2, class Vector3& arg3, f32 arg4, f32 arg5)
    {
        return stub<member_func_t<void, mmGameMulti, i32, class Vector3&, class Vector3&, f32, f32>>(
            0x4394E0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x439710 | ?SystemMessageCB@mmGameMulti@@QAEXPAX0@Z
    inline void SystemMessageCB(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmGameMulti, void*, void*>>(0x439710, this, arg1, arg2);
    }

    // 0x439AF0 | ?GameMessageCB@mmGameMulti@@QAEXPAX0@Z
    inline void GameMessageCB(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmGameMulti, void*, void*>>(0x439AF0, this, arg1, arg2);
    }

    // 0x43A3B0 | ?BootStrapCars@mmGameMulti@@QAEXXZ
    inline void BootStrapCars()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A3B0, this);
    }

    // 0x43A6E0 | ?ClearNetObjects@mmGameMulti@@QAEXXZ
    inline void ClearNetObjects()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A6E0, this);
    }

    // 0x43A7F0 | ?SendPosition@mmGameMulti@@QAEXXZ
    inline void SendPosition()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A7F0, this);
    }

    // 0x43A9B0 | ?UpdateScore@mmGameMulti@@QAEXXZ
    inline void UpdateScore()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A9B0, this);
    }

    // 0x43ADA0 | ?ClearRank@mmGameMulti@@QAEXXZ
    inline void ClearRank()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43ADA0, this);
    }

    // 0x43ADD0 | ?RegisterMapNetObjects@mmGameMulti@@QAEXH@Z
    inline void RegisterMapNetObjects(i32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43ADD0, this, arg1);
    }

    // 0x43AEF0 | ?DeactivateMapNetObject@mmGameMulti@@QAEXH@Z
    inline void DeactivateMapNetObject(i32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43AEF0, this, arg1);
    }

    // 0x43AF20 | ?ActivateMapNetObject@mmGameMulti@@QAEXH@Z
    inline void ActivateMapNetObject(i32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43AF20, this, arg1);
    }

    // 0x43AF60 | ?GetInactiveNetObject@mmGameMulti@@QAEPAVmmNetObject@@XZ
    inline class mmNetObject* GetInactiveNetObject()
    {
        return stub<member_func_t<class mmNetObject*, mmGameMulti>>(0x43AF60, this);
    }

    // 0x43AF90 | ?GetInactiveNetObjectIndex@mmGameMulti@@QAEHXZ
    inline i32 GetInactiveNetObjectIndex()
    {
        return stub<member_func_t<i32, mmGameMulti>>(0x43AF90, this);
    }

    // 0x43AFB0 | ?GetNetObject@mmGameMulti@@QAEPAVmmNetObject@@KH@Z
    inline class mmNetObject* GetNetObject(u32 arg1, i32 arg2)
    {
        return stub<member_func_t<class mmNetObject*, mmGameMulti, u32, i32>>(0x43AFB0, this, arg1, arg2);
    }

    // 0x43AFF0 | ?GetNetObjectIndex@mmGameMulti@@QAEHKH@Z
    inline i32 GetNetObjectIndex(u32 arg1, i32 arg2)
    {
        return stub<member_func_t<i32, mmGameMulti, u32, i32>>(0x43AFF0, this, arg1, arg2);
    }

    // 0x43B040 | ?EnableRacers@mmGameMulti@@IAEXXZ
    inline void EnableRacers()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43B040, this);
    }

    // 0x43B0E0 | ?DisableRacers@mmGameMulti@@IAEXXZ
    inline void DisableRacers()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43B0E0, this);
    }

    // 0x43B140 | ?QuitNetwork@mmGameMulti@@QAEXXZ
    inline void QuitNetwork()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43B140, this);
    }

    // 0x43B170 | ?PlayerFinishedLoading@mmGameMulti@@QAEXXZ
    inline void PlayerFinishedLoading()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43B170, this);
    }

    // 0x43B1D0 | ?PlayerClearLoaded@mmGameMulti@@QAEXXZ
    inline void PlayerClearLoaded()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43B1D0, this);
    }

    // 0x43B220 | ?ParseChatMessage@mmGameMulti@@QAEHPADH@Z
    inline i32 ParseChatMessage(char* arg1, i32 arg2)
    {
        return stub<member_func_t<i32, mmGameMulti, char*, i32>>(0x43B220, this, arg1, arg2);
    }

    // 0x43B310 | ?SortResults@mmGameMulti@@IAE_NKMH@Z
    inline bool SortResults(u32 arg1, f32 arg2, i32 arg3)
    {
        return stub<member_func_t<bool, mmGameMulti, u32, f32, i32>>(0x43B310, this, arg1, arg2, arg3);
    }

    // 0x43B390 | ?UpdateResults@mmGameMulti@@IAEXH@Z
    inline void UpdateResults(i32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43B390, this, arg1);
    }

    // 0x43B4C0 | ?BroadCastCarTuning@mmGameMulti@@QAEXH@Z
    inline void BroadCastCarTuning(i32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43B4C0, this, arg1);
    }

    // 0x43B5A0 | ?SendToChatMessage@mmGameMulti@@QAEXPADK@Z
    inline void SendToChatMessage(char* arg1, u32 arg2)
    {
        return stub<member_func_t<void, mmGameMulti, char*, u32>>(0x43B5A0, this, arg1, arg2);
    }

    // 0x43B610 | ?SendTimeMsg@mmGameMulti@@QAEXK@Z
    inline void SendTimeMsg(u32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, u32>>(0x43B610, this, arg1);
    }

    // 0x43B630 | ?SendCarTuning@mmGameMulti@@QAEXPBDK@Z
    inline void SendCarTuning(char const* arg1, u32 arg2)
    {
        return stub<member_func_t<void, mmGameMulti, char const*, u32>>(0x43B630, this, arg1, arg2);
    }

    // 0x43B640 | ?SendHostCars@mmGameMulti@@QAEXK@Z
    inline void SendHostCars(u32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, u32>>(0x43B640, this, arg1);
    }

    // 0x43B6C0 | ?FinishMessage@mmGameMulti@@QAEXH@Z
    inline void FinishMessage(i32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43B6C0, this, arg1);
    }

    // 0x43B780 | ?BootPlayerCB@mmGameMulti@@QAEXPAX0@Z
    inline void BootPlayerCB(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmGameMulti, void*, void*>>(0x43B780, this, arg1, arg2);
    }

    // 0x43B7C0 | ?UpdateNetWorkAudio@mmGameMulti@@QAEXXZ
    inline void UpdateNetWorkAudio()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43B7C0, this);
    }

    // 0x43B7D0 | ?SendLobbyResults@mmGameMulti@@QAEXHIM@Z
    inline void SendLobbyResults(i32 arg1, u32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, mmGameMulti, i32, u32, f32>>(0x43B7D0, this, arg1, arg2, arg3);
    }

    // 0x43B870 | ?GetCarCRC@mmGameMulti@@IAEKPAD@Z
    inline u32 GetCarCRC(char* arg1)
    {
        return stub<member_func_t<u32, mmGameMulti, char*>>(0x43B870, this, arg1);
    }

    // 0x43B8B0 | ?SendMsg@mmGameMulti@@QAEXH@Z
    inline void SendMsg(i32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43B8B0, this, arg1);
    }

    // 0x43B8D0 | ?SendBootMsg@mmGameMulti@@QAEXK@Z
    inline void SendBootMsg(u32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, u32>>(0x43B8D0, this, arg1);
    }

    // 0x43B8F0 | ?SendFinishAck@mmGameMulti@@IAEXKMH@Z
    inline void SendFinishAck(u32 arg1, f32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, mmGameMulti, u32, f32, i32>>(0x43B8F0, this, arg1, arg2, arg3);
    }

    // 0x43B930 | ?SendFinishReq@mmGameMulti@@IAEXMH@Z
    inline void SendFinishReq(f32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmGameMulti, f32, i32>>(0x43B930, this, arg1, arg2);
    }

    // 0x43B970 | ?SendRaceReady@mmGameMulti@@IAEXXZ
    inline void SendRaceReady()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43B970, this);
    }

    // 0x43B9B0 | ?SendGameSet@mmGameMulti@@IAEXXZ
    inline void SendGameSet()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43B9B0, this);
    }

    // 0x43B9E0 | ?SendCheater@mmGameMulti@@IAEXK@Z
    inline void SendCheater(u32 arg1)
    {
        return stub<member_func_t<void, mmGameMulti, u32>>(0x43B9E0, this, arg1);
    }

    // 0x438E60 | ??1mmGameMulti@@UAE@XZ
    inline ~mmGameMulti() override
    {
        stub<member_func_t<void, mmGameMulti>>(0x438E60, this);
    }

    // 0x43A900 | ?Update@mmGameMulti@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A900, this);
    }

    // 0x43A5D0 | ?Reset@mmGameMulti@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A5D0, this);
    }

    // 0x438F40 | ?Init@mmGameMulti@@UAEHXZ
    inline i32 Init() override
    {
        return stub<member_func_t<i32, mmGameMulti>>(0x438F40, this);
    }

    // 0x439240 | ?InitGameStrings@mmGameMulti@@UAEXXZ
    inline void InitGameStrings() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x439240, this);
    }

    // 0x43A720 | ?InitOtherPlayers@mmGameMulti@@UAEXXZ
    inline void InitOtherPlayers() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A720, this);
    }

    // 0x43ADC0 | ?UpdateDebugKeyInput@mmGameMulti@@UAEXH@Z
    inline void UpdateDebugKeyInput(i32 arg1) override
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43ADC0, this, arg1);
    }

    // 0x43A980 | ?UpdateGame@mmGameMulti@@UAEXXZ
    inline void UpdateGame() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A980, this);
    }

    // 0x421B70 | ?NextRace@mmGameMulti@@UAEXXZ
    inline void NextRace() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x421B70, this);
    }

    // 0x439130 | ?HitWaterHandler@mmGameMulti@@UAEXXZ
    inline void HitWaterHandler() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x439130, this);
    }

    // 0x439230 | ?DropThruCityHandler@mmGameMulti@@UAEXXZ
    inline void DropThruCityHandler() override
    {
        return stub<member_func_t<void, mmGameMulti>>(0x439230, this);
    }

    // 0x43B530 | ?SendChatMessage@mmGameMulti@@UAEXPAD@Z
    inline void SendChatMessage(char* arg1) override
    {
        return stub<member_func_t<void, mmGameMulti, char*>>(0x43B530, this, arg1);
    }

    // 0x43A4D0 | ?BeDone@mmGameMulti@@UAEXH@Z
    inline void BeDone(i32 arg1) override
    {
        return stub<member_func_t<void, mmGameMulti, i32>>(0x43A4D0, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline void InitNetworkPlayers()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x582519, this);
    }

    // 0x43A750 | ?InitRoster@mmGameMulti@@UAEXXZ
    virtual inline void InitRoster()
    {
        return stub<member_func_t<void, mmGameMulti>>(0x43A750, this);
    }

    // 0x582519 | __purecall
    virtual inline void SystemMessage(struct NETSYS_MSG* arg1)
    {
        return stub<member_func_t<void, mmGameMulti, struct NETSYS_MSG*>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline void GameMessage(struct NET_RCXHEAD* arg1)
    {
        return stub<member_func_t<void, mmGameMulti, struct NET_RCXHEAD*>>(0x582519, this, arg1);
    }
};
