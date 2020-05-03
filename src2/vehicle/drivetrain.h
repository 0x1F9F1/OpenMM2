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
    vehicle:drivetrain

    0x4D9D60 | public: __thiscall vehDrivetrain::vehDrivetrain(void) | ??0vehDrivetrain@@QAE@XZ
    0x4D9DD0 | public: void __thiscall vehDrivetrain::Init(class vehCarSim *) | ?Init@vehDrivetrain@@QAEXPAVvehCarSim@@@Z
    0x4D9DE0 | public: void __thiscall vehDrivetrain::CopyVars(class vehDrivetrain *) | ?CopyVars@vehDrivetrain@@QAEXPAV1@@Z
    0x4D9E00 | public: virtual void __thiscall vehDrivetrain::Reset(void) | ?Reset@vehDrivetrain@@UAEXXZ
    0x4D9E20 | public: void __thiscall vehDrivetrain::Attach(void) | ?Attach@vehDrivetrain@@QAEXXZ
    0x4D9E40 | public: void __thiscall vehDrivetrain::Detach(void) | ?Detach@vehDrivetrain@@QAEXXZ
    0x4D9E50 | public: int __thiscall vehDrivetrain::AddWheel(class vehWheel *) | ?AddWheel@vehDrivetrain@@QAEHPAVvehWheel@@@Z
    0x4D9E90 | public: virtual void __thiscall vehDrivetrain::Update(void) | ?Update@vehDrivetrain@@UAEXXZ
    public: virtual void __thiscall vehDrivetrain::AddWidgets(class bkBank &) | ?AddWidgets@vehDrivetrain@@UAEXAAVbkBank@@@Z
    0x4DA570 | public: virtual void __thiscall vehDrivetrain::FileIO(class datParser &) | ?FileIO@vehDrivetrain@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehDrivetrain::`vector deleting destructor'(unsigned int) | ??_EvehDrivetrain@@UAEPAXI@Z
    0x4DA5D0 | public: virtual void * __thiscall vehDrivetrain::`scalar deleting destructor'(unsigned int) | ??_GvehDrivetrain@@UAEPAXI@Z
    0x4DA600 | public: virtual char * __thiscall vehDrivetrain::GetClassName(void) | ?GetClassName@vehDrivetrain@@UAEPADXZ
    0x5B30D0 | const vehDrivetrain::`vftable' | ??_7vehDrivetrain@@6B@
    0x5CFB1C | public: static float vehDrivetrain::diffRatioMax | ?diffRatioMax@vehDrivetrain@@2MA
    0x5CFB20 | public: static float vehDrivetrain::diffRatioMaxHighSpeed | ?diffRatioMaxHighSpeed@vehDrivetrain@@2MA
    0x5CFB24 | public: static float vehDrivetrain::diffRatioHighSpeedLevel | ?diffRatioHighSpeedLevel@vehDrivetrain@@2MA
*/

class vehDrivetrain : public asNode
{
    // const vehDrivetrain::`vftable' @ 0x5B30D0

public:
    // 0x4D9D60 | ??0vehDrivetrain@@QAE@XZ
    vehDrivetrain();

    // 0x4DA5D0 | ??_GvehDrivetrain@@UAEPAXI@Z
    // 0x4CCEC0 | ??1vehDrivetrain@@UAE@XZ
    ~vehDrivetrain() override;

    // 0x4D9E50 | ?AddWheel@vehDrivetrain@@QAEHPAVvehWheel@@@Z
    i32 AddWheel(class vehWheel* arg1);

    // 0x4D9E20 | ?Attach@vehDrivetrain@@QAEXXZ
    void Attach();

    // 0x4D9DE0 | ?CopyVars@vehDrivetrain@@QAEXPAV1@@Z
    void CopyVars(class vehDrivetrain* arg1);

    // 0x4D9E40 | ?Detach@vehDrivetrain@@QAEXXZ
    void Detach();

    // 0x4DA570 | ?FileIO@vehDrivetrain@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x4DA600 | ?GetClassName@vehDrivetrain@@UAEPADXZ
    char* GetClassName() override;

    // 0x4D9DD0 | ?Init@vehDrivetrain@@QAEXPAVvehCarSim@@@Z
    void Init(class vehCarSim* arg1);

    // 0x4D9E00 | ?Reset@vehDrivetrain@@UAEXXZ
    void Reset() override;

    // 0x4D9E90 | ?Update@vehDrivetrain@@UAEXXZ
    void Update() override;

    // 0x5CFB24 | ?diffRatioHighSpeedLevel@vehDrivetrain@@2MA
    static inline extern_var(0x5CFB24, f32, diffRatioHighSpeedLevel);

    // 0x5CFB1C | ?diffRatioMax@vehDrivetrain@@2MA
    static inline extern_var(0x5CFB1C, f32, diffRatioMax);

    // 0x5CFB20 | ?diffRatioMaxHighSpeed@vehDrivetrain@@2MA
    static inline extern_var(0x5CFB20, f32, diffRatioMaxHighSpeed);
};

check_size(vehDrivetrain, 0x0);
