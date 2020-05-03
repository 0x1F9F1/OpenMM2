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

#include "carcs.h"

/*
    camera:polarcs

    0x520FB0 | public: __thiscall camPolarCS::camPolarCS(void) | ??0camPolarCS@@QAE@XZ
    0x521010 | public: virtual void __thiscall camPolarCS::Reset(void) | ?Reset@camPolarCS@@UAEXXZ
    0x521020 | public: virtual void __thiscall camPolarCS::MakeActive(void) | ?MakeActive@camPolarCS@@UAEXXZ
    0x521030 | public: virtual void __thiscall camPolarCS::Update(void) | ?Update@camPolarCS@@UAEXXZ
    public: virtual void __thiscall camPolarCS::AddWidgets(class bkBank &) | ?AddWidgets@camPolarCS@@UAEXAAVbkBank@@@Z
    0x521380 | public: virtual void __thiscall camPolarCS::FileIO(class datParser &) | ?FileIO@camPolarCS@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall camPolarCS::`vector deleting destructor'(unsigned int) | ??_EcamPolarCS@@UAEPAXI@Z
    0x521430 | public: virtual void * __thiscall camPolarCS::`scalar deleting destructor'(unsigned int) | ??_GcamPolarCS@@UAEPAXI@Z
    0x521460 | public: virtual char * __thiscall camPolarCS::GetClassName(void) | ?GetClassName@camPolarCS@@UAEPADXZ
    0x5B5060 | const camPolarCS::`vftable' | ??_7camPolarCS@@6B@
*/

class camPolarCS : public camCarCS
{
    // const camPolarCS::`vftable' @ 0x5B5060

public:
    // 0x520FB0 | ??0camPolarCS@@QAE@XZ
    camPolarCS();

    // 0x521430 | ??_GcamPolarCS@@UAEPAXI@Z
    // 0x406800 | ??1camPolarCS@@UAE@XZ
    ~camPolarCS() override;

    // 0x521380 | ?FileIO@camPolarCS@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x521460 | ?GetClassName@camPolarCS@@UAEPADXZ
    char* GetClassName() override;

    // 0x521020 | ?MakeActive@camPolarCS@@UAEXXZ
    void MakeActive() override;

    // 0x521010 | ?Reset@camPolarCS@@UAEXXZ
    void Reset() override;

    // 0x521030 | ?Update@camPolarCS@@UAEXXZ
    void Update() override;
};

check_size(camPolarCS, 0x0);
