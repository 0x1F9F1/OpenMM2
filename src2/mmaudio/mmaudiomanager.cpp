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

#include "mmaudiomanager.h"

AudManager::AudManager()
{
    unimplemented();
}

AudManager::~AudManager()
{
    unimplemented();
}

void AudManager::AssignCDBalance(f32 arg1)
{
    return stub<thiscall_t<void, AudManager*, f32>>(0x519880, this, arg1);
}

void AudManager::AssignCDVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudManager*, f32>>(0x519A30, this, arg1);
}

void AudManager::AssignWaveBalance(f32 arg1)
{
    return stub<thiscall_t<void, AudManager*, f32>>(0x519610, this, arg1);
}

void AudManager::AssignWaveVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudManager*, f32>>(0x5197D0, this, arg1);
}

bool AudManager::CDIsEnabled()
{
    return stub<thiscall_t<bool, AudManager*>>(0x5198A0, this);
}

bool AudManager::CDIsPlaying()
{
    return stub<thiscall_t<bool, AudManager*>>(0x519900, this);
}

bool AudManager::CDMusicOn()
{
    return stub<thiscall_t<bool, AudManager*>>(0x5198F0, this);
}

u8 AudManager::CheckCDFile(char* arg1)
{
    return stub<thiscall_t<u8, AudManager*, char*>>(0x519A50, this, arg1);
}

u32 AudManager::DSound3DEnabled()
{
    return stub<thiscall_t<u32, AudManager*>>(0x519BE0, this);
}

bool AudManager::DeviceValid()
{
    return stub<thiscall_t<bool, AudManager*>>(0x5196D0, this);
}

void AudManager::Disable(i16 arg1, i16 arg2)
{
    return stub<thiscall_t<void, AudManager*, i16, i16>>(0x519860, this, arg1, arg2);
}

u32 AudManager::EAXEnabled()
{
    return stub<thiscall_t<u32, AudManager*>>(0x519BD0, this);
}

void AudManager::Enable(char* arg1, i16 arg2, i16 arg3)
{
    return stub<thiscall_t<void, AudManager*, char*, i16, i16>>(0x519850, this, arg1, arg2, arg3);
}

bool AudManager::EnableCD()
{
    return stub<thiscall_t<bool, AudManager*>>(0x5198C0, this);
}

char* AudManager::GetActiveDeviceName()
{
    return stub<thiscall_t<char*, AudManager*>>(0x519730, this);
}

class mmCCSpeech* AudManager::GetCCSpeechPtr()
{
    return stub<thiscall_t<class mmCCSpeech*, AudManager*>>(0x5195A0, this);
}

u32 AudManager::GetCDPosition(u8* arg1, u8* arg2, u8* arg3, u8* arg4)
{
    return stub<thiscall_t<u32, AudManager*, u8*, u8*, u8*, u8*>>(0x5199D0, this, arg1, arg2, arg3, arg4);
}

i32 AudManager::GetCDTrackNum()
{
    return stub<thiscall_t<i32, AudManager*>>(0x519920, this);
}

char** AudManager::GetDeviceNames()
{
    return stub<thiscall_t<char**, AudManager*>>(0x5196F0, this);
}

void AudManager::GetEAXAll(struct EAX_REVERBPROPERTIES* arg1)
{
    return stub<thiscall_t<void, AudManager*, struct EAX_REVERBPROPERTIES*>>(0x519C30, this, arg1);
}

f32 AudManager::GetEAXDamping()
{
    return stub<thiscall_t<f32, AudManager*>>(0x519CB0, this);
}

f32 AudManager::GetEAXDecayTime()
{
    return stub<thiscall_t<f32, AudManager*>>(0x519C90, this);
}

u32 AudManager::GetEAXEnvironmet()
{
    return stub<thiscall_t<u32, AudManager*>>(0x519C50, this);
}

f32 AudManager::GetEAXReverbVolume()
{
    return stub<thiscall_t<f32, AudManager*>>(0x519C70, this);
}

struct IDirectSound* AudManager::GetIDirectSoundInterfacePtr()
{
    return stub<thiscall_t<struct IDirectSound*, AudManager*>>(0x519CC0, this);
}

class MixerCTL* AudManager::GetMixerPtr()
{
    return stub<thiscall_t<class MixerCTL*, AudManager*>>(0x519790, this);
}

u32 AudManager::GetNum3DHalBufs()
{
    return stub<thiscall_t<u32, AudManager*>>(0x519780, this);
}

i32 AudManager::GetNumCDTracks()
{
    return stub<thiscall_t<i32, AudManager*>>(0x519A10, this);
}

i32 AudManager::GetNumDevices()
{
    return stub<thiscall_t<i32, AudManager*>>(0x519710, this);
}

