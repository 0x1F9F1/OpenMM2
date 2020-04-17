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
    mmgame:replay

    0x406870 | public: __thiscall mmReplayManager::mmReplayManager(void) | ??0mmReplayManager@@QAE@XZ
    0x406930 | public: virtual __thiscall mmReplayManager::~mmReplayManager(void) | ??1mmReplayManager@@UAE@XZ
    0x406990 | public: virtual void __thiscall mmReplayManager::Reset(void) | ?Reset@mmReplayManager@@UAEXXZ
    0x4069E0 | public: virtual void __thiscall mmReplayManager::Update(void) | ?Update@mmReplayManager@@UAEXXZ
    0x406DF0 | public: virtual void __thiscall mmReplayManager::Cull(void) | ?Cull@mmReplayManager@@UAEXXZ
    0x406E00 | private: void __thiscall mmReplayManager::ProcessCam(void) | ?ProcessCam@mmReplayManager@@AAEXXZ
    0x406E80 | private: void __thiscall mmReplayManager::StartReplay(void) | ?StartReplay@mmReplayManager@@AAEXXZ
    0x406EF0 | public: void __thiscall mmReplayManager::SetReplayDesc(char *) | ?SetReplayDesc@mmReplayManager@@QAEXPAD@Z
    0x406F30 | public: int __thiscall mmReplayManager::LoadReplayDesc(char *) | ?LoadReplayDesc@mmReplayManager@@QAEHPAD@Z
    0x407000 | public: void __thiscall mmReplayManager::LoadReplay(char *) | ?LoadReplay@mmReplayManager@@QAEXPAD@Z
    0x407130 | public: bool __thiscall mmReplayManager::EndOfReplay(void) | ?EndOfReplay@mmReplayManager@@QAE_NXZ
    0x407150 | public: void __thiscall mmReplayManager::SaveReplayDesc(char *) | ?SaveReplayDesc@mmReplayManager@@QAEXPAD@Z
    0x4071E0 | public: void __thiscall mmReplayManager::SaveReplay(char *) | ?SaveReplay@mmReplayManager@@QAEXPAD@Z
    0x4072D0 | public: float __thiscall mmReplayManager::GetBrakes(void) | ?GetBrakes@mmReplayManager@@QAEMXZ
    0x407300 | public: float __thiscall mmReplayManager::GetHandBrakes(void) | ?GetHandBrakes@mmReplayManager@@QAEMXZ
    0x407330 | public: float __thiscall mmReplayManager::GetSteering(void) | ?GetSteering@mmReplayManager@@QAEMXZ
    0x407360 | public: float __thiscall mmReplayManager::GetThrottle(void) | ?GetThrottle@mmReplayManager@@QAEMXZ
    0x407390 | public: void __thiscall mmReplayManager::GetData(int *,bool *) | ?GetData@mmReplayManager@@QAEXPAHPA_N@Z
    0x4073D0 | public: void __thiscall mmReplayManager::SetData(int,bool) | ?SetData@mmReplayManager@@QAEXH_N@Z
    public: void __thiscall mmReplayManager::AddWidgets(class bkBank *) | ?AddWidgets@mmReplayManager@@QAEXPAVbkBank@@@Z
    0x407410 | private: void __thiscall mmReplayManager::GetReplayInfo(void) | ?GetReplayInfo@mmReplayManager@@AAEXXZ
    0x4075A0 | private: void __thiscall mmReplayManager::SetReplayInfo(void) | ?SetReplayInfo@mmReplayManager@@AAEXXZ
    0x407720 | private: void __thiscall mmReplayManager::WriteReplayInfo(class Stream *) | ?WriteReplayInfo@mmReplayManager@@AAEXPAVStream@@@Z
    0x407920 | private: void __thiscall mmReplayManager::ReadReplayInfo(class Stream *) | ?ReadReplayInfo@mmReplayManager@@AAEXPAVStream@@@Z
    0x407B10 | public: virtual void * __thiscall mmReplayManager::`scalar deleting destructor'(unsigned int) | ??_GmmReplayManager@@UAEPAXI@Z
    public: virtual void * __thiscall mmReplayManager::`vector deleting destructor'(unsigned int) | ??_EmmReplayManager@@UAEPAXI@Z
    0x407B40 | public: virtual char * __thiscall asNode::GetClassName(void) | ?GetClassName@asNode@@UAEPADXZ
    0x5B0444 | const mmReplayManager::`vftable' | ??_7mmReplayManager@@6B@
    0x627248 | private: static class mmReplayManager * mmReplayManager::Instance | ?Instance@mmReplayManager@@0PAV1@A
*/

class mmReplayManager : asNode
{
public:
    // mmReplayManager::`vftable' @ 0x5B0444

    // 0x406870 | ??0mmReplayManager@@QAE@XZ
    mmReplayManager()
    {
        stub<member_func_t<void, mmReplayManager>>(0x406870, this);
    }

    // 0x406E00 | ?ProcessCam@mmReplayManager@@AAEXXZ
    void ProcessCam()
    {
        return stub<member_func_t<void, mmReplayManager>>(0x406E00, this);
    }

    // 0x406E80 | ?StartReplay@mmReplayManager@@AAEXXZ
    void StartReplay()
    {
        return stub<member_func_t<void, mmReplayManager>>(0x406E80, this);
    }

    // 0x406EF0 | ?SetReplayDesc@mmReplayManager@@QAEXPAD@Z
    void SetReplayDesc(char* arg1)
    {
        return stub<member_func_t<void, mmReplayManager, char*>>(0x406EF0, this, arg1);
    }

    // 0x406F30 | ?LoadReplayDesc@mmReplayManager@@QAEHPAD@Z
    i32 LoadReplayDesc(char* arg1)
    {
        return stub<member_func_t<i32, mmReplayManager, char*>>(0x406F30, this, arg1);
    }

    // 0x407000 | ?LoadReplay@mmReplayManager@@QAEXPAD@Z
    void LoadReplay(char* arg1)
    {
        return stub<member_func_t<void, mmReplayManager, char*>>(0x407000, this, arg1);
    }

    // 0x407130 | ?EndOfReplay@mmReplayManager@@QAE_NXZ
    bool EndOfReplay()
    {
        return stub<member_func_t<bool, mmReplayManager>>(0x407130, this);
    }

    // 0x407150 | ?SaveReplayDesc@mmReplayManager@@QAEXPAD@Z
    void SaveReplayDesc(char* arg1)
    {
        return stub<member_func_t<void, mmReplayManager, char*>>(0x407150, this, arg1);
    }

    // 0x4071E0 | ?SaveReplay@mmReplayManager@@QAEXPAD@Z
    void SaveReplay(char* arg1)
    {
        return stub<member_func_t<void, mmReplayManager, char*>>(0x4071E0, this, arg1);
    }

    // 0x4072D0 | ?GetBrakes@mmReplayManager@@QAEMXZ
    f32 GetBrakes()
    {
        return stub<member_func_t<f32, mmReplayManager>>(0x4072D0, this);
    }

    // 0x407300 | ?GetHandBrakes@mmReplayManager@@QAEMXZ
    f32 GetHandBrakes()
    {
        return stub<member_func_t<f32, mmReplayManager>>(0x407300, this);
    }

    // 0x407330 | ?GetSteering@mmReplayManager@@QAEMXZ
    f32 GetSteering()
    {
        return stub<member_func_t<f32, mmReplayManager>>(0x407330, this);
    }

    // 0x407360 | ?GetThrottle@mmReplayManager@@QAEMXZ
    f32 GetThrottle()
    {
        return stub<member_func_t<f32, mmReplayManager>>(0x407360, this);
    }

    // 0x407390 | ?GetData@mmReplayManager@@QAEXPAHPA_N@Z
    void GetData(i32* arg1, bool* arg2)
    {
        return stub<member_func_t<void, mmReplayManager, i32*, bool*>>(0x407390, this, arg1, arg2);
    }

    // 0x4073D0 | ?SetData@mmReplayManager@@QAEXH_N@Z
    void SetData(i32 arg1, bool arg2)
    {
        return stub<member_func_t<void, mmReplayManager, i32, bool>>(0x4073D0, this, arg1, arg2);
    }

    // 0x407410 | ?GetReplayInfo@mmReplayManager@@AAEXXZ
    void GetReplayInfo()
    {
        return stub<member_func_t<void, mmReplayManager>>(0x407410, this);
    }

    // 0x4075A0 | ?SetReplayInfo@mmReplayManager@@AAEXXZ
    void SetReplayInfo()
    {
        return stub<member_func_t<void, mmReplayManager>>(0x4075A0, this);
    }

    // 0x407720 | ?WriteReplayInfo@mmReplayManager@@AAEXPAVStream@@@Z
    void WriteReplayInfo(class Stream* arg1)
    {
        return stub<member_func_t<void, mmReplayManager, class Stream*>>(0x407720, this, arg1);
    }

    // 0x407920 | ?ReadReplayInfo@mmReplayManager@@AAEXPAVStream@@@Z
    void ReadReplayInfo(class Stream* arg1)
    {
        return stub<member_func_t<void, mmReplayManager, class Stream*>>(0x407920, this, arg1);
    }

    // 0x627248 | ?Instance@mmReplayManager@@0PAV1@A
    inline extern_var(0x627248, class mmReplayManager*, Instance);

    // 0x406930 | ??1mmReplayManager@@UAE@XZ
    ~mmReplayManager() override
    {
        stub<member_func_t<void, mmReplayManager>>(0x406930, this);
    }

    // 0x406DF0 | ?Cull@mmReplayManager@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, mmReplayManager>>(0x406DF0, this);
    }

    // 0x4069E0 | ?Update@mmReplayManager@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, mmReplayManager>>(0x4069E0, this);
    }

    // 0x406990 | ?Reset@mmReplayManager@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, mmReplayManager>>(0x406990, this);
    }
};
