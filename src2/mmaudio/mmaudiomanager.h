/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

// 0x519B50 | ?AudMinimizeApp@@YAXXZ
inline void AudMinimizeApp()
{
    return stub<cdecl_t<void>>(0x519B50);
}

// 0x519B90 | ?AudRestoreApp@@YAXXZ
inline void AudRestoreApp()
{
    return stub<cdecl_t<void>>(0x519B90);
}

// 0x6B15D0 | ?MMAUDMGRPTR@@3PAVAudManager@@A
inline extern_var(0x6B15D0, class AudManager*, MMAUDMGRPTR);

class AudManager : AudManagerBase
{
public:
    // AudManager::`vftable' @ 0x5B4E18

    // 0x519290 | ??0AudManager@@QAE@XZ
    inline AudManager()
    {
        stub<member_func_t<void, AudManager>>(0x519290, this);
    }

    // 0x519470 | ?MinInstall@AudManager@@QAE_NXZ
    inline bool MinInstall()
    {
        return stub<member_func_t<bool, AudManager>>(0x519470, this);
    }

    // 0x5194F0 | ?InitSpeech@AudManager@@QAEXHHPAD@Z
    inline void InitSpeech(int32_t arg1, int32_t arg2, char* arg3)
    {
        return stub<member_func_t<void, AudManager, int32_t, int32_t, char*>>(0x5194F0, this, arg1, arg2, arg3);
    }

    // 0x519570 | ?GetSpeechContainerPtr@AudManager@@QAEPAVmmSpeechContainer@@XZ
    inline class mmSpeechContainer* GetSpeechContainerPtr()
    {
        return stub<member_func_t<class mmSpeechContainer*, AudManager>>(0x519570, this);
    }

    // 0x519580 | ?GetRaceSpeechPtr@AudManager@@QAEPAVmmRaceSpeech@@XZ
    inline class mmRaceSpeech* GetRaceSpeechPtr()
    {
        return stub<member_func_t<class mmRaceSpeech*, AudManager>>(0x519580, this);
    }

    // 0x5195A0 | ?GetCCSpeechPtr@AudManager@@QAEPAVmmCCSpeech@@XZ
    inline class mmCCSpeech* GetCCSpeechPtr()
    {
        return stub<member_func_t<class mmCCSpeech*, AudManager>>(0x5195A0, this);
    }

    // 0x5195E0 | ?SharingSamples@AudManager@@QAEFXZ
    inline int16_t SharingSamples()
    {
        return stub<member_func_t<int16_t, AudManager>>(0x5195E0, this);
    }

    // 0x5195F0 | ?SetSampleSharing@AudManager@@QAEXF@Z
    inline void SetSampleSharing(int16_t arg1)
    {
        return stub<member_func_t<void, AudManager, int16_t>>(0x5195F0, this, arg1);
    }

