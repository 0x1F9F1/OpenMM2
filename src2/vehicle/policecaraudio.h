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

#include "caraudio.h"

/*
    vehicle:policecaraudio

    0x4D43D0 | public: __thiscall vehPoliceCarAudio::vehPoliceCarAudio(class vehCarSim *,class vehCarDamage *,char const *,char const *,bool) | ??0vehPoliceCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PBD2_N@Z
    0x4D44C0 | public: virtual __thiscall vehPoliceCarAudio::~vehPoliceCarAudio(void) | ??1vehPoliceCarAudio@@UAE@XZ
    0x4D4590 | private: void __thiscall vehPoliceCarAudio::DeallocateSirenPlayInfo(struct tagSirenData *) | ?DeallocateSirenPlayInfo@vehPoliceCarAudio@@AAEXPAUtagSirenData@@@Z
    0x4D45F0 | public: void __thiscall vehPoliceCarAudio::EchoOn(void) | ?EchoOn@vehPoliceCarAudio@@QAEXXZ
    0x4D4670 | public: void __thiscall vehPoliceCarAudio::EchoOff(void) | ?EchoOff@vehPoliceCarAudio@@QAEXXZ
    0x4D46B0 | public: void __thiscall vehPoliceCarAudio::UpdateEcho(void) | ?UpdateEcho@vehPoliceCarAudio@@QAEXXZ
    0x4D46F0 | public: void __thiscall vehPoliceCarAudio::Init(class vehCarSim *,class vehCarDamage *,char const *,char const *,bool) | ?Init@vehPoliceCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PBD2_N@Z
    0x4D4730 | private: void __thiscall vehPoliceCarAudio::Load(char const *) | ?Load@vehPoliceCarAudio@@AAEXPBD@Z
    0x4D4800 | private: void __thiscall vehPoliceCarAudio::ReadSirenData(class Stream *) | ?ReadSirenData@vehPoliceCarAudio@@AAEXPAVStream@@@Z
    0x4D49E0 | private: void __thiscall vehPoliceCarAudio::ReadSirenData(struct tagSirenData *,char *) | ?ReadSirenData@vehPoliceCarAudio@@AAEXPAUtagSirenData@@PAD@Z
    0x4D4A50 | private: void __thiscall vehPoliceCarAudio::ReadSirenPlayInfo(struct tagSirenData *,char *) | ?ReadSirenPlayInfo@vehPoliceCarAudio@@AAEXPAUtagSirenData@@PAD@Z
    0x4D4B00 | public: int __thiscall vehPoliceCarAudio::ExplosionIsPlaying(void) | ?ExplosionIsPlaying@vehPoliceCarAudio@@QAEHXZ
    0x4D4B20 | public: void __thiscall vehPoliceCarAudio::StartSiren(int) | ?StartSiren@vehPoliceCarAudio@@QAEXH@Z
    0x4D4C20 | public: void __thiscall vehPoliceCarAudio::StopSiren(void) | ?StopSiren@vehPoliceCarAudio@@QAEXXZ
    0x4D4C90 | public: void __thiscall vehPoliceCarAudio::PlayExplosion(void) | ?PlayExplosion@vehPoliceCarAudio@@QAEXXZ
    0x4D4D50 | public: void __thiscall vehPoliceCarAudio::DamageSiren(void) | ?DamageSiren@vehPoliceCarAudio@@QAEXXZ
    0x4D4E40 | public: int __thiscall vehPoliceCarAudio::UpdateSiren(float,float,float) | ?UpdateSiren@vehPoliceCarAudio@@QAEHMMM@Z
    0x4D4F60 | public: void __thiscall vehPoliceCarAudio::UpdateSiren(void) | ?UpdateSiren@vehPoliceCarAudio@@QAEXXZ
    0x4D4FB0 | private: void __thiscall vehPoliceCarAudio::FluctuateSiren(void) | ?FluctuateSiren@vehPoliceCarAudio@@AAEXXZ
    0x4D5060 | public: int __thiscall vehPoliceCarAudio::UpdateAudio3D(float) | ?UpdateAudio3D@vehPoliceCarAudio@@QAEHM@Z
    0x4D50B0 | public: void __thiscall vehPoliceCarAudio::UpdateExplosion(float,float) | ?UpdateExplosion@vehPoliceCarAudio@@QAEXMM@Z
    0x4D5120 | public: void __thiscall vehPoliceCarAudio::PlayVoice(void) | ?PlayVoice@vehPoliceCarAudio@@QAEXXZ
    0x4D5130 | public: virtual void __thiscall vehPoliceCarAudio::AssignSounds(void) | ?AssignSounds@vehPoliceCarAudio@@UAEXXZ
    0x4D5220 | public: virtual void __thiscall vehPoliceCarAudio::UnAssignSounds(int) | ?UnAssignSounds@vehPoliceCarAudio@@UAEXH@Z
    0x4D5290 | public: void __thiscall vehPoliceCarAudio::Reset(void) | ?Reset@vehPoliceCarAudio@@QAEXXZ
    0x4D52A0 | public: virtual void __thiscall vehPoliceCarAudio::UpdateAudio(void) | ?UpdateAudio@vehPoliceCarAudio@@UAEXXZ
    0x4D52F0 | public: void __thiscall vehPoliceCarAudio::UpdateAudio3D(void) | ?UpdateAudio3D@vehPoliceCarAudio@@QAEXXZ
    0x4D53B0 | public: void __thiscall vehPoliceCarAudio::UpdateAudioNon3D(void) | ?UpdateAudioNon3D@vehPoliceCarAudio@@QAEXXZ
    0x4D5400 | public: short __thiscall vehPoliceCarAudio::RandomizeNumber(void) | ?RandomizeNumber@vehPoliceCarAudio@@QAEFXZ
    0x4D5440 | public: static int __cdecl vehPoliceCarAudio::GetNumCopsPursuingPlayer(void) | ?GetNumCopsPursuingPlayer@vehPoliceCarAudio@@SAHXZ
    0x4D5450 | public: virtual void __thiscall vehPoliceCarAudio::SetNon3DParams(void) | ?SetNon3DParams@vehPoliceCarAudio@@UAEXXZ
    0x4D54F0 | public: void __thiscall vehPoliceCarAudio::Set2DPan(float) | ?Set2DPan@vehPoliceCarAudio@@QAEXM@Z
    0x4D5570 | public: virtual void __thiscall vehPoliceCarAudio::Set3DParams(void) | ?Set3DParams@vehPoliceCarAudio@@UAEXXZ
    0x4D5580 | public: void __thiscall vehPoliceCarAudio::RemoveFromManager(void) | ?RemoveFromManager@vehPoliceCarAudio@@QAEXXZ
    0x4D5590 | public: virtual void __thiscall vehPoliceCarAudio::Update(void) | ?Update@vehPoliceCarAudio@@UAEXXZ
    public: virtual void * __thiscall vehPoliceCarAudio::`scalar deleting destructor'(unsigned int) | ??_GvehPoliceCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehPoliceCarAudio::`vector deleting destructor'(unsigned int) | ??_EvehPoliceCarAudio@@UAEPAXI@Z
    0x5B2E18 | const vehPoliceCarAudio::`vftable' | ??_7vehPoliceCarAudio@@6B@
    0x6AFFE4 | private: static int vehPoliceCarAudio::s_iNumCopsPursuingPlayer | ?s_iNumCopsPursuingPlayer@vehPoliceCarAudio@@0HA
*/

