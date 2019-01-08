/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#pragma once

/*
    ageaudio:aud3dambientobject

    0x5150A0 | public: __thiscall Aud3DAmbientObject::Aud3DAmbientObject(void) | ??0Aud3DAmbientObject@@QAE@XZ
    0x5150E0 | public: virtual __thiscall Aud3DAmbientObject::~Aud3DAmbientObject(void) | ??1Aud3DAmbientObject@@UAE@XZ
    0x515180 | public: void __thiscall Aud3DAmbientObject::Init(class Vector3 *,char *) | ?Init@Aud3DAmbientObject@@QAEXPAVVector3@@PAD@Z
    0x5151B0 | public: void __thiscall Aud3DAmbientObject::Reset(void) | ?Reset@Aud3DAmbientObject@@QAEXXZ
    0x5151C0 | public: virtual void __thiscall Aud3DAmbientObject::UpdateAudio(void) | ?UpdateAudio@Aud3DAmbientObject@@UAEXXZ
    0x515250 | public: int __thiscall Aud3DAmbientObject::UpdateAudio(float) | ?UpdateAudio@Aud3DAmbientObject@@QAEHM@Z
    0x5152B0 | private: void __thiscall Aud3DAmbientObject::UpdateSoundData(void) | ?UpdateSoundData@Aud3DAmbientObject@@AAEXXZ
    0x515350 | public: void __thiscall Aud3DAmbientObject::UpdateDoppler(struct tagAud3DAmbientSoundData *) | ?UpdateDoppler@Aud3DAmbientObject@@QAEXPAUtagAud3DAmbientSoundData@@@Z
    0x5153B0 | private: void __thiscall Aud3DAmbientObject::UpdateLoop(struct tagAud3DAmbientSoundData *) | ?UpdateLoop@Aud3DAmbientObject@@AAEXPAUtagAud3DAmbientSoundData@@@Z
    0x515400 | private: void __thiscall Aud3DAmbientObject::UpdateOneShot(struct tagAud3DAmbientSoundData *) | ?UpdateOneShot@Aud3DAmbientObject@@AAEXPAUtagAud3DAmbientSoundData@@@Z
    0x515460 | private: void __thiscall Aud3DAmbientObject::PendOneShot(struct tagAud3DAmbientSoundData *) | ?PendOneShot@Aud3DAmbientObject@@AAEXPAUtagAud3DAmbientSoundData@@@Z
    0x5154B0 | public: void __thiscall Aud3DAmbientObject::PlayOneShot(int) | ?PlayOneShot@Aud3DAmbientObject@@QAEXH@Z
    0x5154D0 | private: void __thiscall Aud3DAmbientObject::PlayOneShot(struct tagAud3DAmbientSoundData *) | ?PlayOneShot@Aud3DAmbientObject@@AAEXPAUtagAud3DAmbientSoundData@@@Z
    0x5155A0 | public: void __thiscall Aud3DAmbientObject::ActivateSound(int) | ?ActivateSound@Aud3DAmbientObject@@QAEXH@Z
    0x5155C0 | public: void __thiscall Aud3DAmbientObject::DeactivateSound(int) | ?DeactivateSound@Aud3DAmbientObject@@QAEXH@Z
    0x515600 | public: struct tagAud3DAmbientSoundData * __thiscall Aud3DAmbientObject::GetSoundDataPtr(int) | ?GetSoundDataPtr@Aud3DAmbientObject@@QAEPAUtagAud3DAmbientSoundData@@H@Z
    0x515610 | public: int __thiscall Aud3DAmbientObject::GetSoundIndex(char *) | ?GetSoundIndex@Aud3DAmbientObject@@QAEHPAD@Z
    0x515690 | public: virtual void __thiscall Aud3DAmbientObject::AssignSounds(void) | ?AssignSounds@Aud3DAmbientObject@@UAEXXZ
    0x5156A0 | private: void __thiscall Aud3DAmbientObject::AssignSounds(struct tagAud3DAmbientSoundData * *,int) | ?AssignSounds@Aud3DAmbientObject@@AAEXPAPAUtagAud3DAmbientSoundData@@H@Z
    0x5156E0 | public: virtual void __thiscall Aud3DAmbientObject::UnAssignSounds(int) | ?UnAssignSounds@Aud3DAmbientObject@@UAEXH@Z
    0x515710 | private: void __thiscall Aud3DAmbientObject::UnAssignSounds(struct tagAud3DAmbientSoundData * *,int) | ?UnAssignSounds@Aud3DAmbientObject@@AAEXPAPAUtagAud3DAmbientSoundData@@H@Z
    0x515750 | public: void __thiscall Aud3DAmbientObject::Load(char *) | ?Load@Aud3DAmbientObject@@QAEXPAD@Z
    0x515870 | private: bool __thiscall Aud3DAmbientObject::ReadSoundData(class Stream *) | ?ReadSoundData@Aud3DAmbientObject@@AAE_NPAVStream@@@Z
    0x515A60 | private: void __thiscall Aud3DAmbientObject::SetSoundData(struct tagAud3DAmbientSoundData *,struct tagAud3DAmbientSoundData *,char *) | ?SetSoundData@Aud3DAmbientObject@@AAEXPAUtagAud3DAmbientSoundData@@0PAD@Z
    0x515AD0 | private: void __thiscall Aud3DAmbientObject::EchoOn(void) | ?EchoOn@Aud3DAmbientObject@@AAEXXZ
    0x515AF0 | private: void __thiscall Aud3DAmbientObject::EchoOn(struct tagAud3DAmbientSoundData * *,int) | ?EchoOn@Aud3DAmbientObject@@AAEXPAPAUtagAud3DAmbientSoundData@@H@Z
    0x515B50 | private: void __thiscall Aud3DAmbientObject::EchoOff(void) | ?EchoOff@Aud3DAmbientObject@@AAEXXZ
    0x515B70 | private: void __thiscall Aud3DAmbientObject::EchoOff(struct tagAud3DAmbientSoundData * *,int) | ?EchoOff@Aud3DAmbientObject@@AAEXPAPAUtagAud3DAmbientSoundData@@H@Z
    0x515BA0 | private: void __thiscall Aud3DAmbientObject::UpdateEcho(void) | ?UpdateEcho@Aud3DAmbientObject@@AAEXXZ
    0x515BB0 | private: void __thiscall Aud3DAmbientObject::UpdateEcho(struct tagAud3DAmbientSoundData * *,int) | ?UpdateEcho@Aud3DAmbientObject@@AAEXPAPAUtagAud3DAmbientSoundData@@H@Z
    0x515BE0 | public: void __thiscall Aud3DAmbientObject::Update(float) | ?Update@Aud3DAmbientObject@@QAEXM@Z
    public: virtual void * __thiscall Aud3DAmbientObject::`scalar deleting destructor'(unsigned int) | ??_GAud3DAmbientObject@@UAEPAXI@Z
    public: virtual void * __thiscall Aud3DAmbientObject::`vector deleting destructor'(unsigned int) | ??_EAud3DAmbientObject@@UAEPAXI@Z
    0x5B4D18 | const Aud3DAmbientObject::`vftable' | ??_7Aud3DAmbientObject@@6B@
*/

#include "hooking.h"
