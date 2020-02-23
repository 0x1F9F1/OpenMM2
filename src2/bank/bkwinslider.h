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
    bank:bkwinslider

    long __stdcall bkSliderEditWinProc(struct HWND__ *,unsigned int,unsigned int,long) | ?bkSliderEditWinProc@@YGJPAUHWND__@@IIJ@Z
    long __stdcall bkSliderButtWinProc(struct HWND__ *,unsigned int,unsigned int,long) | ?bkSliderButtWinProc@@YGJPAUHWND__@@IIJ@Z
    public: __thiscall bkWinSlider::bkWinSlider(class bkBank &,char const *,class bkSliderData &,class datCallback) | ??0bkWinSlider@@QAE@AAVbkBank@@PBDAAVbkSliderData@@VdatCallback@@@Z
    public: virtual __thiscall bkWinSlider::~bkWinSlider(void) | ??1bkWinSlider@@UAE@XZ
    public: virtual void __thiscall bkWinSlider::MoveY(class bkBank &,int) | ?MoveY@bkWinSlider@@UAEXAAVbkBank@@H@Z
    public: virtual void __thiscall bkWinSlider::Update(void) | ?Update@bkWinSlider@@UAEXXZ
    protected: void __thiscall bkWinSlider::CheckValue(bool) | ?CheckValue@bkWinSlider@@IAEX_N@Z
    protected: bool __thiscall bkWinSlider::CheckKey(char) | ?CheckKey@bkWinSlider@@IAE_ND@Z
    protected: void __thiscall bkWinSlider::SetFont(bool) | ?SetFont@bkWinSlider@@IAEX_N@Z
    public: virtual void __thiscall bkWinSlider::HandleMessage(struct HWND__ *,unsigned int,unsigned int,long) | ?HandleMessage@bkWinSlider@@UAEXPAUHWND__@@IIJ@Z
    protected: virtual bool __thiscall bkWinSlider::IsShown(void) const | ?IsShown@bkWinSlider@@MBE_NXZ
    protected: virtual void __thiscall bkWinSlider::Show(void) | ?Show@bkWinSlider@@MAEXXZ
    protected: virtual void __thiscall bkWinSlider::Hide(void) | ?Hide@bkWinSlider@@MAEXXZ
    protected: virtual void __thiscall bkWinSlider::SetWidgetID(int) | ?SetWidgetID@bkWinSlider@@MAEXH@Z
    public: virtual void __thiscall bkWinSlider::Destroy(void) | ?Destroy@bkWinSlider@@UAEXXZ
    public: void __thiscall bkWinSlider::SetEnabled(bool) | ?SetEnabled@bkWinSlider@@QAEX_N@Z
    public: bool __thiscall bkWinSlider::IsEnabled(void) const | ?IsEnabled@bkWinSlider@@QBE_NXZ
    protected: int __thiscall bkWinSlider::GetButtonWidth(class bkBank &) | ?GetButtonWidth@bkWinSlider@@IAEHAAVbkBank@@@Z
    protected: int __thiscall bkWinSlider::GetEditWidth(class bkBank &) | ?GetEditWidth@bkWinSlider@@IAEHAAVbkBank@@@Z
    protected: int __thiscall bkWinSlider::GetScrollWidth(class bkBank &) | ?GetScrollWidth@bkWinSlider@@IAEHAAVbkBank@@@Z
    [thunk]:public: virtual void * __thiscall bkWinSlider::`vector deleting destructor'`vtordisp{4294967292,0}' (unsigned int) | ??_EbkWinSlider@@$4PPPPPPPM@A@AEPAXI@Z
    public: virtual void * __thiscall bkWinSlider::`vector deleting destructor'(unsigned int) | ??_EbkWinSlider@@UAEPAXI@Z
    public: virtual void * __thiscall bkWinSlider::`scalar deleting destructor'(unsigned int) | ??_GbkWinSlider@@UAEPAXI@Z
    [thunk]:public: virtual void __thiscall bkWinSlider::Destroy`vtordisp{4294967292,0}' (void) | ?Destroy@bkWinSlider@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinSlider::Update`vtordisp{4294967292,0}' (void) | ?Update@bkWinSlider@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinSlider::MoveY`vtordisp{4294967292,0}' (class bkBank &,int) | ?MoveY@bkWinSlider@@$4PPPPPPPM@A@AEXAAVbkBank@@H@Z
    [thunk]:protected: virtual bool __thiscall bkWinSlider::IsShown`vtordisp{4294967292,0}' (void) const | ?IsShown@bkWinSlider@@$2PPPPPPPM@A@BE_NXZ
    [thunk]:protected: virtual void __thiscall bkWinSlider::Show`vtordisp{4294967292,0}' (void) | ?Show@bkWinSlider@@$2PPPPPPPM@A@AEXXZ
    [thunk]:protected: virtual void __thiscall bkWinSlider::Hide`vtordisp{4294967292,0}' (void) | ?Hide@bkWinSlider@@$2PPPPPPPM@A@AEXXZ
    const bkWinSlider::`vftable'{for `bkWidget'} | ??_7bkWinSlider@@6BbkWidget@@@
    const bkWinSlider::`vftable'{for `bkWinWidget'} | ??_7bkWinSlider@@6BbkWinWidget@@@
    const bkWinSlider::`vbtable'{for `bkSlider'} | ??_8bkWinSlider@@7BbkSlider@@@
    const bkWinSlider::`vbtable'{for `bkWinWidget'} | ??_8bkWinSlider@@7BbkWinWidget@@@
    long (__stdcall* sOldSliderButtWinProc)(struct HWND__ *,unsigned int,unsigned int,long) | ?sOldSliderButtWinProc@@3P6GJPAUHWND__@@IIJ@ZA
    long (__stdcall* sOldSliderEditWinProc)(struct HWND__ *,unsigned int,unsigned int,long) | ?sOldSliderEditWinProc@@3P6GJPAUHWND__@@IIJ@ZA
*/
