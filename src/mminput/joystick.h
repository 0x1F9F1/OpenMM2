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
    mminput:joystick

    0x530230 | public: __thiscall mmJaxis::mmJaxis(void) | ??0mmJaxis@@QAE@XZ
    0x530250 | public: __thiscall mmJaxis::~mmJaxis(void) | ??1mmJaxis@@QAE@XZ
    0x530260 | public: void __thiscall mmJaxis::SetRange(float,float) | ?SetRange@mmJaxis@@QAEXMM@Z
    0x530280 | public: void __thiscall mmJaxis::Normalize(float) | ?Normalize@mmJaxis@@QAEXM@Z
    0x5302A0 | public: void __thiscall mmJaxis::NormalizePOV(unsigned long) | ?NormalizePOV@mmJaxis@@QAEXK@Z
    0x5302E0 | public: int __thiscall mmJaxis::Capture(void) | ?Capture@mmJaxis@@QAEHXZ
    0x530310 | public: void __thiscall mmJaxis::ResetCapture(void) | ?ResetCapture@mmJaxis@@QAEXXZ
    0x530330 | public: __thiscall mmJoystick::mmJoystick(void) | ??0mmJoystick@@QAE@XZ
    0x5303B0 | public: __thiscall mmJoystick::~mmJoystick(void) | ??1mmJoystick@@QAE@XZ
    0x5304B0 | public: int __thiscall mmJoystick::Init(struct IDirectInputDevice2A *,struct HWND__ *) | ?Init@mmJoystick@@QAEHPAUIDirectInputDevice2A@@PAUHWND__@@@Z
    0x5305C0 | public: int __thiscall mmJoystick::inputPrepareDevice(void) | ?inputPrepareDevice@mmJoystick@@QAEHXZ
    0x530770 | public: int __thiscall mmJoystick::SetDeadZone(float) | ?SetDeadZone@mmJoystick@@QAEHM@Z
    0x530810 | public: int __thiscall mmJoystick::DisableAutoCenter(void) | ?DisableAutoCenter@mmJoystick@@QAEHXZ
    0x530860 | public: unsigned long __thiscall mmJoystick::Poll(void) | ?Poll@mmJoystick@@QAEKXZ
    0x530970 | public: float __thiscall mmJoystick::GetAxis(int) | ?GetAxis@mmJoystick@@QAEMH@Z
    0x530A70 | public: float __thiscall mmJoystick::GetButton(int) | ?GetButton@mmJoystick@@QAEMH@Z
    0x530AA0 | public: void __thiscall mmJoystick::Update(void) | ?Update@mmJoystick@@QAEXXZ
    0x530B30 | public: void __thiscall mmJoystick::ResetAxisCapture(void) | ?ResetAxisCapture@mmJoystick@@QAEXXZ
    0x530BB0 | public: void __thiscall mmJoystick::InputCreateEffect(void) | ?InputCreateEffect@mmJoystick@@QAEXXZ
    0x530CE0 | public: void __thiscall mmJoystick::InputInitEffect(void) | ?InputInitEffect@mmJoystick@@QAEXXZ
    0x530D20 | public: void __thiscall mmJoystick::InputStopEffect(void) | ?InputStopEffect@mmJoystick@@QAEXXZ
    0x530D60 | public: int __thiscall mmJoystick::SetShake(unsigned long,unsigned long) | ?SetShake@mmJoystick@@QAEHKK@Z
    0x530D90 | public: int __thiscall mmJoystick::PlayShake(void) | ?PlayShake@mmJoystick@@QAEHXZ
    0x530DB0 | public: int __thiscall mmJoystick::StopShake(void) | ?StopShake@mmJoystick@@QAEHXZ
    0x530DD0 | public: int __thiscall mmJoystick::PlayCollision(void) | ?PlayCollision@mmJoystick@@QAEHXZ
    0x530DF0 | public: int __thiscall mmJoystick::SetSteer(long) | ?SetSteer@mmJoystick@@QAEHJ@Z
    0x530E10 | public: int __thiscall mmJoystick::PlaySteer(void) | ?PlaySteer@mmJoystick@@QAEHXZ
    0x530E30 | public: int __thiscall mmJoystick::StopSteer(void) | ?StopSteer@mmJoystick@@QAEHXZ
    0x530E50 | public: int __thiscall mmJoystick::SetFriction(long) | ?SetFriction@mmJoystick@@QAEHJ@Z
    0x530E70 | public: int __thiscall mmJoystick::PlayFriction(void) | ?PlayFriction@mmJoystick@@QAEHXZ
    0x530E90 | public: int __thiscall mmJoystick::StopFriction(void) | ?StopFriction@mmJoystick@@QAEHXZ
    0x530EB0 | public: class mmEffectFF * __thiscall mmJoystick::GetFFEffect(int) | ?GetFFEffect@mmJoystick@@QAEPAVmmEffectFF@@H@Z
    0x530F00 | public: int __thiscall mmJoystick::GetNumButtons(void) | ?GetNumButtons@mmJoystick@@QAEHXZ
    0x530F10 | public: void __thiscall mmJoystick::PrintDeviceCaps(void) | ?PrintDeviceCaps@mmJoystick@@QAEXXZ
    0x5310E0 | void __cdecl DecodeDIErrorMFlag(long) | ?DecodeDIErrorMFlag@@YAXJ@Z
    0x5B529C | const mmFrictionFF::`vftable' | ??_7mmFrictionFF@@6B@
    0x5B52AC | const mmCollideFF::`vftable' | ??_7mmCollideFF@@6B@
    0x5B52BC | const mmSpringFF::`vftable' | ??_7mmSpringFF@@6B@
    0x5B52CC | const mmRoadFF::`vftable' | ??_7mmRoadFF@@6B@
*/

// #include "hooking.h"
