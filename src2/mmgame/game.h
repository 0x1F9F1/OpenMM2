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

#include "node/node.h"

/*
    mmgame:game

    0x412550 | public: __thiscall mmGame::mmGame(void) | ??0mmGame@@QAE@XZ
    0x412710 | public: virtual int __thiscall mmGame::Init(void) | ?Init@mmGame@@UAEHXZ
    0x413210 | protected: void __thiscall mmGame::InitGizmos(void) | ?InitGizmos@mmGame@@IAEXXZ
    0x413370 | protected: void __thiscall mmGame::InitWeather(void) | ?InitWeather@mmGame@@IAEXXZ
    0x4133F0 | public: virtual void __thiscall mmGame::InitOtherPlayers(void) | ?InitOtherPlayers@mmGame@@UAEXXZ
    0x413520 | public: void __thiscall mmGame::CollideAIOpponents(void) | ?CollideAIOpponents@mmGame@@QAEXXZ
    0x413650 | public: virtual void __thiscall mmGame::InitGameStrings(void) | ?InitGameStrings@mmGame@@UAEXXZ
    0x413940 | public: virtual __thiscall mmGame::~mmGame(void) | ??1mmGame@@UAE@XZ
    0x413B70 | protected: void __thiscall mmGame::RespawnXYZ(class Vector3 &,float &,bool,bool,bool) | ?RespawnXYZ@mmGame@@IAEXAAVVector3@@AAM_N22@Z
    0x413D30 | public: int __thiscall mmGame::IsPopupEnabled(void) | ?IsPopupEnabled@mmGame@@QAEHXZ
    0x413D40 | public: virtual void __thiscall mmGame::Reset(void) | ?Reset@mmGame@@UAEXXZ
    0x413DF0 | public: void __thiscall mmGame::StartMusic(void) | ?StartMusic@mmGame@@QAEXXZ
    0x413E90 | public: virtual void __thiscall mmGame::Update(void) | ?Update@mmGame@@UAEXXZ
    0x4141F0 | public: void __thiscall mmGame::UpdateDMusic(void) | ?UpdateDMusic@mmGame@@QAEXXZ
    0x414280 | public: virtual void __thiscall mmGame::DropThruCityHandler(void) | ?DropThruCityHandler@mmGame@@UAEXXZ
    0x414290 | public: virtual void __thiscall mmGame::HitWaterHandler(void) | ?HitWaterHandler@mmGame@@UAEXXZ
    0x4142A0 | public: bool __thiscall mmGame::UpdateDebugInput(void) | ?UpdateDebugInput@mmGame@@QAE_NXZ
    0x4144A0 | public: virtual void __thiscall mmGame::UpdatePaused(void) | ?UpdatePaused@mmGame@@UAEXXZ
    0x4145B0 | public: void __thiscall mmGame::UpdateHorn(bool) | ?UpdateHorn@mmGame@@QAEX_N@Z
    0x414660 | public: void __thiscall mmGame::UpdateGameInput(void) | ?UpdateGameInput@mmGame@@QAEXXZ
    0x414A00 | public: void __thiscall mmGame::UpdateSteeringBrakes(void) | ?UpdateSteeringBrakes@mmGame@@QAEXXZ
    0x414BB0 | public: void __thiscall mmGame::SetIconsState(void) | ?SetIconsState@mmGame@@QAEXXZ
    0x414BD0 | public: void __thiscall mmGame::PlayerSetState(void) | ?PlayerSetState@mmGame@@QAEXXZ
    0x414D30 | public: virtual void __thiscall mmGame::BeDone(int) | ?BeDone@mmGame@@UAEXH@Z
    0x414E00 | protected: int __thiscall mmGame::CalculateRaceScore(int,int) | ?CalculateRaceScore@mmGame@@IAEHHH@Z
    0x414E50 | public: virtual void __thiscall mmGame::SendChatMessage(char *) | ?SendChatMessage@mmGame@@UAEXPAD@Z
    0x414EC0 | public: void __thiscall mmGame::FarClipCB(void) | ?FarClipCB@mmGame@@QAEXXZ
    0x414EF0 | public: void __thiscall mmGame::SetLevelGraphics(void) | ?SetLevelGraphics@mmGame@@QAEXXZ
    0x414F70 | public: void __thiscall mmGame::CycleCam(void) | ?CycleCam@mmGame@@QAEXXZ
    0x414F80 | public: int __thiscall mmGame::NetHost(void) | ?NetHost@mmGame@@QAEHXZ
    0x414FA0 | public: void __thiscall mmGame::FindGroundPos(class Vector3 &,class Vector3 &) | ?FindGroundPos@mmGame@@QAEXAAVVector3@@0@Z
    public: void __thiscall mmGame::SaveWaypointsCB(void) | ?SaveWaypointsCB@mmGame@@QAEXXZ
    public: void __thiscall mmGame::SaveWaypoints(char *) | ?SaveWaypoints@mmGame@@QAEXPAD@Z
    public: void __thiscall mmGame::CollideCheckpoints(void) | ?CollideCheckpoints@mmGame@@QAEXXZ
    public: void __thiscall mmGame::ChangeCurrent(void) | ?ChangeCurrent@mmGame@@QAEXXZ
    public: void __thiscall mmGame::SetAIResetPos(void) | ?SetAIResetPos@mmGame@@QAEXXZ
    public: void __thiscall mmGame::DumpStartPoints(void) | ?DumpStartPoints@mmGame@@QAEXXZ
    public: void __thiscall mmGame::AddWidgets(class bkBank *) | ?AddWidgets@mmGame@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall mmGame::`vector deleting destructor'(unsigned int) | ??_EmmGame@@UAEPAXI@Z
    0x4151F0 | public: virtual void * __thiscall mmGame::`scalar deleting destructor'(unsigned int) | ??_GmmGame@@UAEPAXI@Z
    0x415220 | public: __thiscall phIntersectionPoint::phIntersectionPoint(void) | ??0phIntersectionPoint@@QAE@XZ
    0x415230 | public: __thiscall phIntersection::phIntersection(void) | ??0phIntersection@@QAE@XZ
    public: __thiscall Vector4::Vector4(void) | ??0Vector4@@QAE@XZ
    0x415240 | class gizSailboatMgr * __cdecl init_gizmo_mgr(class mmGame *,char const *,char const *) | ?init_gizmo_mgr@@YAPAVgizSailboatMgr@@PAVmmGame@@PBD1@Z
    0x415780 | class gizFerryMgr * __cdecl init_gizmo_mgr(class mmGame *,char const *,char const *) | ?init_gizmo_mgr@@YAPAVgizFerryMgr@@PAVmmGame@@PBD1@Z
    0x415940 | class gizParkedCarMgr * __cdecl init_gizmo_mgr(class mmGame *,char const *,char const *) | ?init_gizmo_mgr@@YAPAVgizParkedCarMgr@@PAVmmGame@@PBD1@Z
    0x415400 | class gizBridgeMgr * __cdecl init_gizmo_mgr(class mmGame *,char const *,char const *) | ?init_gizmo_mgr@@YAPAVgizBridgeMgr@@PAVmmGame@@PBD1@Z
    0x4155C0 | class gizTrainMgr * __cdecl init_gizmo_mgr(class mmGame *,char const *,char const *) | ?init_gizmo_mgr@@YAPAVgizTrainMgr@@PAVmmGame@@PBD1@Z
    0x5B0500 | const mmGame::`vftable' | ??_7mmGame@@6B@
    0x5C3C00 | unsigned int * IconColor | ?IconColor@@3PAIA
*/

