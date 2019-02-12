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
    bank:bkwintext

    long __stdcall bkTextEditWinProc(struct HWND__ *,unsigned int,unsigned int,long) | ?bkTextEditWinProc@@YGJPAUHWND__@@IIJ@Z
    public: __thiscall bkWinText::bkWinText(class bkBank &,char const *,char *,unsigned int,bool,class datCallback) | ??0bkWinText@@QAE@AAVbkBank@@PBDPADI_NVdatCallback@@@Z
    public: virtual __thiscall bkWinText::~bkWinText(void) | ??1bkWinText@@UAE@XZ
    public: virtual void __thiscall bkWinText::MoveY(class bkBank &,int) | ?MoveY@bkWinText@@UAEXAAVbkBank@@H@Z
    public: virtual void __thiscall bkWinText::Update(void) | ?Update@bkWinText@@UAEXXZ
    protected: void __thiscall bkWinText::CheckValue(bool) | ?CheckValue@bkWinText@@IAEX_N@Z
    protected: void __thiscall bkWinText::SetFont(bool) | ?SetFont@bkWinText@@IAEX_N@Z
    protected: virtual bool __thiscall bkWinText::IsShown(void) const | ?IsShown@bkWinText@@MBE_NXZ
    protected: virtual void __thiscall bkWinText::Show(void) | ?Show@bkWinText@@MAEXXZ
    protected: virtual void __thiscall bkWinText::Hide(void) | ?Hide@bkWinText@@MAEXXZ
    protected: virtual void __thiscall bkWinText::SetWidgetID(int) | ?SetWidgetID@bkWinText@@MAEXH@Z
    public: virtual void __thiscall bkWinText::Destroy(void) | ?Destroy@bkWinText@@UAEXXZ
    protected: int __thiscall bkWinText::GetTitleWidth(class bkBank &) | ?GetTitleWidth@bkWinText@@IAEHAAVbkBank@@@Z
    protected: int __thiscall bkWinText::GetEditWidth(class bkBank &) | ?GetEditWidth@bkWinText@@IAEHAAVbkBank@@@Z
    public: virtual void __thiscall bkWinText::SetText(char const *) | ?SetText@bkWinText@@UAEXPBD@Z
    [thunk]:public: virtual void * __thiscall bkWinText::`vector deleting destructor'`vtordisp{4294967292,0}' (unsigned int) | ??_EbkWinText@@$4PPPPPPPM@A@AEPAXI@Z
    public: virtual void * __thiscall bkWinText::`vector deleting destructor'(unsigned int) | ??_EbkWinText@@UAEPAXI@Z
    public: virtual void * __thiscall bkWinText::`scalar deleting destructor'(unsigned int) | ??_GbkWinText@@UAEPAXI@Z
    [thunk]:public: virtual void __thiscall bkWinText::Destroy`vtordisp{4294967292,0}' (void) | ?Destroy@bkWinText@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinText::Update`vtordisp{4294967292,0}' (void) | ?Update@bkWinText@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinText::MoveY`vtordisp{4294967292,0}' (class bkBank &,int) | ?MoveY@bkWinText@@$4PPPPPPPM@A@AEXAAVbkBank@@H@Z
    [thunk]:protected: virtual bool __thiscall bkWinText::IsShown`vtordisp{4294967292,0}' (void) const | ?IsShown@bkWinText@@$2PPPPPPPM@A@BE_NXZ
    [thunk]:protected: virtual void __thiscall bkWinText::Show`vtordisp{4294967292,0}' (void) | ?Show@bkWinText@@$2PPPPPPPM@A@AEXXZ
    [thunk]:protected: virtual void __thiscall bkWinText::Hide`vtordisp{4294967292,0}' (void) | ?Hide@bkWinText@@$2PPPPPPPM@A@AEXXZ
    const bkWinText::`vftable'{for `bkWidget'} | ??_7bkWinText@@6BbkWidget@@@
    const bkWinText::`vftable'{for `bkText'} | ??_7bkWinText@@6BbkText@@@
    const bkWinText::`vftable'{for `bkWinWidget'} | ??_7bkWinText@@6BbkWinWidget@@@
    const bkWinText::`vbtable'{for `bkText'} | ??_8bkWinText@@7BbkText@@@
    const bkWinText::`vbtable'{for `bkWinWidget'} | ??_8bkWinText@@7BbkWinWidget@@@
    long (__stdcall* sOldTextEditWinProc)(struct HWND__ *,unsigned int,unsigned int,long) | ?sOldTextEditWinProc@@3P6GJPAUHWND__@@IIJ@ZA
*/

// #include "hooking.h"
