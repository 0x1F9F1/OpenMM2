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
    vehicle:axle

    0x4D9990 | public: __thiscall vehAxle::vehAxle(void) | ??0vehAxle@@QAE@XZ
    0x4D9A20 | public: void __thiscall vehAxle::ComputeConstants(void) | ?ComputeConstants@vehAxle@@QAEXXZ
    0x4D9A50 | public: void __thiscall vehAxle::Init(class vehCarSim *,char const *,char const *,class vehWheel *,class vehWheel *) | ?Init@vehAxle@@QAEXPAVvehCarSim@@PBD1PAVvehWheel@@2@Z
    0x4D9B20 | public: virtual void __thiscall vehAxle::Update(void) | ?Update@vehAxle@@UAEXXZ
    public: virtual void __thiscall vehAxle::AddWidgets(class bkBank &) | ?AddWidgets@vehAxle@@UAEXAAVbkBank@@@Z
    0x4D9CA0 | public: virtual void __thiscall vehAxle::FileIO(class datParser &) | ?FileIO@vehAxle@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehAxle::`vector deleting destructor'(unsigned int) | ??_EvehAxle@@UAEPAXI@Z
    0x4D9CF0 | public: virtual void * __thiscall vehAxle::`scalar deleting destructor'(unsigned int) | ??_GvehAxle@@UAEPAXI@Z
    0x4D9D20 | public: virtual char * __thiscall vehAxle::GetClassName(void) | ?GetClassName@vehAxle@@UAEPADXZ
    0x5B309C | const vehAxle::`vftable' | ??_7vehAxle@@6B@
*/

class vehAxle : public asNode
{
    // const vehAxle::`vftable' @ 0x5B309C

public:
    // 0x4D9990 | ??0vehAxle@@QAE@XZ
    vehAxle();

    // 0x4D9CF0 | ??_GvehAxle@@UAEPAXI@Z
    // 0x4CCEE0 | ??1vehAxle@@UAE@XZ
    ~vehAxle() override;

    // 0x4D9A20 | ?ComputeConstants@vehAxle@@QAEXXZ
    void ComputeConstants();

    // 0x4D9CA0 | ?FileIO@vehAxle@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x4D9D20 | ?GetClassName@vehAxle@@UAEPADXZ
    char* GetClassName() override;

    // 0x4D9A50 | ?Init@vehAxle@@QAEXPAVvehCarSim@@PBD1PAVvehWheel@@2@Z
    void Init(class vehCarSim* arg1, char const* arg2, char const* arg3, class vehWheel* arg4, class vehWheel* arg5);

    // 0x4D9B20 | ?Update@vehAxle@@UAEXXZ
    void Update() override;
};

check_size(vehAxle, 0x0);