class mmGame : public asNode
{
    // const mmGame::`vftable' @ 0x5B0500

public:
    // 0x412550 | ??0mmGame@@QAE@XZ
    mmGame();

    // 0x4151F0 | ??_GmmGame@@UAEPAXI@Z
    // 0x413940 | ??1mmGame@@UAE@XZ
    ~mmGame() override;

    // 0x413520 | ?CollideAIOpponents@mmGame@@QAEXXZ
    void CollideAIOpponents();

    // 0x414F70 | ?CycleCam@mmGame@@QAEXXZ
    void CycleCam();

    // 0x414EC0 | ?FarClipCB@mmGame@@QAEXXZ
    void FarClipCB();

    // 0x414FA0 | ?FindGroundPos@mmGame@@QAEXAAVVector3@@0@Z
    void FindGroundPos(class Vector3& arg1, class Vector3& arg2);

    // 0x413D30 | ?IsPopupEnabled@mmGame@@QAEHXZ
    i32 IsPopupEnabled();

    // 0x414F80 | ?NetHost@mmGame@@QAEHXZ
    i32 NetHost();

    // 0x414BD0 | ?PlayerSetState@mmGame@@QAEXXZ
    void PlayerSetState();

    // 0x413D40 | ?Reset@mmGame@@UAEXXZ
    void Reset() override;

