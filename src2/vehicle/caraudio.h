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

#include "ageaudio/aud3dobject.h"

/*
    vehicle:caraudio

    0x4DB810 | public: __thiscall vehCarAudio::vehCarAudio(class vehCarSim *,class vehCarDamage *,char const *,bool,bool) | ??0vehCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PBD_N3@Z
    0x4DB890 | public: virtual __thiscall vehCarAudio::~vehCarAudio(void) | ??1vehCarAudio@@UAE@XZ
    0x4DB900 | public: void __thiscall vehCarAudio::Init(class vehCarSim *,class vehCarDamage *,char const *,bool,bool,bool) | ?Init@vehCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PBD_N33@Z
    public: void __thiscall vehCarAudio::AddWidgets(class bkBank &) | ?AddWidgets@vehCarAudio@@QAEXAAVbkBank@@@Z
    public: void __thiscall vehCarAudio::Toggle3D(void) | ?Toggle3D@vehCarAudio@@QAEXXZ
    0x4DBB50 | public: int __thiscall vehCarAudio::GetCurrentGear(void) | ?GetCurrentGear@vehCarAudio@@QAEHXZ
    0x4DBB60 | public: void __thiscall vehCarAudio::UpdateGear(void) | ?UpdateGear@vehCarAudio@@QAEXXZ
    0x4DBBB0 | public: virtual void __thiscall vehCarAudio::UpdateAudio(void) | ?UpdateAudio@vehCarAudio@@UAEXXZ
    0x4DBC10 | public: int __thiscall vehCarAudio::UpdateAudio3D(void) | ?UpdateAudio3D@vehCarAudio@@QAEHXZ
    0x4DBCB0 | public: void __thiscall vehCarAudio::UpdateAudioNon3D(void) | ?UpdateAudioNon3D@vehCarAudio@@QAEXXZ
    0x4DBD00 | public: int __thiscall vehCarAudio::UpdateAudio3D(float) | ?UpdateAudio3D@vehCarAudio@@QAEHM@Z
    0x4DBE30 | public: void __thiscall vehCarAudio::Reset(void) | ?Reset@vehCarAudio@@QAEXXZ
    0x4DBE40 | public: virtual void __thiscall vehCarAudio::AssignSounds(void) | ?AssignSounds@vehCarAudio@@UAEXXZ
    0x4DBF80 | public: virtual void __thiscall vehCarAudio::UnAssignSounds(int) | ?UnAssignSounds@vehCarAudio@@UAEXH@Z
    0x4DC000 | public: void __thiscall vehCarAudio::SetMinAmpSpeed(float) | ?SetMinAmpSpeed@vehCarAudio@@QAEXM@Z
    0x4DC020 | public: int __thiscall vehCarAudio::Load(char const *,bool) | ?Load@vehCarAudio@@QAEHPBD_N@Z
    0x4DC1C0 | public: void __thiscall vehCarAudio::RemoveFromManager(void) | ?RemoveFromManager@vehCarAudio@@QAEXXZ
    0x4DC1D0 | public: void __thiscall vehCarAudio::PlayHorn(void) | ?PlayHorn@vehCarAudio@@QAEXXZ
    0x4DC210 | public: void __thiscall vehCarAudio::StopHorn(void) | ?StopHorn@vehCarAudio@@QAEXXZ
    0x4DC240 | public: virtual void __thiscall vehCarAudio::SetNon3DParams(void) | ?SetNon3DParams@vehCarAudio@@UAEXXZ
    0x4DC300 | public: virtual void __thiscall vehCarAudio::Set3DParams(void) | ?Set3DParams@vehCarAudio@@UAEXXZ
    0x4DC320 | public: virtual void __thiscall vehCarAudio::Update(void) | ?Update@vehCarAudio@@UAEXXZ
    0x4DC340 | public: bool __thiscall vehCarAudio::IsAirBorne(void) | ?IsAirBorne@vehCarAudio@@QAE_NXZ
    0x4DC350 | public: void __thiscall vehCarAudio::EchoOn(void) | ?EchoOn@vehCarAudio@@QAEXXZ
    0x4DC400 | public: void __thiscall vehCarAudio::EchoOff(void) | ?EchoOff@vehCarAudio@@QAEXXZ
    0x4DC450 | public: void __thiscall vehCarAudio::Set2DPan(float) | ?Set2DPan@vehCarAudio@@QAEXM@Z
    0x4DC4C0 | public: void __thiscall vehCarAudio::UpdateEcho(void) | ?UpdateEcho@vehCarAudio@@QAEXXZ
    0x4DC4F0 | public: bool __thiscall vehCarAudio::IsBrakeing(void) | ?IsBrakeing@vehCarAudio@@QAE_NXZ
    0x4DC500 | public: float __thiscall vehCarAudio::GetSpeed(void) | ?GetSpeed@vehCarAudio@@QAEMXZ
    0x4DC510 | private: bool __thiscall vehCarAudio::LoadImpacts(char *,char *) | ?LoadImpacts@vehCarAudio@@AAE_NPAD0@Z
    0x4DC730 | public: class AudImpact * __thiscall vehCarAudio::GetAudImpactPtr(void) | ?GetAudImpactPtr@vehCarAudio@@QAEPAVAudImpact@@XZ
    0x4DC740 | public: static void __cdecl vehCarAudio::InitStatics(void) | ?InitStatics@vehCarAudio@@SAXXZ
    0x4DC750 | public: static void __cdecl vehCarAudio::DeallocateStatics(void) | ?DeallocateStatics@vehCarAudio@@SAXXZ
    public: virtual void * __thiscall vehCarAudio::`vector deleting destructor'(unsigned int) | ??_EvehCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehCarAudio::`scalar deleting destructor'(unsigned int) | ??_GvehCarAudio@@UAEPAXI@Z
    0x5B3190 | const vehCarAudio::`vftable' | ??_7vehCarAudio@@6B@
    0x6B0068 | private: static class Aud3DManagerData<class AudImpact> * * vehCarAudio::s_ppAudImpactContainer | ?s_ppAudImpactContainer@vehCarAudio@@0PAPAV?$Aud3DManagerData@VAudImpact@@@@A
    0x6B006C | private: static int vehCarAudio::s_iNumAudImpactContainers | ?s_iNumAudImpactContainers@vehCarAudio@@0HA
*/

