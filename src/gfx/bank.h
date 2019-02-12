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
    gfx:bank

    class bkManager * __cdecl CreateLocalBankManager(void) | ?CreateLocalBankManager@@YAPAVbkManager@@XZ
    public: virtual class bkBank * __thiscall bkLocalManager::NewBank(char const *,int,int,bool) | ?NewBank@bkLocalManager@@UAEPAVbkBank@@PBDHH_N@Z
    public: __thiscall gfxBank::gfxBank(char const *,int,int,bool) | ??0gfxBank@@QAE@PBDHH_N@Z
    public: virtual void __thiscall gfxBank::Print(int,int,char const *) | ?Print@gfxBank@@UAEXHHPBD@Z
    public: virtual int __thiscall gfxBank::Input(float &) | ?Input@gfxBank@@UAEHAAM@Z
    public: virtual void * __thiscall bkLocalManager::`vector deleting destructor'(unsigned int) | ??_EbkLocalManager@@UAEPAXI@Z
    public: virtual void * __thiscall bkLocalManager::`scalar deleting destructor'(unsigned int) | ??_GbkLocalManager@@UAEPAXI@Z
    public: virtual void * __thiscall gfxBank::`vector deleting destructor'(unsigned int) | ??_EgfxBank@@UAEPAXI@Z
    public: virtual void * __thiscall gfxBank::`scalar deleting destructor'(unsigned int) | ??_GgfxBank@@UAEPAXI@Z
    public: virtual __thiscall bkLocBank::~bkLocBank(void) | ??1bkLocBank@@UAE@XZ
    public: virtual __thiscall gfxBank::~gfxBank(void) | ??1gfxBank@@UAE@XZ
    public: virtual void __thiscall bkBank::Resize(void) | ?Resize@bkBank@@UAEXXZ
    public: virtual void __thiscall bkBank::Raise(bool) | ?Raise@bkBank@@UAEX_N@Z
    const bkLocalManager::`vftable' | ??_7bkLocalManager@@6B@
    const gfxBank::`vftable' | ??_7gfxBank@@6B@
*/

// #include "hooking.h"
