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
    mmui:dlg_replay

    0x4FA2B0 | public: __thiscall Dialog_Replay::Dialog_Replay(int,float,float,float,float,char *) | ??0Dialog_Replay@@QAE@HMMMMPAD@Z
    0x4FA6F0 | public: virtual __thiscall Dialog_Replay::~Dialog_Replay(void) | ??1Dialog_Replay@@UAE@XZ
    0x4FA7A0 | public: virtual void __thiscall Dialog_Replay::PreSetup(void) | ?PreSetup@Dialog_Replay@@UAEXXZ
    0x4FA7B0 | public: virtual void __thiscall Dialog_Replay::PostSetup(void) | ?PostSetup@Dialog_Replay@@UAEXXZ
    0x4FA7C0 | public: void __thiscall Dialog_Replay::ScrollCB(void) | ?ScrollCB@Dialog_Replay@@QAEXXZ
    0x4FA7E0 | public: void __thiscall Dialog_Replay::CancelCB(void) | ?CancelCB@Dialog_Replay@@QAEXXZ
    0x4FA810 | public: void __thiscall Dialog_Replay::DoneCB(void) | ?DoneCB@Dialog_Replay@@QAEXXZ
    0x4FA830 | public: void __thiscall Dialog_Replay::EditCB(void) | ?EditCB@Dialog_Replay@@QAEXXZ
    0x4FA840 | public: void __thiscall Dialog_Replay::SetDescription(char *) | ?SetDescription@Dialog_Replay@@QAEXPAD@Z
    0x4FA890 | public: char * __thiscall Dialog_Replay::GetDescription(void) | ?GetDescription@Dialog_Replay@@QAEPADXZ
    0x4FA9A0 | public: void __thiscall Dialog_Replay::DeleteCB(void) | ?DeleteCB@Dialog_Replay@@QAEXXZ
    0x4FAA60 | public: void __thiscall Dialog_Replay::SetCurrentReplay(int) | ?SetCurrentReplay@Dialog_Replay@@QAEXH@Z
    0x4FAAB0 | public: char * __thiscall Dialog_Replay::GetSelectedReplay(void) | ?GetSelectedReplay@Dialog_Replay@@QAEPADXZ
    0x4FAAF0 | public: void __thiscall Dialog_Replay::SetDriverStats(char *,char *,char *) | ?SetDriverStats@Dialog_Replay@@QAEXPAD00@Z
    0x4FAB50 | bool __cdecl isReplayFile(char const *) | ?isReplayFile@@YA_NPBD@Z
    0x4FABC0 | void __cdecl LoadDlgReplayCB(char const *,bool,void *) | ?LoadDlgReplayCB@@YAXPBD_NPAX@Z
    0x4FAC70 | public: void __thiscall Dialog_Replay::LoadAll(void) | ?LoadAll@Dialog_Replay@@QAEXXZ
    0x4FAC90 | public: virtual void * __thiscall Dialog_Replay::`scalar deleting destructor'(unsigned int) | ??_GDialog_Replay@@UAEPAXI@Z
    public: virtual void * __thiscall Dialog_Replay::`vector deleting destructor'(unsigned int) | ??_EDialog_Replay@@UAEPAXI@Z
    0x4FACC0 | public: virtual void * __thiscall mmCompReplay::`vector deleting destructor'(unsigned int) | ??_EmmCompReplay@@UAEPAXI@Z
    0x5B3EDC | const Dialog_Replay::`vftable' | ??_7Dialog_Replay@@6B@
*/

// 0x4FAB50 | ?isReplayFile@@YA_NPBD@Z
inline bool isReplayFile(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x4FAB50, arg1);
}

// 0x4FABC0 | ?LoadDlgReplayCB@@YAXPBD_NPAX@Z
inline void LoadDlgReplayCB(char const* arg1, bool arg2, void* arg3)
{
    return stub<cdecl_t<void, char const*, bool, void*>>(0x4FABC0, arg1, arg2, arg3);
}

struct Dialog_Replay : PUMenuBase
{
public:
    // Dialog_Replay::`vftable' @ 0x5B3EDC

    // 0x4FA2B0 | ??0Dialog_Replay@@QAE@HMMMMPAD@Z
    inline Dialog_Replay(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, Dialog_Replay, i32, f32, f32, f32, f32, char*>>(
            0x4FA2B0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4FA7C0 | ?ScrollCB@Dialog_Replay@@QAEXXZ
    inline void ScrollCB()
    {
        return stub<member_func_t<void, Dialog_Replay>>(0x4FA7C0, this);
    }

    // 0x4FA7E0 | ?CancelCB@Dialog_Replay@@QAEXXZ
    inline void CancelCB()
    {
        return stub<member_func_t<void, Dialog_Replay>>(0x4FA7E0, this);
    }

    // 0x4FA810 | ?DoneCB@Dialog_Replay@@QAEXXZ
    inline void DoneCB()
    {
        return stub<member_func_t<void, Dialog_Replay>>(0x4FA810, this);
    }

    // 0x4FA830 | ?EditCB@Dialog_Replay@@QAEXXZ
    inline void EditCB()
    {
        return stub<member_func_t<void, Dialog_Replay>>(0x4FA830, this);
    }

    // 0x4FA840 | ?SetDescription@Dialog_Replay@@QAEXPAD@Z
    inline void SetDescription(char* arg1)
    {
        return stub<member_func_t<void, Dialog_Replay, char*>>(0x4FA840, this, arg1);
    }

    // 0x4FA890 | ?GetDescription@Dialog_Replay@@QAEPADXZ
    inline char* GetDescription()
    {
        return stub<member_func_t<char*, Dialog_Replay>>(0x4FA890, this);
    }

    // 0x4FA9A0 | ?DeleteCB@Dialog_Replay@@QAEXXZ
    inline void DeleteCB()
    {
        return stub<member_func_t<void, Dialog_Replay>>(0x4FA9A0, this);
    }

    // 0x4FAA60 | ?SetCurrentReplay@Dialog_Replay@@QAEXH@Z
    inline void SetCurrentReplay(i32 arg1)
    {
        return stub<member_func_t<void, Dialog_Replay, i32>>(0x4FAA60, this, arg1);
    }

    // 0x4FAAB0 | ?GetSelectedReplay@Dialog_Replay@@QAEPADXZ
    inline char* GetSelectedReplay()
    {
        return stub<member_func_t<char*, Dialog_Replay>>(0x4FAAB0, this);
    }

    // 0x4FAAF0 | ?SetDriverStats@Dialog_Replay@@QAEXPAD00@Z
    inline void SetDriverStats(char* arg1, char* arg2, char* arg3)
    {
        return stub<member_func_t<void, Dialog_Replay, char*, char*, char*>>(0x4FAAF0, this, arg1, arg2, arg3);
    }

    // 0x4FAC70 | ?LoadAll@Dialog_Replay@@QAEXXZ
    inline void LoadAll()
    {
        return stub<member_func_t<void, Dialog_Replay>>(0x4FAC70, this);
    }

    // 0x4FA6F0 | ??1Dialog_Replay@@UAE@XZ
    inline ~Dialog_Replay() override
    {
        stub<member_func_t<void, Dialog_Replay>>(0x4FA6F0, this);
    }

    // 0x4FA7A0 | ?PreSetup@Dialog_Replay@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, Dialog_Replay>>(0x4FA7A0, this);
    }

    // 0x4FA7B0 | ?PostSetup@Dialog_Replay@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, Dialog_Replay>>(0x4FA7B0, this);
    }
};
