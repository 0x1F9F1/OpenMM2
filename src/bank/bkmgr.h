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
    bank:bkmgr

    protected: __thiscall bkManager::bkManager(void) | ??0bkManager@@IAE@XZ
    protected: virtual __thiscall bkManager::~bkManager(void) | ??1bkManager@@MAE@XZ
    public: virtual bool __thiscall bkManager::GetNextMessage(bool) | ?GetNextMessage@bkManager@@UAE_N_N@Z
    public: static void __cdecl bkManager::DeleteBankManager(void) | ?DeleteBankManager@bkManager@@SAXXZ
    public: static void __cdecl bkManager::CreateBankManager(class bkManager * (__cdecl*)(void)) | ?CreateBankManager@bkManager@@SAXP6APAV1@XZ@Z
    protected: static char const * __cdecl bkManager::GetDefaultConfigName(void) | ?GetDefaultConfigName@bkManager@@KAPBDXZ
    public: virtual void __thiscall bkManager::Update(void) | ?Update@bkManager@@UAEXXZ
    public: virtual void __thiscall bkManager::Draw(void) | ?Draw@bkManager@@UAEXXZ
    public: static void __cdecl bkManager::ActivateBankCB(class bkBank *) | ?ActivateBankCB@bkManager@@SAXPAVbkBank@@@Z
    public: class bkBank & __thiscall bkManager::CreateBank(char const *,int,int,bool) | ?CreateBank@bkManager@@QAEAAVbkBank@@PBDHH_N@Z
    public: void __thiscall bkManager::DestroyBank(class bkBank &) | ?DestroyBank@bkManager@@QAEXAAVbkBank@@@Z
    public: void __thiscall bkManager::ActivateBank(char *) | ?ActivateBank@bkManager@@QAEXPAD@Z
    public: void __thiscall bkManager::ActivateAllBanks(void) | ?ActivateAllBanks@bkManager@@QAEXXZ
    public: void __thiscall bkManager::RaiseAllBanks(bool) | ?RaiseAllBanks@bkManager@@QAEX_N@Z
    public: class bkBank * __thiscall bkManager::FindBank(char const *) | ?FindBank@bkManager@@QAEPAVbkBank@@PBD@Z
    public: void __thiscall bkManager::SaveConfig(char const *) | ?SaveConfig@bkManager@@QAEXPBD@Z
    public: void __thiscall bkManager::LoadConfig(char const *) | ?LoadConfig@bkManager@@QAEXPBD@Z
    public: class bkWidget * __thiscall bkManager::FindWidget(class bkBank *,char const *) | ?FindWidget@bkManager@@QAEPAVbkWidget@@PAVbkBank@@PBD@Z
    protected: virtual void * __thiscall bkManager::`vector deleting destructor'(unsigned int) | ??_EbkManager@@MAEPAXI@Z
    protected: virtual void * __thiscall bkManager::`scalar deleting destructor'(unsigned int) | ??_GbkManager@@MAEPAXI@Z
    const bkManager::`vftable' | ??_7bkManager@@6B@
    protected: static bool bkManager::AddLoadSaveButtons | ?AddLoadSaveButtons@bkManager@@1_NA
    protected: static void * bkManager::Owner | ?Owner@bkManager@@1PAXA
    protected: static class bkManager * bkManager::Instance | ?Instance@bkManager@@1PAV1@A
    protected: static char const * const bkManager::AppName | ?AppName@bkManager@@1PBDB
*/

// #include "hooking.h"
