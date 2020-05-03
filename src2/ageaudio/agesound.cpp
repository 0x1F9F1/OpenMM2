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

#include "agesound.h"

AudSoundBase::AudSoundBase()
{
    unimplemented();
}

AudSoundBase::AudSoundBase(class AudSoundBase* arg1)
{
    unimplemented();
}

AudSoundBase::AudSoundBase(u32 arg1, i32 arg2, i16 arg3)
{
    unimplemented();
}

AudSoundBase::~AudSoundBase()
{
    unimplemented();
}

i32 AudSoundBase::AllOneShotLayersPlaying()
{
    return stub<thiscall_t<i32, AudSoundBase*>>(0x50E020, this);
}

void AudSoundBase::Disable3DMode()
{
    return stub<thiscall_t<void, AudSoundBase*>>(0x50E300, this);
}

void AudSoundBase::DisableEchoEffect()
{
    return stub<thiscall_t<void, AudSoundBase*>>(0x50DC20, this);
}

void AudSoundBase::DisableEffect(i32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, i32>>(0x50DC80, this, arg1);
}

void AudSoundBase::Enable3DMode()
{
    return stub<thiscall_t<void, AudSoundBase*>>(0x50E2F0, this);
}

i32 AudSoundBase::GetEffect()
{
    return stub<thiscall_t<i32, AudSoundBase*>>(0x50DC70, this);
}

i32 AudSoundBase::GetNumSoundHandles()
{
    return stub<thiscall_t<i32, AudSoundBase*>>(0x50E310, this);
}

i32 AudSoundBase::GetSoundHandleIndex()
{
    return stub<thiscall_t<i32, AudSoundBase*>>(0x50E2D0, this);
}

void AudSoundBase::GetSubPathAndExtension(char* arg1, char* arg2)
{
    return stub<thiscall_t<void, AudSoundBase*, char*, char*>>(0x50D930, this, arg1, arg2);
}

bool AudSoundBase::IsPlaying()
{
    return stub<thiscall_t<bool, AudSoundBase*>>(0x50E250, this);
}

i32 AudSoundBase::Load(char* arg1, i32 arg2, bool arg3)
{
    return stub<thiscall_t<i32, AudSoundBase*, char*, i32, bool>>(0x50DE90, this, arg1, arg2, arg3);
}

void AudSoundBase::PauseResume(bool arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, bool>>(0x50E230, this, arg1);
}

void AudSoundBase::PlayLoop(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudSoundBase*, f32, f32>>(0x50E150, this, arg1, arg2);
}

void AudSoundBase::PlayOnce(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudSoundBase*, f32, f32>>(0x50E090, this, arg1, arg2);
}

i32 AudSoundBase::ReadyOneShotLayerBuf()
{
    return stub<thiscall_t<i32, AudSoundBase*>>(0x50DFF0, this);
}

void AudSoundBase::SetAllPanning(f32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, f32>>(0x50DB80, this, arg1);
}

void AudSoundBase::SetAllVolumes(f32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, f32>>(0x50DA90, this, arg1);
}

void AudSoundBase::SetDelayTime(f32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, f32>>(0x50DDB0, this, arg1);
}

void AudSoundBase::SetEchoAttenuation(f32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, f32>>(0x50DD70, this, arg1);
}

void AudSoundBase::SetEchoEffect()
{
    return stub<thiscall_t<void, AudSoundBase*>>(0x50DCA0, this);
}

void AudSoundBase::SetEchoFrequency(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, AudSoundBase*, f32, i32>>(0x50DE00, this, arg1, arg2);
}

void AudSoundBase::SetEffect(i32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, i32>>(0x50DC50, this, arg1);
}

void AudSoundBase::SetExtension(char* arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, char*>>(0x50D900, this, arg1);
}

void AudSoundBase::SetFrequency(f32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, f32>>(0x50DAB0, this, arg1);
}

void AudSoundBase::SetPan(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, AudSoundBase*, f32, i32>>(0x50DB30, this, arg1, arg2);
}

void AudSoundBase::SetPlayPosition(u32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, u32>>(0x50E2E0, this, arg1);
}

void AudSoundBase::SetPositionPtr(class Vector3* arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, class Vector3*>>(0x50DE40, this, arg1);
}

void AudSoundBase::SetPriority(i32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, i32>>(0x50DB10, this, arg1);
}

void AudSoundBase::SetRamp(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, AudSoundBase*, f32, f32>>(0x50DDF0, this, arg1, arg2);
}

void AudSoundBase::SetSoundHandleIndex(i32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, i32>>(0x50E2C0, this, arg1);
}

void AudSoundBase::SetSubPath(char* arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, char*>>(0x50D8D0, this, arg1);
}

void AudSoundBase::SetVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, f32>>(0x50DA30, this, arg1);
}

void AudSoundBase::SetupOneShotLayerBuffers(i32 arg1, f32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, AudSoundBase*, i32, f32, i32>>(0x50DFE0, this, arg1, arg2, arg3);
}

void AudSoundBase::Stop()
{
    return stub<thiscall_t<void, AudSoundBase*>>(0x50E1F0, this);
}

void AudSoundBase::Update()
{
    return stub<thiscall_t<void, AudSoundBase*>>(0x50DBE0, this);
}

