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
    phys:trailerjoint

    0x592CC0 | public: __thiscall dgTrailerJoint::dgTrailerJoint(void) | ??0dgTrailerJoint@@QAE@XZ
    0x592CF0 | public: virtual __thiscall dgTrailerJoint::~dgTrailerJoint(void) | ??1dgTrailerJoint@@UAE@XZ
    0x592D10 | public: virtual char const * __thiscall dgTrailerJoint::GetDirName(void) | ?GetDirName@dgTrailerJoint@@UAEPBDXZ
    0x592D20 | public: void __thiscall dgTrailerJoint::Init(char const *,class phInertialCS *,class phInertialCS *,class Vector3 const &,class Vector3 const &) | ?Init@dgTrailerJoint@@QAEXPBDPAVphInertialCS@@1ABVVector3@@2@Z
    0x592E50 | public: void __thiscall dgTrailerJoint::Reset(void) | ?Reset@dgTrailerJoint@@QAEXXZ
    0x592EC0 | public: void __thiscall dgTrailerJoint::SetPosition(class Vector3 const &) | ?SetPosition@dgTrailerJoint@@QAEXABVVector3@@@Z
    0x592FF0 | public: void __thiscall dgTrailerJoint::SetCosFreeLean(void) | ?SetCosFreeLean@dgTrailerJoint@@QAEXXZ
    0x593000 | public: void __thiscall dgTrailerJoint::SetRotate1(class Matrix34 const &) | ?SetRotate1@dgTrailerJoint@@QAEXABVMatrix34@@@Z
    0x593020 | public: void __thiscall dgTrailerJoint::SetRotate2(class Matrix34 const &) | ?SetRotate2@dgTrailerJoint@@QAEXABVMatrix34@@@Z
    0x593040 | public: void __thiscall dgTrailerJoint::SetFrictionLean(float,float,float) | ?SetFrictionLean@dgTrailerJoint@@QAEXMMM@Z
    0x593070 | public: void __thiscall dgTrailerJoint::SetFrictionRoll(float,float,float) | ?SetFrictionRoll@dgTrailerJoint@@QAEXMMM@Z
    0x5930A0 | public: void __thiscall dgTrailerJoint::SetLeanLimit(float,float) | ?SetLeanLimit@dgTrailerJoint@@QAEXMM@Z
    0x5930C0 | public: void __thiscall dgTrailerJoint::SetRollLimit(float,float) | ?SetRollLimit@dgTrailerJoint@@QAEXMM@Z
    0x5930E0 | public: void __thiscall dgTrailerJoint::SetRollLimit(float,float,float) | ?SetRollLimit@dgTrailerJoint@@QAEXMMM@Z
    0x593110 | public: void __thiscall dgTrailerJoint::SetRestOrientation(void) | ?SetRestOrientation@dgTrailerJoint@@QAEXXZ
    0x593170 | public: void __thiscall dgTrailerJoint::SetRestOrientMat(class Matrix34 const &) | ?SetRestOrientMat@dgTrailerJoint@@QAEXABVMatrix34@@@Z
    0x5931B0 | public: void __thiscall dgTrailerJoint::SetRestOrientMat(class Matrix34 const &,class Matrix34 const &) | ?SetRestOrientMat@dgTrailerJoint@@QAEXABVMatrix34@@0@Z
    0x593200 | public: void __thiscall dgTrailerJoint::SetForceLimit(float) | ?SetForceLimit@dgTrailerJoint@@QAEXM@Z
    0x593210 | public: void __thiscall dgTrailerJoint::SetJointForceFlag(void) | ?SetJointForceFlag@dgTrailerJoint@@QAEXXZ
    0x5932B0 | public: void __thiscall dgTrailerJoint::Update(void) | ?Update@dgTrailerJoint@@QAEXXZ
    0x5942B0 | public: void __thiscall dgTrailerJoint::MoveICS(void) | ?MoveICS@dgTrailerJoint@@QAEXXZ
    0x5942D0 | public: void __thiscall dgTrailerJoint::BreakJoint(void) | ?BreakJoint@dgTrailerJoint@@QAEXXZ
    0x5942E0 | public: void __thiscall dgTrailerJoint::UnbreakJoint(void) | ?UnbreakJoint@dgTrailerJoint@@QAEXXZ
    0x5942F0 | public: void __thiscall dgTrailerJoint::DoJointTorque(class Matrix34 const &,class Matrix34 const &,class Matrix34 const &,class Matrix34 const &,float &,float &,class Vector3 &,float &,float &) | ?DoJointTorque@dgTrailerJoint@@QAEXABVMatrix34@@000AAM1AAVVector3@@11@Z
    0x5949B0 | public: void __thiscall dgTrailerJoint::DoJointLimits(float,class Vector3 const &,float,class Vector3 const &,class Vector3 &,class Matrix34 const &,class Matrix34 const &,class Matrix34 const &,class Matrix34 const &,class Matrix34 const &) | ?DoJointLimits@dgTrailerJoint@@QAEXMABVVector3@@M0AAV2@ABVMatrix34@@2222@Z
    0x595080 | public: virtual void __thiscall dgTrailerJoint::ComputeInvMassMatrix(class phInertialCS *,class Matrix34 &,class Vector3 const &) const | ?ComputeInvMassMatrix@dgTrailerJoint@@UBEXPAVphInertialCS@@AAVMatrix34@@ABVVector3@@@Z
    0x595390 | public: void __thiscall dgTrailerJoint::ComputeInvMassMatrix(class phInertialCS *,class phInertialCS *,class Matrix34 &,class Vector3 const &) | ?ComputeInvMassMatrix@dgTrailerJoint@@QAEXPAVphInertialCS@@0AAVMatrix34@@ABVVector3@@@Z
    0x595970 | public: virtual void __thiscall dgTrailerJoint::FileIO(class datParser &) | ?FileIO@dgTrailerJoint@@UAEXAAVdatParser@@@Z
    public: void __thiscall dgTrailerJoint::AddWidgets(class bkBank *) | ?AddWidgets@dgTrailerJoint@@QAEXPAVbkBank@@@Z
    0x595AD0 | public: virtual class Matrix34 & __thiscall phJoint::GetInvMassMatrix(void) | ?GetInvMassMatrix@phJoint@@UAEAAVMatrix34@@XZ
    0x595AE0 | protected: virtual void __thiscall asFileIO::AfterLoad(void) | ?AfterLoad@asFileIO@@MAEXXZ
    0x595AF0 | protected: virtual void __thiscall asFileIO::BeforeSave(void) | ?BeforeSave@asFileIO@@MAEXXZ
    0x595B00 | public: virtual char const * __thiscall dgTrailerJoint::GetClassName(void) | ?GetClassName@dgTrailerJoint@@UAEPBDXZ
    0x595B10 | public: virtual bool __thiscall dgTrailerJoint::Load(void) | ?Load@dgTrailerJoint@@UAE_NXZ
    0x595B20 | public: virtual bool __thiscall dgTrailerJoint::Save(void) | ?Save@dgTrailerJoint@@UAE_NXZ
    0x595B30 | public: virtual bool __thiscall dgTrailerJoint::IsBroken(void) const | ?IsBroken@dgTrailerJoint@@UBE_NXZ
    0x595B40 | public: virtual void * __thiscall dgTrailerJoint::`scalar deleting destructor'(unsigned int) | ??_GdgTrailerJoint@@UAEPAXI@Z
    public: virtual void * __thiscall dgTrailerJoint::`vector deleting destructor'(unsigned int) | ??_EdgTrailerJoint@@UAEPAXI@Z
    public: void __thiscall Vector3::Add(class Vector3 const &,class Vector3 const &) | ?Add@Vector3@@QAEXABV1@0@Z
    0x595B70 | public: void __thiscall Vector3::InvScale(float) | ?InvScale@Vector3@@QAEXM@Z
    public: void __thiscall Vector3::SubtractScaled(class Vector3 const &,class Vector3 const &,float) | ?SubtractScaled@Vector3@@QAEXABV1@0M@Z
    public: void __thiscall phInertialCS::ApplyForce(class Vector3 const &) | ?ApplyForce@phInertialCS@@QAEXABVVector3@@@Z
    public: void __thiscall phInertialCS::ApplyTorque(class Vector3 const &) | ?ApplyTorque@phInertialCS@@QAEXABVVector3@@@Z
    public: void __thiscall phInertialCS::ApplyAngImpulse(class Vector3 const &) | ?ApplyAngImpulse@phInertialCS@@QAEXABVVector3@@@Z
    0x5B8638 | const dgTrailerJoint::`vftable'{for `phJoint'} | ??_7dgTrailerJoint@@6BphJoint@@@
    0x5B8650 | const dgTrailerJoint::`vftable'{for `asFileIO'} | ??_7dgTrailerJoint@@6BasFileIO@@@
*/

#include "hooking.h"
