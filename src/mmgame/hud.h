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
    mmgame:hud

    0x42CD50 | public: __thiscall mmHUD::mmHUD(void) | ??0mmHUD@@QAE@XZ
    0x42D280 | public: void __thiscall mmHUD::PostChatMessage(char *) | ?PostChatMessage@mmHUD@@QAEXPAD@Z
    0x42D2E0 | public: virtual void __thiscall mmHUD::ResChange(int,int) | ?ResChange@mmHUD@@UAEXHH@Z
    0x42D3C0 | public: virtual __thiscall mmHUD::~mmHUD(void) | ??1mmHUD@@UAE@XZ
    0x42D560 | public: void __thiscall mmHUD::StartTimers(void) | ?StartTimers@mmHUD@@QAEXXZ
    0x42D580 | public: void __thiscall mmHUD::StopTimers(void) | ?StopTimers@mmHUD@@QAEXXZ
    0x42D5A0 | public: void __thiscall mmHUD::ResetTimers(void) | ?ResetTimers@mmHUD@@QAEXXZ
    0x42D5E0 | public: void __thiscall mmHUD::Init(char *,class mmPlayer *,int) | ?Init@mmHUD@@QAEXPADPAVmmPlayer@@H@Z
    0x42D910 | public: void __thiscall mmHUD::Enable(void) | ?Enable@mmHUD@@QAEXXZ
    0x42D970 | public: void __thiscall mmHUD::Disable(int) | ?Disable@mmHUD@@QAEXH@Z
    0x42D9D0 | public: void __thiscall mmHUD::Toggle(void) | ?Toggle@mmHUD@@QAEXXZ
    0x42D9F0 | public: void __thiscall mmHUD::ToggleExternalView(void) | ?ToggleExternalView@mmHUD@@QAEXXZ
    0x42DA90 | public: void __thiscall mmHUD::SetDash(int) | ?SetDash@mmHUD@@QAEXH@Z
    0x42DAB0 | public: void __thiscall mmHUD::ActivateDash(void) | ?ActivateDash@mmHUD@@QAEXXZ
    0x42DAE0 | public: void __thiscall mmHUD::DeactivateDash(void) | ?DeactivateDash@mmHUD@@QAEXXZ
    0x42DB10 | public: int __thiscall mmHUD::IsDashActive(void) | ?IsDashActive@mmHUD@@QAEHXZ
    0x42DB20 | public: virtual void __thiscall mmHUD::Reset(void) | ?Reset@mmHUD@@UAEXXZ
    0x42DB60 | public: void __thiscall mmHUD::SetTransparency(bool) | ?SetTransparency@mmHUD@@QAEX_N@Z
    0x42DB70 | public: void __thiscall mmHUD::PostUpdate(void) | ?PostUpdate@mmHUD@@QAEXXZ
    0x42DBC0 | public: virtual void __thiscall mmHUD::Update(void) | ?Update@mmHUD@@UAEXXZ
    0x42DF10 | public: virtual void __thiscall mmHUD::UpdatePaused(void) | ?UpdatePaused@mmHUD@@UAEXXZ
    0x42DF40 | public: virtual void __thiscall mmHUD::Cull(void) | ?Cull@mmHUD@@UAEXXZ
    0x42E040 | public: void __thiscall mmHUD::ShowSplitTime(void) | ?ShowSplitTime@mmHUD@@QAEXXZ
    0x42E0A0 | public: void __thiscall mmHUD::SetStandings(int,int) | ?SetStandings@mmHUD@@QAEXHH@Z
    0x42E0E0 | public: void __thiscall mmHUD::PostLapTime(bool) | ?PostLapTime@mmHUD@@QAEX_N@Z
    public: void __thiscall mmHUD::SetLapTime(int,int) | ?SetLapTime@mmHUD@@QAEXHH@Z
    0x42E1D0 | public: void __thiscall mmHUD::SetWPCleared(int,int) | ?SetWPCleared@mmHUD@@QAEXHH@Z
    0x42E1F0 | public: void __thiscall mmHUD::SetMessage(struct LocString *,float,int) | ?SetMessage@mmHUD@@QAEXPAULocString@@MH@Z
    0x42E240 | public: void __thiscall mmHUD::SetMessage2(struct LocString *) | ?SetMessage2@mmHUD@@QAEXPAULocString@@@Z
    0x42E270 | public: void __thiscall mmHUD::SetScore(char *) | ?SetScore@mmHUD@@QAEXPAD@Z
    0x42E290 | public: void __thiscall mmHUD::AddPlayer(char const *,unsigned long,int,int) | ?AddPlayer@mmHUD@@QAEXPBDKHH@Z
    0x42E2C0 | public: void __thiscall mmHUD::SetScore(unsigned long,int) | ?SetScore@mmHUD@@QAEXKH@Z
    0x42E2E0 | public: void __thiscall mmHUD::RemovePlayer(unsigned long) | ?RemovePlayer@mmHUD@@QAEXK@Z
    0x42E300 | public: void __thiscall mmHUD::ActivateGold(void) | ?ActivateGold@mmHUD@@QAEXXZ
    0x42E310 | public: void __thiscall mmHUD::DeactivateGold(void) | ?DeactivateGold@mmHUD@@QAEXXZ
    0x42E320 | public: void __thiscall mmHUD::GetTime(char *,float) | ?GetTime@mmHUD@@QAEXPADM@Z
    0x42E340 | public: void __thiscall mmHUD::PlayNetAlert(void) | ?PlayNetAlert@mmHUD@@QAEXXZ
    0x42E360 | public: void __thiscall mmHUD::TogglePositionDisplay(int) | ?TogglePositionDisplay@mmHUD@@QAEXH@Z
    0x42E3C0 | public: void __thiscall mmHUD::GetPosHdg(class Vector4 &) | ?GetPosHdg@mmHUD@@QAEXAAVVector4@@@Z
    public: void __thiscall mmHUD::RecordPosition(char *) | ?RecordPosition@mmHUD@@QAEXPAD@Z
    public: void __thiscall mmHUD::DumpPositions(char *) | ?DumpPositions@mmHUD@@QAEXPAD@Z
    public: virtual void __thiscall mmHUD::AddWidgets(class bkBank &) | ?AddWidgets@mmHUD@@UAEXAAVbkBank@@@Z
    0x42E420 | public: __thiscall mmTimer::mmTimer(void) | ??0mmTimer@@QAE@XZ
    0x42E480 | public: virtual __thiscall mmTimer::~mmTimer(void) | ??1mmTimer@@UAE@XZ
    0x42E490 | public: void __thiscall mmTimer::Init(int,float,int) | ?Init@mmTimer@@QAEXHMH@Z
    0x42E4C0 | public: float __thiscall mmTimer::GetTime(void) | ?GetTime@mmTimer@@QAEMXZ
    0x42E4D0 | public: virtual void __thiscall mmTimer::Update(void) | ?Update@mmTimer@@UAEXXZ
    0x42E5F0 | public: virtual void __thiscall mmTimer::Reset(void) | ?Reset@mmTimer@@UAEXXZ
    0x42E610 | public: void __thiscall mmTimer::Start(void) | ?Start@mmTimer@@QAEXXZ
    0x42E630 | public: void __thiscall mmTimer::Stop(void) | ?Stop@mmTimer@@QAEXXZ
    0x42E640 | public: void __thiscall mmTimer::StartStop(void) | ?StartStop@mmTimer@@QAEXXZ
    0x42E650 | public: __thiscall mmArrow::mmArrow(void) | ??0mmArrow@@QAE@XZ
    0x42E710 | public: virtual __thiscall mmArrow::~mmArrow(void) | ??1mmArrow@@UAE@XZ
    0x42E770 | public: void __thiscall mmArrow::Init(class Matrix34 *) | ?Init@mmArrow@@QAEXPAVMatrix34@@@Z
    0x42E780 | public: virtual void __thiscall mmArrow::Reset(void) | ?Reset@mmArrow@@UAEXXZ
    0x42E790 | public: void __thiscall mmArrow::SetInterest(class Vector3 *) | ?SetInterest@mmArrow@@QAEXPAVVector3@@@Z
    0x42E7A0 | private: void __thiscall mmArrow::ReColorArrow(int) | ?ReColorArrow@mmArrow@@AAEXH@Z
    0x42E7F0 | public: virtual void __thiscall mmArrow::Update(void) | ?Update@mmArrow@@UAEXXZ
    public: virtual void * __thiscall mmHUD::`vector deleting destructor'(unsigned int) | ??_EmmHUD@@UAEPAXI@Z
    0x42EA50 | public: virtual void * __thiscall mmHUD::`scalar deleting destructor'(unsigned int) | ??_GmmHUD@@UAEPAXI@Z
    0x42EA80 | public: virtual __thiscall mmExternalView::~mmExternalView(void) | ??1mmExternalView@@UAE@XZ
    public: virtual void * __thiscall mmTimer::`vector deleting destructor'(unsigned int) | ??_EmmTimer@@UAEPAXI@Z
    0x42EAE0 | public: virtual void * __thiscall mmTimer::`scalar deleting destructor'(unsigned int) | ??_GmmTimer@@UAEPAXI@Z
    public: virtual void * __thiscall mmArrow::`vector deleting destructor'(unsigned int) | ??_EmmArrow@@UAEPAXI@Z
    0x42EB10 | public: virtual void * __thiscall mmArrow::`scalar deleting destructor'(unsigned int) | ??_GmmArrow@@UAEPAXI@Z
    0x42EB40 | public: void __thiscall Vector3::Scale(float) | ?Scale@Vector3@@QAEXM@Z
    0x5B0C20 | const mmHUD::`vftable' | ??_7mmHUD@@6B@
    0x5B0C78 | const mmTimer::`vftable' | ??_7mmTimer@@6B@
    0x5B0CAC | const mmArrow::`vftable' | ??_7mmArrow@@6B@
*/

// #include "hooking.h"
