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

#include "caraudiocontainer.h"

vehCarAudioContainer::vehCarAudioContainer()
{
    unimplemented();
}

vehCarAudioContainer::vehCarAudioContainer(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4)
{
    unimplemented();
}

vehCarAudioContainer::~vehCarAudioContainer()
{
    unimplemented();
}

class AudImpact* vehCarAudioContainer::GetAudImpactPtr()
{
    return stub<thiscall_t<class AudImpact*, vehCarAudioContainer*>>(0x4D1730, this);
}

class vehCarAudio* vehCarAudioContainer::GetCarAudioPtr()
{
    return stub<thiscall_t<class vehCarAudio*, vehCarAudioContainer*>>(0x4D1770, this);
}

class vehNitroCarAudio* vehCarAudioContainer::GetNitroCarAudioPtr()
{
    return stub<thiscall_t<class vehNitroCarAudio*, vehCarAudioContainer*>>(0x4D1780, this);
}

class vehPoliceCarAudio* vehCarAudioContainer::GetPoliceCarAudioPtr()
{
    return stub<thiscall_t<class vehPoliceCarAudio*, vehCarAudioContainer*>>(0x4D1790, this);
}

class vehSemiCarAudio* vehCarAudioContainer::GetSemiCarAudioPtr()
{
    return stub<thiscall_t<class vehSemiCarAudio*, vehCarAudioContainer*>>(0x4D17A0, this);
}

void vehCarAudioContainer::Init(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4)
{
    return stub<thiscall_t<void, vehCarAudioContainer*, char const*, class vehCarSim*, class vehCarDamage*, i32>>(
        0x4D11D0, this, arg1, arg2, arg3, arg4);
}

void vehCarAudioContainer::InitNitro(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4)
{
    return stub<thiscall_t<void, vehCarAudioContainer*, char const*, class vehCarSim*, class vehCarDamage*, i32>>(
        0x4D14E0, this, arg1, arg2, arg3, arg4);
}

void vehCarAudioContainer::InitPolice(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4)
{
    return stub<thiscall_t<void, vehCarAudioContainer*, char const*, class vehCarSim*, class vehCarDamage*, i32>>(
        0x4D12E0, this, arg1, arg2, arg3, arg4);
}

void vehCarAudioContainer::InitSemi(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4)
{
    return stub<thiscall_t<void, vehCarAudioContainer*, char const*, class vehCarSim*, class vehCarDamage*, i32>>(
        0x4D13D0, this, arg1, arg2, arg3, arg4);
}

bool vehCarAudioContainer::Is3D()
{
    return stub<thiscall_t<bool, vehCarAudioContainer*>>(0x4D16C0, this);
}

bool vehCarAudioContainer::IsAirBorne()
{
    return stub<thiscall_t<bool, vehCarAudioContainer*>>(0x4D16F0, this);
}

bool vehCarAudioContainer::IsPlayer()
{
    return stub<thiscall_t<bool, vehCarAudioContainer*>>(0x4D17B0, this);
}

void vehCarAudioContainer::PlayHorn()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D17C0, this);
}

void vehCarAudioContainer::PlayNitro()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D1890, this);
}

void vehCarAudioContainer::RemoveNetVehicleAudio()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D18D0, this);
}

void vehCarAudioContainer::Reset()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D19C0, this);
}

void vehCarAudioContainer::Set2DPan(f32 arg1)
{
    return stub<thiscall_t<void, vehCarAudioContainer*, f32>>(0x4D1660, this, arg1);
}

void vehCarAudioContainer::Set3D(bool arg1)
{
    return stub<thiscall_t<void, vehCarAudioContainer*, bool>>(0x4D1840, this, arg1);
}

void vehCarAudioContainer::SilenceEngine(i32 arg1)
{
    return stub<thiscall_t<void, vehCarAudioContainer*, i32>>(0x4D1910, this, arg1);
}

void vehCarAudioContainer::StartSiren()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D18B0, this);
}

void vehCarAudioContainer::StopHorn()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D1800, this);
}

void vehCarAudioContainer::StopNitro()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D18A0, this);
}

void vehCarAudioContainer::StopSiren()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D18C0, this);
}

void vehCarAudioContainer::Update()
{
    return stub<thiscall_t<void, vehCarAudioContainer*>>(0x4D1980, this);
}

void vehCarAudioContainer::DeallocateStatics()
{
    return stub<cdecl_t<void>>(0x4D1020);
}

void vehCarAudioContainer::InitStatics()
{
    return stub<cdecl_t<void>>(0x4D0FF0);
}

bool vehCarAudioContainer::IsPolice(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x4D1A70, arg1);
}

bool vehCarAudioContainer::IsSemiOrBus(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x4D1A00, arg1);
}

void vehCarAudioContainer::RegisterTypes(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x4D0CB0, arg1);
}

void vehCarAudioContainer::SetSirenCSVName(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x4D0C80, arg1);
}

void vehCarAudioContainer::RegisterPoliceNames(class Stream* arg1, char* arg2)
{
    return stub<cdecl_t<void, class Stream*, char*>>(0x4D0F10, arg1, arg2);
}

void vehCarAudioContainer::RegisterSemiNames(class Stream* arg1, char* arg2)
{
    return stub<cdecl_t<void, class Stream*, char*>>(0x4D0E30, arg1, arg2);
}

define_dummy_symbol(vehicle_caraudiocontainer);