class mmRaceSpeech* AudManager::GetRaceSpeechPtr()
{
    return stub<thiscall_t<class mmRaceSpeech*, AudManager*>>(0x519580, this);
}

u32 AudManager::GetSamplesPerSecond()
{
    return stub<thiscall_t<u32, AudManager*>>(0x519630, this);
}

class mmSpeechContainer* AudManager::GetSpeechContainerPtr()
{
    return stub<thiscall_t<class mmSpeechContainer*, AudManager*>>(0x519570, this);
}

void AudManager::InitSpeech(i32 arg1, i32 arg2, char* arg3)
{
    return stub<thiscall_t<void, AudManager*, i32, i32, char*>>(0x5194F0, this, arg1, arg2, arg3);
}

f32 AudManager::Log(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<f32, AudManager*, f32, f32>>(0x519CE0, this, arg1, arg2);
}

bool AudManager::MinInstall()
{
    return stub<thiscall_t<bool, AudManager*>>(0x519470, this);
}

i32 AudManager::PlayCDTrack(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, AudManager*, i32, i32>>(0x519960, this, arg1, arg2);
}

i32 AudManager::PlayCDTrack(i32 arg1, u8 arg2, u8 arg3, u8 arg4, i32 arg5)
{
    return stub<thiscall_t<i32, AudManager*, i32, u8, u8, u8, i32>>(0x519990, this, arg1, arg2, arg3, arg4, arg5);
}

void AudManager::SetAudHeadPtr(class AudHead* arg1)
{
    return stub<thiscall_t<void, AudManager*, class AudHead*>>(0x519830, this, arg1);
}

void AudManager::SetBitDepthAndSampleRate(i32 arg1, u32 arg2)
{
    return stub<thiscall_t<void, AudManager*, i32, u32>>(0x519640, this, arg1, arg2);
}

void AudManager::SetCDPlayMode(u8 arg1)
{
    return stub<thiscall_t<void, AudManager*, u8>>(0x519B10, this, arg1);
}

i32 AudManager::SetEAXDamping(f32 arg1)
{
    return stub<thiscall_t<i32, AudManager*, f32>>(0x519CA0, this, arg1);
}

i32 AudManager::SetEAXDecayTime(f32 arg1)
{
    return stub<thiscall_t<i32, AudManager*, f32>>(0x519C80, this, arg1);
}

i32 AudManager::SetEAXEnvironmet(u32 arg1)
{
    return stub<thiscall_t<i32, AudManager*, u32>>(0x519C40, this, arg1);
}

i32 AudManager::SetEAXPreset(struct EAX_REVERBPROPERTIES* arg1)
{
    return stub<thiscall_t<i32, AudManager*, struct EAX_REVERBPROPERTIES*>>(0x519C20, this, arg1);
}

i32 AudManager::SetEAXPreset(u32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<i32, AudManager*, u32, f32, f32, f32>>(0x519C10, this, arg1, arg2, arg3, arg4);
}

i32 AudManager::SetEAXReverbVolume(f32 arg1)
{
    return stub<thiscall_t<i32, AudManager*, f32>>(0x519C60, this, arg1);
}

void AudManager::SetHwnd(struct HWND__* arg1)
{
    return stub<thiscall_t<void, AudManager*, struct HWND__*>>(0x519B30, this, arg1);
}

void AudManager::SetNumChannels(i32 arg1)
{
    return stub<thiscall_t<void, AudManager*, i32>>(0x519870, this, arg1);
}

void AudManager::SetSampleSharing(i16 arg1)
{
    return stub<thiscall_t<void, AudManager*, i16>>(0x5195F0, this, arg1);
}

i16 AudManager::SharingSamples()
{
    return stub<thiscall_t<i16, AudManager*>>(0x5195E0, this);
}

void AudManager::StopCD()
{
    return stub<thiscall_t<void, AudManager*>>(0x519940, this);
}

i16 AudManager::Supports16Bit()
{
    return stub<thiscall_t<i16, AudManager*>>(0x519750, this);
}

void AudManager::Update()
{
    return stub<thiscall_t<void, AudManager*>>(0x519D00, this);
}

u32 AudManager::CreateListenerSoundObj()
{
    return stub<thiscall_t<u32, AudManager*>>(0x519BF0, this);
}

class CReverb* AudManager::GetListenerEAXObj()
{
    return stub<thiscall_t<class CReverb*, AudManager*>>(0x519C00, this);
}

void AudMinimizeApp()
{
    return stub<cdecl_t<void>>(0x519B50);
}

void AudRestoreApp()
{
    return stub<cdecl_t<void>>(0x519B90);
}

define_dummy_symbol(mmaudio_mmaudiomanager);
