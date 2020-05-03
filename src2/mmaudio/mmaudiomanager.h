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

#include "ageaudio/ageaudio.h"

/*
    mmaudio:mmaudiomanager

    0x519290 | public: __thiscall AudManager::AudManager(void) | ??0AudManager@@QAE@XZ
    0x5192D0 | public: virtual __thiscall AudManager::~AudManager(void) | ??1AudManager@@UAE@XZ
    public: void __thiscall AudManager::Init(int,int,int,char *,short,short) | ?Init@AudManager@@QAEXHHHPADFF@Z
    0x519470 | public: bool __thiscall AudManager::MinInstall(void) | ?MinInstall@AudManager@@QAE_NXZ
    0x5194F0 | public: void __thiscall AudManager::InitSpeech(int,int,char *) | ?InitSpeech@AudManager@@QAEXHHPAD@Z
    0x519570 | public: class mmSpeechContainer * __thiscall AudManager::GetSpeechContainerPtr(void) | ?GetSpeechContainerPtr@AudManager@@QAEPAVmmSpeechContainer@@XZ
    0x519580 | public: class mmRaceSpeech * __thiscall AudManager::GetRaceSpeechPtr(void) | ?GetRaceSpeechPtr@AudManager@@QAEPAVmmRaceSpeech@@XZ
    0x5195A0 | public: class mmCCSpeech * __thiscall AudManager::GetCCSpeechPtr(void) | ?GetCCSpeechPtr@AudManager@@QAEPAVmmCCSpeech@@XZ
    0x5195E0 | public: short __thiscall AudManager::SharingSamples(void) | ?SharingSamples@AudManager@@QAEFXZ
    0x5195F0 | public: void __thiscall AudManager::SetSampleSharing(short) | ?SetSampleSharing@AudManager@@QAEXF@Z
    0x519610 | public: void __thiscall AudManager::AssignWaveBalance(float) | ?AssignWaveBalance@AudManager@@QAEXM@Z
    0x519630 | public: unsigned long __thiscall AudManager::GetSamplesPerSecond(void) | ?GetSamplesPerSecond@AudManager@@QAEKXZ
    0x519640 | public: void __thiscall AudManager::SetBitDepthAndSampleRate(int,unsigned long) | ?SetBitDepthAndSampleRate@AudManager@@QAEXHK@Z
    0x5196D0 | public: bool __thiscall AudManager::DeviceValid(void) | ?DeviceValid@AudManager@@QAE_NXZ
    0x5196F0 | public: char * * __thiscall AudManager::GetDeviceNames(void) | ?GetDeviceNames@AudManager@@QAEPAPADXZ
    0x519710 | public: int __thiscall AudManager::GetNumDevices(void) | ?GetNumDevices@AudManager@@QAEHXZ
    0x519730 | public: char * __thiscall AudManager::GetActiveDeviceName(void) | ?GetActiveDeviceName@AudManager@@QAEPADXZ
    0x519750 | public: short __thiscall AudManager::Supports16Bit(void) | ?Supports16Bit@AudManager@@QAEFXZ
    0x519780 | public: unsigned long __thiscall AudManager::GetNum3DHalBufs(void) | ?GetNum3DHalBufs@AudManager@@QAEKXZ
    0x519790 | public: class MixerCTL * __thiscall AudManager::GetMixerPtr(void) | ?GetMixerPtr@AudManager@@QAEPAVMixerCTL@@XZ
    0x5197D0 | public: void __thiscall AudManager::AssignWaveVolume(float) | ?AssignWaveVolume@AudManager@@QAEXM@Z
    0x519830 | public: void __thiscall AudManager::SetAudHeadPtr(class AudHead *) | ?SetAudHeadPtr@AudManager@@QAEXPAVAudHead@@@Z
    0x519850 | public: void __thiscall AudManager::Enable(char *,short,short) | ?Enable@AudManager@@QAEXPADFF@Z
    0x519860 | public: void __thiscall AudManager::Disable(short,short) | ?Disable@AudManager@@QAEXFF@Z
    0x519870 | public: void __thiscall AudManager::SetNumChannels(int) | ?SetNumChannels@AudManager@@QAEXH@Z
    0x519880 | public: void __thiscall AudManager::AssignCDBalance(float) | ?AssignCDBalance@AudManager@@QAEXM@Z
    0x5198A0 | public: bool __thiscall AudManager::CDIsEnabled(void) | ?CDIsEnabled@AudManager@@QAE_NXZ
    0x5198C0 | public: bool __thiscall AudManager::EnableCD(void) | ?EnableCD@AudManager@@QAE_NXZ
    0x5198F0 | public: bool __thiscall AudManager::CDMusicOn(void) | ?CDMusicOn@AudManager@@QAE_NXZ
    0x519900 | public: bool __thiscall AudManager::CDIsPlaying(void) | ?CDIsPlaying@AudManager@@QAE_NXZ
    0x519920 | public: int __thiscall AudManager::GetCDTrackNum(void) | ?GetCDTrackNum@AudManager@@QAEHXZ
    0x519940 | public: void __thiscall AudManager::StopCD(void) | ?StopCD@AudManager@@QAEXXZ
    0x519960 | public: int __thiscall AudManager::PlayCDTrack(int,int) | ?PlayCDTrack@AudManager@@QAEHHH@Z
    0x519990 | public: int __thiscall AudManager::PlayCDTrack(int,unsigned char,unsigned char,unsigned char,int) | ?PlayCDTrack@AudManager@@QAEHHEEEH@Z
    0x5199D0 | public: unsigned long __thiscall AudManager::GetCDPosition(unsigned char *,unsigned char *,unsigned char *,unsigned char *) | ?GetCDPosition@AudManager@@QAEKPAE000@Z
    0x519A10 | public: int __thiscall AudManager::GetNumCDTracks(void) | ?GetNumCDTracks@AudManager@@QAEHXZ
    0x519A30 | public: void __thiscall AudManager::AssignCDVolume(float) | ?AssignCDVolume@AudManager@@QAEXM@Z
    0x519A50 | public: unsigned char __thiscall AudManager::CheckCDFile(char *) | ?CheckCDFile@AudManager@@QAEEPAD@Z
    0x519B10 | public: void __thiscall AudManager::SetCDPlayMode(unsigned char) | ?SetCDPlayMode@AudManager@@QAEXE@Z
    0x519B30 | public: void __thiscall AudManager::SetHwnd(struct HWND__ *) | ?SetHwnd@AudManager@@QAEXPAUHWND__@@@Z
    0x519B50 | void __cdecl AudMinimizeApp(void) | ?AudMinimizeApp@@YAXXZ
    0x519B90 | void __cdecl AudRestoreApp(void) | ?AudRestoreApp@@YAXXZ
    0x519BD0 | public: unsigned int __thiscall AudManager::EAXEnabled(void) | ?EAXEnabled@AudManager@@QAEIXZ
    0x519BE0 | public: unsigned int __thiscall AudManager::DSound3DEnabled(void) | ?DSound3DEnabled@AudManager@@QAEIXZ
    0x519BF0 | private: unsigned int __thiscall AudManager::CreateListenerSoundObj(void) | ?CreateListenerSoundObj@AudManager@@AAEIXZ
    0x519C00 | private: class CReverb * __thiscall AudManager::GetListenerEAXObj(void) | ?GetListenerEAXObj@AudManager@@AAEPAVCReverb@@XZ
    0x519C10 | public: int __thiscall AudManager::SetEAXPreset(unsigned long,float,float,float) | ?SetEAXPreset@AudManager@@QAEHKMMM@Z
    0x519C20 | public: int __thiscall AudManager::SetEAXPreset(struct EAX_REVERBPROPERTIES *) | ?SetEAXPreset@AudManager@@QAEHPAUEAX_REVERBPROPERTIES@@@Z
    0x519C30 | public: void __thiscall AudManager::GetEAXAll(struct EAX_REVERBPROPERTIES *) | ?GetEAXAll@AudManager@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    0x519C40 | public: int __thiscall AudManager::SetEAXEnvironmet(unsigned long) | ?SetEAXEnvironmet@AudManager@@QAEHK@Z
    0x519C50 | public: unsigned long __thiscall AudManager::GetEAXEnvironmet(void) | ?GetEAXEnvironmet@AudManager@@QAEKXZ
    0x519C60 | public: int __thiscall AudManager::SetEAXReverbVolume(float) | ?SetEAXReverbVolume@AudManager@@QAEHM@Z
    0x519C70 | public: float __thiscall AudManager::GetEAXReverbVolume(void) | ?GetEAXReverbVolume@AudManager@@QAEMXZ
    0x519C80 | public: int __thiscall AudManager::SetEAXDecayTime(float) | ?SetEAXDecayTime@AudManager@@QAEHM@Z
    0x519C90 | public: float __thiscall AudManager::GetEAXDecayTime(void) | ?GetEAXDecayTime@AudManager@@QAEMXZ
    0x519CA0 | public: int __thiscall AudManager::SetEAXDamping(float) | ?SetEAXDamping@AudManager@@QAEHM@Z
    0x519CB0 | public: float __thiscall AudManager::GetEAXDamping(void) | ?GetEAXDamping@AudManager@@QAEMXZ
    0x519CC0 | public: struct IDirectSound * __thiscall AudManager::GetIDirectSoundInterfacePtr(void) | ?GetIDirectSoundInterfacePtr@AudManager@@QAEPAUIDirectSound@@XZ
    0x519CE0 | public: float __thiscall AudManager::Log(float,float) | ?Log@AudManager@@QAEMMM@Z
    0x519D00 | public: virtual void __thiscall AudManager::Update(void) | ?Update@AudManager@@UAEXXZ
    0x519E80 | public: virtual void * __thiscall AudManager::`scalar deleting destructor'(unsigned int) | ??_GAudManager@@UAEPAXI@Z
    public: virtual void * __thiscall AudManager::`vector deleting destructor'(unsigned int) | ??_EAudManager@@UAEPAXI@Z
    0x5B4E18 | const AudManager::`vftable' | ??_7AudManager@@6B@
    0x6B15D0 | class AudManager * MMAUDMGRPTR | ?MMAUDMGRPTR@@3PAVAudManager@@A
*/

