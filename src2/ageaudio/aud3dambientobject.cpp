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

#include "aud3dambientobject.h"

Aud3DAmbientObject::Aud3DAmbientObject()
{
    unimplemented();
}

Aud3DAmbientObject::~Aud3DAmbientObject()
{
    unimplemented();
}

void Aud3DAmbientObject::ActivateSound(i32 arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, i32>>(0x5155A0, this, arg1);
}

void Aud3DAmbientObject::AssignSounds()
{
    return stub<thiscall_t<void, Aud3DAmbientObject*>>(0x515690, this);
}

void Aud3DAmbientObject::DeactivateSound(i32 arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, i32>>(0x5155C0, this, arg1);
}

struct tagAud3DAmbientSoundData* Aud3DAmbientObject::GetSoundDataPtr(i32 arg1)
{
    return stub<thiscall_t<struct tagAud3DAmbientSoundData*, Aud3DAmbientObject*, i32>>(0x515600, this, arg1);
}

i32 Aud3DAmbientObject::GetSoundIndex(char* arg1)
{
    return stub<thiscall_t<i32, Aud3DAmbientObject*, char*>>(0x515610, this, arg1);
}

void Aud3DAmbientObject::Init(class Vector3* arg1, char* arg2)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, class Vector3*, char*>>(0x515180, this, arg1, arg2);
}

void Aud3DAmbientObject::Load(char* arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, char*>>(0x515750, this, arg1);
}

void Aud3DAmbientObject::PlayOneShot(i32 arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, i32>>(0x5154B0, this, arg1);
}

void Aud3DAmbientObject::Reset()
{
    return stub<thiscall_t<void, Aud3DAmbientObject*>>(0x5151B0, this);
}

void Aud3DAmbientObject::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, i32>>(0x5156E0, this, arg1);
}

void Aud3DAmbientObject::Update(f32 arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, f32>>(0x515BE0, this, arg1);
}

void Aud3DAmbientObject::UpdateAudio()
{
    return stub<thiscall_t<void, Aud3DAmbientObject*>>(0x5151C0, this);
}

i32 Aud3DAmbientObject::UpdateAudio(f32 arg1)
{
    return stub<thiscall_t<i32, Aud3DAmbientObject*, f32>>(0x515250, this, arg1);
}

void Aud3DAmbientObject::UpdateDoppler(struct tagAud3DAmbientSoundData* arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData*>>(0x515350, this, arg1);
}

void Aud3DAmbientObject::AssignSounds(struct tagAud3DAmbientSoundData** arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData**, i32>>(
        0x5156A0, this, arg1, arg2);
}

void Aud3DAmbientObject::EchoOff()
{
    return stub<thiscall_t<void, Aud3DAmbientObject*>>(0x515B50, this);
}

void Aud3DAmbientObject::EchoOff(struct tagAud3DAmbientSoundData** arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData**, i32>>(
        0x515B70, this, arg1, arg2);
}

void Aud3DAmbientObject::EchoOn()
{
    return stub<thiscall_t<void, Aud3DAmbientObject*>>(0x515AD0, this);
}

void Aud3DAmbientObject::EchoOn(struct tagAud3DAmbientSoundData** arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData**, i32>>(
        0x515AF0, this, arg1, arg2);
}

void Aud3DAmbientObject::PendOneShot(struct tagAud3DAmbientSoundData* arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData*>>(0x515460, this, arg1);
}

void Aud3DAmbientObject::PlayOneShot(struct tagAud3DAmbientSoundData* arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData*>>(0x5154D0, this, arg1);
}

bool Aud3DAmbientObject::ReadSoundData(class Stream* arg1)
{
    return stub<thiscall_t<bool, Aud3DAmbientObject*, class Stream*>>(0x515870, this, arg1);
}

void Aud3DAmbientObject::SetSoundData(
    struct tagAud3DAmbientSoundData* arg1, struct tagAud3DAmbientSoundData* arg2, char* arg3)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData*,
        struct tagAud3DAmbientSoundData*, char*>>(0x515A60, this, arg1, arg2, arg3);
}

void Aud3DAmbientObject::UnAssignSounds(struct tagAud3DAmbientSoundData** arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData**, i32>>(
        0x515710, this, arg1, arg2);
}

void Aud3DAmbientObject::UpdateEcho()
{
    return stub<thiscall_t<void, Aud3DAmbientObject*>>(0x515BA0, this);
}

void Aud3DAmbientObject::UpdateEcho(struct tagAud3DAmbientSoundData** arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData**, i32>>(
        0x515BB0, this, arg1, arg2);
}

void Aud3DAmbientObject::UpdateLoop(struct tagAud3DAmbientSoundData* arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData*>>(0x5153B0, this, arg1);
}

void Aud3DAmbientObject::UpdateOneShot(struct tagAud3DAmbientSoundData* arg1)
{
    return stub<thiscall_t<void, Aud3DAmbientObject*, struct tagAud3DAmbientSoundData*>>(0x515400, this, arg1);
}

void Aud3DAmbientObject::UpdateSoundData()
{
    return stub<thiscall_t<void, Aud3DAmbientObject*>>(0x5152B0, this);
}

define_dummy_symbol(ageaudio_aud3dambientobject);
