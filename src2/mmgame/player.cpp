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

#include "player.h"

mmPlayer::mmPlayer()
{
    unimplemented();
}

mmPlayer::~mmPlayer()
{
    unimplemented();
}

void mmPlayer::AfterLoad()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x4039A0, this);
}

void mmPlayer::BeforeSave()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x403990, this);
}

void mmPlayer::EnableRegen(i32 arg1)
{
    return stub<thiscall_t<void, mmPlayer*, i32>>(0x406160, this, arg1);
}

void mmPlayer::FFImpactCallback(f32 arg1)
{
    return stub<thiscall_t<void, mmPlayer*, f32>>(0x406240, this, arg1);
}

void mmPlayer::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, mmPlayer*, class datParser&>>(0x406320, this, arg1);
}

f32 mmPlayer::FilterSteering(f32 arg1)
{
    return stub<thiscall_t<f32, mmPlayer*, f32>>(0x404C90, this, arg1);
}

void mmPlayer::ImpactCallback(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, mmPlayer*, void*, void*>>(0x404220, this, arg1, arg2);
}

void mmPlayer::Init(char* arg1, char* arg2, class mmGame* arg3)
{
    return stub<thiscall_t<void, mmPlayer*, char*, char*, class mmGame*>>(0x403B20, this, arg1, arg2, arg3);
}

i32 mmPlayer::IsMaxDamaged()
{
    return stub<thiscall_t<i32, mmPlayer*>>(0x406140, this);
}

i32 mmPlayer::IsPOV()
{
    return stub<thiscall_t<i32, mmPlayer*>>(0x404550, this);
}

void mmPlayer::ReInit(char* arg1)
{
    return stub<thiscall_t<void, mmPlayer*, char*>>(0x4039B0, this, arg1);
}

void mmPlayer::Reset()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x404A60, this);
}

void mmPlayer::ResetDamage()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x406180, this);
}

void mmPlayer::ResetFF()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x404BE0, this);
}

void mmPlayer::SetCamInterest(class phInertialCS* arg1)
{
    return stub<thiscall_t<void, mmPlayer*, class phInertialCS*>>(0x4060D0, this, arg1);
}

void mmPlayer::SetGameCallback(class datCallback arg1)
{
    return stub<thiscall_t<void, mmPlayer*, class datCallback>>(0x404200, this, arg1);
}

void mmPlayer::SetMPPostCam(class Matrix34* arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmPlayer*, class Matrix34*, f32>>(0x404460, this, arg1, arg2);
}

void mmPlayer::SetPostRaceCam()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x404350, this);
}

void mmPlayer::SetPreRaceCam()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x404250, this);
}

void mmPlayer::SetSteering(f32 arg1)
{
    return stub<thiscall_t<void, mmPlayer*, f32>>(0x404C50, this, arg1);
}

void mmPlayer::SetWideFOV(i32 arg1)
{
    return stub<thiscall_t<void, mmPlayer*, i32>>(0x404580, this, arg1);
}

void mmPlayer::Update()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x405760, this);
}

void mmPlayer::UpdateFF()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x405340, this);
}

void mmPlayer::UpdateHOG()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x404920, this);
}

void mmPlayer::UpdateRegen()
{
    return stub<thiscall_t<void, mmPlayer*>>(0x4061A0, this);
}

void mmPlayer::GetCamera(i32& arg1, i32& arg2)
{
    return stub<thiscall_t<void, mmPlayer*, i32&, i32&>>(0x404890, this, arg1, arg2);
}

i32 mmPlayer::GetCurrentGameCamIndex()
{
    return stub<thiscall_t<i32, mmPlayer*>>(0x4046F0, this);
}

i32 mmPlayer::GetCurrentXCamIndex()
{
    return stub<thiscall_t<i32, mmPlayer*>>(0x404700, this);
}

i32 mmPlayer::GetNextCycleCamIndex()
{
    return stub<thiscall_t<i32, mmPlayer*>>(0x4046B0, this);
}

i32 mmPlayer::GetNextCycleXCamIndex()
{
    return stub<thiscall_t<i32, mmPlayer*>>(0x4046D0, this);
}

void mmPlayer::SetCamera(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmPlayer*, i32, i32>>(0x404710, this, arg1, arg2);
}

class camCarCS* mmPlayer::GetCurrentCameraPtr()
{
    return stub<thiscall_t<class camCarCS*, mmPlayer*>>(0x4048E0, this);
}

void mmPlayer::InitSpeechAudio(char* arg1)
{
    return stub<thiscall_t<void, mmPlayer*, char*>>(0x4040B0, this, arg1);
}

f32 playerFilterSteering(f32 arg1)
{
    return stub<cdecl_t<f32, f32>>(0x404C70, arg1);
}

define_dummy_symbol(mmgame_player);