class AudManager : public AudManagerBase
{
    // const AudManager::`vftable' @ 0x5B4E18

public:
    // 0x519290 | ??0AudManager@@QAE@XZ
    AudManager();

    // 0x519E80 | ??_GAudManager@@UAEPAXI@Z
    // 0x5192D0 | ??1AudManager@@UAE@XZ
    ~AudManager() override;

    // 0x519880 | ?AssignCDBalance@AudManager@@QAEXM@Z
    void AssignCDBalance(f32 arg1);

    // 0x519A30 | ?AssignCDVolume@AudManager@@QAEXM@Z
    void AssignCDVolume(f32 arg1);

    // 0x519610 | ?AssignWaveBalance@AudManager@@QAEXM@Z
    void AssignWaveBalance(f32 arg1);

    // 0x5197D0 | ?AssignWaveVolume@AudManager@@QAEXM@Z
    void AssignWaveVolume(f32 arg1);

    // 0x5198A0 | ?CDIsEnabled@AudManager@@QAE_NXZ
    bool CDIsEnabled();

    // 0x519900 | ?CDIsPlaying@AudManager@@QAE_NXZ
    bool CDIsPlaying();

    // 0x5198F0 | ?CDMusicOn@AudManager@@QAE_NXZ
    bool CDMusicOn();

