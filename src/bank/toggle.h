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
    bank:toggle

    public: __thiscall bkToggle::bkToggle(class bkBank &,char const *,bool *,class datCallback) | ??0bkToggle@@QAE@AAVbkBank@@PBDPA_NVdatCallback@@@Z
    public: __thiscall bkToggle::bkToggle(class bkBank &,char const *,int *,class datCallback) | ??0bkToggle@@QAE@AAVbkBank@@PBDPAHVdatCallback@@@Z
    public: __thiscall bkToggle::bkToggle(class bkBank &,char const *,unsigned int *,unsigned int,class datCallback) | ??0bkToggle@@QAE@AAVbkBank@@PBDPAIIVdatCallback@@@Z
    public: __thiscall bkToggle::bkToggle(class bkBank &,char const *,unsigned short *,unsigned short,class datCallback) | ??0bkToggle@@QAE@AAVbkBank@@PBDPAGGVdatCallback@@@Z
    public: __thiscall bkToggle::bkToggle(class bkBank &,char const *,unsigned char *,unsigned char,class datCallback) | ??0bkToggle@@QAE@AAVbkBank@@PBDPAEEVdatCallback@@@Z
    public: virtual __thiscall bkToggle::~bkToggle(void) | ??1bkToggle@@UAE@XZ
    public: virtual void __thiscall bkToggle::Update(void) | ?Update@bkToggle@@UAEXXZ
    protected: void __thiscall bkToggle::DoToggle(void) | ?DoToggle@bkToggle@@IAEXXZ
    protected: unsigned int __thiscall bkToggle::GetValue(void) | ?GetValue@bkToggle@@IAEIXZ
    public: virtual void __thiscall bkToggle::SetText(char const *) | ?SetText@bkToggle@@UAEXPBD@Z
    [thunk]:public: virtual void * __thiscall bkToggle::`vector deleting destructor'`vtordisp{4294967292,0}' (unsigned int) | ??_EbkToggle@@$4PPPPPPPM@A@AEPAXI@Z
    public: virtual void * __thiscall bkToggle::`scalar deleting destructor'(unsigned int) | ??_GbkToggle@@UAEPAXI@Z
    public: virtual void * __thiscall bkToggle::`vector deleting destructor'(unsigned int) | ??_EbkToggle@@UAEPAXI@Z
    [thunk]:public: virtual void __thiscall bkToggle::Update`vtordisp{4294967292,0}' (void) | ?Update@bkToggle@@$4PPPPPPPM@A@AEXXZ
    const bkToggle::`vftable'{for `bkWidget'} | ??_7bkToggle@@6BbkWidget@@@
    const bkToggle::`vftable'{for `bkToggle'} | ??_7bkToggle@@6B0@@
    const bkToggle::`vbtable' | ??_8bkToggle@@7B@
*/

#include "hooking.h"
