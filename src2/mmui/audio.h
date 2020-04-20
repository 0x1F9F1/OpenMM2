/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

struct AudioOptions : OptionsBase
{
public:
    // AudioOptions::`vftable' @ 0x5B3D9C

    // 0x4F7AA0 | ??0AudioOptions@@QAE@H@Z
    inline AudioOptions(int32_t arg1)
    {
        stub<member_func_t<void, AudioOptions, int32_t>>(0x4F7AA0, this, arg1);
    }

    // 0x4F87A0 | ?SetSFXVolume@AudioOptions@@QAEXXZ
    inline void SetSFXVolume()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F87A0, this);
    }

    // 0x4F8800 | ?SetMusicVolume@AudioOptions@@QAEXXZ
    inline void SetMusicVolume()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8800, this);
    }

    // 0x4F8860 | ?SetBalance@AudioOptions@@QAEXXZ
    inline void SetBalance()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8860, this);
    }

    // 0x4F88D0 | ?SetQuality@AudioOptions@@QAEXXZ
    inline void SetQuality()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F88D0, this);
    }

    // 0x4F8950 | ?SetStereoFX@AudioOptions@@QAEXXZ
    inline void SetStereoFX()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8950, this);
    }

    // 0x4F8B30 | ?SetAudioState@AudioOptions@@QAEXXZ
    inline void SetAudioState()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8B30, this);
    }

    // 0x4F8CB0 | ?SetMusic@AudioOptions@@QAEXXZ
    inline void SetMusic()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8CB0, this);
    }

    // 0x4F8CD0 | ?SetAmbient@AudioOptions@@QAEXXZ
    inline void SetAmbient()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8CD0, this);
    }

    // 0x4F8D00 | ?SetSoundFX@AudioOptions@@QAEXXZ
    inline void SetSoundFX()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8D00, this);
    }

    // 0x4F8D20 | ?SetCommentary@AudioOptions@@QAEXXZ
    inline void SetCommentary()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8D20, this);
    }

    // 0x4F8D50 | ?FindDevice@AudioOptions@@QAEHPAD@Z
    inline int32_t FindDevice(char* arg1)
    {
        return stub<member_func_t<int32_t, AudioOptions, char*>>(0x4F8D50, this, arg1);
    }

    // 0x4F8DD0 | ?GetCurrentDeviceName@AudioOptions@@QAEPADXZ
    inline char* GetCurrentDeviceName()
    {
        return stub<member_func_t<char*, AudioOptions>>(0x4F8DD0, this);
    }

    // 0x4F8DF0 | ?ResetStereo@AudioOptions@@QAEXXZ
    inline void ResetStereo()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8DF0, this);
    }

    // 0x4F8E10 | ?ResetSoundFX@AudioOptions@@QAEXXZ
    inline void ResetSoundFX()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8E10, this);
    }

    // 0x4F8E40 | ?ResetMusic@AudioOptions@@QAEXXZ
    inline void ResetMusic()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8E40, this);
    }

    // 0x4F8E70 | ?ResetAmbient@AudioOptions@@QAEXXZ
    inline void ResetAmbient()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8E70, this);
    }

    // 0x4F8EA0 | ?ResetSoundQuality@AudioOptions@@QAEXXZ
    inline void ResetSoundQuality()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8EA0, this);
    }

    // 0x4F8EE0 | ?ResetCommentary@AudioOptions@@QAEXXZ
    inline void ResetCommentary()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8EE0, this);
    }

    // 0x4F8F00 | ?SetDevice@AudioOptions@@QAEXH@Z
    inline void SetDevice(int32_t arg1)
    {
        return stub<member_func_t<void, AudioOptions, int32_t>>(0x4F8F00, this, arg1);
    }

    // 0x4F8FA0 | ?ToggleMusic@AudioOptions@@QAEXXZ
    inline void ToggleMusic()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8FA0, this);
    }

    // 0x4F9090 | ?ToggleAmbient@AudioOptions@@QAEXXZ
    inline void ToggleAmbient()
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F9090, this);
    }

    // 0x4F90D0 | ?LoadUIMusicCSV@AudioOptions@@QAEXPAD@Z
    inline void LoadUIMusicCSV(char* arg1)
    {
        return stub<member_func_t<void, AudioOptions, char*>>(0x4F90D0, this, arg1);
    }

    // 0x4F91C0 | ?FocusDescription@AudioOptions@@QAEXHH@Z
    inline void FocusDescription(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, AudioOptions, int32_t, int32_t>>(0x4F91C0, this, arg1, arg2);
    }

    // 0x4F86D0 | ??1AudioOptions@@UAE@XZ
    inline ~AudioOptions() override
    {
        stub<member_func_t<void, AudioOptions>>(0x4F86D0, this);
    }

    // 0x4F8750 | ?PreSetup@AudioOptions@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8750, this);
    }

    // 0x4F8A90 | ?CancelAction@AudioOptions@@UAEXXZ
    inline void CancelAction() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8A90, this);
    }

    // 0x4F8B20 | ?DoneAction@AudioOptions@@UAEXXZ
    inline void DoneAction() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F8B20, this);
    }

    // 0x4F89B0 | ?ResetDefaultAction@AudioOptions@@UAEXXZ
    inline void ResetDefaultAction() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F89B0, this);
    }

    // 0x4F89A0 | ?StoreCurrentSetup@AudioOptions@@UAEXXZ
    inline void StoreCurrentSetup() override
    {
        return stub<member_func_t<void, AudioOptions>>(0x4F89A0, this);
    }
};
