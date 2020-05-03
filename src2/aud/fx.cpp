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

#include "fx.h"

class audFX* audFX::Create(class audManager* arg1, class audObject* arg2)
{
    return stub<thiscall_t<class audFX*, audFX*, class audManager*, class audObject*>>(0x5A3860, this, arg1, arg2);
}

void audFX::Destroy()
{
    return stub<thiscall_t<void, audFX*>>(0x5A3890, this);
}

class EchoEffect* audFX::EnablePCEcho(u32 arg1, i32 arg2)
{
    return stub<thiscall_t<class EchoEffect*, audFX*, u32, i32>>(0x5A38C0, this, arg1, arg2);
}

define_dummy_symbol(aud_fx);
