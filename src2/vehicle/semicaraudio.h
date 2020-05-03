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
    vehicle:semicaraudio

    0x4DC930 | public: __thiscall vehSemiCarAudio::vehSemiCarAudio(class vehCarSim *,class vehCarDamage *,char *,bool,bool) | ??0vehSemiCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PAD_N3@Z
    0x4DC9C0 | public: virtual __thiscall vehSemiCarAudio::~vehSemiCarAudio(void) | ??1vehSemiCarAudio@@UAE@XZ
    0x4DC9D0 | public: void __thiscall vehSemiCarAudio::Init(class vehCarSim *,class vehCarDamage *,char *,bool,bool,bool) | ?Init@vehSemiCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PAD_N33@Z
    0x4DCA40 | public: virtual void __thiscall vehSemiCarAudio::UpdateAudio(void) | ?UpdateAudio@vehSemiCarAudio@@UAEXXZ
    0x4DCA90 | public: void __thiscall vehSemiCarAudio::UpdateAudio3D(void) | ?UpdateAudio3D@vehSemiCarAudio@@QAEXXZ
    0x4DCB50 | public: void __thiscall vehSemiCarAudio::UpdateAudioNon3D(void) | ?UpdateAudioNon3D@vehSemiCarAudio@@QAEXXZ
    0x4DCB70 | public: void __thiscall vehSemiCarAudio::UpdateReverse(void) | ?UpdateReverse@vehSemiCarAudio@@QAEXXZ
    0x4DCBD0 | public: void __thiscall vehSemiCarAudio::UpdateAirBlow(void) | ?UpdateAirBlow@vehSemiCarAudio@@QAEXXZ
    0x4DCC40 | public: void __thiscall vehSemiCarAudio::Reset(void) | ?Reset@vehSemiCarAudio@@QAEXXZ
    0x4DCC50 | public: virtual void __thiscall vehSemiCarAudio::AssignSounds(void) | ?AssignSounds@vehSemiCarAudio@@UAEXXZ
    0x4DCCF0 | public: virtual void __thiscall vehSemiCarAudio::UnAssignSounds(int) | ?UnAssignSounds@vehSemiCarAudio@@UAEXH@Z
    0x4DCD70 | public: void __thiscall vehSemiCarAudio::Load(char *) | ?Load@vehSemiCarAudio@@QAEXPAD@Z
    0x4DCE80 | public: void __thiscall vehSemiCarAudio::RemoveFromManager(void) | ?RemoveFromManager@vehSemiCarAudio@@QAEXXZ
    0x4DCE90 | public: virtual void __thiscall vehSemiCarAudio::SetNon3DParams(void) | ?SetNon3DParams@vehSemiCarAudio@@UAEXXZ
    0x4DCF30 | public: virtual void __thiscall vehSemiCarAudio::Set3DParams(void) | ?Set3DParams@vehSemiCarAudio@@UAEXXZ
    0x4DCF40 | public: virtual void __thiscall vehSemiCarAudio::Update(void) | ?Update@vehSemiCarAudio@@UAEXXZ
    0x4DCF50 | public: void __thiscall vehSemiCarAudio::EchoOn(void) | ?EchoOn@vehSemiCarAudio@@QAEXXZ
    0x4DCFD0 | public: void __thiscall vehSemiCarAudio::EchoOff(void) | ?EchoOff@vehSemiCarAudio@@QAEXXZ
    0x4DD000 | public: void __thiscall vehSemiCarAudio::Set2DPan(float) | ?Set2DPan@vehSemiCarAudio@@QAEXM@Z
    0x4DD050 | public: void __thiscall vehSemiCarAudio::UpdateEcho(void) | ?UpdateEcho@vehSemiCarAudio@@QAEXXZ
    public: virtual void * __thiscall vehSemiCarAudio::`vector deleting destructor'(unsigned int) | ??_EvehSemiCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehSemiCarAudio::`scalar deleting destructor'(unsigned int) | ??_GvehSemiCarAudio@@UAEPAXI@Z
    0x5B31B4 | const vehSemiCarAudio::`vftable' | ??_7vehSemiCarAudio@@6B@
*/

class vehSemiCarAudio : public vehCarAudio
{
    // const vehSemiCarAudio::`vftable' @ 0x5B31B4

public:
    // 0x4DC930 | ??0vehSemiCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PAD_N3@Z
    vehSemiCarAudio(class vehCarSim* arg1, class vehCarDamage* arg2, char* arg3, bool arg4, bool arg5);

    // 0x4DC9C0 | ??1vehSemiCarAudio@@UAE@XZ
    ~vehSemiCarAudio();

    // 0x4DCC50 | ?AssignSounds@vehSemiCarAudio@@UAEXXZ
    void AssignSounds() override;

    // 0x4DCFD0 | ?EchoOff@vehSemiCarAudio@@QAEXXZ
    void EchoOff();

    // 0x4DCF50 | ?EchoOn@vehSemiCarAudio@@QAEXXZ
    void EchoOn();

    // 0x4DC9D0 | ?Init@vehSemiCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PAD_N33@Z
    void Init(class vehCarSim* arg1, class vehCarDamage* arg2, char* arg3, bool arg4, bool arg5, bool arg6);

    // 0x4DCD70 | ?Load@vehSemiCarAudio@@QAEXPAD@Z
    void Load(char* arg1);

    // 0x4DCE80 | ?RemoveFromManager@vehSemiCarAudio@@QAEXXZ
    void RemoveFromManager();

    // 0x4DCC40 | ?Reset@vehSemiCarAudio@@QAEXXZ
    void Reset();

    // 0x4DD000 | ?Set2DPan@vehSemiCarAudio@@QAEXM@Z
    void Set2DPan(f32 arg1);

    // 0x4DCF30 | ?Set3DParams@vehSemiCarAudio@@UAEXXZ
    void Set3DParams() override;

    // 0x4DCE90 | ?SetNon3DParams@vehSemiCarAudio@@UAEXXZ
    void SetNon3DParams() override;

    // 0x4DCCF0 | ?UnAssignSounds@vehSemiCarAudio@@UAEXH@Z
    void UnAssignSounds(i32 arg1) override;

    // 0x4DCF40 | ?Update@vehSemiCarAudio@@UAEXXZ
    void Update() override;

    // 0x4DCBD0 | ?UpdateAirBlow@vehSemiCarAudio@@QAEXXZ
    void UpdateAirBlow();

    // 0x4DCA40 | ?UpdateAudio@vehSemiCarAudio@@UAEXXZ
    void UpdateAudio() override;

    // 0x4DCA90 | ?UpdateAudio3D@vehSemiCarAudio@@QAEXXZ
    void UpdateAudio3D();

    // 0x4DCB50 | ?UpdateAudioNon3D@vehSemiCarAudio@@QAEXXZ
    void UpdateAudioNon3D();

    // 0x4DD050 | ?UpdateEcho@vehSemiCarAudio@@QAEXXZ
    void UpdateEcho();

    // 0x4DCB70 | ?UpdateReverse@vehSemiCarAudio@@QAEXXZ
    void UpdateReverse();
};

check_size(vehSemiCarAudio, 0x0);
