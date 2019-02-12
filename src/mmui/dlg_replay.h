/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

// #include "hooking.h"