class vehCarAudio : public Aud3DObject
{
    // const vehCarAudio::`vftable' @ 0x5B3190

public:
    // 0x4DB810 | ??0vehCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PBD_N3@Z
    vehCarAudio(class vehCarSim* arg1, class vehCarDamage* arg2, char const* arg3, bool arg4, bool arg5);

    // 0x4DB890 | ??1vehCarAudio@@UAE@XZ
    ~vehCarAudio();

    // 0x4DBE40 | ?AssignSounds@vehCarAudio@@UAEXXZ
    void AssignSounds() override;

    // 0x4DC400 | ?EchoOff@vehCarAudio@@QAEXXZ
    void EchoOff();

    // 0x4DC350 | ?EchoOn@vehCarAudio@@QAEXXZ
    void EchoOn();

    // 0x4DC730 | ?GetAudImpactPtr@vehCarAudio@@QAEPAVAudImpact@@XZ
    class AudImpact* GetAudImpactPtr();

    // 0x4DBB50 | ?GetCurrentGear@vehCarAudio@@QAEHXZ
    i32 GetCurrentGear();

    // 0x4DC500 | ?GetSpeed@vehCarAudio@@QAEMXZ
    f32 GetSpeed();

    // 0x4DB900 | ?Init@vehCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PBD_N33@Z
    void Init(class vehCarSim* arg1, class vehCarDamage* arg2, char const* arg3, bool arg4, bool arg5, bool arg6);

    // 0x4DC340 | ?IsAirBorne@vehCarAudio@@QAE_NXZ
    bool IsAirBorne();

    // 0x4DC4F0 | ?IsBrakeing@vehCarAudio@@QAE_NXZ
    bool IsBrakeing();

    // 0x4DC020 | ?Load@vehCarAudio@@QAEHPBD_N@Z
    i32 Load(char const* arg1, bool arg2);

    // 0x4DC1D0 | ?PlayHorn@vehCarAudio@@QAEXXZ
    void PlayHorn();

    // 0x4DC1C0 | ?RemoveFromManager@vehCarAudio@@QAEXXZ
    void RemoveFromManager();

    // 0x4DBE30 | ?Reset@vehCarAudio@@QAEXXZ
    void Reset();

    // 0x4DC450 | ?Set2DPan@vehCarAudio@@QAEXM@Z
    void Set2DPan(f32 arg1);

    // 0x4DC300 | ?Set3DParams@vehCarAudio@@UAEXXZ
    void Set3DParams() override;

    // 0x4DC000 | ?SetMinAmpSpeed@vehCarAudio@@QAEXM@Z
    void SetMinAmpSpeed(f32 arg1);

    // 0x4DC240 | ?SetNon3DParams@vehCarAudio@@UAEXXZ
    void SetNon3DParams() override;

    // 0x4DC210 | ?StopHorn@vehCarAudio@@QAEXXZ
    void StopHorn();

    // 0x4DBF80 | ?UnAssignSounds@vehCarAudio@@UAEXH@Z
    void UnAssignSounds(i32 arg1) override;

    // 0x4DC320 | ?Update@vehCarAudio@@UAEXXZ
    void Update() override;

    // 0x4DBBB0 | ?UpdateAudio@vehCarAudio@@UAEXXZ
    void UpdateAudio() override;

    // 0x4DBC10 | ?UpdateAudio3D@vehCarAudio@@QAEHXZ
    i32 UpdateAudio3D();

    // 0x4DBD00 | ?UpdateAudio3D@vehCarAudio@@QAEHM@Z
    i32 UpdateAudio3D(f32 arg1);

    // 0x4DBCB0 | ?UpdateAudioNon3D@vehCarAudio@@QAEXXZ
    void UpdateAudioNon3D();

    // 0x4DC4C0 | ?UpdateEcho@vehCarAudio@@QAEXXZ
    void UpdateEcho();

    // 0x4DBB60 | ?UpdateGear@vehCarAudio@@QAEXXZ
    void UpdateGear();

    // 0x4DC750 | ?DeallocateStatics@vehCarAudio@@SAXXZ
    static void DeallocateStatics();

    // 0x4DC740 | ?InitStatics@vehCarAudio@@SAXXZ
    static void InitStatics();

private:
    // 0x4DC510 | ?LoadImpacts@vehCarAudio@@AAE_NPAD0@Z
    bool LoadImpacts(char* arg1, char* arg2);

    // 0x6B006C | ?s_iNumAudImpactContainers@vehCarAudio@@0HA
    static inline extern_var(0x6B006C, i32, s_iNumAudImpactContainers);

    // 0x6B0068 | ?s_ppAudImpactContainer@vehCarAudio@@0PAPAV?$Aud3DManagerData@VAudImpact@@@@A
    static inline extern_var(0x6B0068, class Aud3DManagerData<class AudImpact>**, s_ppAudImpactContainer);
};

check_size(vehCarAudio, 0x0);
