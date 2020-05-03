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

#include "gamemulti.h"

mmGameMulti::mmGameMulti()
{
    unimplemented();
}

mmGameMulti::~mmGameMulti()
{
    unimplemented();
}

void mmGameMulti::ActivateMapNetObject(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43AF20, this, arg1);
}

void mmGameMulti::BeDone(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43A4D0, this, arg1);
}

void mmGameMulti::BootPlayerCB(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, mmGameMulti*, void*, void*>>(0x43B780, this, arg1, arg2);
}

void mmGameMulti::BootStrapCars()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A3B0, this);
}

void mmGameMulti::BroadCastCarTuning(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43B4C0, this, arg1);
}

void mmGameMulti::ClearNetObjects()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A6E0, this);
}

void mmGameMulti::ClearRank()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43ADA0, this);
}

void mmGameMulti::DeactivateMapNetObject(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43AEF0, this, arg1);
}

void mmGameMulti::DropThruCityHandler()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x439230, this);
}

void mmGameMulti::FinishMessage(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43B6C0, this, arg1);
}

void mmGameMulti::GameMessageCB(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, mmGameMulti*, void*, void*>>(0x439AF0, this, arg1, arg2);
}

class mmNetObject* mmGameMulti::GetInactiveNetObject()
{
    return stub<thiscall_t<class mmNetObject*, mmGameMulti*>>(0x43AF60, this);
}

i32 mmGameMulti::GetInactiveNetObjectIndex()
{
    return stub<thiscall_t<i32, mmGameMulti*>>(0x43AF90, this);
}

class mmNetObject* mmGameMulti::GetNetObject(u32 arg1, i32 arg2)
{
    return stub<thiscall_t<class mmNetObject*, mmGameMulti*, u32, i32>>(0x43AFB0, this, arg1, arg2);
}

i32 mmGameMulti::GetNetObjectIndex(u32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmGameMulti*, u32, i32>>(0x43AFF0, this, arg1, arg2);
}

void mmGameMulti::HitWaterHandler()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x439130, this);
}

i32 mmGameMulti::Init()
{
    return stub<thiscall_t<i32, mmGameMulti*>>(0x438F40, this);
}

void mmGameMulti::InitGameStrings()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x439240, this);
}

void mmGameMulti::InitOtherPlayers()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A720, this);
}

void mmGameMulti::NextRace()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x421B70, this);
}

i32 mmGameMulti::ParseChatMessage(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmGameMulti*, char*, i32>>(0x43B220, this, arg1, arg2);
}

void mmGameMulti::PlayerClearLoaded()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43B1D0, this);
}

void mmGameMulti::PlayerFinishedLoading()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43B170, this);
}

void mmGameMulti::QuitNetwork()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43B140, this);
}

void mmGameMulti::RegisterMapNetObjects(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43ADD0, this, arg1);
}

void mmGameMulti::Reset()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A5D0, this);
}

void mmGameMulti::SendBootMsg(u32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, u32>>(0x43B8D0, this, arg1);
}

void mmGameMulti::SendCarTuning(char const* arg1, u32 arg2)
{
    return stub<thiscall_t<void, mmGameMulti*, char const*, u32>>(0x43B630, this, arg1, arg2);
}

void mmGameMulti::SendChatMessage(char* arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, char*>>(0x43B530, this, arg1);
}

void mmGameMulti::SendHostCars(u32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, u32>>(0x43B640, this, arg1);
}

void mmGameMulti::SendLobbyResults(i32 arg1, u32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, mmGameMulti*, i32, u32, f32>>(0x43B7D0, this, arg1, arg2, arg3);
}

void mmGameMulti::SendMsg(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43B8B0, this, arg1);
}

void mmGameMulti::SendPosition()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A7F0, this);
}

void mmGameMulti::SendTimeMsg(u32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, u32>>(0x43B610, this, arg1);
}

void mmGameMulti::SendToChatMessage(char* arg1, u32 arg2)
{
    return stub<thiscall_t<void, mmGameMulti*, char*, u32>>(0x43B5A0, this, arg1, arg2);
}

void mmGameMulti::SetFinishCam()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x439470, this);
}

void mmGameMulti::SystemMessageCB(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, mmGameMulti*, void*, void*>>(0x439710, this, arg1, arg2);
}

void mmGameMulti::Update()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A900, this);
}

void mmGameMulti::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43ADC0, this, arg1);
}

void mmGameMulti::UpdateGame()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A980, this);
}

void mmGameMulti::UpdateNetWorkAudio()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43B7C0, this);
}

void mmGameMulti::UpdateScore()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A9B0, this);
}

void mmGameMulti::InitNetworkPlayers()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x0, this);
}

void mmGameMulti::InitRoster()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43A750, this);
}

void mmGameMulti::SystemMessage(struct NETSYS_MSG* arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, struct NETSYS_MSG*>>(0x0, this, arg1);
}

void mmGameMulti::GameMessage(struct NET_RCXHEAD* arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, struct NET_RCXHEAD*>>(0x0, this, arg1);
}

void mmGameMulti::DisableRacers()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43B0E0, this);
}

void mmGameMulti::EnableRacers()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43B040, this);
}

u32 mmGameMulti::GetCarCRC(char* arg1)
{
    return stub<thiscall_t<u32, mmGameMulti*, char*>>(0x43B870, this, arg1);
}

void mmGameMulti::SendCheater(u32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, u32>>(0x43B9E0, this, arg1);
}

void mmGameMulti::SendFinishAck(u32 arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmGameMulti*, u32, f32, i32>>(0x43B8F0, this, arg1, arg2, arg3);
}

void mmGameMulti::SendFinishReq(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmGameMulti*, f32, i32>>(0x43B930, this, arg1, arg2);
}

void mmGameMulti::SendGameSet()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43B9B0, this);
}

void mmGameMulti::SendRaceReady()
{
    return stub<thiscall_t<void, mmGameMulti*>>(0x43B970, this);
}

bool mmGameMulti::SortResults(u32 arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<bool, mmGameMulti*, u32, f32, i32>>(0x43B310, this, arg1, arg2, arg3);
}

void mmGameMulti::StartXYZ(i32 arg1, class Vector3& arg2, class Vector3& arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<void, mmGameMulti*, i32, class Vector3&, class Vector3&, f32, f32>>(
        0x4394E0, this, arg1, arg2, arg3, arg4, arg5);
}

void mmGameMulti::UpdateResults(i32 arg1)
{
    return stub<thiscall_t<void, mmGameMulti*, i32>>(0x43B390, this, arg1);
}

define_dummy_symbol(mmgame_gamemulti);
