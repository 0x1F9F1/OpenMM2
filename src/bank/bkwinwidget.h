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
    bank:bkwinwidget

    public: __thiscall bkWinWidget::bkWinWidget(class bkBank &) | ??0bkWinWidget@@QAE@AAVbkBank@@@Z
    public: virtual __thiscall bkWinWidget::~bkWinWidget(void) | ??1bkWinWidget@@UAE@XZ
    public: static class bkWinWidget & __cdecl bkWinWidget::GetWidget(struct HWND__ *) | ?GetWidget@bkWinWidget@@SAAAV1@PAUHWND__@@@Z
    public: static void __cdecl bkWinWidget::DispatchMessageA(struct HWND__ *,unsigned int,unsigned int,long) | ?DispatchMessageA@bkWinWidget@@SAXPAUHWND__@@IIJ@Z
    public: virtual void __thiscall bkWinWidget::HandleMessage(struct HWND__ *,unsigned int,unsigned int,long) | ?HandleMessage@bkWinWidget@@UAEXPAUHWND__@@IIJ@Z
    protected: virtual void __thiscall bkWinWidget::SetWidgetID(int) | ?SetWidgetID@bkWinWidget@@MAEXH@Z
    public: virtual void __thiscall bkWinWidget::Destroy(void) | ?Destroy@bkWinWidget@@UAEXXZ
    [thunk]:public: virtual void * __thiscall bkWinWidget::`vector deleting destructor'`vtordisp{4294967292,0}' (unsigned int) | ??_EbkWinWidget@@$4PPPPPPPM@A@AEPAXI@Z
    public: virtual void * __thiscall bkWinWidget::`vector deleting destructor'(unsigned int) | ??_EbkWinWidget@@UAEPAXI@Z
    public: virtual void * __thiscall bkWinWidget::`scalar deleting destructor'(unsigned int) | ??_GbkWinWidget@@UAEPAXI@Z
    [thunk]:public: virtual void __thiscall bkWinWidget::Destroy`vtordisp{4294967292,0}' (void) | ?Destroy@bkWinWidget@@$4PPPPPPPM@A@AEXXZ
    const bkWinWidget::`vftable'{for `bkWidget'} | ??_7bkWinWidget@@6BbkWidget@@@
    const bkWinWidget::`vftable'{for `bkWinWidget'} | ??_7bkWinWidget@@6B0@@
    const bkWinWidget::`vbtable' | ??_8bkWinWidget@@7B@
*/

#include "hooking.h"
