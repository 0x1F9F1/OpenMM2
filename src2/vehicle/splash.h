/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "node/node.h"

/*
    vehicle:splash

    0x4D6A00 | public: __thiscall vehSplash::vehSplash(void) | ??0vehSplash@@QAE@XZ
    0x4D6A70 | public: virtual void __thiscall vehSplash::Reset(void) | ?Reset@vehSplash@@UAEXXZ
    0x4D6A80 | public: void __thiscall vehSplash::Init(class phInertialCS *,class Vector3 const &,class Vector3 const &) | ?Init@vehSplash@@QAEXPAVphInertialCS@@ABVVector3@@1@Z
    0x4D6BD0 | public: void __thiscall vehSplash::Activate(float) | ?Activate@vehSplash@@QAEXM@Z
    0x4D6BF0 | public: virtual void __thiscall vehSplash::Update(void) | ?Update@vehSplash@@UAEXXZ
    public: virtual void __thiscall vehSplash::AddWidgets(class bkBank &) | ?AddWidgets@vehSplash@@UAEXAAVbkBank@@@Z
    0x4D6F00 | public: virtual void * __thiscall vehSplash::`scalar deleting destructor'(unsigned int) | ??_GvehSplash@@UAEPAXI@Z
    public: virtual void * __thiscall vehSplash::`vector deleting destructor'(unsigned int) | ??_EvehSplash@@UAEPAXI@Z
    0x4D6F30 | public: virtual __thiscall vehSplash::~vehSplash(void) | ??1vehSplash@@UAE@XZ
    public: void __thiscall phInertialCS::ApplyForce(class Vector3 const &,class Vector3 const &) | ?ApplyForce@phInertialCS@@QAEXABVVector3@@0@Z
    0x5B2EEC | const vehSplash::`vftable' | ??_7vehSplash@@6B@
*/

class vehSplash : public asNode
{
    // const vehSplash::`vftable' @ 0x5B2EEC

public:
    // 0x4D6A00 | ??0vehSplash@@QAE@XZ
    vehSplash();

    // 0x4D6F00 | ??_GvehSplash@@UAEPAXI@Z
    // 0x4D6F30 | ??1vehSplash@@UAE@XZ
    ~vehSplash() override;

    // 0x4D6BD0 | ?Activate@vehSplash@@QAEXM@Z
    void Activate(f32 arg1);

    // 0x4D6A80 | ?Init@vehSplash@@QAEXPAVphInertialCS@@ABVVector3@@1@Z
    void Init(class phInertialCS* arg1, class Vector3 const& arg2, class Vector3 const& arg3);

    // 0x4D6A70 | ?Reset@vehSplash@@UAEXXZ
    void Reset() override;

    // 0x4D6BF0 | ?Update@vehSplash@@UAEXXZ
    void Update() override;
};

check_size(vehSplash, 0x328);