    // 0x414BB0 | ?SetIconsState@mmGame@@QAEXXZ
    void SetIconsState();

    // 0x414EF0 | ?SetLevelGraphics@mmGame@@QAEXXZ
    void SetLevelGraphics();

    // 0x413DF0 | ?StartMusic@mmGame@@QAEXXZ
    void StartMusic();

    // 0x413E90 | ?Update@mmGame@@UAEXXZ
    void Update() override;

    // 0x4141F0 | ?UpdateDMusic@mmGame@@QAEXXZ
    void UpdateDMusic();

    // 0x4142A0 | ?UpdateDebugInput@mmGame@@QAE_NXZ
    bool UpdateDebugInput();

    // 0x414660 | ?UpdateGameInput@mmGame@@QAEXXZ
    void UpdateGameInput();

    // 0x4145B0 | ?UpdateHorn@mmGame@@QAEX_N@Z
    void UpdateHorn(bool arg1);

    // 0x4144A0 | ?UpdatePaused@mmGame@@UAEXXZ
    void UpdatePaused() override;

    // 0x414A00 | ?UpdateSteeringBrakes@mmGame@@QAEXXZ
    void UpdateSteeringBrakes();

    // 0x412710 | ?Init@mmGame@@UAEHXZ
    virtual i32 Init();

    // 0x413650 | ?InitGameStrings@mmGame@@UAEXXZ
    virtual void InitGameStrings();

    virtual void InitMyPlayer() = 0;

    // 0x4133F0 | ?InitOtherPlayers@mmGame@@UAEXXZ
    virtual void InitOtherPlayers();

    virtual void InitGameObjects() = 0;

    virtual void InitHUD() = 0;

    virtual void UpdateGameInput(i32 arg1) = 0;

    virtual void UpdateDebugKeyInput(i32 arg1) = 0;

    virtual void UpdateGame() = 0;

    virtual void NextRace() = 0;

    // 0x414290 | ?HitWaterHandler@mmGame@@UAEXXZ
    virtual void HitWaterHandler();

    // 0x414280 | ?DropThruCityHandler@mmGame@@UAEXXZ
    virtual void DropThruCityHandler();

    // 0x414E50 | ?SendChatMessage@mmGame@@UAEXPAD@Z
    virtual void SendChatMessage(char* arg1);

    virtual void SwitchState(i32 arg1) = 0;

    // 0x414D30 | ?BeDone@mmGame@@UAEXH@Z
    virtual void BeDone(i32 arg1);

    virtual class mmWaypoints* GetWaypoints() = 0;

protected:
    // 0x414E00 | ?CalculateRaceScore@mmGame@@IAEHHH@Z
    i32 CalculateRaceScore(i32 arg1, i32 arg2);

    // 0x413210 | ?InitGizmos@mmGame@@IAEXXZ
    void InitGizmos();

    // 0x413370 | ?InitWeather@mmGame@@IAEXXZ
    void InitWeather();

    // 0x413B70 | ?RespawnXYZ@mmGame@@IAEXAAVVector3@@AAM_N22@Z
    void RespawnXYZ(class Vector3& arg1, f32& arg2, bool arg3, bool arg4, bool arg5);
};

check_size(mmGame, 0x0);

class phIntersection
{
public:
    // 0x415230 | ??0phIntersection@@QAE@XZ
    phIntersection();
};

check_size(phIntersection, 0x0);

// 0x415400 | ?init_gizmo_mgr@@YAPAVgizBridgeMgr@@PAVmmGame@@PBD1@Z
class gizBridgeMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3);

// 0x415780 | ?init_gizmo_mgr@@YAPAVgizFerryMgr@@PAVmmGame@@PBD1@Z
class gizFerryMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3);

// 0x415940 | ?init_gizmo_mgr@@YAPAVgizParkedCarMgr@@PAVmmGame@@PBD1@Z
class gizParkedCarMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3);

// 0x415240 | ?init_gizmo_mgr@@YAPAVgizSailboatMgr@@PAVmmGame@@PBD1@Z
class gizSailboatMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3);

// 0x4155C0 | ?init_gizmo_mgr@@YAPAVgizTrainMgr@@PAVmmGame@@PBD1@Z
class gizTrainMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3);

// 0x5C3C00 | ?IconColor@@3PAIA
inline extern_var(0x5C3C00, u32*, IconColor);
