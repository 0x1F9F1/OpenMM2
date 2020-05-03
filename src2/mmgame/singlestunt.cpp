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

#include "singlestunt.h"

mmSingleStunt::mmSingleStunt()
{
    unimplemented();
}

mmSingleStunt::~mmSingleStunt()
{
    unimplemented();
}

void mmSingleStunt::EnableRacers()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416820, this);
}

void mmSingleStunt::EventSoundCtrl(bool arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmSingleStunt*, bool, i32>>(0x41A340, this, arg1, arg2);
}

void mmSingleStunt::HitWaterHandler()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416920, this);
}

i32 mmSingleStunt::Init()
{
    return stub<thiscall_t<i32, mmSingleStunt*>>(0x415C40, this);
}

void mmSingleStunt::InitGameObjects()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416450, this);
}

void mmSingleStunt::InitHUD()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x415DB0, this);
}

void mmSingleStunt::InitMyPlayer()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x415D40, this);
}

void mmSingleStunt::InitNewEvent()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416310, this);
}

void mmSingleStunt::InitOtherPlayers()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416720, this);
}

void mmSingleStunt::NextRace()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x41A490, this);
}

i32 mmSingleStunt::RegisterFinish(i32 arg1)
{
    return stub<thiscall_t<i32, mmSingleStunt*, i32>>(0x41A6F0, this, arg1);
}

void mmSingleStunt::Reset()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416760, this);
}

void mmSingleStunt::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleStunt*, i32>>(0x41A460, this, arg1);
}

void mmSingleStunt::Update()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416970, this);
}

void mmSingleStunt::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleStunt*, i32>>(0x41ABF0, this, arg1);
}

void mmSingleStunt::UpdateGame()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416990, this);
}

void mmSingleStunt::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleStunt*, i32>>(0x416980, this, arg1);
}

bool mmSingleStunt::CheckCopPursuit()
{
    return stub<thiscall_t<bool, mmSingleStunt*>>(0x41A1B0, this);
}

bool mmSingleStunt::CheckTimeUp()
{
    return stub<thiscall_t<bool, mmSingleStunt*>>(0x41A130, this);
}

i32 mmSingleStunt::GetOpponentIndex()
{
    return stub<thiscall_t<i32, mmSingleStunt*>>(0x416900, this);
}

void mmSingleStunt::HUDMessage(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleStunt*, i32>>(0x41A310, this, arg1);
}

bool mmSingleStunt::LoadEventFile(char* arg1)
{
    return stub<thiscall_t<bool, mmSingleStunt*, char*>>(0x416070, this, arg1);
}

bool mmSingleStunt::NextRaceAvailable()
{
    return stub<thiscall_t<bool, mmSingleStunt*>>(0x41A470, this);
}

void mmSingleStunt::PlayTimerWarning(f32 arg1)
{
    return stub<thiscall_t<void, mmSingleStunt*, f32>>(0x41A390, this, arg1);
}

void mmSingleStunt::UpdateAccel()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x417030, this);
}

void mmSingleStunt::UpdateBlitz()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x419010, this);
}

void mmSingleStunt::UpdateChase()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x417B10, this);
}

void mmSingleStunt::UpdateCollide()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x419C90, this);
}

void mmSingleStunt::UpdateCorner()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x4187A0, this);
}

void mmSingleStunt::UpdateEvade()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x416A50, this);
}

void mmSingleStunt::UpdateFrogger()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x4180F0, this);
}

void mmSingleStunt::UpdateJump()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x4174C0, this);
}

void mmSingleStunt::UpdateStop()
{
    return stub<thiscall_t<void, mmSingleStunt*>>(0x4195F0, this);
}

mmInfoBase::mmInfoBase()
{
    unimplemented();
}

mmInfoBase::~mmInfoBase()
{
    unimplemented();
}

i32 mmInfoBase::Load(char* arg1)
{
    return stub<thiscall_t<i32, mmInfoBase*, char*>>(0x528260, this, arg1);
}

i32 mmInfoBase::Save(char* arg1)
{
    return stub<thiscall_t<i32, mmInfoBase*, char*>>(0x528310, this, arg1);
}

void mmInfoBase::SetIOPath(char* arg1)
{
    return stub<thiscall_t<void, mmInfoBase*, char*>>(0x5283C0, this, arg1);
}

void mmInfoBase::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, mmInfoBase*, class datParser&>>(0x41AB50, this, arg1);
}

mmCCData::mmCCData()
{
    unimplemented();
}

mmCCData::~mmCCData()
{
    unimplemented();
}

bool mmSingleRaceMusicData::LoadMusic(char* arg1)
{
    return stub<thiscall_t<bool, mmSingleRaceMusicData*, char*>>(0x4336D0, this, arg1);
}

bool mmSingleRaceMusicData::LoadMusicSegments(class Stream* arg1, i16 arg2)
{
    return stub<thiscall_t<bool, mmSingleRaceMusicData*, class Stream*, i16>>(0x433890, this, arg1, arg2);
}

define_dummy_symbol(mmgame_singlestunt);
