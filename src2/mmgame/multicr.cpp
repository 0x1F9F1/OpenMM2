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

#include "multicr.h"

mmMultiCR::mmMultiCR()
{
    unimplemented();
}

mmMultiCR::~mmMultiCR()
{
    unimplemented();
}

void mmMultiCR::DropThruCityHandler()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x425460, this);
}

void mmMultiCR::FondleCarMass(class vehCar* arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmMultiCR*, class vehCar*, f32>>(0x424A00, this, arg1, arg2);
}

void mmMultiCR::GameMessage(struct NET_RCXHEAD* arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, struct NET_RCXHEAD*>>(0x426340, this, arg1);
}

class mmWaypoints* mmMultiCR::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmMultiCR*>>(0x427510, this);
}

void mmMultiCR::HitWaterHandler()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x4253A0, this);
}

void mmMultiCR::ImpactCallback(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, mmMultiCR*, void*, void*>>(0x424900, this, arg1, arg2);
}

i32 mmMultiCR::Init()
{
    return stub<thiscall_t<i32, mmMultiCR*>>(0x423870, this);
}

void mmMultiCR::InitGameObjects()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x423C80, this);
}

void mmMultiCR::InitHUD()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x423B00, this);
}

void mmMultiCR::InitMyPlayer()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x4239F0, this);
}

void mmMultiCR::InitNetworkPlayers()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x424090, this);
}

i32 mmMultiCR::LoadCSV(char* arg1)
{
    return stub<thiscall_t<i32, mmMultiCR*, char*>>(0x424880, this, arg1);
}

i32 mmMultiCR::LoadSets(char* arg1)
{
    return stub<thiscall_t<i32, mmMultiCR*, char*>>(0x424640, this, arg1);
}

void mmMultiCR::Reset()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x424440, this);
}

void mmMultiCR::ResetPositions(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x424E40, this, arg1);
}

void mmMultiCR::SendLobbyResults(u32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmMultiCR*, u32, i32, i32>>(0x427340, this, arg1, arg2, arg3);
}

void mmMultiCR::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x425390, this, arg1);
}

void mmMultiCR::SystemMessage(struct NETSYS_MSG* arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, struct NETSYS_MSG*>>(0x4261B0, this, arg1);
}

void mmMultiCR::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x4272D0, this, arg1);
}

void mmMultiCR::UpdateGame()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x424F90, this);
}

void mmMultiCR::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x424F80, this, arg1);
}

void mmMultiCR::CycleInterest(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x4272E0, this, arg1);
}

void mmMultiCR::DisplayTimeWarning(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x426E80, this, arg1);
}

void mmMultiCR::DropGold(class Vector3 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmMultiCR*, class Vector3, i32, i32>>(0x4256A0, this, arg1, arg2, arg3);
}

void mmMultiCR::FillResults()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x425EE0, this);
}

void mmMultiCR::FindGround(class Vector3 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, mmMultiCR*, class Vector3, class Vector3&>>(0x4255D0, this, arg1, arg2);
}

void mmMultiCR::GetNewSet()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x424AD0, this);
}

i32 mmMultiCR::GetRandomIndex()
{
    return stub<thiscall_t<i32, mmMultiCR*>>(0x424E20, this);
}

void mmMultiCR::GetRandomPoints(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3)
{
    return stub<thiscall_t<void, mmMultiCR*, class Vector3&, class Vector3&, class Vector3&>>(
        0x424BF0, this, arg1, arg2, arg3);
}

void mmMultiCR::OppStealGold(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x425560, this, arg1);
}

void mmMultiCR::Score(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x4272A0, this, arg1);
}

i32 mmMultiCR::SelectTeams()
{
    return stub<thiscall_t<i32, mmMultiCR*>>(0x424F70, this);
}

void mmMultiCR::SendChangeSet(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x4270A0, this, arg1);
}

void mmMultiCR::SendGameState(u32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, u32>>(0x426F10, this, arg1);
}

void mmMultiCR::SendGoldAck(u32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, u32>>(0x427040, this, arg1);
}

void mmMultiCR::SendGoldDeliver()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x427080, this);
}

void mmMultiCR::SendGoldDrop(class Vector3 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, class Vector3>>(0x427000, this, arg1);
}

void mmMultiCR::SendLimitReached(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x427120, this, arg1);
}

void mmMultiCR::SendSetup(u32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, u32>>(0x426FF0, this, arg1);
}

void mmMultiCR::SendTimeWarning(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, i32>>(0x427150, this, arg1);
}

void mmMultiCR::StealGold(class vehCar* arg1)
{
    return stub<thiscall_t<void, mmMultiCR*, class vehCar*>>(0x425520, this, arg1);
}

void mmMultiCR::UpdateBank()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x425BA0, this);
}

void mmMultiCR::UpdateGold()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x425830, this);
}

void mmMultiCR::UpdateHUD()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x427180, this);
}

void mmMultiCR::UpdateHideout()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x425A50, this);
}

void mmMultiCR::UpdateLimit()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x425CF0, this);
}

void mmMultiCR::UpdateTimeWarning()
{
    return stub<thiscall_t<void, mmMultiCR*>>(0x426D10, this);
}

netScoreInfo::netScoreInfo()
{
    unimplemented();
}

netScoreInfo::~netScoreInfo()
{
    unimplemented();
}

define_dummy_symbol(mmgame_multicr);
