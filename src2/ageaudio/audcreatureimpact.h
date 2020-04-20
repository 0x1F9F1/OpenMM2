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
    ageaudio:audcreatureimpact

    0x512F10 | public: __thiscall AudCreatureImpact::AudCreatureImpact(void) | ??0AudCreatureImpact@@QAE@XZ
    0x512F40 | public: __thiscall AudCreatureImpact::AudCreatureImpact(class AudCreatureImpact *) | ??0AudCreatureImpact@@QAE@PAV0@@Z
    0x513030 | public: __thiscall AudCreatureImpact::~AudCreatureImpact(void) | ??1AudCreatureImpact@@QAE@XZ
    0x513090 | public: void __thiscall AudCreatureImpact::SetAud3DObjectPtr(class Aud3DObject *) | ?SetAud3DObjectPtr@AudCreatureImpact@@QAEXPAVAud3DObject@@@Z
    0x5130A0 | public: bool __thiscall AudCreatureImpact::SamplePlaying(void) | ?SamplePlaying@AudCreatureImpact@@QAE_NXZ
    0x5130C0 | public: int __thiscall AudCreatureImpact::ParseCSVBuffer(class Stream *) | ?ParseCSVBuffer@AudCreatureImpact@@QAEHPAVStream@@@Z
    0x5132D0 | public: void __thiscall AudCreatureImpact::AssignSounds(int) | ?AssignSounds@AudCreatureImpact@@QAEXH@Z
    0x513320 | public: void __thiscall AudCreatureImpact::UnAssignSounds(void) | ?UnAssignSounds@AudCreatureImpact@@QAEXXZ
    0x513350 | public: void __thiscall AudCreatureImpact::QueuePlay(float) | ?QueuePlay@AudCreatureImpact@@QAEXM@Z
    0x5133D0 | private: void __thiscall AudCreatureImpact::Play(void) | ?Play@AudCreatureImpact@@AAEXXZ
    0x513460 | public: void __thiscall AudCreatureImpact::UpdateAttenuation(float,float) | ?UpdateAttenuation@AudCreatureImpact@@QAEXMM@Z
    0x5134D0 | public: void __thiscall AudCreatureImpact::EchoOn(float) | ?EchoOn@AudCreatureImpact@@QAEXM@Z
    0x513530 | public: void __thiscall AudCreatureImpact::EchoOff(void) | ?EchoOff@AudCreatureImpact@@QAEXXZ
    0x513560 | public: void __thiscall AudCreatureImpact::UpdateEcho(void) | ?UpdateEcho@AudCreatureImpact@@QAEXXZ
    0x513590 | public: void __thiscall AudCreatureImpact::Update(void) | ?Update@AudCreatureImpact@@QAEXXZ
    0x5135D0 | public: static void __cdecl AudCreatureImpact::UpdateStatics(void) | ?UpdateStatics@AudCreatureImpact@@SAXXZ
    private: static float AudCreatureImpact::s_fTimeSincePlay | ?s_fTimeSincePlay@AudCreatureImpact@@0MA
    private: static int AudCreatureImpact::s_iPrevPlayIndex | ?s_iPrevPlayIndex@AudCreatureImpact@@0HA
*/

class AudCreatureImpact
{
public:
    // 0x512F10 | ??0AudCreatureImpact@@QAE@XZ
    inline AudCreatureImpact()
    {
        stub<member_func_t<void, AudCreatureImpact>>(0x512F10, this);
    }

    // 0x512F40 | ??0AudCreatureImpact@@QAE@PAV0@@Z
    inline AudCreatureImpact(class AudCreatureImpact* arg1)
    {
        stub<member_func_t<void, AudCreatureImpact, class AudCreatureImpact*>>(0x512F40, this, arg1);
    }

    // 0x513030 | ??1AudCreatureImpact@@QAE@XZ
    inline ~AudCreatureImpact()
    {
        stub<member_func_t<void, AudCreatureImpact>>(0x513030, this);
    }

    // 0x513090 | ?SetAud3DObjectPtr@AudCreatureImpact@@QAEXPAVAud3DObject@@@Z
    inline void SetAud3DObjectPtr(class Aud3DObject* arg1)
    {
        return stub<member_func_t<void, AudCreatureImpact, class Aud3DObject*>>(0x513090, this, arg1);
    }

    // 0x5130A0 | ?SamplePlaying@AudCreatureImpact@@QAE_NXZ
    inline bool SamplePlaying()
    {
        return stub<member_func_t<bool, AudCreatureImpact>>(0x5130A0, this);
    }

    // 0x5130C0 | ?ParseCSVBuffer@AudCreatureImpact@@QAEHPAVStream@@@Z
    inline int32_t ParseCSVBuffer(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, AudCreatureImpact, class Stream*>>(0x5130C0, this, arg1);
    }

    // 0x5132D0 | ?AssignSounds@AudCreatureImpact@@QAEXH@Z
    inline void AssignSounds(int32_t arg1)
    {
        return stub<member_func_t<void, AudCreatureImpact, int32_t>>(0x5132D0, this, arg1);
    }

    // 0x513320 | ?UnAssignSounds@AudCreatureImpact@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, AudCreatureImpact>>(0x513320, this);
    }

    // 0x513350 | ?QueuePlay@AudCreatureImpact@@QAEXM@Z
    inline void QueuePlay(float arg1)
    {
        return stub<member_func_t<void, AudCreatureImpact, float>>(0x513350, this, arg1);
    }

    // 0x5133D0 | ?Play@AudCreatureImpact@@AAEXXZ
    inline void Play()
    {
        return stub<member_func_t<void, AudCreatureImpact>>(0x5133D0, this);
    }

    // 0x513460 | ?UpdateAttenuation@AudCreatureImpact@@QAEXMM@Z
    inline void UpdateAttenuation(float arg1, float arg2)
    {
        return stub<member_func_t<void, AudCreatureImpact, float, float>>(0x513460, this, arg1, arg2);
    }

    // 0x5134D0 | ?EchoOn@AudCreatureImpact@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, AudCreatureImpact, float>>(0x5134D0, this, arg1);
    }

    // 0x513530 | ?EchoOff@AudCreatureImpact@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, AudCreatureImpact>>(0x513530, this);
    }

    // 0x513560 | ?UpdateEcho@AudCreatureImpact@@QAEXXZ
    inline void UpdateEcho()
    {
        return stub<member_func_t<void, AudCreatureImpact>>(0x513560, this);
    }

    // 0x513590 | ?Update@AudCreatureImpact@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, AudCreatureImpact>>(0x513590, this);
    }

    // 0x5135D0 | ?UpdateStatics@AudCreatureImpact@@SAXXZ
    static inline void UpdateStatics()
    {
        return stub<cdecl_t<void>>(0x5135D0);
    }
};
