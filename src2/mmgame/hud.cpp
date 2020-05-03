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

#include "hud.h"

mmHUD::mmHUD()
{
    unimplemented();
}

mmHUD::~mmHUD()
{
    unimplemented();
}

void mmHUD::ActivateDash()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42DAB0, this);
}

void mmHUD::ActivateGold()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42E300, this);
}

void mmHUD::AddPlayer(char const* arg1, u32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, mmHUD*, char const*, u32, i32, i32>>(0x42E290, this, arg1, arg2, arg3, arg4);
}

void mmHUD::Cull()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42DF40, this);
}

void mmHUD::DeactivateDash()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42DAE0, this);
}

void mmHUD::DeactivateGold()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42E310, this);
}

void mmHUD::Disable(i32 arg1)
{
    return stub<thiscall_t<void, mmHUD*, i32>>(0x42D970, this, arg1);
}

void mmHUD::Enable()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42D910, this);
}

void mmHUD::GetPosHdg(class Vector4& arg1)
{
    return stub<thiscall_t<void, mmHUD*, class Vector4&>>(0x42E3C0, this, arg1);
}

void mmHUD::GetTime(char* arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmHUD*, char*, f32>>(0x42E320, this, arg1, arg2);
}

void mmHUD::Init(char* arg1, class mmPlayer* arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmHUD*, char*, class mmPlayer*, i32>>(0x42D5E0, this, arg1, arg2, arg3);
}

i32 mmHUD::IsDashActive()
{
    return stub<thiscall_t<i32, mmHUD*>>(0x42DB10, this);
}

void mmHUD::PlayNetAlert()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42E340, this);
}

void mmHUD::PostChatMessage(char* arg1)
{
    return stub<thiscall_t<void, mmHUD*, char*>>(0x42D280, this, arg1);
}

void mmHUD::PostLapTime(bool arg1)
{
    return stub<thiscall_t<void, mmHUD*, bool>>(0x42E0E0, this, arg1);
}

void mmHUD::PostUpdate()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42DB70, this);
}

void mmHUD::RemovePlayer(u32 arg1)
{
    return stub<thiscall_t<void, mmHUD*, u32>>(0x42E2E0, this, arg1);
}

void mmHUD::ResChange(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmHUD*, i32, i32>>(0x42D2E0, this, arg1, arg2);
}

void mmHUD::Reset()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42DB20, this);
}

void mmHUD::ResetTimers()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42D5A0, this);
}

void mmHUD::SetDash(i32 arg1)
{
    return stub<thiscall_t<void, mmHUD*, i32>>(0x42DA90, this, arg1);
}

void mmHUD::SetMessage(struct LocString* arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmHUD*, struct LocString*, f32, i32>>(0x42E1F0, this, arg1, arg2, arg3);
}

void mmHUD::SetMessage2(struct LocString* arg1)
{
    return stub<thiscall_t<void, mmHUD*, struct LocString*>>(0x42E240, this, arg1);
}

void mmHUD::SetScore(char* arg1)
{
    return stub<thiscall_t<void, mmHUD*, char*>>(0x42E270, this, arg1);
}

void mmHUD::SetScore(u32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmHUD*, u32, i32>>(0x42E2C0, this, arg1, arg2);
}

void mmHUD::SetStandings(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmHUD*, i32, i32>>(0x42E0A0, this, arg1, arg2);
}

void mmHUD::SetTransparency(bool arg1)
{
    return stub<thiscall_t<void, mmHUD*, bool>>(0x42DB60, this, arg1);
}

void mmHUD::SetWPCleared(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmHUD*, i32, i32>>(0x42E1D0, this, arg1, arg2);
}

void mmHUD::ShowSplitTime()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42E040, this);
}

void mmHUD::StartTimers()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42D560, this);
}

void mmHUD::StopTimers()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42D580, this);
}

void mmHUD::Toggle()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42D9D0, this);
}

void mmHUD::ToggleExternalView()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42D9F0, this);
}

void mmHUD::TogglePositionDisplay(i32 arg1)
{
    return stub<thiscall_t<void, mmHUD*, i32>>(0x42E360, this, arg1);
}

void mmHUD::Update()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42DBC0, this);
}

void mmHUD::UpdatePaused()
{
    return stub<thiscall_t<void, mmHUD*>>(0x42DF10, this);
}

mmTimer::mmTimer()
{
    unimplemented();
}

mmTimer::~mmTimer()
{
    unimplemented();
}

f32 mmTimer::GetTime()
{
    return stub<thiscall_t<f32, mmTimer*>>(0x42E4C0, this);
}

void mmTimer::Init(i32 arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmTimer*, i32, f32, i32>>(0x42E490, this, arg1, arg2, arg3);
}

void mmTimer::Reset()
{
    return stub<thiscall_t<void, mmTimer*>>(0x42E5F0, this);
}

void mmTimer::Start()
{
    return stub<thiscall_t<void, mmTimer*>>(0x42E610, this);
}

void mmTimer::StartStop()
{
    return stub<thiscall_t<void, mmTimer*>>(0x42E640, this);
}

void mmTimer::Stop()
{
    return stub<thiscall_t<void, mmTimer*>>(0x42E630, this);
}

void mmTimer::Update()
{
    return stub<thiscall_t<void, mmTimer*>>(0x42E4D0, this);
}

mmArrow::mmArrow()
{
    unimplemented();
}

mmArrow::~mmArrow()
{
    unimplemented();
}

void mmArrow::Init(class Matrix34* arg1)
{
    return stub<thiscall_t<void, mmArrow*, class Matrix34*>>(0x42E770, this, arg1);
}

void mmArrow::Reset()
{
    return stub<thiscall_t<void, mmArrow*>>(0x42E780, this);
}

void mmArrow::SetInterest(class Vector3* arg1)
{
    return stub<thiscall_t<void, mmArrow*, class Vector3*>>(0x42E790, this, arg1);
}

void mmArrow::Update()
{
    return stub<thiscall_t<void, mmArrow*>>(0x42E7F0, this);
}

void mmArrow::ReColorArrow(i32 arg1)
{
    return stub<thiscall_t<void, mmArrow*, i32>>(0x42E7A0, this, arg1);
}

define_dummy_symbol(mmgame_hud);
