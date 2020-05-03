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

#include "sleep.h"

phSleep::phSleep()
{
    unimplemented();
}

phSleep::phSleep(class phInertialCS* arg1, class phColliderBase* arg2)
{
    unimplemented();
}

phSleep::~phSleep()
{
    unimplemented();
}

void phSleep::Init(class phInertialCS* arg1, class phColliderBase* arg2)
{
    return stub<thiscall_t<void, phSleep*, class phInertialCS*, class phColliderBase*>>(0x46C4F0, this, arg1, arg2);
}

void phSleep::Reset()
{
    return stub<thiscall_t<void, phSleep*>>(0x46C590, this);
}

void phSleep::SendToSleep()
{
    return stub<thiscall_t<void, phSleep*>>(0x46C5A0, this);
}

void phSleep::SetAsleepCB(class datCallback* arg1)
{
    return stub<thiscall_t<void, phSleep*, class datCallback*>>(0x46C8D0, this, arg1);
}

void phSleep::Update()
{
    return stub<thiscall_t<void, phSleep*>>(0x46C5E0, this);
}

void phSleep::WakeUp()
{
    return stub<thiscall_t<void, phSleep*>>(0x46C550, this);
}

void phSleep::WakeUpNextTime()
{
    return stub<thiscall_t<void, phSleep*>>(0x46C580, this);
}

void phSleep::SmoothAngInertia(class phInertialCS& arg1, f32 arg2)
{
    return stub<cdecl_t<void, class phInertialCS&, f32>>(0x46C8E0, arg1, arg2);
}

define_dummy_symbol(phcollide_sleep);
