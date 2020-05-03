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

#include "mixer.h"

void VolumeDW::Set(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, VolumeDW*, f32, f32>>(0x51C100, this, arg1, arg2);
}

u32 VolumeDW::Value()
{
    return stub<thiscall_t<u32, VolumeDW*>>(0x51C1C0, this);
}

MixerCTL::~MixerCTL()
{
    unimplemented();
}

void MixerCTL::AssignCDBalance(f32 arg1)
{
    return stub<thiscall_t<void, MixerCTL*, f32>>(0x51C290, this, arg1);
}

void MixerCTL::AssignCDVolume(f32 arg1)
{
    return stub<thiscall_t<void, MixerCTL*, f32>>(0x51C330, this, arg1);
}

u32 MixerCTL::AssignMixerBalance(f32 arg1, u32 arg2)
{
    return stub<thiscall_t<u32, MixerCTL*, f32, u32>>(0x51C5C0, this, arg1, arg2);
}

u32 MixerCTL::AssignMixerVolume(f32 arg1, u32 arg2)
{
    return stub<thiscall_t<u32, MixerCTL*, f32, u32>>(0x51C370, this, arg1, arg2);
}

void MixerCTL::AssignWaveBalance(f32 arg1)
{
    return stub<thiscall_t<void, MixerCTL*, f32>>(0x51C240, this, arg1);
}

void MixerCTL::AssignWaveVolume(f32 arg1)
{
    return stub<thiscall_t<void, MixerCTL*, f32>>(0x51C310, this, arg1);
}

f32 MixerCTL::GetCDBalance()
{
    return stub<thiscall_t<f32, MixerCTL*>>(0x51C350, this);
}

f32 MixerCTL::GetCDVolume()
{
    return stub<thiscall_t<f32, MixerCTL*>>(0x51C360, this);
}

f32 MixerCTL::GetMixerBalance(u32 arg1)
{
    return stub<thiscall_t<f32, MixerCTL*, u32>>(0x51C870, this, arg1);
}

f32 MixerCTL::GetWaveBalance()
{
    return stub<thiscall_t<f32, MixerCTL*>>(0x51C2F0, this);
}

f32 MixerCTL::GetWaveVolume()
{
    return stub<thiscall_t<f32, MixerCTL*>>(0x51C300, this);
}

u32 MixerCTL::Init()
{
    return stub<thiscall_t<u32, MixerCTL*>>(0x51C1F0, this);
}

void MixerCTL::RefreshAll(u32 arg1)
{
    return stub<thiscall_t<void, MixerCTL*, u32>>(0x51C2E0, this, arg1);
}

void MixerCTL::SetDeviceNum(u32 arg1)
{
    return stub<thiscall_t<void, MixerCTL*, u32>>(0x51CAE0, this, arg1);
}

char* MixerCTL::GetErrorMessage(u32 arg1)
{
    return stub<thiscall_t<char*, MixerCTL*, u32>>(0x51CB00, this, arg1);
}

i32 MixerCTL::WindowProc(struct HWND__* arg1, u32 arg2, u32 arg3, i32 arg4)
{
    return stub<thiscall_t<i32, MixerCTL*, struct HWND__*, u32, u32, i32>>(0x51CBA0, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(mmaudio_mixer);
