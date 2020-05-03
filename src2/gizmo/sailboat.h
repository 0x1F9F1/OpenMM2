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

#include "gizmoinst.h"
#include "node/node.h"

/*
    gizmo:sailboat

    0x578260 | public: __thiscall gizSailboat::gizSailboat(void) | ??0gizSailboat@@QAE@XZ
    0x5782B0 | public: __thiscall gizSailboat::~gizSailboat(void) | ??1gizSailboat@@QAE@XZ
    0x578320 | public: virtual void __thiscall gizSailboat::Reset(void) | ?Reset@gizSailboat@@UAEXXZ
    0x578330 | public: void __thiscall gizSailboat::Init(char *,class dgPath *) | ?Init@gizSailboat@@QAEXPADPAVdgPath@@@Z
    0x578410 | public: void __thiscall gizSailboat::Update(void) | ?Update@gizSailboat@@QAEXXZ
    0x578490 | public: void __thiscall gizSailboat::SetSpeed(float) | ?SetSpeed@gizSailboat@@QAEXM@Z
    0x5784B0 | public: __thiscall gizSailboatMgr::gizSailboatMgr(void) | ??0gizSailboatMgr@@QAE@XZ
    0x578520 | public: virtual __thiscall gizSailboatMgr::~gizSailboatMgr(void) | ??1gizSailboatMgr@@UAE@XZ
    0x5785C0 | public: virtual void __thiscall gizSailboatMgr::Reset(void) | ?Reset@gizSailboatMgr@@UAEXXZ
    0x5785F0 | public: bool __thiscall gizSailboatMgr::Init(char *,char *,char *) | ?Init@gizSailboatMgr@@QAE_NPAD00@Z
    0x578770 | public: virtual void __thiscall gizSailboatMgr::Update(void) | ?Update@gizSailboatMgr@@UAEXXZ
    0x5787A0 | private: void __thiscall gizSailboatMgr::ApplyTuning(void) | ?ApplyTuning@gizSailboatMgr@@AAEXXZ
    public: void __thiscall gizSailboatMgr::AddWidgets(class bkBank *) | ?AddWidgets@gizSailboatMgr@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall gizSailboatMgr::`vector deleting destructor'(unsigned int) | ??_EgizSailboatMgr@@UAEPAXI@Z
    0x578800 | public: virtual void * __thiscall gizSailboatMgr::`scalar deleting destructor'(unsigned int) | ??_GgizSailboatMgr@@UAEPAXI@Z
    0x578830 | public: void * __thiscall gizSailboat::`vector deleting destructor'(unsigned int) | ??_EgizSailboat@@QAEPAXI@Z
    0x578890 | public: virtual unsigned int __thiscall gizSailboat::SizeOf(void) | ?SizeOf@gizSailboat@@UAEIXZ
    0x5B6038 | const gizSailboat::`vftable' | ??_7gizSailboat@@6B@
    0x5B60A0 | const gizSailboatMgr::`vftable' | ??_7gizSailboatMgr@@6B@
    0x6B46BC | class gizSailboatMgr * SAILBOAT | ?SAILBOAT@@3PAVgizSailboatMgr@@A
*/

class gizSailboat : public gizInstance
{
    // const gizSailboat::`vftable' @ 0x5B6038

public:
    // 0x578260 | ??0gizSailboat@@QAE@XZ
    gizSailboat();

    // 0x5782B0 | ??1gizSailboat@@QAE@XZ
    // 0x578830 | ??_EgizSailboat@@QAEPAXI@Z
    ~gizSailboat();

    // 0x578330 | ?Init@gizSailboat@@QAEXPADPAVdgPath@@@Z
    void Init(char* arg1, class dgPath* arg2);

    // 0x578320 | ?Reset@gizSailboat@@UAEXXZ
    void Reset() override;

    // 0x578490 | ?SetSpeed@gizSailboat@@QAEXM@Z
    void SetSpeed(f32 arg1);

    // 0x578890 | ?SizeOf@gizSailboat@@UAEIXZ
    u32 SizeOf() override;

    // 0x578410 | ?Update@gizSailboat@@QAEXXZ
    void Update();
};

check_size(gizSailboat, 0x50);

class gizSailboatMgr : public asNode
{
    // const gizSailboatMgr::`vftable' @ 0x5B60A0

public:
    // 0x5784B0 | ??0gizSailboatMgr@@QAE@XZ
    gizSailboatMgr();

    // 0x578800 | ??_GgizSailboatMgr@@UAEPAXI@Z
    // 0x578520 | ??1gizSailboatMgr@@UAE@XZ
    ~gizSailboatMgr() override;

    // 0x5785F0 | ?Init@gizSailboatMgr@@QAE_NPAD00@Z
    bool Init(char* arg1, char* arg2, char* arg3);

    // 0x5785C0 | ?Reset@gizSailboatMgr@@UAEXXZ
    void Reset() override;

    // 0x578770 | ?Update@gizSailboatMgr@@UAEXXZ
    void Update() override;

private:
    // 0x5787A0 | ?ApplyTuning@gizSailboatMgr@@AAEXXZ
    void ApplyTuning();
};

check_size(gizSailboatMgr, 0x2C);

// 0x6B46BC | ?SAILBOAT@@3PAVgizSailboatMgr@@A
inline extern_var(0x6B46BC, class gizSailboatMgr*, SAILBOAT);
