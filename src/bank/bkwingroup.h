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
    bank:bkwingroup

    public: __thiscall bkWinGroup::bkWinGroup(class bkBank &,char const *,bool) | ??0bkWinGroup@@QAE@AAVbkBank@@PBD_N@Z
    public: virtual __thiscall bkWinGroup::~bkWinGroup(void) | ??1bkWinGroup@@UAE@XZ
    public: virtual void __thiscall bkWinGroup::MoveY(class bkBank &,int) | ?MoveY@bkWinGroup@@UAEXAAVbkBank@@H@Z
    public: virtual void __thiscall bkWinGroup::HandleMessage(struct HWND__ *,unsigned int,unsigned int,long) | ?HandleMessage@bkWinGroup@@UAEXPAUHWND__@@IIJ@Z
    protected: virtual bool __thiscall bkWinGroup::IsShown(void) const | ?IsShown@bkWinGroup@@MBE_NXZ
    protected: virtual void __thiscall bkWinGroup::Show(void) | ?Show@bkWinGroup@@MAEXXZ
    protected: virtual void __thiscall bkWinGroup::Hide(void) | ?Hide@bkWinGroup@@MAEXXZ
    protected: virtual void __thiscall bkWinGroup::SetWidgetID(int) | ?SetWidgetID@bkWinGroup@@MAEXH@Z
    public: virtual void __thiscall bkWinGroup::Destroy(void) | ?Destroy@bkWinGroup@@UAEXXZ
    [thunk]:public: virtual void * __thiscall bkWinGroup::`vector deleting destructor'`vtordisp{4294967292,0}' (unsigned int) | ??_EbkWinGroup@@$4PPPPPPPM@A@AEPAXI@Z
    public: virtual void * __thiscall bkWinGroup::`scalar deleting destructor'(unsigned int) | ??_GbkWinGroup@@UAEPAXI@Z
    public: virtual void * __thiscall bkWinGroup::`vector deleting destructor'(unsigned int) | ??_EbkWinGroup@@UAEPAXI@Z
    [thunk]:public: virtual void __thiscall bkWinGroup::Destroy`vtordisp{4294967292,0}' (void) | ?Destroy@bkWinGroup@@$4PPPPPPPM@A@AEXXZ
    [thunk]:public: virtual void __thiscall bkWinGroup::MoveY`vtordisp{4294967292,0}' (class bkBank &,int) | ?MoveY@bkWinGroup@@$4PPPPPPPM@A@AEXAAVbkBank@@H@Z
    [thunk]:protected: virtual bool __thiscall bkWinGroup::IsShown`vtordisp{4294967292,0}' (void) const | ?IsShown@bkWinGroup@@$2PPPPPPPM@A@BE_NXZ
    [thunk]:protected: virtual void __thiscall bkWinGroup::Show`vtordisp{4294967292,0}' (void) | ?Show@bkWinGroup@@$2PPPPPPPM@A@AEXXZ
    [thunk]:protected: virtual void __thiscall bkWinGroup::Hide`vtordisp{4294967292,0}' (void) | ?Hide@bkWinGroup@@$2PPPPPPPM@A@AEXXZ
    public: virtual void __thiscall bkWinGroup::SetText(char const *) | ?SetText@bkWinGroup@@UAEXPBD@Z
    const bkWinGroup::`vftable'{for `bkWidget'} | ??_7bkWinGroup@@6BbkWidget@@@
    const bkWinGroup::`vftable'{for `bkGroup'} | ??_7bkWinGroup@@6BbkGroup@@@
    const bkWinGroup::`vftable'{for `bkWinWidget'} | ??_7bkWinGroup@@6BbkWinWidget@@@
    const bkWinGroup::`vbtable'{for `bkGroup'} | ??_8bkWinGroup@@7BbkGroup@@@
    const bkWinGroup::`vbtable'{for `bkWinWidget'} | ??_8bkWinGroup@@7BbkWinWidget@@@
*/

#include "hooking.h"
