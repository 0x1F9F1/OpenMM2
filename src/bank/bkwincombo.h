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
    bank:bkwincombo

    public: __thiscall bkWinCombo::bkWinCombo(class bkBank &,char const *,int *,int,char const * *,int,class datCallback) | ??0bkWinCombo@@QAE@AAVbkBank@@PBDPAHHPAPBDHVdatCallback@@@Z
    public: __thiscall bkWinCombo::bkWinCombo(class bkBank &,char const *,unsigned char *,int,char const * *,int,class datCallback) | ??0bkWinCombo@@QAE@AAVbkBank@@PBDPAEHPAPBDHVdatCallback@@@Z
    protected: void __thiscall bkWinCombo::Init(class bkBank &,char const *,int,char const * *) | ?Init@bkWinCombo@@IAEXAAVbkBank@@PBDHPAPBD@Z
    public: virtual __thiscall bkWinCombo::~bkWinCombo(void) | ??1bkWinCombo@@UAE@XZ
    public: virtual void __thiscall bkWinCombo::MoveY(class bkBank &,int) | ?MoveY@bkWinCombo@@UAEXAAVbkBank@@H@Z
    public: virtual void __thiscall bkWinCombo::SetList(int,char const * *) | ?SetList@bkWinCombo@@UAEXHPAPBD@Z
    public: virtual void __thiscall bkWinCombo::AddString(char const * const) | ?AddString@bkWinCombo@@UAEXQBD@Z
    public: virtual void __thiscall bkWinCombo::SetChoice(int) | ?SetChoice@bkWinCombo@@UAEXH@Z
    public: virtual void __thiscall bkWinCombo::DeleteChoice(int) | ?DeleteChoice@bkWinCombo@@UAEXH@Z
    public: virtual void __thiscall bkWinCombo::DeleteContents(void) | ?DeleteContents@bkWinCombo@@UAEXXZ
    public: virtual void __thiscall bkWinCombo::Update(void) | ?Update@bkWinCombo@@UAEXXZ
    public: virtual void __thiscall bkWinCombo::HandleMessage(struct HWND__ *,unsigned int,unsigned int,long) | ?HandleMessage@bkWinCombo@@UAEXPAUHWND__@@IIJ@Z
    protected: virtual bool __thiscall bkWinCombo::IsShown(void) const | ?IsShown@bkWinCombo@@MBE_NXZ
    protected: virtual void __thiscall bkWinCombo::Show(void) | ?Show@bkWinCombo@@MAEXXZ
    protected: virtual void __thiscall bkWinCombo::Hide(void) | ?Hide@bkWinCombo@@MAEXXZ
    protected: virtual void __thiscall bkWinCombo::SetWidgetID(int) | ?SetWidgetID@bkWinCombo@@MAEXH@Z
    public: virtual void __thiscall bkWinCombo::Destroy(void) | ?Destroy@bkWinCombo@@UAEXXZ
    protected: int __thiscall bkWinCombo::GetTitleWidth(class bkBank &) | ?GetTitleWidth@bkWinCombo@@IAEHAAVbkBank@@@Z
    protected: int __thiscall bkWinCombo::GetComboWidth(class bkBank &) | ?GetComboWidth@bkWinCombo@@IAEHAAVbkBank@@@Z
    [thunk]:public: virtual void * __thiscall bkWinCombo::`vector deleting destructor'`vtordisp{4294967292,0}' (unsigned int) | ??_EbkWinCombo@@$4PPPPPPPM@A@AEPAXI@Z
    public: virtual void * __thiscall bkWinCombo::`scalar deleting destructor'(unsigned int) | ??_GbkWinCombo@@UAEPAXI@Z
    public: virtual void * __thiscall bkWinCombo::`vector deleting destructor'(unsigned int) | ??_EbkWinCombo@@UAEPAXI@Z
    [thunk]:public: virtual void __thiscall bkWinCombo::Destroy`vtordisp{4294967292,0}' (void) | ?Destroy@bkWinCombo@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinCombo::Update`vtordisp{4294967292,0}' (void) | ?Update@bkWinCombo@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinCombo::MoveY`vtordisp{4294967292,0}' (class bkBank &,int) | ?MoveY@bkWinCombo@@$4PPPPPPPM@A@AEXAAVbkBank@@H@Z
    [thunk]:protected: virtual bool __thiscall bkWinCombo::IsShown`vtordisp{4294967292,0}' (void) const | ?IsShown@bkWinCombo@@$2PPPPPPPM@A@BE_NXZ
    [thunk]:protected: virtual void __thiscall bkWinCombo::Show`vtordisp{4294967292,0}' (void) | ?Show@bkWinCombo@@$2PPPPPPPM@A@AEXXZ
    [thunk]:protected: virtual void __thiscall bkWinCombo::Hide`vtordisp{4294967292,0}' (void) | ?Hide@bkWinCombo@@$2PPPPPPPM@A@AEXXZ
    const bkWinCombo::`vftable'{for `bkWidget'} | ??_7bkWinCombo@@6BbkWidget@@@
    const bkWinCombo::`vftable'{for `bkCombo'} | ??_7bkWinCombo@@6BbkCombo@@@
    const bkWinCombo::`vftable'{for `bkWinWidget'} | ??_7bkWinCombo@@6BbkWinWidget@@@
    const bkWinCombo::`vbtable'{for `bkCombo'} | ??_8bkWinCombo@@7BbkCombo@@@
    const bkWinCombo::`vbtable'{for `bkWinWidget'} | ??_8bkWinCombo@@7BbkWinWidget@@@
*/

#include "hooking.h"