class vehPoliceCarAudio : public vehCarAudio
{
    // const vehPoliceCarAudio::`vftable' @ 0x5B2E18

public:
    // 0x4D43D0 | ??0vehPoliceCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PBD2_N@Z
    vehPoliceCarAudio(class vehCarSim* arg1, class vehCarDamage* arg2, char const* arg3, char const* arg4, bool arg5);

    // 0x4D44C0 | ??1vehPoliceCarAudio@@UAE@XZ
    ~vehPoliceCarAudio();

    // 0x4D5130 | ?AssignSounds@vehPoliceCarAudio@@UAEXXZ
    void AssignSounds() override;

    // 0x4D4D50 | ?DamageSiren@vehPoliceCarAudio@@QAEXXZ
    void DamageSiren();

    // 0x4D4670 | ?EchoOff@vehPoliceCarAudio@@QAEXXZ
    void EchoOff();

    // 0x4D45F0 | ?EchoOn@vehPoliceCarAudio@@QAEXXZ
    void EchoOn();

    // 0x4D4B00 | ?ExplosionIsPlaying@vehPoliceCarAudio@@QAEHXZ
    i32 ExplosionIsPlaying();

    // 0x4D46F0 | ?Init@vehPoliceCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PBD2_N@Z
    void Init(class vehCarSim* arg1, class vehCarDamage* arg2, char const* arg3, char const* arg4, bool arg5);