void AudSoundBase::UpdateEcho()
{
    return stub<thiscall_t<void, AudSoundBase*>>(0x50DBF0, this);
}

void AudSoundBase::DeallocateStatics()
{
    return stub<cdecl_t<void>>(0x50D890);
}

u32 AudSoundBase::Get2DFlags()
{
    return stub<cdecl_t<u32>>(0x50E030);
}

u32 AudSoundBase::Get3DFlags()
{
    return stub<cdecl_t<u32>>(0x50E070);
}

u32 AudSoundBase::GetFreqChange2DFlags()
{
    return stub<cdecl_t<u32>>(0x50E050);
}

u32 AudSoundBase::GetFreqChange3DFlags()
{
    return stub<cdecl_t<u32>>(0x50E080);
}

u32 AudSoundBase::GetSoft2DFlags()
{
    return stub<cdecl_t<u32>>(0x50E040);
}

u32 AudSoundBase::GetSoftFreqChange2DFlags()
{
    return stub<cdecl_t<u32>>(0x50E060);
}

void AudSoundBase::SetAgeAudioManagerPtr(class audManager* arg1)
{
    return stub<cdecl_t<void, class audManager*>>(0x50D570, arg1);
}

void AudSoundBase::SetDefExtension(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x50D9E0, arg1);
}

void AudSoundBase::SetDefSubPath(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x50D9C0, arg1);
}

void AudSoundBase::AutoUpdateParamsOff(i32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, i32>>(0x50DFA0, this, arg1);
}

class audObject* AudSoundBase::CreateDuplicateObject(i32 arg1)
{
    return stub<thiscall_t<class audObject*, AudSoundBase*, i32>>(0x50DA00, this, arg1);
}

void AudSoundBase::SetEchoEffect(i32 arg1)
{
    return stub<thiscall_t<void, AudSoundBase*, i32>>(0x50DD10, this, arg1);
}

AudStream::AudStream(u32 arg1, i32 arg2, i16 arg3)
{
    unimplemented();
}

AudStream::~AudStream()
{
    unimplemented();
}

bool AudStream::PlayOnce(char* arg1)
{
    return stub<thiscall_t<bool, AudStream*, char*>>(0x50E3F0, this, arg1);
}

void AudStream::SetVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudStream*, f32>>(0x50E3D0, this, arg1);
}

AudMidi::AudMidi(class AudManagerBase& arg1)
{
    unimplemented();
}

AudMidi::~AudMidi()
{
    unimplemented();
}

i32 AudMidi::MidiLoad(char* arg1, char* arg2)
{
    return stub<thiscall_t<i32, AudMidi*, char*, char*>>(0x50E620, this, arg1, arg2);
}

void AudMidi::MidiPauseResume(bool arg1)
{
    return stub<thiscall_t<void, AudMidi*, bool>>(0x50E7C0, this, arg1);
}

i32 AudMidi::MidiPlay(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, AudMidi*, f32, f32>>(0x50E720, this, arg1, arg2);
}

void AudMidi::MidiRewind()
{
    return stub<thiscall_t<void, AudMidi*>>(0x50E770, this);
}

void AudMidi::MidiSetTempo(f32 arg1)
{
    return stub<thiscall_t<void, AudMidi*, f32>>(0x50E780, this, arg1);
}

void AudMidi::MidiSetVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudMidi*, f32>>(0x50E7A0, this, arg1);
}

void AudMidi::MidiStop()
{
    return stub<thiscall_t<void, AudMidi*>>(0x50E7E0, this);
}

void AudMidi::MidiUpdate()
{
    return stub<thiscall_t<void, AudMidi*>>(0x50E7F0, this);
}

void AudMidi::MidiZeroPointers()
{
    return stub<thiscall_t<void, AudMidi*>>(0x50E610, this);
}

AudStreamingMusic::AudStreamingMusic(class AudManagerBase& arg1)
{
    unimplemented();
}

AudStreamingMusic::~AudStreamingMusic()
{
    unimplemented();
}

i32 AudStreamingMusic::StreamingMusicInit(char const* arg1)
{
    return stub<thiscall_t<i32, AudStreamingMusic*, char const*>>(0x50E910, this, arg1);
}

i32 AudStreamingMusic::StreamingMusicPlay(i32 arg1, i32 arg2, bool arg3)
{
    return stub<thiscall_t<i32, AudStreamingMusic*, i32, i32, bool>>(0x50EB40, this, arg1, arg2, arg3);
}

void AudStreamingMusic::StreamingMusicReleaseControl()
{
    return stub<thiscall_t<void, AudStreamingMusic*>>(0x50E8A0, this);
}

void AudStreamingMusic::StreamingMusicSetVolume(f32 arg1)
{
    return stub<thiscall_t<void, AudStreamingMusic*, f32>>(0x50EC70, this, arg1);
}

void AudStreamingMusic::StreamingMusicStop()
{
    return stub<thiscall_t<void, AudStreamingMusic*>>(0x50EC50, this);
}

void AudStreamingMusic::StreamingMusicUpdate()
{
    return stub<thiscall_t<void, AudStreamingMusic*>>(0x50EC60, this);
}

define_dummy_symbol(ageaudio_agesound);
