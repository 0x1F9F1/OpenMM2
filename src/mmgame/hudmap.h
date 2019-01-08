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
    mmgame:hudmap

    0x42EB60 | public: __thiscall mmHudMap::mmHudMap(void) | ??0mmHudMap@@QAE@XZ
    0x42EC70 | public: virtual __thiscall mmHudMap::~mmHudMap(void) | ??1mmHudMap@@UAE@XZ
    0x42EC80 | public: void __thiscall mmHudMap::Init(class Matrix34 *,class mmGame *,char *) | ?Init@mmHudMap@@QAEXPAVMatrix34@@PAVmmGame@@PAD@Z
    0x42EE90 | public: virtual void __thiscall mmHudMap::Reset(void) | ?Reset@mmHudMap@@UAEXXZ
    0x42EEA0 | public: void __thiscall mmHudMap::RegisterOpponents(struct OppIconInfo *,int) | ?RegisterOpponents@mmHudMap@@QAEXPAUOppIconInfo@@H@Z
    0x42EEC0 | public: void __thiscall mmHudMap::RegisterCopsnRobbers(class Vector3 * *) | ?RegisterCopsnRobbers@mmHudMap@@QAEXPAPAVVector3@@@Z
    0x42EEE0 | public: void __thiscall mmHudMap::Activate(void) | ?Activate@mmHudMap@@QAEXXZ
    0x42EEF0 | public: void __thiscall mmHudMap::Deactivate(void) | ?Deactivate@mmHudMap@@QAEXXZ
    0x42EF00 | protected: int __thiscall mmHudMap::GetNextMapMode(void) | ?GetNextMapMode@mmHudMap@@IAEHXZ
    0x42EF20 | protected: int __thiscall mmHudMap::GetCurrentMapMode(void) | ?GetCurrentMapMode@mmHudMap@@IAEHXZ
    0x42EF30 | protected: void __thiscall mmHudMap::SetMapMode(int) | ?SetMapMode@mmHudMap@@IAEXH@Z
    0x42F1A0 | public: virtual void __thiscall mmHudMap::Update(void) | ?Update@mmHudMap@@UAEXXZ
    0x42F1B0 | public: virtual void __thiscall mmHudMap::Cull(void) | ?Cull@mmHudMap@@UAEXXZ
    0x42F580 | private: void __thiscall mmHudMap::DrawIcon(enum mmHudMap::IconType,class Matrix34 const &) | ?DrawIcon@mmHudMap@@AAEXW4IconType@1@ABVMatrix34@@@Z
    0x42F600 | private: void __thiscall mmHudMap::DrawPlayer(void) | ?DrawPlayer@mmHudMap@@AAEXXZ
    0x42F690 | private: void __thiscall mmHudMap::DrawIndicator(enum mmHudMap::IndicatorType,class Vector3 const &) | ?DrawIndicator@mmHudMap@@AAEXW4IndicatorType@1@ABVVector3@@@Z
    0x42F6F0 | private: void __thiscall mmHudMap::DrawOpponents(void) | ?DrawOpponents@mmHudMap@@AAEXXZ
    0x42F7D0 | private: void __thiscall mmHudMap::DrawCops(void) | ?DrawCops@mmHudMap@@AAEXXZ
    0x42F830 | private: void __thiscall mmHudMap::DrawWaypoints(void) | ?DrawWaypoints@mmHudMap@@AAEXXZ
    0x42F890 | private: void __thiscall mmHudMap::DrawCopsnRobbers(void) | ?DrawCopsnRobbers@mmHudMap@@AAEXXZ
    0x42FA00 | public: void __thiscall mmHudMap::ToggleMapRes(void) | ?ToggleMapRes@mmHudMap@@QAEXXZ
    0x42FA10 | public: void __thiscall mmHudMap::ToggleMapOrient(void) | ?ToggleMapOrient@mmHudMap@@QAEXXZ
    0x42FA20 | public: void __thiscall mmHudMap::SetZoomIn(bool) | ?SetZoomIn@mmHudMap@@QAEX_N@Z
    0x42FA30 | public: bool __thiscall mmHudMap::GetZoomIn(void) | ?GetZoomIn@mmHudMap@@QAE_NXZ
    0x42FA40 | public: void __thiscall mmHudMap::SetOrient(bool) | ?SetOrient@mmHudMap@@QAEX_N@Z
    0x42FA50 | public: bool __thiscall mmHudMap::GetOrient(void) | ?GetOrient@mmHudMap@@QAE_NXZ
    public: void __thiscall mmHudMap::AddWidgets(class bkBank *) | ?AddWidgets@mmHudMap@@QAEXPAVbkBank@@@Z
    0x42FA60 | public: virtual void __thiscall mmHudMap::FileIO(class datParser &) | ?FileIO@mmHudMap@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall mmHudMap::`vector deleting destructor'(unsigned int) | ??_EmmHudMap@@UAEPAXI@Z
    0x42FCC0 | public: virtual void * __thiscall mmHudMap::`scalar deleting destructor'(unsigned int) | ??_GmmHudMap@@UAEPAXI@Z
    0x42FCF0 | class Matrix44 & __cdecl Convert(class Matrix44 &,class Matrix34 const &) | ?Convert@@YAAAVMatrix44@@AAV1@ABVMatrix34@@@Z
    0x42FD60 | public: virtual char * __thiscall mmHudMap::GetClassName(void) | ?GetClassName@mmHudMap@@UAEPADXZ
    0x5B0D00 | const mmHudMap::`vftable' | ??_7mmHudMap@@6B@
    0x5C4740 | unsigned int * HudmapIconColors | ?HudmapIconColors@@3PAIA
*/

#include "hooking.h"
