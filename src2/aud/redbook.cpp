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

#include "redbook.h"

void audRedbook::Destroy()
{
    return stub<thiscall_t<void, audRedbook*>>(0x5A6DF0, this);
}

enum audObject::AUD_OBJECTSTATUS audRedbook::GetStatus()
{
    return stub<thiscall_t<enum audObject::AUD_OBJECTSTATUS, audRedbook*>>(0x5A6C30, this);
}

bool audRedbook::PauseResume(bool arg1)
{
    return stub<thiscall_t<bool, audRedbook*, bool>>(0x5A6D60, this, arg1);
}

bool audRedbook::Play()
{
    return stub<thiscall_t<bool, audRedbook*>>(0x5A6CB0, this);
}

bool audRedbook::SetPan(f32 arg1)
{
    return stub<thiscall_t<bool, audRedbook*, f32>>(0x5A6D50, this, arg1);
}

bool audRedbook::SetPitch(f32 arg1)
{
    return stub<thiscall_t<bool, audRedbook*, f32>>(0x5A6D40, this, arg1);
}

bool audRedbook::SetVolume(f32 arg1)
{
    return stub<thiscall_t<bool, audRedbook*, f32>>(0x5A6D30, this, arg1);
}

bool audRedbook::Stop()
{
    return stub<thiscall_t<bool, audRedbook*>>(0x5A6D00, this);
}

bool audRedbook::Update(i32 arg1)
{
    return stub<thiscall_t<bool, audRedbook*, i32>>(0x5A6C20, this, arg1);
}

define_dummy_symbol(aud_redbook);
