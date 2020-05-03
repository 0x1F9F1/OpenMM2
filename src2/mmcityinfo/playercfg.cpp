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

#include "playercfg.h"

mmPlayerConfig::mmPlayerConfig()
{
    unimplemented();
}

mmPlayerConfig::~mmPlayerConfig()
{
    unimplemented();
}

void mmPlayerConfig::operator=(class mmPlayerConfig& arg1)
{
    return stub<thiscall_t<void, mmPlayerConfig*, class mmPlayerConfig&>>(0x5255D0, this, arg1);
}

void mmPlayerConfig::DefaultAudio()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x526240, this);
}

void mmPlayerConfig::DefaultControls()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x5262F0, this);
}

void mmPlayerConfig::DefaultGraphics()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x5263A0, this);
}

void mmPlayerConfig::DefaultViewSettings()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x526350, this);
}

void mmPlayerConfig::GetAudio()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x5260B0, this);
}

void mmPlayerConfig::GetControls()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x526120, this);
}

void mmPlayerConfig::GetCustom()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x525F10, this);
}

void mmPlayerConfig::GetGraphics()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x526090, this);
}

void mmPlayerConfig::GetViewSettings()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x526200, this);
}

i32 mmPlayerConfig::Load(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerConfig*, char*>>(0x525750, this, arg1);
}

i32 mmPlayerConfig::LoadBinary(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerConfig*, char*>>(0x5257B0, this, arg1);
}

void mmPlayerConfig::Reset()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x526390, this);
}

i32 mmPlayerConfig::Save(char* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmPlayerConfig*, char*, i32>>(0x525C80, this, arg1, arg2);
}

i32 mmPlayerConfig::SaveBinary(char* arg1)
{
    return stub<thiscall_t<i32, mmPlayerConfig*, char*>>(0x525A30, this, arg1);
}

void mmPlayerConfig::SetAudio()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x525D20, this);
}

void mmPlayerConfig::SetControls()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x525E20, this);
}

void mmPlayerConfig::SetCustom()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x525F40, this);
}

void mmPlayerConfig::SetDefaults()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x525C70, this);
}

void mmPlayerConfig::SetGraphics()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x5260A0, this);
}

void mmPlayerConfig::SetViewSettings()
{
    return stub<thiscall_t<void, mmPlayerConfig*>>(0x526220, this);
}

mmGfxCFG::mmGfxCFG()
{
    unimplemented();
}

void mmGfxCFG::Get()
{
    return stub<thiscall_t<void, mmGfxCFG*>>(0x525FB0, this);
}

void mmGfxCFG::Set()
{
    return stub<thiscall_t<void, mmGfxCFG*>>(0x526020, this);
}

define_dummy_symbol(mmcityinfo_playercfg);
