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
    vehicle:nitrocaraudio

    0x4DD1A0 | public: __thiscall vehNitroCarAudio::vehNitroCarAudio(class vehCarSim *,class vehCarDamage *,char *,bool,bool) | ??0vehNitroCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PAD_N3@Z
    0x4DD230 | public: virtual __thiscall vehNitroCarAudio::~vehNitroCarAudio(void) | ??1vehNitroCarAudio@@UAE@XZ
    0x4DD240 | public: void __thiscall vehNitroCarAudio::Init(class vehCarSim *,class vehCarDamage *,char *,bool,bool,bool) | ?Init@vehNitroCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PAD_N33@Z
    0x4DD2A0 | public: virtual void __thiscall vehNitroCarAudio::UpdateAudio(void) | ?UpdateAudio@vehNitroCarAudio@@UAEXXZ
    0x4DD2F0 | public: void __thiscall vehNitroCarAudio::UpdateAudio3D(void) | ?UpdateAudio3D@vehNitroCarAudio@@QAEXXZ
    0x4DD370 | public: void __thiscall vehNitroCarAudio::UpdateAudioNon3D(void) | ?UpdateAudioNon3D@vehNitroCarAudio@@QAEXXZ
    0x4DD380 | public: void __thiscall vehNitroCarAudio::Reset(void) | ?Reset@vehNitroCarAudio@@QAEXXZ
    0x4DD390 | public: virtual void __thiscall vehNitroCarAudio::AssignSounds(void) | ?AssignSounds@vehNitroCarAudio@@UAEXXZ
    0x4DD400 | public: virtual void __thiscall vehNitroCarAudio::UnAssignSounds(int) | ?UnAssignSounds@vehNitroCarAudio@@UAEXH@Z
    0x4DD450 | public: void __thiscall vehNitroCarAudio::Load(char *) | ?Load@vehNitroCarAudio@@QAEXPAD@Z
    0x4DD550 | public: void __thiscall vehNitroCarAudio::RemoveFromManager(void) | ?RemoveFromManager@vehNitroCarAudio@@QAEXXZ
    0x4DD560 | public: virtual void __thiscall vehNitroCarAudio::SetNon3DParams(void) | ?SetNon3DParams@vehNitroCarAudio@@UAEXXZ
    0x4DD5D0 | public: virtual void __thiscall vehNitroCarAudio::Set3DParams(void) | ?Set3DParams@vehNitroCarAudio@@UAEXXZ
    0x4DD5E0 | public: virtual void __thiscall vehNitroCarAudio::Update(void) | ?Update@vehNitroCarAudio@@UAEXXZ
    0x4DD5F0 | public: void __thiscall vehNitroCarAudio::EchoOn(void) | ?EchoOn@vehNitroCarAudio@@QAEXXZ
    0x4DD650 | public: void __thiscall vehNitroCarAudio::EchoOff(void) | ?EchoOff@vehNitroCarAudio@@QAEXXZ
    0x4DD670 | public: void __thiscall vehNitroCarAudio::Set2DPan(float) | ?Set2DPan@vehNitroCarAudio@@QAEXM@Z
    0x4DD6B0 | public: void __thiscall vehNitroCarAudio::UpdateEcho(void) | ?UpdateEcho@vehNitroCarAudio@@QAEXXZ
    0x4DD6D0 | public: void __thiscall vehNitroCarAudio::PlayNitro(void) | ?PlayNitro@vehNitroCarAudio@@QAEXXZ
    0x4DD760 | public: void __thiscall vehNitroCarAudio::StopNitro(void) | ?StopNitro@vehNitroCarAudio@@QAEXXZ
    public: virtual void * __thiscall vehNitroCarAudio::`scalar deleting destructor'(unsigned int) | ??_GvehNitroCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehNitroCarAudio::`vector deleting destructor'(unsigned int) | ??_EvehNitroCarAudio@@UAEPAXI@Z
    0x5B31D8 | const vehNitroCarAudio::`vftable' | ??_7vehNitroCarAudio@@6B@
*/

class vehNitroCarAudio : Aud3DObject
{
public:
    // vehNitroCarAudio::`vftable' @ 0x5B31D8

    // 0x4DD1A0 | ??0vehNitroCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PAD_N3@Z
    vehNitroCarAudio(class vehCarSim* arg1, class vehCarDamage* arg2, char* arg3, bool arg4, bool arg5)
    {
        stub<member_func_t<void, vehNitroCarAudio, class vehCarSim*, class vehCarDamage*, char*, bool, bool>>(
            0x4DD1A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4DD240 | ?Init@vehNitroCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PAD_N33@Z
    void Init(class vehCarSim* arg1, class vehCarDamage* arg2, char* arg3, bool arg4, bool arg5, bool arg6)
    {
        return stub<
            member_func_t<void, vehNitroCarAudio, class vehCarSim*, class vehCarDamage*, char*, bool, bool, bool>>(
            0x4DD240, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4DD2F0 | ?UpdateAudio3D@vehNitroCarAudio@@QAEXXZ
    void UpdateAudio3D()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD2F0, this);
    }

    // 0x4DD370 | ?UpdateAudioNon3D@vehNitroCarAudio@@QAEXXZ
    void UpdateAudioNon3D()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD370, this);
    }

    // 0x4DD380 | ?Reset@vehNitroCarAudio@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD380, this);
    }

    // 0x4DD450 | ?Load@vehNitroCarAudio@@QAEXPAD@Z
    void Load(char* arg1)
    {
        return stub<member_func_t<void, vehNitroCarAudio, char*>>(0x4DD450, this, arg1);
    }

    // 0x4DD550 | ?RemoveFromManager@vehNitroCarAudio@@QAEXXZ
    void RemoveFromManager()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD550, this);
    }

    // 0x4DD5F0 | ?EchoOn@vehNitroCarAudio@@QAEXXZ
    void EchoOn()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD5F0, this);
    }

    // 0x4DD650 | ?EchoOff@vehNitroCarAudio@@QAEXXZ
    void EchoOff()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD650, this);
    }

    // 0x4DD670 | ?Set2DPan@vehNitroCarAudio@@QAEXM@Z
    void Set2DPan(f32 arg1)
    {
        return stub<member_func_t<void, vehNitroCarAudio, f32>>(0x4DD670, this, arg1);
    }

    // 0x4DD6B0 | ?UpdateEcho@vehNitroCarAudio@@QAEXXZ
    void UpdateEcho()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD6B0, this);
    }

    // 0x4DD6D0 | ?PlayNitro@vehNitroCarAudio@@QAEXXZ
    void PlayNitro()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD6D0, this);
    }

    // 0x4DD760 | ?StopNitro@vehNitroCarAudio@@QAEXXZ
    void StopNitro()
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD760, this);
    }

    // 0x4DD390 | ?AssignSounds@vehNitroCarAudio@@UAEXXZ
    void AssignSounds() override
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD390, this);
    }

    // 0x4DD400 | ?UnAssignSounds@vehNitroCarAudio@@UAEXH@Z
    void UnAssignSounds(i32 arg1) override
    {
        return stub<member_func_t<void, vehNitroCarAudio, i32>>(0x4DD400, this, arg1);
    }

    // 0x4DD2A0 | ?UpdateAudio@vehNitroCarAudio@@UAEXXZ
    void UpdateAudio() override
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD2A0, this);
    }

    // 0x4DD5E0 | ?Update@vehNitroCarAudio@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD5E0, this);
    }

    // 0x4DD560 | ?SetNon3DParams@vehNitroCarAudio@@UAEXXZ
    void SetNon3DParams() override
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD560, this);
    }

    // 0x4DD5D0 | ?Set3DParams@vehNitroCarAudio@@UAEXXZ
    void Set3DParams() override
    {
        return stub<member_func_t<void, vehNitroCarAudio>>(0x4DD5D0, this);
    }
};
