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

#include "data/base.h"

/*
    ai:aiCTFRacer

    0x5543C0 | public: __thiscall aiCTFRacer::aiCTFRacer(void) | ??0aiCTFRacer@@QAE@XZ
    0x554410 | public: virtual __thiscall aiCTFRacer::~aiCTFRacer(void) | ??1aiCTFRacer@@UAE@XZ
    0x554470 | public: void __thiscall aiCTFRacer::Init(int,char *) | ?Init@aiCTFRacer@@QAEXHPAD@Z
    0x554510 | public: void __thiscall aiCTFRacer::Reset(void) | ?Reset@aiCTFRacer@@QAEXXZ
    0x554550 | public: void __thiscall aiCTFRacer::DropFlag(int,float const *) | ?DropFlag@aiCTFRacer@@QAEXHPBM@Z
    0x554580 | public: void __thiscall aiCTFRacer::Update(void) | ?Update@aiCTFRacer@@QAEXXZ
    0x554620 | public: void __thiscall aiCTFRacer::ReleaseFlag(void) | ?ReleaseFlag@aiCTFRacer@@QAEXXZ
    0x554630 | public: void __thiscall aiCTFRacer::PickupFlag(void) | ?PickupFlag@aiCTFRacer@@QAEXXZ
    0x554640 | private: void __thiscall aiCTFRacer::PreAquireFlag(void) | ?PreAquireFlag@aiCTFRacer@@AAEXXZ
    0x5547E0 | private: void __thiscall aiCTFRacer::AquireFlag(void) | ?AquireFlag@aiCTFRacer@@AAEXXZ
    0x554990 | private: void __thiscall aiCTFRacer::PreDeliverFlag(void) | ?PreDeliverFlag@aiCTFRacer@@AAEXXZ
    0x554B00 | private: void __thiscall aiCTFRacer::DeliverFlag(void) | ?DeliverFlag@aiCTFRacer@@AAEXXZ
    0x554C00 | public: void __thiscall aiCTFRacer::DrawRouteThroughTraffic(void) | ?DrawRouteThroughTraffic@aiCTFRacer@@QAEXXZ
    public: void __thiscall aiCTFRacer::AddWidgets(class bkBank &) | ?AddWidgets@aiCTFRacer@@QAEXAAVbkBank@@@Z
    0x554C10 | public: virtual void * __thiscall aiCTFRacer::`scalar deleting destructor'(unsigned int) | ??_GaiCTFRacer@@UAEPAXI@Z
    const aiCTFRacer::`vftable' | ??_7aiCTFRacer@@6B@
*/

class aiCTFRacer : public Base
{
public:
    // 0x5543C0 | ??0aiCTFRacer@@QAE@XZ
    aiCTFRacer();

    // 0x554410 | ??1aiCTFRacer@@UAE@XZ
    // 0x53BFA0 | ??_EaiCTFRacer@@UAEPAXI@Z
    // 0x554C10 | ??_GaiCTFRacer@@UAEPAXI@Z
    ~aiCTFRacer();

    // 0x554C00 | ?DrawRouteThroughTraffic@aiCTFRacer@@QAEXXZ
    void DrawRouteThroughTraffic();

    // 0x554550 | ?DropFlag@aiCTFRacer@@QAEXHPBM@Z
    void DropFlag(i32 arg1, f32 const* arg2);

    // 0x554470 | ?Init@aiCTFRacer@@QAEXHPAD@Z
    void Init(i32 arg1, char* arg2);

    // 0x554630 | ?PickupFlag@aiCTFRacer@@QAEXXZ
    void PickupFlag();

    // 0x554620 | ?ReleaseFlag@aiCTFRacer@@QAEXXZ
    void ReleaseFlag();

    // 0x554510 | ?Reset@aiCTFRacer@@QAEXXZ
    void Reset();

    // 0x554580 | ?Update@aiCTFRacer@@QAEXXZ
    void Update();

private:
    // 0x5547E0 | ?AquireFlag@aiCTFRacer@@AAEXXZ
    void AquireFlag();

    // 0x554B00 | ?DeliverFlag@aiCTFRacer@@AAEXXZ
    void DeliverFlag();

    // 0x554640 | ?PreAquireFlag@aiCTFRacer@@AAEXXZ
    void PreAquireFlag();

    // 0x554990 | ?PreDeliverFlag@aiCTFRacer@@AAEXXZ
    void PreDeliverFlag();
};

check_size(aiCTFRacer, 0x9878);