    // 0x519610 | ?AssignWaveBalance@AudManager@@QAEXM@Z
    inline void AssignWaveBalance(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x519610, this, arg1);
    }

    // 0x519630 | ?GetSamplesPerSecond@AudManager@@QAEKXZ
    inline uint32_t GetSamplesPerSecond()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x519630, this);
    }

    // 0x519640 | ?SetBitDepthAndSampleRate@AudManager@@QAEXHK@Z
    inline void SetBitDepthAndSampleRate(int32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<void, AudManager, int32_t, uint32_t>>(0x519640, this, arg1, arg2);
    }

    // 0x5196D0 | ?DeviceValid@AudManager@@QAE_NXZ
    inline bool DeviceValid()
    {
        return stub<member_func_t<bool, AudManager>>(0x5196D0, this);
    }

    // 0x5196F0 | ?GetDeviceNames@AudManager@@QAEPAPADXZ
    inline char** GetDeviceNames()
    {
        return stub<member_func_t<char**, AudManager>>(0x5196F0, this);
    }

    // 0x519710 | ?GetNumDevices@AudManager@@QAEHXZ
    inline int32_t GetNumDevices()
    {
        return stub<member_func_t<int32_t, AudManager>>(0x519710, this);
    }

    // 0x519730 | ?GetActiveDeviceName@AudManager@@QAEPADXZ
    inline char* GetActiveDeviceName()
    {
        return stub<member_func_t<char*, AudManager>>(0x519730, this);
    }

    // 0x519750 | ?Supports16Bit@AudManager@@QAEFXZ
    inline int16_t Supports16Bit()
    {
        return stub<member_func_t<int16_t, AudManager>>(0x519750, this);
    }

    // 0x519780 | ?GetNum3DHalBufs@AudManager@@QAEKXZ
    inline uint32_t GetNum3DHalBufs()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x519780, this);
    }

    // 0x519790 | ?GetMixerPtr@AudManager@@QAEPAVMixerCTL@@XZ
    inline class MixerCTL* GetMixerPtr()
    {
        return stub<member_func_t<class MixerCTL*, AudManager>>(0x519790, this);
    }

    // 0x5197D0 | ?AssignWaveVolume@AudManager@@QAEXM@Z
    inline void AssignWaveVolume(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x5197D0, this, arg1);
    }

    // 0x519830 | ?SetAudHeadPtr@AudManager@@QAEXPAVAudHead@@@Z
    inline void SetAudHeadPtr(class AudHead* arg1)
    {
        return stub<member_func_t<void, AudManager, class AudHead*>>(0x519830, this, arg1);
    }

    // 0x519850 | ?Enable@AudManager@@QAEXPADFF@Z
    inline void Enable(char* arg1, int16_t arg2, int16_t arg3)
    {
        return stub<member_func_t<void, AudManager, char*, int16_t, int16_t>>(0x519850, this, arg1, arg2, arg3);
    }

    // 0x519860 | ?Disable@AudManager@@QAEXFF@Z
    inline void Disable(int16_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, AudManager, int16_t, int16_t>>(0x519860, this, arg1, arg2);
    }

    // 0x519870 | ?SetNumChannels@AudManager@@QAEXH@Z
    inline void SetNumChannels(int32_t arg1)
    {
        return stub<member_func_t<void, AudManager, int32_t>>(0x519870, this, arg1);
    }

    // 0x519880 | ?AssignCDBalance@AudManager@@QAEXM@Z
    inline void AssignCDBalance(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x519880, this, arg1);
    }

    // 0x5198A0 | ?CDIsEnabled@AudManager@@QAE_NXZ
    inline bool CDIsEnabled()
    {
        return stub<member_func_t<bool, AudManager>>(0x5198A0, this);
    }

    // 0x5198C0 | ?EnableCD@AudManager@@QAE_NXZ
    inline bool EnableCD()
    {
        return stub<member_func_t<bool, AudManager>>(0x5198C0, this);
    }

    // 0x5198F0 | ?CDMusicOn@AudManager@@QAE_NXZ
    inline bool CDMusicOn()
    {
        return stub<member_func_t<bool, AudManager>>(0x5198F0, this);
    }

    // 0x519900 | ?CDIsPlaying@AudManager@@QAE_NXZ
    inline bool CDIsPlaying()
    {
        return stub<member_func_t<bool, AudManager>>(0x519900, this);
    }

    // 0x519920 | ?GetCDTrackNum@AudManager@@QAEHXZ
    inline int32_t GetCDTrackNum()
    {
        return stub<member_func_t<int32_t, AudManager>>(0x519920, this);
    }

    // 0x519940 | ?StopCD@AudManager@@QAEXXZ
    inline void StopCD()
    {
        return stub<member_func_t<void, AudManager>>(0x519940, this);
    }

    // 0x519960 | ?PlayCDTrack@AudManager@@QAEHHH@Z
    inline int32_t PlayCDTrack(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, AudManager, int32_t, int32_t>>(0x519960, this, arg1, arg2);
    }

    // 0x519990 | ?PlayCDTrack@AudManager@@QAEHHEEEH@Z
    inline int32_t PlayCDTrack(int32_t arg1, uint8_t arg2, uint8_t arg3, uint8_t arg4, int32_t arg5)
    {
        return stub<member_func_t<int32_t, AudManager, int32_t, uint8_t, uint8_t, uint8_t, int32_t>>(
            0x519990, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5199D0 | ?GetCDPosition@AudManager@@QAEKPAE000@Z
    inline uint32_t GetCDPosition(uint8_t* arg1, uint8_t* arg2, uint8_t* arg3, uint8_t* arg4)
    {
        return stub<member_func_t<uint32_t, AudManager, uint8_t*, uint8_t*, uint8_t*, uint8_t*>>(
            0x5199D0, this, arg1, arg2, arg3, arg4);
    }

    // 0x519A10 | ?GetNumCDTracks@AudManager@@QAEHXZ
    inline int32_t GetNumCDTracks()
    {
        return stub<member_func_t<int32_t, AudManager>>(0x519A10, this);
    }

    // 0x519A30 | ?AssignCDVolume@AudManager@@QAEXM@Z
    inline void AssignCDVolume(float arg1)
    {
        return stub<member_func_t<void, AudManager, float>>(0x519A30, this, arg1);
    }

    // 0x519A50 | ?CheckCDFile@AudManager@@QAEEPAD@Z
    inline uint8_t CheckCDFile(char* arg1)
    {
        return stub<member_func_t<uint8_t, AudManager, char*>>(0x519A50, this, arg1);
    }

    // 0x519B10 | ?SetCDPlayMode@AudManager@@QAEXE@Z
    inline void SetCDPlayMode(uint8_t arg1)
    {
        return stub<member_func_t<void, AudManager, uint8_t>>(0x519B10, this, arg1);
    }

    // 0x519B30 | ?SetHwnd@AudManager@@QAEXPAUHWND__@@@Z
    inline void SetHwnd(struct HWND__* arg1)
    {
        return stub<member_func_t<void, AudManager, struct HWND__*>>(0x519B30, this, arg1);
    }

    // 0x519BD0 | ?EAXEnabled@AudManager@@QAEIXZ
    inline uint32_t EAXEnabled()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x519BD0, this);
    }

    // 0x519BE0 | ?DSound3DEnabled@AudManager@@QAEIXZ
    inline uint32_t DSound3DEnabled()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x519BE0, this);
    }

    // 0x519BF0 | ?CreateListenerSoundObj@AudManager@@AAEIXZ
    inline uint32_t CreateListenerSoundObj()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x519BF0, this);
    }

    // 0x519C00 | ?GetListenerEAXObj@AudManager@@AAEPAVCReverb@@XZ
    inline class CReverb* GetListenerEAXObj()
    {
        return stub<member_func_t<class CReverb*, AudManager>>(0x519C00, this);
    }

    // 0x519C10 | ?SetEAXPreset@AudManager@@QAEHKMMM@Z
    inline int32_t SetEAXPreset(uint32_t arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<int32_t, AudManager, uint32_t, float, float, float>>(
            0x519C10, this, arg1, arg2, arg3, arg4);
    }

    // 0x519C20 | ?SetEAXPreset@AudManager@@QAEHPAUEAX_REVERBPROPERTIES@@@Z
    inline int32_t SetEAXPreset(struct EAX_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<int32_t, AudManager, struct EAX_REVERBPROPERTIES*>>(0x519C20, this, arg1);
    }

    // 0x519C30 | ?GetEAXAll@AudManager@@QAEXPAUEAX_REVERBPROPERTIES@@@Z
    inline void GetEAXAll(struct EAX_REVERBPROPERTIES* arg1)
    {
        return stub<member_func_t<void, AudManager, struct EAX_REVERBPROPERTIES*>>(0x519C30, this, arg1);
    }

    // 0x519C40 | ?SetEAXEnvironmet@AudManager@@QAEHK@Z
    inline int32_t SetEAXEnvironmet(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, AudManager, uint32_t>>(0x519C40, this, arg1);
    }

    // 0x519C50 | ?GetEAXEnvironmet@AudManager@@QAEKXZ
    inline uint32_t GetEAXEnvironmet()
    {
        return stub<member_func_t<uint32_t, AudManager>>(0x519C50, this);
    }

    // 0x519C60 | ?SetEAXReverbVolume@AudManager@@QAEHM@Z
    inline int32_t SetEAXReverbVolume(float arg1)
    {
        return stub<member_func_t<int32_t, AudManager, float>>(0x519C60, this, arg1);
    }

    // 0x519C70 | ?GetEAXReverbVolume@AudManager@@QAEMXZ
    inline float GetEAXReverbVolume()
    {
        return stub<member_func_t<float, AudManager>>(0x519C70, this);
    }

    // 0x519C80 | ?SetEAXDecayTime@AudManager@@QAEHM@Z
    inline int32_t SetEAXDecayTime(float arg1)
    {
        return stub<member_func_t<int32_t, AudManager, float>>(0x519C80, this, arg1);
    }

    // 0x519C90 | ?GetEAXDecayTime@AudManager@@QAEMXZ
    inline float GetEAXDecayTime()
    {
        return stub<member_func_t<float, AudManager>>(0x519C90, this);
    }

    // 0x519CA0 | ?SetEAXDamping@AudManager@@QAEHM@Z
    inline int32_t SetEAXDamping(float arg1)
    {
        return stub<member_func_t<int32_t, AudManager, float>>(0x519CA0, this, arg1);
    }

    // 0x519CB0 | ?GetEAXDamping@AudManager@@QAEMXZ
    inline float GetEAXDamping()
    {
        return stub<member_func_t<float, AudManager>>(0x519CB0, this);
    }

    // 0x519CC0 | ?GetIDirectSoundInterfacePtr@AudManager@@QAEPAUIDirectSound@@XZ
    inline struct IDirectSound* GetIDirectSoundInterfacePtr()
    {
        return stub<member_func_t<struct IDirectSound*, AudManager>>(0x519CC0, this);
    }

    // 0x519CE0 | ?Log@AudManager@@QAEMMM@Z
    inline float Log(float arg1, float arg2)
    {
        return stub<member_func_t<float, AudManager, float, float>>(0x519CE0, this, arg1, arg2);
    }

    // 0x5192D0 | ??1AudManager@@UAE@XZ
    inline ~AudManager() override
    {
        stub<member_func_t<void, AudManager>>(0x5192D0, this);
    }

    // 0x519D00 | ?Update@AudManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AudManager>>(0x519D00, this);
    }
};