    // 0x4D4C90 | ?PlayExplosion@vehPoliceCarAudio@@QAEXXZ
    void PlayExplosion();

    // 0x4D5120 | ?PlayVoice@vehPoliceCarAudio@@QAEXXZ
    void PlayVoice();

    // 0x4D5400 | ?RandomizeNumber@vehPoliceCarAudio@@QAEFXZ
    i16 RandomizeNumber();

    // 0x4D5580 | ?RemoveFromManager@vehPoliceCarAudio@@QAEXXZ
    void RemoveFromManager();

    // 0x4D5290 | ?Reset@vehPoliceCarAudio@@QAEXXZ
    void Reset();

    // 0x4D54F0 | ?Set2DPan@vehPoliceCarAudio@@QAEXM@Z
    void Set2DPan(f32 arg1);

    // 0x4D5570 | ?Set3DParams@vehPoliceCarAudio@@UAEXXZ
    void Set3DParams() override;

    // 0x4D5450 | ?SetNon3DParams@vehPoliceCarAudio@@UAEXXZ
    void SetNon3DParams() override;

    // 0x4D4B20 | ?StartSiren@vehPoliceCarAudio@@QAEXH@Z
    void StartSiren(i32 arg1);

    // 0x4D4C20 | ?StopSiren@vehPoliceCarAudio@@QAEXXZ
    void StopSiren();

    // 0x4D5220 | ?UnAssignSounds@vehPoliceCarAudio@@UAEXH@Z
    void UnAssignSounds(i32 arg1) override;

    // 0x4D5590 | ?Update@vehPoliceCarAudio@@UAEXXZ
    void Update() override;

    // 0x4D52A0 | ?UpdateAudio@vehPoliceCarAudio@@UAEXXZ
    void UpdateAudio() override;

    // 0x4D52F0 | ?UpdateAudio3D@vehPoliceCarAudio@@QAEXXZ
    void UpdateAudio3D();

    // 0x4D5060 | ?UpdateAudio3D@vehPoliceCarAudio@@QAEHM@Z
    i32 UpdateAudio3D(f32 arg1);

    // 0x4D53B0 | ?UpdateAudioNon3D@vehPoliceCarAudio@@QAEXXZ
    void UpdateAudioNon3D();

    // 0x4D46B0 | ?UpdateEcho@vehPoliceCarAudio@@QAEXXZ
    void UpdateEcho();

    // 0x4D50B0 | ?UpdateExplosion@vehPoliceCarAudio@@QAEXMM@Z
    void UpdateExplosion(f32 arg1, f32 arg2);

    // 0x4D4F60 | ?UpdateSiren@vehPoliceCarAudio@@QAEXXZ
    void UpdateSiren();

    // 0x4D4E40 | ?UpdateSiren@vehPoliceCarAudio@@QAEHMMM@Z
    i32 UpdateSiren(f32 arg1, f32 arg2, f32 arg3);

    // 0x4D5440 | ?GetNumCopsPursuingPlayer@vehPoliceCarAudio@@SAHXZ
    static i32 GetNumCopsPursuingPlayer();

private:
    // 0x4D4590 | ?DeallocateSirenPlayInfo@vehPoliceCarAudio@@AAEXPAUtagSirenData@@@Z
    void DeallocateSirenPlayInfo(struct tagSirenData* arg1);

    // 0x4D4FB0 | ?FluctuateSiren@vehPoliceCarAudio@@AAEXXZ
    void FluctuateSiren();

    // 0x4D4730 | ?Load@vehPoliceCarAudio@@AAEXPBD@Z
    void Load(char const* arg1);

    // 0x4D4800 | ?ReadSirenData@vehPoliceCarAudio@@AAEXPAVStream@@@Z
    void ReadSirenData(class Stream* arg1);

    // 0x4D49E0 | ?ReadSirenData@vehPoliceCarAudio@@AAEXPAUtagSirenData@@PAD@Z
    void ReadSirenData(struct tagSirenData* arg1, char* arg2);

    // 0x4D4A50 | ?ReadSirenPlayInfo@vehPoliceCarAudio@@AAEXPAUtagSirenData@@PAD@Z
    void ReadSirenPlayInfo(struct tagSirenData* arg1, char* arg2);

    // 0x6AFFE4 | ?s_iNumCopsPursuingPlayer@vehPoliceCarAudio@@0HA
    static inline extern_var(0x6AFFE4, i32, s_iNumCopsPursuingPlayer);
};

check_size(vehPoliceCarAudio, 0x248);
