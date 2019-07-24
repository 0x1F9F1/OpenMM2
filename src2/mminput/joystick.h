/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

// 0x5310E0 | ?DecodeDIErrorMFlag@@YAXJ@Z
inline void DecodeDIErrorMFlag(int32_t arg1)
{
    return stub<cdecl_t<void, int32_t>>(0x5310E0, arg1);
}

struct mmJoystick
{
public:
    // 0x5301D0 | ??_EmmJoystick@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x530330 | ??0mmJoystick@@QAE@XZ
    inline mmJoystick()
    {
        stub<member_func_t<void, mmJoystick>>(0x530330, this);
    }

    // 0x5303B0 | ??1mmJoystick@@QAE@XZ
    inline ~mmJoystick()
    {
        stub<member_func_t<void, mmJoystick>>(0x5303B0, this);
    }

    // 0x5304B0 | ?Init@mmJoystick@@QAEHPAUIDirectInputDevice2A@@PAUHWND__@@@Z
    inline int32_t Init(struct IDirectInputDevice2A* arg1, struct HWND__* arg2)
    {
        return stub<member_func_t<int32_t, mmJoystick, struct IDirectInputDevice2A*, struct HWND__*>>(
            0x5304B0, this, arg1, arg2);
    }

    // 0x5305C0 | ?inputPrepareDevice@mmJoystick@@QAEHXZ
    inline int32_t inputPrepareDevice()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x5305C0, this);
    }

    // 0x530770 | ?SetDeadZone@mmJoystick@@QAEHM@Z
    inline int32_t SetDeadZone(float arg1)
    {
        return stub<member_func_t<int32_t, mmJoystick, float>>(0x530770, this, arg1);
    }

    // 0x530810 | ?DisableAutoCenter@mmJoystick@@QAEHXZ
    inline int32_t DisableAutoCenter()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530810, this);
    }

    // 0x530860 | ?Poll@mmJoystick@@QAEKXZ
    inline uint32_t Poll()
    {
        return stub<member_func_t<uint32_t, mmJoystick>>(0x530860, this);
    }

    // 0x530970 | ?GetAxis@mmJoystick@@QAEMH@Z
    inline float GetAxis(int32_t arg1)
    {
        return stub<member_func_t<float, mmJoystick, int32_t>>(0x530970, this, arg1);
    }

    // 0x530A70 | ?GetButton@mmJoystick@@QAEMH@Z
    inline float GetButton(int32_t arg1)
    {
        return stub<member_func_t<float, mmJoystick, int32_t>>(0x530A70, this, arg1);
    }

    // 0x530AA0 | ?Update@mmJoystick@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmJoystick>>(0x530AA0, this);
    }

    // 0x530B30 | ?ResetAxisCapture@mmJoystick@@QAEXXZ
    inline void ResetAxisCapture()
    {
        return stub<member_func_t<void, mmJoystick>>(0x530B30, this);
    }

    // 0x530BB0 | ?InputCreateEffect@mmJoystick@@QAEXXZ
    inline void InputCreateEffect()
    {
        return stub<member_func_t<void, mmJoystick>>(0x530BB0, this);
    }

    // 0x530CE0 | ?InputInitEffect@mmJoystick@@QAEXXZ
    inline void InputInitEffect()
    {
        return stub<member_func_t<void, mmJoystick>>(0x530CE0, this);
    }

    // 0x530D20 | ?InputStopEffect@mmJoystick@@QAEXXZ
    inline void InputStopEffect()
    {
        return stub<member_func_t<void, mmJoystick>>(0x530D20, this);
    }

    // 0x530D60 | ?SetShake@mmJoystick@@QAEHKK@Z
    inline int32_t SetShake(uint32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<int32_t, mmJoystick, uint32_t, uint32_t>>(0x530D60, this, arg1, arg2);
    }

    // 0x530D90 | ?PlayShake@mmJoystick@@QAEHXZ
    inline int32_t PlayShake()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530D90, this);
    }

    // 0x530DB0 | ?StopShake@mmJoystick@@QAEHXZ
    inline int32_t StopShake()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530DB0, this);
    }

    // 0x530DD0 | ?PlayCollision@mmJoystick@@QAEHXZ
    inline int32_t PlayCollision()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530DD0, this);
    }

    // 0x530DF0 | ?SetSteer@mmJoystick@@QAEHJ@Z
    inline int32_t SetSteer(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoystick, int32_t>>(0x530DF0, this, arg1);
    }

    // 0x530E10 | ?PlaySteer@mmJoystick@@QAEHXZ
    inline int32_t PlaySteer()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530E10, this);
    }

    // 0x530E30 | ?StopSteer@mmJoystick@@QAEHXZ
    inline int32_t StopSteer()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530E30, this);
    }

    // 0x530E50 | ?SetFriction@mmJoystick@@QAEHJ@Z
    inline int32_t SetFriction(int32_t arg1)
    {
        return stub<member_func_t<int32_t, mmJoystick, int32_t>>(0x530E50, this, arg1);
    }

    // 0x530E70 | ?PlayFriction@mmJoystick@@QAEHXZ
    inline int32_t PlayFriction()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530E70, this);
    }

    // 0x530E90 | ?StopFriction@mmJoystick@@QAEHXZ
    inline int32_t StopFriction()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530E90, this);
    }

    // 0x530EB0 | ?GetFFEffect@mmJoystick@@QAEPAVmmEffectFF@@H@Z
    inline class mmEffectFF* GetFFEffect(int32_t arg1)
    {
        return stub<member_func_t<class mmEffectFF*, mmJoystick, int32_t>>(0x530EB0, this, arg1);
    }

    // 0x530F00 | ?GetNumButtons@mmJoystick@@QAEHXZ
    inline int32_t GetNumButtons()
    {
        return stub<member_func_t<int32_t, mmJoystick>>(0x530F00, this);
    }

    // 0x530F10 | ?PrintDeviceCaps@mmJoystick@@QAEXXZ
    inline void PrintDeviceCaps()
    {
        return stub<member_func_t<void, mmJoystick>>(0x530F10, this);
    }
};

struct mmJaxis
{
public:
    // 0x530230 | ??0mmJaxis@@QAE@XZ
    inline mmJaxis()
    {
        stub<member_func_t<void, mmJaxis>>(0x530230, this);
    }

    // 0x530250 | ??1mmJaxis@@QAE@XZ
    inline ~mmJaxis()
    {
        stub<member_func_t<void, mmJaxis>>(0x530250, this);
    }

    // 0x530260 | ?SetRange@mmJaxis@@QAEXMM@Z
    inline void SetRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmJaxis, float, float>>(0x530260, this, arg1, arg2);
    }

    // 0x530280 | ?Normalize@mmJaxis@@QAEXM@Z
    inline void Normalize(float arg1)
    {
        return stub<member_func_t<void, mmJaxis, float>>(0x530280, this, arg1);
    }

    // 0x5302A0 | ?NormalizePOV@mmJaxis@@QAEXK@Z
    inline void NormalizePOV(uint32_t arg1)
    {
        return stub<member_func_t<void, mmJaxis, uint32_t>>(0x5302A0, this, arg1);
    }

    // 0x5302E0 | ?Capture@mmJaxis@@QAEHXZ
    inline int32_t Capture()
    {
        return stub<member_func_t<int32_t, mmJaxis>>(0x5302E0, this);
    }

    // 0x530310 | ?ResetCapture@mmJaxis@@QAEXXZ
    inline void ResetCapture()
    {
        return stub<member_func_t<void, mmJaxis>>(0x530310, this);
    }
};
