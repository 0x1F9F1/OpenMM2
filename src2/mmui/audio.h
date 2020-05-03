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

#pragma once

#include "optionsbase.h"

/*
    mmui:audio

    0x4F7AA0 | public: __thiscall AudioOptions::AudioOptions(int) | ??0AudioOptions@@QAE@H@Z
    0x4F86D0 | public: virtual __thiscall AudioOptions::~AudioOptions(void) | ??1AudioOptions@@UAE@XZ
    0x4F8750 | public: virtual void __thiscall AudioOptions::PreSetup(void) | ?PreSetup@AudioOptions@@UAEXXZ
    0x4F87A0 | public: void __thiscall AudioOptions::SetSFXVolume(void) | ?SetSFXVolume@AudioOptions@@QAEXXZ
    0x4F8800 | public: void __thiscall AudioOptions::SetMusicVolume(void) | ?SetMusicVolume@AudioOptions@@QAEXXZ
    0x4F8860 | public: void __thiscall AudioOptions::SetBalance(void) | ?SetBalance@AudioOptions@@QAEXXZ
    0x4F88D0 | public: void __thiscall AudioOptions::SetQuality(void) | ?SetQuality@AudioOptions@@QAEXXZ
    0x4F8950 | public: void __thiscall AudioOptions::SetStereoFX(void) | ?SetStereoFX@AudioOptions@@QAEXXZ
    0x4F89A0 | public: virtual void __thiscall AudioOptions::StoreCurrentSetup(void) | ?StoreCurrentSetup@AudioOptions@@UAEXXZ
    0x4F89B0 | public: virtual void __thiscall AudioOptions::ResetDefaultAction(void) | ?ResetDefaultAction@AudioOptions@@UAEXXZ
    0x4F8A90 | public: virtual void __thiscall AudioOptions::CancelAction(void) | ?CancelAction@AudioOptions@@UAEXXZ
    0x4F8B20 | public: virtual void __thiscall AudioOptions::DoneAction(void) | ?DoneAction@AudioOptions@@UAEXXZ
    0x4F8B30 | public: void __thiscall AudioOptions::SetAudioState(void) | ?SetAudioState@AudioOptions@@QAEXXZ
    0x4F8CB0 | public: void __thiscall AudioOptions::SetMusic(void) | ?SetMusic@AudioOptions@@QAEXXZ
    0x4F8CD0 | public: void __thiscall AudioOptions::SetAmbient(void) | ?SetAmbient@AudioOptions@@QAEXXZ
    0x4F8D00 | public: void __thiscall AudioOptions::SetSoundFX(void) | ?SetSoundFX@AudioOptions@@QAEXXZ
    0x4F8D20 | public: void __thiscall AudioOptions::SetCommentary(void) | ?SetCommentary@AudioOptions@@QAEXXZ
    0x4F8D50 | public: int __thiscall AudioOptions::FindDevice(char *) | ?FindDevice@AudioOptions@@QAEHPAD@Z
    0x4F8DD0 | public: char * __thiscall AudioOptions::GetCurrentDeviceName(void) | ?GetCurrentDeviceName@AudioOptions@@QAEPADXZ
    0x4F8DF0 | public: void __thiscall AudioOptions::ResetStereo(void) | ?ResetStereo@AudioOptions@@QAEXXZ
    0x4F8E10 | public: void __thiscall AudioOptions::ResetSoundFX(void) | ?ResetSoundFX@AudioOptions@@QAEXXZ
    0x4F8E40 | public: void __thiscall AudioOptions::ResetMusic(void) | ?ResetMusic@AudioOptions@@QAEXXZ
    0x4F8E70 | public: void __thiscall AudioOptions::ResetAmbient(void) | ?ResetAmbient@AudioOptions@@QAEXXZ
    0x4F8EA0 | public: void __thiscall AudioOptions::ResetSoundQuality(void) | ?ResetSoundQuality@AudioOptions@@QAEXXZ
    0x4F8EE0 | public: void __thiscall AudioOptions::ResetCommentary(void) | ?ResetCommentary@AudioOptions@@QAEXXZ
    0x4F8F00 | public: void __thiscall AudioOptions::SetDevice(int) | ?SetDevice@AudioOptions@@QAEXH@Z
    0x4F8FA0 | public: void __thiscall AudioOptions::ToggleMusic(void) | ?ToggleMusic@AudioOptions@@QAEXXZ
    0x4F9090 | public: void __thiscall AudioOptions::ToggleAmbient(void) | ?ToggleAmbient@AudioOptions@@QAEXXZ
    0x4F90D0 | public: void __thiscall AudioOptions::LoadUIMusicCSV(char *) | ?LoadUIMusicCSV@AudioOptions@@QAEXPAD@Z
    0x4F91C0 | public: void __thiscall AudioOptions::FocusDescription(int,int) | ?FocusDescription@AudioOptions@@QAEXHH@Z
    public: virtual void * __thiscall AudioOptions::`vector deleting destructor'(unsigned int) | ??_EAudioOptions@@UAEPAXI@Z
    0x4F9310 | public: virtual void * __thiscall AudioOptions::`scalar deleting destructor'(unsigned int) | ??_GAudioOptions@@UAEPAXI@Z
    0x5B3D9C | const AudioOptions::`vftable' | ??_7AudioOptions@@6B@
*/

