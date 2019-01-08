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
    bank:bkwinmgr

    protected: __thiscall bkWinManager::bkWinManager(void) | ??0bkWinManager@@IAE@XZ
    protected: virtual __thiscall bkWinManager::~bkWinManager(void) | ??1bkWinManager@@MAE@XZ
    protected: class bkWinBank * __thiscall bkWinManager::GetBank(struct HWND__ *) | ?GetBank@bkWinManager@@IAEPAVbkWinBank@@PAUHWND__@@@Z
    public: virtual bool __thiscall bkWinManager::GetNextMessage(bool) | ?GetNextMessage@bkWinManager@@UAE_N_N@Z
    long __stdcall bkWinBankProc(struct HWND__ *,unsigned int,unsigned int,long) | ?bkWinBankProc@@YGJPAUHWND__@@IIJ@Z
    class bkManager * __cdecl CreateWin32BankManager(void) | ?CreateWin32BankManager@@YAPAVbkManager@@XZ
    public: virtual class bkBank * __thiscall bkWinManager::NewBank(char const *,int,int,bool) | ?NewBank@bkWinManager@@UAEPAVbkBank@@PBDHH_N@Z
    public: char const * __thiscall bkManager::OpenFile(char const *,bool,char const *) | ?OpenFile@bkManager@@QAEPBDPBD_N0@Z
    public: bool __thiscall bkManager::OpenFile(char *,int,char const *,bool,char const *) | ?OpenFile@bkManager@@QAE_NPADHPBD_N1@Z
    protected: virtual void * __thiscall bkWinManager::`scalar deleting destructor'(unsigned int) | ??_GbkWinManager@@MAEPAXI@Z
    protected: virtual void * __thiscall bkWinManager::`vector deleting destructor'(unsigned int) | ??_EbkWinManager@@MAEPAXI@Z
    const bkWinManager::`vftable' | ??_7bkWinManager@@6B@
*/

#include "hooking.h"
