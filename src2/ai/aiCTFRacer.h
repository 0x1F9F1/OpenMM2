/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

class aiCTFRacer : Base
{
public:
    // 0x5543C0 | ??0aiCTFRacer@@QAE@XZ
    inline aiCTFRacer()
    {
        stub<member_func_t<void, aiCTFRacer>>(0x5543C0, this);
    }

    // 0x554470 | ?Init@aiCTFRacer@@QAEXHPAD@Z
    inline void Init(int32_t arg1, char* arg2)
    {
        return stub<member_func_t<void, aiCTFRacer, int32_t, char*>>(0x554470, this, arg1, arg2);
    }

    // 0x554510 | ?Reset@aiCTFRacer@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x554510, this);
    }

    // 0x554550 | ?DropFlag@aiCTFRacer@@QAEXHPBM@Z
    inline void DropFlag(int32_t arg1, float const* arg2)
    {
        return stub<member_func_t<void, aiCTFRacer, int32_t, float const*>>(0x554550, this, arg1, arg2);
    }

    // 0x554580 | ?Update@aiCTFRacer@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x554580, this);
    }

    // 0x554620 | ?ReleaseFlag@aiCTFRacer@@QAEXXZ
    inline void ReleaseFlag()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x554620, this);
    }

    // 0x554630 | ?PickupFlag@aiCTFRacer@@QAEXXZ
    inline void PickupFlag()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x554630, this);
    }

    // 0x554640 | ?PreAquireFlag@aiCTFRacer@@AAEXXZ
    inline void PreAquireFlag()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x554640, this);
    }

    // 0x5547E0 | ?AquireFlag@aiCTFRacer@@AAEXXZ
    inline void AquireFlag()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x5547E0, this);
    }

    // 0x554990 | ?PreDeliverFlag@aiCTFRacer@@AAEXXZ
    inline void PreDeliverFlag()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x554990, this);
    }

    // 0x554B00 | ?DeliverFlag@aiCTFRacer@@AAEXXZ
    inline void DeliverFlag()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x554B00, this);
    }

    // 0x554C00 | ?DrawRouteThroughTraffic@aiCTFRacer@@QAEXXZ
    inline void DrawRouteThroughTraffic()
    {
        return stub<member_func_t<void, aiCTFRacer>>(0x554C00, this);
    }
};
