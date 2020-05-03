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
    camera:basecs

    0x521D60 | public: __thiscall camBaseCS::camBaseCS(void) | ??0camBaseCS@@QAE@XZ
    0x521DF0 | public: virtual __thiscall camBaseCS::~camBaseCS(void) | ??1camBaseCS@@UAE@XZ
    0x521E00 | public: virtual char const * __thiscall camBaseCS::GetDirName(void) | ?GetDirName@camBaseCS@@UAEPBDXZ
    0x521E10 | public: int __thiscall camBaseCS::IsViewCSInTransition(void) | ?IsViewCSInTransition@camBaseCS@@QAEHXZ
    0x521E30 | public: void __thiscall camBaseCS::UpdateView(void) | ?UpdateView@camBaseCS@@QAEXXZ
    public: virtual void __thiscall camBaseCS::AddWidgets(class bkBank &) | ?AddWidgets@camBaseCS@@UAEXAAVbkBank@@@Z
    0x521E60 | public: virtual void __thiscall camBaseCS::ForceMatrixDelta(class Vector3 const &) | ?ForceMatrixDelta@camBaseCS@@UAEXABVVector3@@@Z
    0x521EA0 | public: virtual void __thiscall camBaseCS::FileIO(class datParser &) | ?FileIO@camBaseCS@@UAEXAAVdatParser@@@Z
    0x521F30 | public: virtual void __thiscall camBaseCS::AfterLoad(void) | ?AfterLoad@camBaseCS@@UAEXXZ
    0x521F40 | public: virtual void * __thiscall camBaseCS::`scalar deleting destructor'(unsigned int) | ??_GcamBaseCS@@UAEPAXI@Z
    public: virtual void * __thiscall camBaseCS::`vector deleting destructor'(unsigned int) | ??_EcamBaseCS@@UAEPAXI@Z
    0x5B5130 | const camBaseCS::`vftable' | ??_7camBaseCS@@6B@
    0x5D4420 | public: static float camBaseCS::sm_cameraFar | ?sm_cameraFar@camBaseCS@@2MA
*/

class camBaseCS : public asNode
{
    // const camBaseCS::`vftable' @ 0x5B5130

public:
    // 0x521D60 | ??0camBaseCS@@QAE@XZ
    camBaseCS();

    // 0x521F40 | ??_GcamBaseCS@@UAEPAXI@Z
    // 0x521DF0 | ??1camBaseCS@@UAE@XZ
    ~camBaseCS() override;

    // 0x521F30 | ?AfterLoad@camBaseCS@@UAEXXZ
    void AfterLoad() override;

    // 0x521EA0 | ?FileIO@camBaseCS@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x521E00 | ?GetDirName@camBaseCS@@UAEPBDXZ
    char const* GetDirName() override;

    // 0x521E10 | ?IsViewCSInTransition@camBaseCS@@QAEHXZ
    i32 IsViewCSInTransition();

    // 0x521E30 | ?UpdateView@camBaseCS@@QAEXXZ
    void UpdateView();

    // 0x521520 | ?MakeActive@camBaseCS@@UAEXXZ
    virtual void MakeActive();

    // 0x520410 | ?UpdateInput@camBaseCS@@UAEXXZ
    virtual void UpdateInput();

    // 0x521E60 | ?ForceMatrixDelta@camBaseCS@@UAEXABVVector3@@@Z
    virtual void ForceMatrixDelta(class Vector3 const& arg1);

    // 0x51D750 | ?SetST@camBaseCS@@UAEXPAM@Z
    virtual void SetST(f32* arg1);

    // 0x5D4420 | ?sm_cameraFar@camBaseCS@@2MA
    static inline extern_var(0x5D4420, f32, sm_cameraFar);
};

check_size(camBaseCS, 0x0);