    // 0x519A50 | ?CheckCDFile@AudManager@@QAEEPAD@Z
    u8 CheckCDFile(char* arg1);

    // 0x519BE0 | ?DSound3DEnabled@AudManager@@QAEIXZ
    u32 DSound3DEnabled();

    // 0x5196D0 | ?DeviceValid@AudManager@@QAE_NXZ
    bool DeviceValid();

    // 0x519860 | ?Disable@AudManager@@QAEXFF@Z
    void Disable(i16 arg1, i16 arg2);

    // 0x519BD0 | ?EAXEnabled@AudManager@@QAEIXZ
    u32 EAXEnabled();

    // 0x519850 | ?Enable@AudManager@@QAEXPADFF@Z
    void Enable(char* arg1, i16 arg2, i16 arg3);

    // 0x5198C0 | ?EnableCD@AudManager@@QAE_NXZ
    bool EnableCD();

    // 0x519730 | ?GetActiveDeviceName@AudManager@@QAEPADXZ
    char* GetActiveDeviceName();

    // 0x5195A0 | ?GetCCSpeechPtr@AudManager@@QAEPAVmmCCSpeech@@XZ
    class mmCCSpeech* GetCCSpeechPtr();

    // 0x5199D0 | ?GetCDPosition@AudManager@@QAEKPAE000@Z
    u32 GetCDPosition(u8* arg1, u8* arg2, u8* arg3, u8* arg4);

    // 0x519920 | ?GetCDTrackNum@AudManager@@QAEHXZ
    i32 GetCDTrackNum();

    // 0x5196F0 | ?GetDeviceNames@AudManager@@QAEPAPADXZ
    char** GetDeviceNames();

    // 0x519C30 | ?GetEAXAll@AudManager@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    void GetEAXAll(struct EAX_REVERBPROPERTIES* arg1);

    // 0x519CB0 | ?GetEAXDamping@AudManager@@QAEMXZ
    f32 GetEAXDamping();

    // 0x519C90 | ?GetEAXDecayTime@AudManager@@QAEMXZ
    f32 GetEAXDecayTime();

    // 0x519C50 | ?GetEAXEnvironmet@AudManager@@QAEKXZ
    u32 GetEAXEnvironmet();

    // 0x519C70 | ?GetEAXReverbVolume@AudManager@@QAEMXZ
    f32 GetEAXReverbVolume();

    // 0x519CC0 | ?GetIDirectSoundInterfacePtr@AudManager@@QAEPAUIDirectSound@@XZ
    struct IDirectSound* GetIDirectSoundInterfacePtr();

    // 0x519790 | ?GetMixerPtr@AudManager@@QAEPAVMixerCTL@@XZ
    class MixerCTL* GetMixerPtr();

