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
    aud:manager

    0x5A0D60 | public: class audManager * __thiscall audManager::Create(int,int,int,int,int,int,int,int,int,int,int,enum audManager::SOUNDFLAG) | ?Create@audManager@@QAEPAV1@HHHHHHHHHHHW4SOUNDFLAG@1@@Z
    0x5A0F80 | public: void __thiscall audManager::RestartAudio(int,int,int) | ?RestartAudio@audManager@@QAEXHHH@Z
    0x5A0F90 | public: void __thiscall audManager::ShutDownAudio(void) | ?ShutDownAudio@audManager@@QAEXXZ
    0x5A0FE0 | public: void __thiscall audManager::Destroy(void) | ?Destroy@audManager@@QAEXXZ
    0x5A0FF0 | private: bool __thiscall audManager::InitControlStruct(class audSoundHeap *,struct _controlptrs_ *,int) | ?InitControlStruct@audManager@@AAE_NPAVaudSoundHeap@@PAU_controlptrs_@@H@Z
    0x5A1060 | public: void __thiscall audManager::Enable(bool) | ?Enable@audManager@@QAEX_N@Z
    0x5A1090 | public: bool __thiscall audManager::IsEnabled(void) | ?IsEnabled@audManager@@QAE_NXZ
    0x5A10B0 | public: void __thiscall audManager::Update(int) | ?Update@audManager@@QAEXH@Z
    0x5A1160 | public: int __thiscall audManager::AddHead(class audHead *) | ?AddHead@audManager@@QAEHPAVaudHead@@@Z
    0x5A11B0 | public: bool __thiscall audManager::RemoveHead(class audHead *) | ?RemoveHead@audManager@@QAE_NPAVaudHead@@@Z
    0x5A1270 | public: class audHead * __thiscall audManager::GetActiveHead(int) | ?GetActiveHead@audManager@@QAEPAVaudHead@@H@Z
    0x5A12E0 | public: int __thiscall audManager::AddControl(enum audManager::AUDTYPE,class audControl *) | ?AddControl@audManager@@QAEHW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1380 | public: bool __thiscall audManager::RemoveControl(enum audManager::AUDTYPE,class audControl *) | ?RemoveControl@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1430 | public: bool __thiscall audManager::MoveToActive(enum audManager::AUDTYPE,class audControl *) | ?MoveToActive@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1560 | public: bool __thiscall audManager::MoveFromActive(enum audManager::AUDTYPE,class audControl *) | ?MoveFromActive@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A15F0 | public: bool __thiscall audManager::MoveActiveToTop(enum audManager::AUDTYPE,class audControl *) | ?MoveActiveToTop@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A16B0 | public: bool __thiscall audManager::MoveActiveToBottom(enum audManager::AUDTYPE,class audControl *) | ?MoveActiveToBottom@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1730 | public: bool __thiscall audManager::StopAllSounds(enum audManager::AUDTYPE) | ?StopAllSounds@audManager@@QAE_NW4AUDTYPE@1@@Z
    0x5A1810 | public: void __thiscall audManager::FreeAndDestroyAllSounds(void) | ?FreeAndDestroyAllSounds@audManager@@QAEXXZ
    0x5A18E0 | public: int __thiscall audManager::CountSounds(enum audManager::AUDTYPE) | ?CountSounds@audManager@@QAEHW4AUDTYPE@1@@Z
    0x5A1950 | public: int __thiscall audManager::CountActiveSounds(enum audManager::AUDTYPE) | ?CountActiveSounds@audManager@@QAEHW4AUDTYPE@1@@Z
    0x5A19C0 | public: void __thiscall audManager::SetVolAllSounds(enum audManager::AUDTYPE,float) | ?SetVolAllSounds@audManager@@QAEXW4AUDTYPE@1@M@Z
    0x5A1AB0 | public: float __thiscall audManager::GetMasterVolume(enum audManager::AUDTYPE) | ?GetMasterVolume@audManager@@QAEMW4AUDTYPE@1@@Z
    0x5A1B10 | public: void __thiscall audManager::SetSoundFlags(enum audManager::SOUNDFLAG,enum audManager::SOUNDFLAG) | ?SetSoundFlags@audManager@@QAEXW4SOUNDFLAG@1@0@Z
    0x5A1B40 | public: bool __thiscall audManager::IsSoundFlags(enum audManager::SOUNDFLAG) | ?IsSoundFlags@audManager@@QAE_NW4SOUNDFLAG@1@@Z
    0x5A1B60 | public: void __thiscall audManager::SetMaxConcurrent(enum audManager::AUDTYPE,int) | ?SetMaxConcurrent@audManager@@QAEXW4AUDTYPE@1@H@Z
    0x5A1BC0 | public: class audControl * __thiscall audManager::GetControlListPtr(enum audManager::AUDTYPE) | ?GetControlListPtr@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    0x5A1C20 | public: class audControl * __thiscall audManager::GetActiveControlListPtr(enum audManager::AUDTYPE) | ?GetActiveControlListPtr@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    0x5A1C80 | public: class audControl * __thiscall audManager::AllocControl(enum audManager::AUDTYPE) | ?AllocControl@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    0x5A1D20 | public: class audTimeNode * __thiscall audManager::AllocTimeNode(void) | ?AllocTimeNode@audManager@@QAEPAVaudTimeNode@@XZ
    0x5A1DA0 | public: class audStream * __thiscall audManager::AllocStreamNode(void) | ?AllocStreamNode@audManager@@QAEPAVaudStream@@XZ
    0x5A1E00 | public: class audHead * __thiscall audManager::AllocHeadNode(void) | ?AllocHeadNode@audManager@@QAEPAVaudHead@@XZ
    0x5A1E60 | public: class audFX * __thiscall audManager::AllocFXNode(void) | ?AllocFXNode@audManager@@QAEPAVaudFX@@XZ
    0x5A1EC0 | public: class audFileSystem * __thiscall audManager::AllocFileNode(void) | ?AllocFileNode@audManager@@QAEPAVaudFileSystem@@XZ
    0x5A1F20 | public: void __thiscall audManager::FreeControl(enum audManager::AUDTYPE,class audControl *) | ?FreeControl@audManager@@QAEXW4AUDTYPE@1@PAVaudControl@@@Z
    0x5A1FA0 | public: void __thiscall audManager::FreeTimeNode(class audTimeNode *) | ?FreeTimeNode@audManager@@QAEXPAVaudTimeNode@@@Z
    0x5A1FF0 | public: void __thiscall audManager::FreeStreamNode(class audStream *) | ?FreeStreamNode@audManager@@QAEXPAVaudStream@@@Z
    0x5A2040 | public: void __thiscall audManager::FreeHeadNode(class audHead *) | ?FreeHeadNode@audManager@@QAEXPAVaudHead@@@Z
    0x5A2090 | public: void __thiscall audManager::FreeFXNode(class audFX *) | ?FreeFXNode@audManager@@QAEXPAVaudFX@@@Z
    0x5A20E0 | public: void __thiscall audManager::FreeFileNode(class audFileSystem *) | ?FreeFileNode@audManager@@QAEXPAVaudFileSystem@@@Z
    0x6B4C24 | int audDebug | ?audDebug@@3HA
