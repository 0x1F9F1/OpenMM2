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
    mmgame:player

    0x4033D0 | public: __thiscall mmPlayer::mmPlayer(void) | ??0mmPlayer@@QAE@XZ
    0x403800 | public: virtual __thiscall mmPlayer::~mmPlayer(void) | ??1mmPlayer@@UAE@XZ
    0x403990 | public: virtual void __thiscall mmPlayer::BeforeSave(void) | ?BeforeSave@mmPlayer@@UAEXXZ
    0x4039A0 | public: virtual void __thiscall mmPlayer::AfterLoad(void) | ?AfterLoad@mmPlayer@@UAEXXZ
    0x4039B0 | public: void __thiscall mmPlayer::ReInit(char *) | ?ReInit@mmPlayer@@QAEXPAD@Z
    0x403B20 | public: void __thiscall mmPlayer::Init(char *,char *,class mmGame *) | ?Init@mmPlayer@@QAEXPAD0PAVmmGame@@@Z
    0x4040B0 | private: void __thiscall mmPlayer::InitSpeechAudio(char *) | ?InitSpeechAudio@mmPlayer@@AAEXPAD@Z
    0x404200 | public: void __thiscall mmPlayer::SetGameCallback(class datCallback) | ?SetGameCallback@mmPlayer@@QAEXVdatCallback@@@Z
    0x404220 | public: void __thiscall mmPlayer::ImpactCallback(void *,void *) | ?ImpactCallback@mmPlayer@@QAEXPAX0@Z
    0x404250 | public: void __thiscall mmPlayer::SetPreRaceCam(void) | ?SetPreRaceCam@mmPlayer@@QAEXXZ
    0x404350 | public: void __thiscall mmPlayer::SetPostRaceCam(void) | ?SetPostRaceCam@mmPlayer@@QAEXXZ
    0x404460 | public: void __thiscall mmPlayer::SetMPPostCam(class Matrix34 *,float) | ?SetMPPostCam@mmPlayer@@QAEXPAVMatrix34@@M@Z
    0x404550 | public: int __thiscall mmPlayer::IsPOV(void) | ?IsPOV@mmPlayer@@QAEHXZ
    0x404580 | public: void __thiscall mmPlayer::SetWideFOV(int) | ?SetWideFOV@mmPlayer@@QAEXH@Z
    0x4046B0 | protected: int __thiscall mmPlayer::GetNextCycleCamIndex(void) | ?GetNextCycleCamIndex@mmPlayer@@IAEHXZ
    0x4046D0 | protected: int __thiscall mmPlayer::GetNextCycleXCamIndex(void) | ?GetNextCycleXCamIndex@mmPlayer@@IAEHXZ
    0x4046F0 | protected: int __thiscall mmPlayer::GetCurrentGameCamIndex(void) | ?GetCurrentGameCamIndex@mmPlayer@@IAEHXZ
    0x404700 | protected: int __thiscall mmPlayer::GetCurrentXCamIndex(void) | ?GetCurrentXCamIndex@mmPlayer@@IAEHXZ
    0x404710 | protected: void __thiscall mmPlayer::SetCamera(int,int) | ?SetCamera@mmPlayer@@IAEXHH@Z
    0x404890 | protected: void __thiscall mmPlayer::GetCamera(int &,int &) | ?GetCamera@mmPlayer@@IAEXAAH0@Z
    0x4048E0 | private: class camCarCS * __thiscall mmPlayer::GetCurrentCameraPtr(void) | ?GetCurrentCameraPtr@mmPlayer@@AAEPAVcamCarCS@@XZ
    0x404920 | public: void __thiscall mmPlayer::UpdateHOG(void) | ?UpdateHOG@mmPlayer@@QAEXXZ
    0x404A60 | public: virtual void __thiscall mmPlayer::Reset(void) | ?Reset@mmPlayer@@UAEXXZ
    0x404BE0 | public: void __thiscall mmPlayer::ResetFF(void) | ?ResetFF@mmPlayer@@QAEXXZ
    0x404C50 | public: void __thiscall mmPlayer::SetSteering(float) | ?SetSteering@mmPlayer@@QAEXM@Z
    0x404C70 | float __cdecl playerFilterSteering(float) | ?playerFilterSteering@@YAMM@Z
    0x404C90 | public: float __thiscall mmPlayer::FilterSteering(float) | ?FilterSteering@mmPlayer@@QAEMM@Z
    0x405340 | public: void __thiscall mmPlayer::UpdateFF(void) | ?UpdateFF@mmPlayer@@QAEXXZ
    0x405760 | public: virtual void __thiscall mmPlayer::Update(void) | ?Update@mmPlayer@@UAEXXZ
    0x4060D0 | public: void __thiscall mmPlayer::SetCamInterest(class phInertialCS *) | ?SetCamInterest@mmPlayer@@QAEXPAVphInertialCS@@@Z
    0x406140 | public: int __thiscall mmPlayer::IsMaxDamaged(void) | ?IsMaxDamaged@mmPlayer@@QAEHXZ
    0x406160 | public: void __thiscall mmPlayer::EnableRegen(int) | ?EnableRegen@mmPlayer@@QAEXH@Z
    0x406180 | public: void __thiscall mmPlayer::ResetDamage(void) | ?ResetDamage@mmPlayer@@QAEXXZ
    0x4061A0 | public: void __thiscall mmPlayer::UpdateRegen(void) | ?UpdateRegen@mmPlayer@@QAEXXZ
    0x406240 | public: void __thiscall mmPlayer::FFImpactCallback(float) | ?FFImpactCallback@mmPlayer@@QAEXM@Z
    public: void __thiscall mmPlayer::AddWidgets(class bkBank *) | ?AddWidgets@mmPlayer@@QAEXPAVbkBank@@@Z
    0x406320 | public: virtual void __thiscall mmPlayer::FileIO(class datParser &) | ?FileIO@mmPlayer@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall mmPlayer::`vector deleting destructor'(unsigned int) | ??_EmmPlayer@@UAEPAXI@Z
    0x4067D0 | public: virtual void * __thiscall mmPlayer::`scalar deleting destructor'(unsigned int) | ??_GmmPlayer@@UAEPAXI@Z
    0x406800 | public: virtual __thiscall camPolarCS::~camPolarCS(void) | ??1camPolarCS@@UAE@XZ
    0x406810 | public: virtual __thiscall camAICS::~camAICS(void) | ??1camAICS@@UAE@XZ
    0x406820 | public: virtual __thiscall camPointCS::~camPointCS(void) | ??1camPointCS@@UAE@XZ
    0x406830 | public: virtual __thiscall camPreCS::~camPreCS(void) | ??1camPreCS@@UAE@XZ
    0x406840 | public: virtual __thiscall camPostCS::~camPostCS(void) | ??1camPostCS@@UAE@XZ
    0x406850 | public: void __thiscall datParser::AddValue(char const *,float *,class datCallback *) | ?AddValue@datParser@@QAEXPBDPAMPAVdatCallback@@@Z
    0x5B03B4 | const mmPlayer::`vftable' | ??_7mmPlayer@@6B@
    0x5E0D28 | int XcamCheat | ?XcamCheat@@3HA
    0x5E0D3C | int RestoreCityCam | ?RestoreCityCam@@3HA
    0x5E0D40 | class mmPlayer * PLAYER | ?PLAYER@@3PAVmmPlayer@@A
*/

// 0x404C70 | ?playerFilterSteering@@YAMM@Z
inline float playerFilterSteering(float arg1)
{
    return stub<cdecl_t<float, float>>(0x404C70, arg1);
}

// 0x5E0D28 | ?XcamCheat@@3HA
inline extern_var(0x5E0D28, int32_t, XcamCheat);

// 0x5E0D3C | ?RestoreCityCam@@3HA
inline extern_var(0x5E0D3C, int32_t, RestoreCityCam);

// 0x5E0D40 | ?PLAYER@@3PAVmmPlayer@@A
inline extern_var(0x5E0D40, class mmPlayer*, PLAYER);

class mmPlayer : asNode
{
public:
    // mmPlayer::`vftable' @ 0x5B03B4

    // 0x4033D0 | ??0mmPlayer@@QAE@XZ
    inline mmPlayer()
    {
        stub<member_func_t<void, mmPlayer>>(0x4033D0, this);
    }

    // 0x4039B0 | ?ReInit@mmPlayer@@QAEXPAD@Z
    inline void ReInit(char* arg1)
    {
        return stub<member_func_t<void, mmPlayer, char*>>(0x4039B0, this, arg1);
    }

    // 0x403B20 | ?Init@mmPlayer@@QAEXPAD0PAVmmGame@@@Z
    inline void Init(char* arg1, char* arg2, class mmGame* arg3)
    {
        return stub<member_func_t<void, mmPlayer, char*, char*, class mmGame*>>(0x403B20, this, arg1, arg2, arg3);
    }

    // 0x4040B0 | ?InitSpeechAudio@mmPlayer@@AAEXPAD@Z
    inline void InitSpeechAudio(char* arg1)
    {
        return stub<member_func_t<void, mmPlayer, char*>>(0x4040B0, this, arg1);
    }

    // 0x404200 | ?SetGameCallback@mmPlayer@@QAEXVdatCallback@@@Z
    inline void SetGameCallback(class datCallback arg1)
    {
        return stub<member_func_t<void, mmPlayer, class datCallback>>(0x404200, this, arg1);
    }

    // 0x404220 | ?ImpactCallback@mmPlayer@@QAEXPAX0@Z
    inline void ImpactCallback(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmPlayer, void*, void*>>(0x404220, this, arg1, arg2);
    }

    // 0x404250 | ?SetPreRaceCam@mmPlayer@@QAEXXZ
    inline void SetPreRaceCam()
    {
        return stub<member_func_t<void, mmPlayer>>(0x404250, this);
    }

    // 0x404350 | ?SetPostRaceCam@mmPlayer@@QAEXXZ
    inline void SetPostRaceCam()
    {
        return stub<member_func_t<void, mmPlayer>>(0x404350, this);
    }

    // 0x404460 | ?SetMPPostCam@mmPlayer@@QAEXPAVMatrix34@@M@Z
    inline void SetMPPostCam(class Matrix34* arg1, float arg2)
    {
        return stub<member_func_t<void, mmPlayer, class Matrix34*, float>>(0x404460, this, arg1, arg2);
    }

    // 0x404550 | ?IsPOV@mmPlayer@@QAEHXZ
    inline int32_t IsPOV()
    {
        return stub<member_func_t<int32_t, mmPlayer>>(0x404550, this);
    }

    // 0x404580 | ?SetWideFOV@mmPlayer@@QAEXH@Z
    inline void SetWideFOV(int32_t arg1)
    {
        return stub<member_func_t<void, mmPlayer, int32_t>>(0x404580, this, arg1);
    }

    // 0x4046B0 | ?GetNextCycleCamIndex@mmPlayer@@IAEHXZ
    inline int32_t GetNextCycleCamIndex()
    {
        return stub<member_func_t<int32_t, mmPlayer>>(0x4046B0, this);
    }

    // 0x4046D0 | ?GetNextCycleXCamIndex@mmPlayer@@IAEHXZ
    inline int32_t GetNextCycleXCamIndex()
    {
        return stub<member_func_t<int32_t, mmPlayer>>(0x4046D0, this);
    }

    // 0x4046F0 | ?GetCurrentGameCamIndex@mmPlayer@@IAEHXZ
    inline int32_t GetCurrentGameCamIndex()
    {
        return stub<member_func_t<int32_t, mmPlayer>>(0x4046F0, this);
    }

    // 0x404700 | ?GetCurrentXCamIndex@mmPlayer@@IAEHXZ
    inline int32_t GetCurrentXCamIndex()
    {
        return stub<member_func_t<int32_t, mmPlayer>>(0x404700, this);
    }

    // 0x404710 | ?SetCamera@mmPlayer@@IAEXHH@Z
    inline void SetCamera(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmPlayer, int32_t, int32_t>>(0x404710, this, arg1, arg2);
    }

    // 0x404890 | ?GetCamera@mmPlayer@@IAEXAAH0@Z
    inline void GetCamera(int32_t& arg1, int32_t& arg2)
    {
        return stub<member_func_t<void, mmPlayer, int32_t&, int32_t&>>(0x404890, this, arg1, arg2);
    }

    // 0x4048E0 | ?GetCurrentCameraPtr@mmPlayer@@AAEPAVcamCarCS@@XZ
    inline class camCarCS* GetCurrentCameraPtr()
    {
        return stub<member_func_t<class camCarCS*, mmPlayer>>(0x4048E0, this);
    }

    // 0x404920 | ?UpdateHOG@mmPlayer@@QAEXXZ
    inline void UpdateHOG()
    {
        return stub<member_func_t<void, mmPlayer>>(0x404920, this);
    }

    // 0x404BE0 | ?ResetFF@mmPlayer@@QAEXXZ
    inline void ResetFF()
    {
        return stub<member_func_t<void, mmPlayer>>(0x404BE0, this);
    }

    // 0x404C50 | ?SetSteering@mmPlayer@@QAEXM@Z
    inline void SetSteering(float arg1)
    {
        return stub<member_func_t<void, mmPlayer, float>>(0x404C50, this, arg1);
    }

    // 0x404C90 | ?FilterSteering@mmPlayer@@QAEMM@Z
    inline float FilterSteering(float arg1)
    {
        return stub<member_func_t<float, mmPlayer, float>>(0x404C90, this, arg1);
    }

    // 0x405340 | ?UpdateFF@mmPlayer@@QAEXXZ
    inline void UpdateFF()
    {
        return stub<member_func_t<void, mmPlayer>>(0x405340, this);
    }

    // 0x4060D0 | ?SetCamInterest@mmPlayer@@QAEXPAVphInertialCS@@@Z
    inline void SetCamInterest(class phInertialCS* arg1)
    {
        return stub<member_func_t<void, mmPlayer, class phInertialCS*>>(0x4060D0, this, arg1);
    }

    // 0x406140 | ?IsMaxDamaged@mmPlayer@@QAEHXZ
    inline int32_t IsMaxDamaged()
    {
        return stub<member_func_t<int32_t, mmPlayer>>(0x406140, this);
    }

    // 0x406160 | ?EnableRegen@mmPlayer@@QAEXH@Z
    inline void EnableRegen(int32_t arg1)
    {
        return stub<member_func_t<void, mmPlayer, int32_t>>(0x406160, this, arg1);
    }

    // 0x406180 | ?ResetDamage@mmPlayer@@QAEXXZ
    inline void ResetDamage()
    {
        return stub<member_func_t<void, mmPlayer>>(0x406180, this);
    }

    // 0x4061A0 | ?UpdateRegen@mmPlayer@@QAEXXZ
    inline void UpdateRegen()
    {
        return stub<member_func_t<void, mmPlayer>>(0x4061A0, this);
    }

    // 0x406240 | ?FFImpactCallback@mmPlayer@@QAEXM@Z
    inline void FFImpactCallback(float arg1)
    {
        return stub<member_func_t<void, mmPlayer, float>>(0x406240, this, arg1);
    }

    // 0x403800 | ??1mmPlayer@@UAE@XZ
    inline ~mmPlayer() override
    {
        stub<member_func_t<void, mmPlayer>>(0x403800, this);
    }

    // 0x405760 | ?Update@mmPlayer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmPlayer>>(0x405760, this);
    }

    // 0x404A60 | ?Reset@mmPlayer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmPlayer>>(0x404A60, this);
    }

    // 0x406320 | ?FileIO@mmPlayer@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, mmPlayer, class datParser&>>(0x406320, this, arg1);
    }

    // 0x4039A0 | ?AfterLoad@mmPlayer@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, mmPlayer>>(0x4039A0, this);
    }

    // 0x403990 | ?BeforeSave@mmPlayer@@UAEXXZ
    inline void BeforeSave() override
    {
        return stub<member_func_t<void, mmPlayer>>(0x403990, this);
    }
};
