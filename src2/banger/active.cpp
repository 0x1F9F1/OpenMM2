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

#include "active.h"

dgBangerActive::dgBangerActive()
{
    unimplemented();
}

dgBangerActive::~dgBangerActive()
{
    unimplemented();
}

void dgBangerActive::Attach(class dgBangerInstance* arg1)
{
    return stub<thiscall_t<void, dgBangerActive*, class dgBangerInstance*>>(0x43FDC0, this, arg1);
}

void dgBangerActive::Detach()
{
    return stub<thiscall_t<void, dgBangerActive*>>(0x43FFF0, this);
}

void dgBangerActive::DetachMe()
{
    return stub<thiscall_t<void, dgBangerActive*>>(0x440030, this);
}

class phInertialCS* dgBangerActive::GetICS()
{
    return stub<thiscall_t<class phInertialCS*, dgBangerActive*>>(0x4405C0, this);
}

class lvlInstance* dgBangerActive::GetInst()
{
    return stub<thiscall_t<class lvlInstance*, dgBangerActive*>>(0x43FDB0, this);
}

void dgBangerActive::PostUpdate()
{
    return stub<thiscall_t<void, dgBangerActive*>>(0x4400E0, this);
}

void dgBangerActive::Update()
{
    return stub<thiscall_t<void, dgBangerActive*>>(0x440050, this);
}

dgBangerActiveManager::dgBangerActiveManager()
{
    unimplemented();
}

dgBangerActiveManager::~dgBangerActiveManager()
{
    unimplemented();
}

class dgBangerActive* dgBangerActiveManager::Attach(class dgBangerInstance* arg1)
{
    return stub<thiscall_t<class dgBangerActive*, dgBangerActiveManager*, class dgBangerInstance*>>(
        0x4402C0, this, arg1);
}

void dgBangerActiveManager::Detach(class dgBangerActive* arg1)
{
    return stub<thiscall_t<void, dgBangerActiveManager*, class dgBangerActive*>>(0x440350, this, arg1);
}

class dgBangerActive* dgBangerActiveManager::GetActive(class dgBangerInstance* arg1)
{
    return stub<thiscall_t<class dgBangerActive*, dgBangerActiveManager*, class dgBangerInstance*>>(
        0x440290, this, arg1);
}

void dgBangerActiveManager::Reset()
{
    return stub<thiscall_t<void, dgBangerActiveManager*>>(0x440500, this);
}

void dgBangerActiveManager::Update()
{
    return stub<thiscall_t<void, dgBangerActiveManager*>>(0x4403A0, this);
}

define_dummy_symbol(banger_active);