*/

class audManager
{
public:
    // 0x5A0D60 | ?Create@audManager@@QAEPAV1@HHHHHHHHHHHW4SOUNDFLAG@1@@Z
    class audManager* Create(i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, i32 arg8, i32 arg9,
        i32 arg10, i32 arg11, enum audManager::SOUNDFLAG arg12)
    {
        return stub<member_func_t<class audManager*, audManager, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32,
            enum audManager::SOUNDFLAG>>(
            0x5A0D60, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    // 0x5A0F80 | ?RestartAudio@audManager@@QAEXHHH@Z
    void RestartAudio(i32 arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, audManager, i32, i32, i32>>(0x5A0F80, this, arg1, arg2, arg3);
    }

    // 0x5A0F90 | ?ShutDownAudio@audManager@@QAEXXZ
    void ShutDownAudio()
    {
        return stub<member_func_t<void, audManager>>(0x5A0F90, this);
    }

    // 0x5A0FE0 | ?Destroy@audManager@@QAEXXZ
    void Destroy()
    {
        return stub<member_func_t<void, audManager>>(0x5A0FE0, this);
    }

    // 0x5A0FF0 | ?InitControlStruct@audManager@@AAE_NPAVaudSoundHeap@@PAU_controlptrs_@@H@Z
    bool InitControlStruct(class audSoundHeap* arg1, struct _controlptrs_* arg2, i32 arg3)
    {
        return stub<member_func_t<bool, audManager, class audSoundHeap*, struct _controlptrs_*, i32>>(
            0x5A0FF0, this, arg1, arg2, arg3);
    }

    // 0x5A1060 | ?Enable@audManager@@QAEX_N@Z
    void Enable(bool arg1)
    {
        return stub<member_func_t<void, audManager, bool>>(0x5A1060, this, arg1);
    }

    // 0x5A1090 | ?IsEnabled@audManager@@QAE_NXZ
    bool IsEnabled()
    {
        return stub<member_func_t<bool, audManager>>(0x5A1090, this);
    }

    // 0x5A10B0 | ?Update@audManager@@QAEXH@Z
    void Update(i32 arg1)
    {
        return stub<member_func_t<void, audManager, i32>>(0x5A10B0, this, arg1);
    }

    // 0x5A1160 | ?AddHead@audManager@@QAEHPAVaudHead@@@Z
    i32 AddHead(class audHead* arg1)
    {
        return stub<member_func_t<i32, audManager, class audHead*>>(0x5A1160, this, arg1);
    }

    // 0x5A11B0 | ?RemoveHead@audManager@@QAE_NPAVaudHead@@@Z
    bool RemoveHead(class audHead* arg1)
    {
        return stub<member_func_t<bool, audManager, class audHead*>>(0x5A11B0, this, arg1);
    }

    // 0x5A1270 | ?GetActiveHead@audManager@@QAEPAVaudHead@@H@Z
    class audHead* GetActiveHead(i32 arg1)
    {
        return stub<member_func_t<class audHead*, audManager, i32>>(0x5A1270, this, arg1);
    }

    // 0x5A12E0 | ?AddControl@audManager@@QAEHW4AUDTYPE@1@PAVaudControl@@@Z
    i32 AddControl(enum audManager::AUDTYPE arg1, class audControl* arg2)
    {
        return stub<member_func_t<i32, audManager, enum audManager::AUDTYPE, class audControl*>>(
            0x5A12E0, this, arg1, arg2);
    }

    // 0x5A1380 | ?RemoveControl@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    bool RemoveControl(enum audManager::AUDTYPE arg1, class audControl* arg2)
    {
        return stub<member_func_t<bool, audManager, enum audManager::AUDTYPE, class audControl*>>(
            0x5A1380, this, arg1, arg2);
    }

    // 0x5A1430 | ?MoveToActive@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    bool MoveToActive(enum audManager::AUDTYPE arg1, class audControl* arg2)
    {
        return stub<member_func_t<bool, audManager, enum audManager::AUDTYPE, class audControl*>>(
            0x5A1430, this, arg1, arg2);
    }

    // 0x5A1560 | ?MoveFromActive@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    bool MoveFromActive(enum audManager::AUDTYPE arg1, class audControl* arg2)
    {
        return stub<member_func_t<bool, audManager, enum audManager::AUDTYPE, class audControl*>>(
            0x5A1560, this, arg1, arg2);
    }

    // 0x5A15F0 | ?MoveActiveToTop@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    bool MoveActiveToTop(enum audManager::AUDTYPE arg1, class audControl* arg2)
    {
        return stub<member_func_t<bool, audManager, enum audManager::AUDTYPE, class audControl*>>(
            0x5A15F0, this, arg1, arg2);
    }

    // 0x5A16B0 | ?MoveActiveToBottom@audManager@@QAE_NW4AUDTYPE@1@PAVaudControl@@@Z
    bool MoveActiveToBottom(enum audManager::AUDTYPE arg1, class audControl* arg2)
    {
        return stub<member_func_t<bool, audManager, enum audManager::AUDTYPE, class audControl*>>(
            0x5A16B0, this, arg1, arg2);
    }

    // 0x5A1730 | ?StopAllSounds@audManager@@QAE_NW4AUDTYPE@1@@Z
    bool StopAllSounds(enum audManager::AUDTYPE arg1)
    {
        return stub<member_func_t<bool, audManager, enum audManager::AUDTYPE>>(0x5A1730, this, arg1);
    }

    // 0x5A1810 | ?FreeAndDestroyAllSounds@audManager@@QAEXXZ
    void FreeAndDestroyAllSounds()
    {
        return stub<member_func_t<void, audManager>>(0x5A1810, this);
    }

    // 0x5A18E0 | ?CountSounds@audManager@@QAEHW4AUDTYPE@1@@Z
    i32 CountSounds(enum audManager::AUDTYPE arg1)
    {
        return stub<member_func_t<i32, audManager, enum audManager::AUDTYPE>>(0x5A18E0, this, arg1);
    }

    // 0x5A1950 | ?CountActiveSounds@audManager@@QAEHW4AUDTYPE@1@@Z
    i32 CountActiveSounds(enum audManager::AUDTYPE arg1)
    {
        return stub<member_func_t<i32, audManager, enum audManager::AUDTYPE>>(0x5A1950, this, arg1);
    }

    // 0x5A19C0 | ?SetVolAllSounds@audManager@@QAEXW4AUDTYPE@1@M@Z
    void SetVolAllSounds(enum audManager::AUDTYPE arg1, f32 arg2)
    {
        return stub<member_func_t<void, audManager, enum audManager::AUDTYPE, f32>>(0x5A19C0, this, arg1, arg2);
    }

    // 0x5A1AB0 | ?GetMasterVolume@audManager@@QAEMW4AUDTYPE@1@@Z
    f32 GetMasterVolume(enum audManager::AUDTYPE arg1)
    {
        return stub<member_func_t<f32, audManager, enum audManager::AUDTYPE>>(0x5A1AB0, this, arg1);
    }

    // 0x5A1B10 | ?SetSoundFlags@audManager@@QAEXW4SOUNDFLAG@1@0@Z
    void SetSoundFlags(enum audManager::SOUNDFLAG arg1, enum audManager::SOUNDFLAG arg2)
    {
        return stub<member_func_t<void, audManager, enum audManager::SOUNDFLAG, enum audManager::SOUNDFLAG>>(
            0x5A1B10, this, arg1, arg2);
    }

    // 0x5A1B40 | ?IsSoundFlags@audManager@@QAE_NW4SOUNDFLAG@1@@Z
    bool IsSoundFlags(enum audManager::SOUNDFLAG arg1)
    {
        return stub<member_func_t<bool, audManager, enum audManager::SOUNDFLAG>>(0x5A1B40, this, arg1);
    }

    // 0x5A1B60 | ?SetMaxConcurrent@audManager@@QAEXW4AUDTYPE@1@H@Z
    void SetMaxConcurrent(enum audManager::AUDTYPE arg1, i32 arg2)
    {
        return stub<member_func_t<void, audManager, enum audManager::AUDTYPE, i32>>(0x5A1B60, this, arg1, arg2);
    }

    // 0x5A1BC0 | ?GetControlListPtr@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    class audControl* GetControlListPtr(enum audManager::AUDTYPE arg1)
    {
        return stub<member_func_t<class audControl*, audManager, enum audManager::AUDTYPE>>(0x5A1BC0, this, arg1);
    }

    // 0x5A1C20 | ?GetActiveControlListPtr@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    class audControl* GetActiveControlListPtr(enum audManager::AUDTYPE arg1)
    {
        return stub<member_func_t<class audControl*, audManager, enum audManager::AUDTYPE>>(0x5A1C20, this, arg1);
    }

    // 0x5A1C80 | ?AllocControl@audManager@@QAEPAVaudControl@@W4AUDTYPE@1@@Z
    class audControl* AllocControl(enum audManager::AUDTYPE arg1)
    {
        return stub<member_func_t<class audControl*, audManager, enum audManager::AUDTYPE>>(0x5A1C80, this, arg1);
    }

    // 0x5A1D20 | ?AllocTimeNode@audManager@@QAEPAVaudTimeNode@@XZ
    class audTimeNode* AllocTimeNode()
    {
        return stub<member_func_t<class audTimeNode*, audManager>>(0x5A1D20, this);
    }

    // 0x5A1DA0 | ?AllocStreamNode@audManager@@QAEPAVaudStream@@XZ
    class audStream* AllocStreamNode()
    {
        return stub<member_func_t<class audStream*, audManager>>(0x5A1DA0, this);
    }

    // 0x5A1E00 | ?AllocHeadNode@audManager@@QAEPAVaudHead@@XZ
    class audHead* AllocHeadNode()
    {
        return stub<member_func_t<class audHead*, audManager>>(0x5A1E00, this);
    }

    // 0x5A1E60 | ?AllocFXNode@audManager@@QAEPAVaudFX@@XZ
    class audFX* AllocFXNode()
    {
        return stub<member_func_t<class audFX*, audManager>>(0x5A1E60, this);
    }

    // 0x5A1EC0 | ?AllocFileNode@audManager@@QAEPAVaudFileSystem@@XZ
    class audFileSystem* AllocFileNode()
    {
        return stub<member_func_t<class audFileSystem*, audManager>>(0x5A1EC0, this);
    }

    // 0x5A1F20 | ?FreeControl@audManager@@QAEXW4AUDTYPE@1@PAVaudControl@@@Z
    void FreeControl(enum audManager::AUDTYPE arg1, class audControl* arg2)
    {
        return stub<member_func_t<void, audManager, enum audManager::AUDTYPE, class audControl*>>(
            0x5A1F20, this, arg1, arg2);
    }

    // 0x5A1FA0 | ?FreeTimeNode@audManager@@QAEXPAVaudTimeNode@@@Z
    void FreeTimeNode(class audTimeNode* arg1)
    {
        return stub<member_func_t<void, audManager, class audTimeNode*>>(0x5A1FA0, this, arg1);
    }

    // 0x5A1FF0 | ?FreeStreamNode@audManager@@QAEXPAVaudStream@@@Z
    void FreeStreamNode(class audStream* arg1)
    {
        return stub<member_func_t<void, audManager, class audStream*>>(0x5A1FF0, this, arg1);
    }

    // 0x5A2040 | ?FreeHeadNode@audManager@@QAEXPAVaudHead@@@Z
    void FreeHeadNode(class audHead* arg1)
    {
        return stub<member_func_t<void, audManager, class audHead*>>(0x5A2040, this, arg1);
    }

    // 0x5A2090 | ?FreeFXNode@audManager@@QAEXPAVaudFX@@@Z
    void FreeFXNode(class audFX* arg1)
    {
        return stub<member_func_t<void, audManager, class audFX*>>(0x5A2090, this, arg1);
    }

    // 0x5A20E0 | ?FreeFileNode@audManager@@QAEXPAVaudFileSystem@@@Z
    void FreeFileNode(class audFileSystem* arg1)
    {
        return stub<member_func_t<void, audManager, class audFileSystem*>>(0x5A20E0, this, arg1);
    }
};

// 0x6B4C24 | ?audDebug@@3HA
inline extern_var(0x6B4C24, int32_t, audDebug);
