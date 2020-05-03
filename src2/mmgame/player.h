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

#include "node/node.h"

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

class mmPlayer : public asNode
{
    // const mmPlayer::`vftable' @ 0x5B03B4

public:
    // 0x4033D0 | ??0mmPlayer@@QAE@XZ
    mmPlayer();

    // 0x4067D0 | ??_GmmPlayer@@UAEPAXI@Z
    // 0x403800 | ??1mmPlayer@@UAE@XZ
    ~mmPlayer() override;

    // 0x4039A0 | ?AfterLoad@mmPlayer@@UAEXXZ
    void AfterLoad() override;

    // 0x403990 | ?BeforeSave@mmPlayer@@UAEXXZ
    void BeforeSave() override;

    // 0x406160 | ?EnableRegen@mmPlayer@@QAEXH@Z
    void EnableRegen(i32 arg1);

    // 0x406240 | ?FFImpactCallback@mmPlayer@@QAEXM@Z
    void FFImpactCallback(f32 arg1);

    // 0x406320 | ?FileIO@mmPlayer@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x404C90 | ?FilterSteering@mmPlayer@@QAEMM@Z
    f32 FilterSteering(f32 arg1);

    // 0x404220 | ?ImpactCallback@mmPlayer@@QAEXPAX0@Z
    void ImpactCallback(void* arg1, void* arg2);

    // 0x403B20 | ?Init@mmPlayer@@QAEXPAD0PAVmmGame@@@Z
    void Init(char* arg1, char* arg2, class mmGame* arg3);

    // 0x406140 | ?IsMaxDamaged@mmPlayer@@QAEHXZ
    i32 IsMaxDamaged();

    // 0x404550 | ?IsPOV@mmPlayer@@QAEHXZ
    i32 IsPOV();

    // 0x4039B0 | ?ReInit@mmPlayer@@QAEXPAD@Z
    void ReInit(char* arg1);

    // 0x404A60 | ?Reset@mmPlayer@@UAEXXZ
    void Reset() override;

    // 0x406180 | ?ResetDamage@mmPlayer@@QAEXXZ
    void ResetDamage();

    // 0x404BE0 | ?ResetFF@mmPlayer@@QAEXXZ
    void ResetFF();

    // 0x4060D0 | ?SetCamInterest@mmPlayer@@QAEXPAVphInertialCS@@@Z
    void SetCamInterest(class phInertialCS* arg1);

    // 0x404200 | ?SetGameCallback@mmPlayer@@QAEXVdatCallback@@@Z
    void SetGameCallback(class datCallback arg1);

    // 0x404460 | ?SetMPPostCam@mmPlayer@@QAEXPAVMatrix34@@M@Z
    void SetMPPostCam(class Matrix34* arg1, f32 arg2);

    // 0x404350 | ?SetPostRaceCam@mmPlayer@@QAEXXZ
    void SetPostRaceCam();

    // 0x404250 | ?SetPreRaceCam@mmPlayer@@QAEXXZ
    void SetPreRaceCam();

    // 0x404C50 | ?SetSteering@mmPlayer@@QAEXM@Z
    void SetSteering(f32 arg1);

    // 0x404580 | ?SetWideFOV@mmPlayer@@QAEXH@Z
    void SetWideFOV(i32 arg1);

    // 0x405760 | ?Update@mmPlayer@@UAEXXZ
    void Update() override;

    // 0x405340 | ?UpdateFF@mmPlayer@@QAEXXZ
    void UpdateFF();

    // 0x404920 | ?UpdateHOG@mmPlayer@@QAEXXZ
    void UpdateHOG();

    // 0x4061A0 | ?UpdateRegen@mmPlayer@@QAEXXZ
    void UpdateRegen();

protected:
    // 0x404890 | ?GetCamera@mmPlayer@@IAEXAAH0@Z
    void GetCamera(i32& arg1, i32& arg2);

    // 0x4046F0 | ?GetCurrentGameCamIndex@mmPlayer@@IAEHXZ
    i32 GetCurrentGameCamIndex();

    // 0x404700 | ?GetCurrentXCamIndex@mmPlayer@@IAEHXZ
    i32 GetCurrentXCamIndex();

    // 0x4046B0 | ?GetNextCycleCamIndex@mmPlayer@@IAEHXZ
    i32 GetNextCycleCamIndex();

    // 0x4046D0 | ?GetNextCycleXCamIndex@mmPlayer@@IAEHXZ
    i32 GetNextCycleXCamIndex();

    // 0x404710 | ?SetCamera@mmPlayer@@IAEXHH@Z
    void SetCamera(i32 arg1, i32 arg2);

private:
    // 0x4048E0 | ?GetCurrentCameraPtr@mmPlayer@@AAEPAVcamCarCS@@XZ
    class camCarCS* GetCurrentCameraPtr();

    // 0x4040B0 | ?InitSpeechAudio@mmPlayer@@AAEXPAD@Z
    void InitSpeechAudio(char* arg1);
};

check_size(mmPlayer, 0x23A4);

// 0x404C70 | ?playerFilterSteering@@YAMM@Z
f32 playerFilterSteering(f32 arg1);

// 0x5E0D40 | ?PLAYER@@3PAVmmPlayer@@A
inline extern_var(0x5E0D40, class mmPlayer*, PLAYER);

// 0x5E0D3C | ?RestoreCityCam@@3HA
inline extern_var(0x5E0D3C, i32, RestoreCityCam);

// 0x5E0D28 | ?XcamCheat@@3HA
inline extern_var(0x5E0D28, i32, XcamCheat);
