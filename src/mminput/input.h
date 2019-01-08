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
    mminput:input

    0x52A950 | void __cdecl testsuperq(void) | ?testsuperq@@YAXXZ
    0x52A990 | public: __thiscall mmInput::mmInput(void) | ??0mmInput@@QAE@XZ
    0x52AB90 | public: virtual __thiscall mmInput::~mmInput(void) | ??1mmInput@@UAE@XZ
    0x52ACB0 | public: int __thiscall mmInput::AttachToPipe(void) | ?AttachToPipe@mmInput@@QAEHXZ
    0x52B170 | public: virtual void __thiscall mmInput::Reset(void) | ?Reset@mmInput@@UAEXXZ
    0x52B1B0 | public: void __thiscall mmInput::IOInit(int,struct LocString *,long) | ?IOInit@mmInput@@QAEXHPAULocString@@J@Z
    0x52B1E0 | public: void __thiscall mmInput::AutoSetup(void) | ?AutoSetup@mmInput@@QAEXXZ
    0x52B200 | public: void __thiscall mmInput::SaveCB(void) | ?SaveCB@mmInput@@QAEXXZ
    0x52B240 | public: void __thiscall mmInput::RestoreDefaultConfig(int) | ?RestoreDefaultConfig@mmInput@@QAEXH@Z
    0x52B290 | public: void __thiscall mmInput::SetDefaultConfig(int) | ?SetDefaultConfig@mmInput@@QAEXH@Z
    0x52C380 | public: void __thiscall mmInput::Init(int) | ?Init@mmInput@@QAEXH@Z
    0x52C570 | public: void __thiscall mmInput::FlagIODevChanged(void) | ?FlagIODevChanged@mmInput@@QAEXXZ
    0x52C590 | public: int __thiscall mmInput::ReturnStateCaptured(void) | ?ReturnStateCaptured@mmInput@@QAEHXZ
    0x52C5B0 | public: void __thiscall mmInput::CaptureState(int) | ?CaptureState@mmInput@@QAEXH@Z
    0x52C5E0 | public: int __thiscall mmInput::BuildCaptureIO(int,class mmIO *,union eqEvent) | ?BuildCaptureIO@mmInput@@QAEHHPAVmmIO@@TeqEvent@@@Z
    0x52C7A0 | public: void __thiscall mmInput::ForceAssignment(class mmIO *) | ?ForceAssignment@mmInput@@QAEXPAVmmIO@@@Z
    0x52C7C0 | public: int __thiscall mmInput::SanityCheck(class mmIO *,int,int) | ?SanityCheck@mmInput@@QAEHPAVmmIO@@HH@Z
    0x52C830 | public: int __thiscall mmInput::IsAlreadyAssigned(class mmIO *,int,int,int) | ?IsAlreadyAssigned@mmInput@@QAEHPAVmmIO@@HHH@Z
    0x52C920 | public: void __thiscall mmInput::AssignIO(class mmIO *,int,int) | ?AssignIO@mmInput@@QAEXPAVmmIO@@HH@Z
    0x52C9B0 | public: virtual void __thiscall mmInput::Update(void) | ?Update@mmInput@@UAEXXZ
    0x52CA80 | public: int __thiscall mmInput::PollStates(void) | ?PollStates@mmInput@@QAEHXZ
    0x52CB40 | public: int __thiscall mmInput::PollSuperQ(void) | ?PollSuperQ@mmInput@@QAEHXZ
    0x52CB90 | public: void __thiscall mmInput::Flush(void) | ?Flush@mmInput@@QAEXXZ
    0x52CBF0 | public: void __thiscall mmInput::ClearEventHitFlags(void) | ?ClearEventHitFlags@mmInput@@QAEXXZ
    0x52CC10 | private: void __thiscall mmInput::ProcessMouseEvents(void) | ?ProcessMouseEvents@mmInput@@AAEXXZ
    0x52CC70 | private: void __thiscall mmInput::ProcessKeyboardEvents(void) | ?ProcessKeyboardEvents@mmInput@@AAEXXZ
    0x52CCC0 | private: void __thiscall mmInput::GetBufferedKeyboardData(void) | ?GetBufferedKeyboardData@mmInput@@AAEXXZ
    0x52CCE0 | private: int __thiscall mmInput::GetNextKeyboardEvent(union eqEvent *) | ?GetNextKeyboardEvent@mmInput@@AAEHPATeqEvent@@@Z
    0x52CD30 | private: void __thiscall mmInput::ProcessEvents(void) | ?ProcessEvents@mmInput@@AAEXXZ
    0x52CD50 | private: __int64 __thiscall mmInput::ProcessStates(void) | ?ProcessStates@mmInput@@AAE_JXZ
    0x52CE30 | private: __int64 __thiscall mmInput::ScanState(class mmIO *) | ?ScanState@mmInput@@AAE_JPAVmmIO@@@Z
    0x52CFE0 | private: int __thiscall mmInput::EventToButton(int) | ?EventToButton@mmInput@@AAEHH@Z
    0x52D010 | private: void __thiscall mmInput::ProcessJoyEvents(void) | ?ProcessJoyEvents@mmInput@@AAEXXZ
    0x52D520 | private: __int64 __thiscall mmInput::ScanForEvent(union eqEvent *) | ?ScanForEvent@mmInput@@AAE_JPATeqEvent@@@Z
    0x52D5E0 | private: void __thiscall mmInput::PutEventInQueue(__int64) | ?PutEventInQueue@mmInput@@AAEX_J@Z
    0x52D610 | private: void __thiscall mmInput::PollContinuous(class mmIO *) | ?PollContinuous@mmInput@@AAEXPAVmmIO@@@Z
    0x52D950 | public: float __thiscall mmInput::GetThrottle(void) | ?GetThrottle@mmInput@@QAEMXZ
    0x52D970 | public: float __thiscall mmInput::GetThrottleVal(void) | ?GetThrottleVal@mmInput@@QAEMXZ
    0x52D9E0 | public: float __thiscall mmInput::GetBrakes(void) | ?GetBrakes@mmInput@@QAEMXZ
    0x52DA00 | public: float __thiscall mmInput::GetBrakesVal(void) | ?GetBrakesVal@mmInput@@QAEMXZ
    0x52DA70 | public: float __thiscall mmInput::GetHandBrake(void) | ?GetHandBrake@mmInput@@QAEMXZ
    0x52DAF0 | private: float __thiscall mmInput::FilterDiscreteSteering(float) | ?FilterDiscreteSteering@mmInput@@AAEMM@Z
    0x52DC80 | public: float __thiscall mmInput::FilterGamepadSteering(void) | ?FilterGamepadSteering@mmInput@@QAEMXZ
    0x52DE90 | public: float __thiscall mmInput::GetSteering(float (__cdecl*)(float)) | ?GetSteering@mmInput@@QAEMP6AMM@Z@Z
    0x52DF60 | public: float __thiscall mmInput::GetCamPan(void) | ?GetCamPan@mmInput@@QAEMXZ
    0x52E0A0 | public: int __thiscall mmInput::DeviceConnected(void) | ?DeviceConnected@mmInput@@QAEHXZ
    0x52E0C0 | public: int __thiscall mmInput::JoystickConnected(void) | ?JoystickConnected@mmInput@@QAEHXZ
    0x52E0D0 | public: int __thiscall mmInput::GamepadConnected(void) | ?GamepadConnected@mmInput@@QAEHXZ
    0x52E0E0 | public: int __thiscall mmInput::WheelConnected(void) | ?WheelConnected@mmInput@@QAEHXZ
    0x52E0F0 | public: void __thiscall mmInput::SetDeadZone(float) | ?SetDeadZone@mmInput@@QAEXM@Z
    0x52E120 | public: int __thiscall mmInput::JoystickHasCoolie(void) | ?JoystickHasCoolie@mmInput@@QAEHXZ
    0x52E140 | public: int __thiscall mmInput::JoystickHasThrottle(void) | ?JoystickHasThrottle@mmInput@@QAEHXZ
    0x52E160 | public: int __thiscall mmInput::WheelHas3Axis(void) | ?WheelHas3Axis@mmInput@@QAEHXZ
    0x52E1A0 | public: int __thiscall mmInput::DoingFF(void) | ?DoingFF@mmInput@@QAEHXZ
    0x52E1D0 | public: void __thiscall mmInput::StopAllFF(void) | ?StopAllFF@mmInput@@QAEXXZ
    0x52E1E0 | public: void __thiscall mmInput::SetForceFeedbackScale(float) | ?SetForceFeedbackScale@mmInput@@QAEXM@Z
    0x52E230 | public: void __thiscall mmInput::SetRoadForceScale(float) | ?SetRoadForceScale@mmInput@@QAEXM@Z
    0x52E280 | public: int __thiscall mmInput::ToggleFFEnabled(int) | ?ToggleFFEnabled@mmInput@@QAEHH@Z
    0x52E2B0 | public: int __thiscall mmInput::FFPlay(int) | ?FFPlay@mmInput@@QAEHH@Z
    0x52E2E0 | public: int __thiscall mmInput::FFStop(int) | ?FFStop@mmInput@@QAEHH@Z
    0x52E310 | public: int __thiscall mmInput::FFIsPlaying(int) | ?FFIsPlaying@mmInput@@QAEHH@Z
    0x52E340 | public: int __thiscall mmInput::FFSetValues(int,float,float) | ?FFSetValues@mmInput@@QAEHHMM@Z
    0x52E380 | public: int __thiscall mmInput::PopEvent(int *) | ?PopEvent@mmInput@@QAEHPAH@Z
    0x52E3B0 | public: int __thiscall mmInput::LoadConfig(class Stream *) | ?LoadConfig@mmInput@@QAEHPAVStream@@@Z
    0x52E440 | public: int __thiscall mmInput::BinaryLoadConfig(class Stream *) | ?BinaryLoadConfig@mmInput@@QAEHPAVStream@@@Z
    0x52E500 | public: int __thiscall mmInput::SaveConfig(class Stream *) | ?SaveConfig@mmInput@@QAEHPAVStream@@@Z
    0x52E580 | public: int __thiscall mmInput::BinarySaveConfig(class Stream *) | ?BinarySaveConfig@mmInput@@QAEHPAVStream@@@Z
    private: void __thiscall mmInput::AddWidgets(class bkBank *) | ?AddWidgets@mmInput@@AAEXPAVbkBank@@@Z
    0x52E610 | public: void __thiscall mmInput::PrintIODev(void) | ?PrintIODev@mmInput@@QAEXXZ
    0x52E6E0 | public: int __thiscall mmInput::SaveCodeConfig(class Stream *) | ?SaveCodeConfig@mmInput@@QAEHPAVStream@@@Z
    0x52EDC0 | public: virtual void * __thiscall mmInput::`scalar deleting destructor'(unsigned int) | ??_GmmInput@@UAEPAXI@Z
    public: virtual void * __thiscall mmInput::`vector deleting destructor'(unsigned int) | ??_EmmInput@@UAEPAXI@Z
    0x52EDF0 | public: void * __thiscall mmIO::`vector deleting destructor'(unsigned int) | ??_EmmIO@@QAEPAXI@Z
    0x52EE50 | public: virtual void * __thiscall mmIODev::`vector deleting destructor'(unsigned int) | ??_EmmIODev@@UAEPAXI@Z
    0x5B5250 | const mmInput::`vftable' | ??_7mmInput@@6B@
    0x6B1CEC | class mmIODev * IODev | ?IODev@@3PAVmmIODev@@A
    char * LocStrKey | ?LocStrKey@@3PADA
    0x6B1CF0 | class mmInput * GameInputPtr | ?GameInputPtr@@3PAVmmInput@@A
    int lastmouseb | ?lastmouseb@@3HA
    char * LocStrButton | ?LocStrButton@@3PADA
    char * LocStrUndef | ?LocStrUndef@@3PADA
    float Elapsed | ?Elapsed@@3MA
    char * LocStrJoystick | ?LocStrJoystick@@3PADA
    int laststate | ?laststate@@3HA
    int UseDIKey | ?UseDIKey@@3HA
    int InputConfiguration | ?InputConfiguration@@3HA
    struct IDirectInputA * gpdi | ?gpdi@@3PAUIDirectInputA@@A
    float testValue | ?testValue@@3MA
*/

#include "hooking.h"

#include "node/node.h"

class mmInput
    : public asNode
{
public:
    char gap18[0x248 - sizeof(asNode)];

    mmInput();
    ~mmInput();

    int AttachToPipe(void);
    void Init(int inputDevice);

    virtual void Update() override;
    virtual void Reset() override;
};

check_size(mmInput, 0x248);

inline_var(0x6B1CF0, mmInput*, GameInputPtr);
