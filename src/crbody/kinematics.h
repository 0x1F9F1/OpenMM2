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
    crbody:kinematics

    0x57E3C0 | public: __thiscall crKinematicsBase::crKinematicsBase(void) | ??0crKinematicsBase@@QAE@XZ
    0x57E3E0 | public: virtual __thiscall crKinematicsBase::~crKinematicsBase(void) | ??1crKinematicsBase@@UAE@XZ
    0x57E3F0 | public: virtual void __thiscall crKinematicsBase::Init(class crSkeleton &,class crBodyDataBase const &) | ?Init@crKinematicsBase@@UAEXAAVcrSkeleton@@ABVcrBodyDataBase@@@Z
    0x57E410 | public: virtual void __thiscall crKinematicsBase::Reset(void) | ?Reset@crKinematicsBase@@UAEXXZ
    0x57E420 | public: virtual void __thiscall crKinematicsBase::Update(void) | ?Update@crKinematicsBase@@UAEXXZ
    0x57E430 | public: virtual void __thiscall crKinematicsBase::MatchPose(void) | ?MatchPose@crKinematicsBase@@UAEXXZ
    0x57E440 | public: virtual void __thiscall crKinematicsBase::SetIKBlend(float) | ?SetIKBlend@crKinematicsBase@@UAEXM@Z
    0x57E450 | public: virtual void __thiscall crKinematicsBase::SetLimp(bool) | ?SetLimp@crKinematicsBase@@UAEX_N@Z
    0x57E460 | public: __thiscall crKinematics::crKinematics(void) | ??0crKinematics@@QAE@XZ
    0x57E590 | public: virtual __thiscall crKinematics::~crKinematics(void) | ??1crKinematics@@UAE@XZ
    0x57E600 | public: virtual void __thiscall crKinematics::Reset(void) | ?Reset@crKinematics@@UAEXXZ
    0x57E620 | public: virtual void __thiscall crKinematics::SetIKBlend(float) | ?SetIKBlend@crKinematics@@UAEXM@Z
    0x57E680 | public: virtual void __thiscall crKinematics::SetLimp(bool) | ?SetLimp@crKinematics@@UAEX_N@Z
    0x57E6E0 | public: virtual void __thiscall crKinematics::MatchPose(void) | ?MatchPose@crKinematics@@UAEXXZ
    0x57E790 | public: void __thiscall crKinematics::TestPose(void) | ?TestPose@crKinematics@@QAEXXZ
    0x57E880 | public: virtual void __thiscall crKinematics::Update(void) | ?Update@crKinematics@@UAEXXZ
    public: void __thiscall crKinematics::AddWidgets(class bkBank &) | ?AddWidgets@crKinematics@@QAEXAAVbkBank@@@Z
    0x57E970 | public: virtual void * __thiscall crKinematicsBase::`scalar deleting destructor'(unsigned int) | ??_GcrKinematicsBase@@UAEPAXI@Z
    public: virtual void * __thiscall crKinematicsBase::`vector deleting destructor'(unsigned int) | ??_EcrKinematicsBase@@UAEPAXI@Z
    public: virtual void * __thiscall crKinematics::`vector deleting destructor'(unsigned int) | ??_EcrKinematics@@UAEPAXI@Z
    0x57E9A0 | public: virtual void * __thiscall crKinematics::`scalar deleting destructor'(unsigned int) | ??_GcrKinematics@@UAEPAXI@Z
    0x5B63D4 | const crKinematicsBase::`vftable' | ??_7crKinematicsBase@@6B@
    0x5B63F0 | const crKinematics::`vftable' | ??_7crKinematics@@6B@
*/

#include "hooking.h"
