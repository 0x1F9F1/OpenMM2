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

#include "game.h"

mmGame::mmGame()
{
    unimplemented();
}

mmGame::~mmGame()
{
    unimplemented();
}

void mmGame::CollideAIOpponents()
{
    return stub<thiscall_t<void, mmGame*>>(0x413520, this);
}

void mmGame::CycleCam()
{
    return stub<thiscall_t<void, mmGame*>>(0x414F70, this);
}

void mmGame::FarClipCB()
{
    return stub<thiscall_t<void, mmGame*>>(0x414EC0, this);
}

void mmGame::FindGroundPos(class Vector3& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, mmGame*, class Vector3&, class Vector3&>>(0x414FA0, this, arg1, arg2);
}

i32 mmGame::IsPopupEnabled()
{
    return stub<thiscall_t<i32, mmGame*>>(0x413D30, this);
}

i32 mmGame::NetHost()
{
    return stub<thiscall_t<i32, mmGame*>>(0x414F80, this);
}

void mmGame::PlayerSetState()
{
    return stub<thiscall_t<void, mmGame*>>(0x414BD0, this);
}

void mmGame::Reset()
{
    return stub<thiscall_t<void, mmGame*>>(0x413D40, this);
}

void mmGame::SetIconsState()
{
    return stub<thiscall_t<void, mmGame*>>(0x414BB0, this);
}

void mmGame::SetLevelGraphics()
{
    return stub<thiscall_t<void, mmGame*>>(0x414EF0, this);
}

void mmGame::StartMusic()
{
    return stub<thiscall_t<void, mmGame*>>(0x413DF0, this);
}

void mmGame::Update()
{
    return stub<thiscall_t<void, mmGame*>>(0x413E90, this);
}

void mmGame::UpdateDMusic()
{
    return stub<thiscall_t<void, mmGame*>>(0x4141F0, this);
}

bool mmGame::UpdateDebugInput()
{
    return stub<thiscall_t<bool, mmGame*>>(0x4142A0, this);
}

void mmGame::UpdateGameInput()
{
    return stub<thiscall_t<void, mmGame*>>(0x414660, this);
}

void mmGame::UpdateHorn(bool arg1)
{
    return stub<thiscall_t<void, mmGame*, bool>>(0x4145B0, this, arg1);
}

void mmGame::UpdatePaused()
{
    return stub<thiscall_t<void, mmGame*>>(0x4144A0, this);
}

void mmGame::UpdateSteeringBrakes()
{
    return stub<thiscall_t<void, mmGame*>>(0x414A00, this);
}

i32 mmGame::Init()
{
    return stub<thiscall_t<i32, mmGame*>>(0x412710, this);
}

void mmGame::InitGameStrings()
{
    return stub<thiscall_t<void, mmGame*>>(0x413650, this);
}

void mmGame::InitMyPlayer()
{
    return stub<thiscall_t<void, mmGame*>>(0x0, this);
}

void mmGame::InitOtherPlayers()
{
    return stub<thiscall_t<void, mmGame*>>(0x4133F0, this);
}

void mmGame::InitGameObjects()
{
    return stub<thiscall_t<void, mmGame*>>(0x0, this);
}

void mmGame::InitHUD()
{
    return stub<thiscall_t<void, mmGame*>>(0x0, this);
}

void mmGame::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmGame*, i32>>(0x0, this, arg1);
}

void mmGame::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmGame*, i32>>(0x0, this, arg1);
}

void mmGame::UpdateGame()
{
    return stub<thiscall_t<void, mmGame*>>(0x0, this);
}

void mmGame::NextRace()
{
    return stub<thiscall_t<void, mmGame*>>(0x0, this);
}

void mmGame::HitWaterHandler()
{
    return stub<thiscall_t<void, mmGame*>>(0x414290, this);
}

void mmGame::DropThruCityHandler()
{
    return stub<thiscall_t<void, mmGame*>>(0x414280, this);
}

void mmGame::SendChatMessage(char* arg1)
{
    return stub<thiscall_t<void, mmGame*, char*>>(0x414E50, this, arg1);
}

void mmGame::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmGame*, i32>>(0x0, this, arg1);
}

void mmGame::BeDone(i32 arg1)
{
    return stub<thiscall_t<void, mmGame*, i32>>(0x414D30, this, arg1);
}

class mmWaypoints* mmGame::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmGame*>>(0x0, this);
}

i32 mmGame::CalculateRaceScore(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmGame*, i32, i32>>(0x414E00, this, arg1, arg2);
}

void mmGame::InitGizmos()
{
    return stub<thiscall_t<void, mmGame*>>(0x413210, this);
}

void mmGame::InitWeather()
{
    return stub<thiscall_t<void, mmGame*>>(0x413370, this);
}

void mmGame::RespawnXYZ(class Vector3& arg1, f32& arg2, bool arg3, bool arg4, bool arg5)
{
    return stub<thiscall_t<void, mmGame*, class Vector3&, f32&, bool, bool, bool>>(
        0x413B70, this, arg1, arg2, arg3, arg4, arg5);
}

phIntersection::phIntersection()
{
    unimplemented();
}

class gizBridgeMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3)
{
    return stub<cdecl_t<class gizBridgeMgr*, class mmGame*, char const*, char const*>>(0x415400, arg1, arg2, arg3);
}

class gizFerryMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3)
{
    return stub<cdecl_t<class gizFerryMgr*, class mmGame*, char const*, char const*>>(0x415780, arg1, arg2, arg3);
}

class gizParkedCarMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3)
{
    return stub<cdecl_t<class gizParkedCarMgr*, class mmGame*, char const*, char const*>>(0x415940, arg1, arg2, arg3);
}

class gizSailboatMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3)
{
    return stub<cdecl_t<class gizSailboatMgr*, class mmGame*, char const*, char const*>>(0x415240, arg1, arg2, arg3);
}

class gizTrainMgr* init_gizmo_mgr(class mmGame* arg1, char const* arg2, char const* arg3)
{
    return stub<cdecl_t<class gizTrainMgr*, class mmGame*, char const*, char const*>>(0x4155C0, arg1, arg2, arg3);
}

define_dummy_symbol(mmgame_game);
