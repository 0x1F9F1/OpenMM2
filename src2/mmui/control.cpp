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

#include "control.h"

void FocusThis()
{
    return stub<cdecl_t<void>>(0x501850);
}

ControlSetup::ControlSetup(i32 arg1)
{
    unimplemented();
}

ControlSetup::~ControlSetup()
{
    unimplemented();
}

void ControlSetup::ActivateDeviceOptions()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502080, this);
}

void ControlSetup::CancelAction()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502700, this);
}

void ControlSetup::ControlSelect()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x5023A0, this);
}

void ControlSetup::CreateDeviceOptions()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x501AE0, this);
}

void ControlSetup::DeactivateAllDeviceOptions()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502020, this);
}

void ControlSetup::DoneAction()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502710, this);
}

void ControlSetup::FocusDescription(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, ControlSetup*, void*, void*>>(0x502720, this, arg1, arg2);
}

void ControlSetup::InitCustomControls()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502470, this);
}

void ControlSetup::LaunchJoyCpl()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502570, this);
}

void ControlSetup::POVCB()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502380, this);
}

void ControlSetup::PreSetup()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x5023F0, this);
}

void ControlSetup::ResetDefaultAction()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502530, this);
}

f32 ControlSetup::SetControlPosition(class uiWidget* arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<f32, ControlSetup*, class uiWidget*, f32, f32>>(0x502360, this, arg1, arg2, arg3);
}

void ControlSetup::SetFFPermissions()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502430, this);
}

void ControlSetup::SetSensitivityCB()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502390, this);
}

void ControlSetup::StoreCurrentSetup()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502520, this);
}

void ControlSetup::Update()
{
    return stub<thiscall_t<void, ControlSetup*>>(0x502500, this);
}

define_dummy_symbol(mmui_control);