    // 0x519780 | ?GetNum3DHalBufs@AudManager@@QAEKXZ
    u32 GetNum3DHalBufs();

    // 0x519A10 | ?GetNumCDTracks@AudManager@@QAEHXZ
    i32 GetNumCDTracks();

    // 0x519710 | ?GetNumDevices@AudManager@@QAEHXZ
    i32 GetNumDevices();

    // 0x519580 | ?GetRaceSpeechPtr@AudManager@@QAEPAVmmRaceSpeech@@XZ
    class mmRaceSpeech* GetRaceSpeechPtr();

    // 0x519630 | ?GetSamplesPerSecond@AudManager@@QAEKXZ
    u32 GetSamplesPerSecond();

    // 0x519570 | ?GetSpeechContainerPtr@AudManager@@QAEPAVmmSpeechContainer@@XZ
    class mmSpeechContainer* GetSpeechContainerPtr();

    // 0x5194F0 | ?InitSpeech@AudManager@@QAEXHHPAD@Z
    void InitSpeech(i32 arg1, i32 arg2, char* arg3);

    // 0x519CE0 | ?Log@AudManager@@QAEMMM@Z
    f32 Log(f32 arg1, f32 arg2);

    // 0x519470 | ?MinInstall@AudManager@@QAE_NXZ
    bool MinInstall();

    // 0x519960 | ?PlayCDTrack@AudManager@@QAEHHH@Z
    i32 PlayCDTrack(i32 arg1, i32 arg2);

    // 0x519990 | ?PlayCDTrack@AudManager@@QAEHHEEEH@Z
    i32 PlayCDTrack(i32 arg1, u8 arg2, u8 arg3, u8 arg4, i32 arg5);

    // 0x519830 | ?SetAudHeadPtr@AudManager@@QAEXPAVAudHead@@@Z
    void SetAudHeadPtr(class AudHead* arg1);

    // 0x519640 | ?SetBitDepthAndSampleRate@AudManager@@QAEXHK@Z
    void SetBitDepthAndSampleRate(i32 arg1, u32 arg2);

    // 0x519B10 | ?SetCDPlayMode@AudManager@@QAEXE@Z
    void SetCDPlayMode(u8 arg1);

    // 0x519CA0 | ?SetEAXDamping@AudManager@@QAEHM@Z
    i32 SetEAXDamping(f32 arg1);

    // 0x519C80 | ?SetEAXDecayTime@AudManager@@QAEHM@Z
    i32 SetEAXDecayTime(f32 arg1);

    // 0x519C40 | ?SetEAXEnvironmet@AudManager@@QAEHK@Z
    i32 SetEAXEnvironmet(u32 arg1);

    // 0x519C20 | ?SetEAXPreset@AudManager@@QAEHPAUEAX_REVERBPROPERTIES@@@Z
    i32 SetEAXPreset(struct EAX_REVERBPROPERTIES* arg1);

    // 0x519C10 | ?SetEAXPreset@AudManager@@QAEHKMMM@Z
    i32 SetEAXPreset(u32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x519C60 | ?SetEAXReverbVolume@AudManager@@QAEHM@Z
    i32 SetEAXReverbVolume(f32 arg1);

    // 0x519B30 | ?SetHwnd@AudManager@@QAEXPAUHWND__@@@Z
    void SetHwnd(struct HWND__* arg1);

    // 0x519870 | ?SetNumChannels@AudManager@@QAEXH@Z
    void SetNumChannels(i32 arg1);

    // 0x5195F0 | ?SetSampleSharing@AudManager@@QAEXF@Z
    void SetSampleSharing(i16 arg1);

    // 0x5195E0 | ?SharingSamples@AudManager@@QAEFXZ
    i16 SharingSamples();

    // 0x519940 | ?StopCD@AudManager@@QAEXXZ
    void StopCD();

    // 0x519750 | ?Supports16Bit@AudManager@@QAEFXZ
    i16 Supports16Bit();

    // 0x519D00 | ?Update@AudManager@@UAEXXZ
    void Update() override;

private:
    // 0x519BF0 | ?CreateListenerSoundObj@AudManager@@AAEIXZ
    u32 CreateListenerSoundObj();

    // 0x519C00 | ?GetListenerEAXObj@AudManager@@AAEPAVCReverb@@XZ
    class CReverb* GetListenerEAXObj();
};

check_size(AudManager, 0x54);

// 0x519B50 | ?AudMinimizeApp@@YAXXZ
void AudMinimizeApp();

// 0x519B90 | ?AudRestoreApp@@YAXXZ
void AudRestoreApp();

// 0x6B15D0 | ?MMAUDMGRPTR@@3PAVAudManager@@A
inline extern_var(0x6B15D0, class AudManager*, MMAUDMGRPTR);
