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
    bank:bkwintoggle

    public: __thiscall bkWinToggle::bkWinToggle(class bkBank &,char const *,bool *,class datCallback) | ??0bkWinToggle@@QAE@AAVbkBank@@PBDPA_NVdatCallback@@@Z
    public: __thiscall bkWinToggle::bkWinToggle(class bkBank &,char const *,int *,class datCallback) | ??0bkWinToggle@@QAE@AAVbkBank@@PBDPAHVdatCallback@@@Z
    public: __thiscall bkWinToggle::bkWinToggle(class bkBank &,char const *,unsigned int *,unsigned int,class datCallback) | ??0bkWinToggle@@QAE@AAVbkBank@@PBDPAIIVdatCallback@@@Z
    public: __thiscall bkWinToggle::bkWinToggle(class bkBank &,char const *,unsigned short *,unsigned short,class datCallback) | ??0bkWinToggle@@QAE@AAVbkBank@@PBDPAGGVdatCallback@@@Z
    public: __thiscall bkWinToggle::bkWinToggle(class bkBank &,char const *,unsigned char *,unsigned char,class datCallback) | ??0bkWinToggle@@QAE@AAVbkBank@@PBDPAEEVdatCallback@@@Z
    protected: void __thiscall bkWinToggle::Init(char const *,class bkWinBank &) | ?Init@bkWinToggle@@IAEXPBDAAVbkWinBank@@@Z
    public: virtual __thiscall bkWinToggle::~bkWinToggle(void) | ??1bkWinToggle@@UAE@XZ
    public: virtual void __thiscall bkWinToggle::Update(void) | ?Update@bkWinToggle@@UAEXXZ
    public: virtual void __thiscall bkWinToggle::MoveY(class bkBank &,int) | ?MoveY@bkWinToggle@@UAEXAAVbkBank@@H@Z
    public: virtual void __thiscall bkWinToggle::HandleMessage(struct HWND__ *,unsigned int,unsigned int,long) | ?HandleMessage@bkWinToggle@@UAEXPAUHWND__@@IIJ@Z
    public: virtual void __thiscall bkWinToggle::HotKey(char const *) | ?HotKey@bkWinToggle@@UAEXPBD@Z
    public: virtual char const * __thiscall bkWinToggle::GetName(void) | ?GetName@bkWinToggle@@UAEPBDXZ
    protected: virtual bool __thiscall bkWinToggle::IsShown(void) const | ?IsShown@bkWinToggle@@MBE_NXZ
    protected: virtual void __thiscall bkWinToggle::Show(void) | ?Show@bkWinToggle@@MAEXXZ
    protected: virtual void __thiscall bkWinToggle::Hide(void) | ?Hide@bkWinToggle@@MAEXXZ
    protected: virtual void __thiscall bkWinToggle::SetWidgetID(int) | ?SetWidgetID@bkWinToggle@@MAEXH@Z
    public: virtual void __thiscall bkWinToggle::Destroy(void) | ?Destroy@bkWinToggle@@UAEXXZ
    public: virtual void __thiscall bkWinToggle::SetText(char const *) | ?SetText@bkWinToggle@@UAEXPBD@Z
    [thunk]:public: virtual void * __thiscall bkWinToggle::`vector deleting destructor'`vtordisp{4294967292,0}' (unsigned int) | ??_EbkWinToggle@@$4PPPPPPPM@A@AEPAXI@Z
    public: virtual void * __thiscall bkWinToggle::`vector deleting destructor'(unsigned int) | ??_EbkWinToggle@@UAEPAXI@Z
    public: virtual void * __thiscall bkWinToggle::`scalar deleting destructor'(unsigned int) | ??_GbkWinToggle@@UAEPAXI@Z
    [thunk]:public: virtual void __thiscall bkWinToggle::Destroy`vtordisp{4294967292,0}' (void) | ?Destroy@bkWinToggle@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinToggle::Update`vtordisp{4294967292,0}' (void) | ?Update@bkWinToggle@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinToggle::MoveY`vtordisp{4294967292,0}' (class bkBank &,int) | ?MoveY@bkWinToggle@@$4PPPPPPPM@A@AEXAAVbkBank@@H@Z
    [thunk]:public: virtual void __thiscall bkWinToggle::HotKey`vtordisp{4294967292,0}' (char const *) | ?HotKey@bkWinToggle@@$4PPPPPPPM@A@AEXPBD@Z
    [thunk]:public: virtual char const * __thiscall bkWinToggle::GetName`vtordisp{4294967292,0}' (void) | ?GetName@bkWinToggle@@$4PPPPPPPM@A@AEPBDXZ
    [thunk]:protected: virtual bool __thiscall bkWinToggle::IsShown`vtordisp{4294967292,0}' (void) const | ?IsShown@bkWinToggle@@$2PPPPPPPM@A@BE_NXZ
    [thunk]:protected: virtual void __thiscall bkWinToggle::Show`vtordisp{4294967292,0}' (void) | ?Show@bkWinToggle@@$2PPPPPPPM@A@AEXXZ
    [thunk]:protected: virtual void __thiscall bkWinToggle::Hide`vtordisp{4294967292,0}' (void) | ?Hide@bkWinToggle@@$2PPPPPPPM@A@AEXXZ
    const bkWinToggle::`vftable'{for `bkWidget'} | ??_7bkWinToggle@@6BbkWidget@@@
    const bkWinToggle::`vftable'{for `bkToggle'} | ??_7bkWinToggle@@6BbkToggle@@@
    const bkWinToggle::`vftable'{for `bkWinWidget'} | ??_7bkWinToggle@@6BbkWinWidget@@@
    const bkWinToggle::`vbtable'{for `bkToggle'} | ??_8bkWinToggle@@7BbkToggle@@@
    const bkWinToggle::`vbtable'{for `bkWinWidget'} | ??_8bkWinToggle@@7BbkWinWidget@@@
*/

// #include "hooking.h"