class AudioOptions : public OptionsBase
{
    // const AudioOptions::`vftable' @ 0x5B3D9C

public:
    // 0x4F7AA0 | ??0AudioOptions@@QAE@H@Z
    AudioOptions(i32 arg1);

    // 0x4F9310 | ??_GAudioOptions@@UAEPAXI@Z
    // 0x4F86D0 | ??1AudioOptions@@UAE@XZ
    ~AudioOptions() override;

    // 0x4F8A90 | ?CancelAction@AudioOptions@@UAEXXZ
    void CancelAction() override;

    // 0x4F8B20 | ?DoneAction@AudioOptions@@UAEXXZ
    void DoneAction() override;

    // 0x4F8D50 | ?FindDevice@AudioOptions@@QAEHPAD@Z
    i32 FindDevice(char* arg1);

    // 0x4F91C0 | ?FocusDescription@AudioOptions@@QAEXHH@Z
    void FocusDescription(i32 arg1, i32 arg2);

    // 0x4F8DD0 | ?GetCurrentDeviceName@AudioOptions@@QAEPADXZ
    char* GetCurrentDeviceName();

    // 0x4F90D0 | ?LoadUIMusicCSV@AudioOptions@@QAEXPAD@Z
    void LoadUIMusicCSV(char* arg1);

    // 0x4F8750 | ?PreSetup@AudioOptions@@UAEXXZ
    void PreSetup() override;

    // 0x4F8E70 | ?ResetAmbient@AudioOptions@@QAEXXZ
    void ResetAmbient();

    // 0x4F8EE0 | ?ResetCommentary@AudioOptions@@QAEXXZ
    void ResetCommentary();

    // 0x4F89B0 | ?ResetDefaultAction@AudioOptions@@UAEXXZ
    void ResetDefaultAction() override;

    // 0x4F8E40 | ?ResetMusic@AudioOptions@@QAEXXZ
    void ResetMusic();

    // 0x4F8E10 | ?ResetSoundFX@AudioOptions@@QAEXXZ
    void ResetSoundFX();

    // 0x4F8EA0 | ?ResetSoundQuality@AudioOptions@@QAEXXZ
    void ResetSoundQuality();

    // 0x4F8DF0 | ?ResetStereo@AudioOptions@@QAEXXZ
    void ResetStereo();

    // 0x4F8CD0 | ?SetAmbient@AudioOptions@@QAEXXZ
    void SetAmbient();

    // 0x4F8B30 | ?SetAudioState@AudioOptions@@QAEXXZ
    void SetAudioState();

    // 0x4F8860 | ?SetBalance@AudioOptions@@QAEXXZ
    void SetBalance();

    // 0x4F8D20 | ?SetCommentary@AudioOptions@@QAEXXZ
    void SetCommentary();

    // 0x4F8F00 | ?SetDevice@AudioOptions@@QAEXH@Z
    void SetDevice(i32 arg1);

    // 0x4F8CB0 | ?SetMusic@AudioOptions@@QAEXXZ
    void SetMusic();

    // 0x4F8800 | ?SetMusicVolume@AudioOptions@@QAEXXZ
    void SetMusicVolume();

    // 0x4F88D0 | ?SetQuality@AudioOptions@@QAEXXZ
    void SetQuality();

    // 0x4F87A0 | ?SetSFXVolume@AudioOptions@@QAEXXZ
    void SetSFXVolume();

    // 0x4F8D00 | ?SetSoundFX@AudioOptions@@QAEXXZ
    void SetSoundFX();

    // 0x4F8950 | ?SetStereoFX@AudioOptions@@QAEXXZ
    void SetStereoFX();

    // 0x4F89A0 | ?StoreCurrentSetup@AudioOptions@@UAEXXZ
    void StoreCurrentSetup() override;

    // 0x4F9090 | ?ToggleAmbient@AudioOptions@@QAEXXZ
    void ToggleAmbient();

    // 0x4F8FA0 | ?ToggleMusic@AudioOptions@@QAEXXZ
    void ToggleMusic();
};

check_size(AudioOptions, 0x7378);
