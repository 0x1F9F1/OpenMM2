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

#include "cd.h"

enum audObject::AUD_OBJECTSTATUS audCD::GetStatus()
{
    return stub<thiscall_t<enum audObject::AUD_OBJECTSTATUS, audCD*>>(0x5A6EB0, this);
}

bool audCD::PauseResume(bool arg1)
{
    return stub<thiscall_t<bool, audCD*, bool>>(0x5A6F10, this, arg1);
}

bool audCD::Play()
{
    return stub<thiscall_t<bool, audCD*>>(0x5A6EC0, this);
}

bool audCD::SetPan(f32 arg1)
{
    return stub<thiscall_t<bool, audCD*, f32>>(0x5A6F00, this, arg1);
}

bool audCD::SetPitch(f32 arg1)
{
    return stub<thiscall_t<bool, audCD*, f32>>(0x5A6EF0, this, arg1);
}

bool audCD::SetVolume(f32 arg1)
{
    return stub<thiscall_t<bool, audCD*, f32>>(0x5A6EE0, this, arg1);
}

bool audCD::Stop()
{
    return stub<thiscall_t<bool, audCD*>>(0x5A6ED0, this);
}

bool audCD::Update(i32 arg1)
{
    return stub<thiscall_t<bool, audCD*, i32>>(0x5A6EA0, this, arg1);
}

define_dummy_symbol(aud_cd);
