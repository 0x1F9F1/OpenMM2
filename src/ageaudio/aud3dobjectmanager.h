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
    ageaudio:aud3dobjectmanager

    0x50F360 | public: __thiscall Aud3DObjectManager::Aud3DObjectManager(int) | ??0Aud3DObjectManager@@QAE@H@Z
    0x50F440 | public: virtual __thiscall Aud3DObjectManager::~Aud3DObjectManager(void) | ??1Aud3DObjectManager@@UAE@XZ
    0x50F650 | public: void __thiscall Aud3DObjectManager::InitAmbObjContainer(char *) | ?InitAmbObjContainer@Aud3DObjectManager@@QAEXPAD@Z
    0x50F6E0 | public: int __thiscall Aud3DObjectManager::Add(class Aud3DObject *) | ?Add@Aud3DObjectManager@@QAEHPAVAud3DObject@@@Z
    0x50F760 | public: void __thiscall Aud3DObjectManager::Remove(class Aud3DObject *,int) | ?Remove@Aud3DObjectManager@@QAEXPAVAud3DObject@@H@Z
    0x50F790 | public: int __thiscall Aud3DObjectManager::FindGreatestDistance(class Aud3DObject *) | ?FindGreatestDistance@Aud3DObjectManager@@QAEHPAVAud3DObject@@@Z
    0x50F8A0 | public: int __thiscall Aud3DObjectManager::FindUnusedSlot(void) | ?FindUnusedSlot@Aud3DObjectManager@@QAEHXZ
    0x50F8D0 | public: void __thiscall Aud3DObjectManager::Process3D(bool) | ?Process3D@Aud3DObjectManager@@QAEX_N@Z
    0x50F910 | public: void __thiscall Aud3DObjectManager::Update(float) | ?Update@Aud3DObjectManager@@QAEXM@Z
    0x50F9C0 | public: void __thiscall Aud3DObjectManager::EchoOn(float) | ?EchoOn@Aud3DObjectManager@@QAEXM@Z
    0x50F9E0 | public: void __thiscall Aud3DObjectManager::EchoOff(void) | ?EchoOff@Aud3DObjectManager@@QAEXXZ
    0x50F9F0 | public: class AudSoundBase * __thiscall Aud3DObjectManager::GetSample(int,int) | ?GetSample@Aud3DObjectManager@@QAEPAVAudSoundBase@@HH@Z
    0x50FA20 | public: void __thiscall Aud3DObjectManager::SetNumScreenSplits(int) | ?SetNumScreenSplits@Aud3DObjectManager@@QAEXH@Z
    0x50FAB0 | private: char * __thiscall Aud3DObjectManager::CatName(char *,int,int) | ?CatName@Aud3DObjectManager@@AAEPADPADHH@Z
    0x50FCB0 | public: int __thiscall Aud3DObjectManager::AllocateSample(char *,unsigned long) | ?AllocateSample@Aud3DObjectManager@@QAEHPADK@Z
    0x50FE20 | public: int __thiscall Aud3DObjectManager::AllocateSample(char *,int,unsigned long) | ?AllocateSample@Aud3DObjectManager@@QAEHPADHK@Z
    public: virtual void __thiscall Aud3DObjectManager::AddWidgets(class bkBank &) | ?AddWidgets@Aud3DObjectManager@@UAEXAAVbkBank@@@Z
    public: void __thiscall Aud3DObjectManager::ToggleEcho(void) | ?ToggleEcho@Aud3DObjectManager@@QAEXXZ
    0x50FF90 | public: class Aud3DSampleWrapper * __thiscall Aud3DObjectManager::GetSampleWrapper(int) | ?GetSampleWrapper@Aud3DObjectManager@@QAEPAVAud3DSampleWrapper@@H@Z
    0x50FFB0 | public: int __thiscall Aud3DObjectManager::QueueInCopVoice(float) | ?QueueInCopVoice@Aud3DObjectManager@@QAEHM@Z
    0x50FFC0 | public: int __thiscall Aud3DObjectManager::PlayCopVoice(void) | ?PlayCopVoice@Aud3DObjectManager@@QAEHXZ
    0x50FFD0 | public: int __thiscall Aud3DObjectManager::GetClosestCop(void) | ?GetClosestCop@Aud3DObjectManager@@QAEHXZ
    0x50FFE0 | public: class Matrix34 * * __thiscall Aud3DObjectManager::GetLeftHeadPtrPtr(void) | ?GetLeftHeadPtrPtr@Aud3DObjectManager@@QAEPAPAVMatrix34@@XZ
    0x510000 | public: class Matrix34 * * __thiscall Aud3DObjectManager::GetRightHeadPtrPtr(void) | ?GetRightHeadPtrPtr@Aud3DObjectManager@@QAEPAPAVMatrix34@@XZ
    0x510020 | public: void __thiscall Aud3DObjectManager::SetLeftHeadPtr(class Matrix34 *,int) | ?SetLeftHeadPtr@Aud3DObjectManager@@QAEXPAVMatrix34@@H@Z
    0x510040 | public: void __thiscall Aud3DObjectManager::SetRightHeadPtr(class Matrix34 *,int) | ?SetRightHeadPtr@Aud3DObjectManager@@QAEXPAVMatrix34@@H@Z
    public: void __thiscall Aud3DObjectManager::DebugReset(void) | ?DebugReset@Aud3DObjectManager@@QAEXXZ
    public: virtual void * __thiscall Aud3DObjectManager::`vector deleting destructor'(unsigned int) | ??_EAud3DObjectManager@@UAEPAXI@Z
    0x510060 | public: virtual void * __thiscall Aud3DObjectManager::`scalar deleting destructor'(unsigned int) | ??_GAud3DObjectManager@@UAEPAXI@Z
    0x5B4C58 | const Aud3DObjectManager::`vftable' | ??_7Aud3DObjectManager@@6B@
    0x6B1494 | class Aud3DObjectManager * AUD3DOBJMGRPTR | ?AUD3DOBJMGRPTR@@3PAVAud3DObjectManager@@A
*/

#include "hooking.h"
