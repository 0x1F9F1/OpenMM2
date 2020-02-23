/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    gizmo:ferry

    0x579260 | public: __thiscall gizFerry::gizFerry(void) | ??0gizFerry@@QAE@XZ
    0x5792D0 | public: __thiscall gizFerry::~gizFerry(void) | ??1gizFerry@@QAE@XZ
    0x579350 | public: virtual void __thiscall gizFerry::Reset(void) | ?Reset@gizFerry@@UAEXXZ
    0x5793A0 | public: void __thiscall gizFerry::Init(char *,class dgPath *) | ?Init@gizFerry@@QAEXPADPAVdgPath@@@Z
    0x579460 | public: void __thiscall gizFerry::Update(void) | ?Update@gizFerry@@QAEXXZ
    0x579520 | public: void __thiscall gizFerry::SetSpeed(float) | ?SetSpeed@gizFerry@@QAEXM@Z
    0x579540 | public: void __thiscall gizFerry::Cull(int) | ?Cull@gizFerry@@QAEXH@Z
    0x579550 | public: __thiscall gizFerryMgr::gizFerryMgr(void) | ??0gizFerryMgr@@QAE@XZ
    0x5795C0 | public: virtual __thiscall gizFerryMgr::~gizFerryMgr(void) | ??1gizFerryMgr@@UAE@XZ
    0x579650 | public: virtual void __thiscall gizFerryMgr::Reset(void) | ?Reset@gizFerryMgr@@UAEXXZ
    0x579680 | public: bool __thiscall gizFerryMgr::Init(char *,char *,char *) | ?Init@gizFerryMgr@@QAE_NPAD00@Z
    0x5797D0 | public: virtual void __thiscall gizFerryMgr::Update(void) | ?Update@gizFerryMgr@@UAEXXZ
    0x579820 | public: virtual void __thiscall gizFerryMgr::Cull(void) | ?Cull@gizFerryMgr@@UAEXXZ
    0x579910 | private: void __thiscall gizFerryMgr::ApplyTuning(void) | ?ApplyTuning@gizFerryMgr@@AAEXXZ
    public: void __thiscall gizFerryMgr::AddWidgets(class bkBank *) | ?AddWidgets@gizFerryMgr@@QAEXPAVbkBank@@@Z
    0x579970 | public: virtual void * __thiscall gizFerryMgr::`scalar deleting destructor'(unsigned int) | ??_GgizFerryMgr@@UAEPAXI@Z
    public: virtual void * __thiscall gizFerryMgr::`vector deleting destructor'(unsigned int) | ??_EgizFerryMgr@@UAEPAXI@Z
    0x5799A0 | public: void * __thiscall gizFerry::`vector deleting destructor'(unsigned int) | ??_EgizFerry@@QAEPAXI@Z
    0x579A00 | public: virtual void __thiscall gizFerry::Draw(int) | ?Draw@gizFerry@@UAEXH@Z
    0x579A10 | public: virtual unsigned int __thiscall gizFerry::SizeOf(void) | ?SizeOf@gizFerry@@UAEIXZ
    0x5B6180 | const gizFerry::`vftable' | ??_7gizFerry@@6B@
    0x5B61F8 | const gizFerryMgr::`vftable' | ??_7gizFerryMgr@@6B@
*/

class gizFerryMgr : asNode
{
public:
    // gizFerryMgr::`vftable' @ 0x5B61F8

    // 0x579550 | ??0gizFerryMgr@@QAE@XZ
    inline gizFerryMgr()
    {
        stub<member_func_t<void, gizFerryMgr>>(0x579550, this);
    }

    // 0x579680 | ?Init@gizFerryMgr@@QAE_NPAD00@Z
    inline bool Init(char* arg1, char* arg2, char* arg3)
    {
        return stub<member_func_t<bool, gizFerryMgr, char*, char*, char*>>(0x579680, this, arg1, arg2, arg3);
    }

    // 0x579910 | ?ApplyTuning@gizFerryMgr@@AAEXXZ
    inline void ApplyTuning()
    {
        return stub<member_func_t<void, gizFerryMgr>>(0x579910, this);
    }

    // 0x5795C0 | ??1gizFerryMgr@@UAE@XZ
    inline ~gizFerryMgr() override
    {
        stub<member_func_t<void, gizFerryMgr>>(0x5795C0, this);
    }

    // 0x579820 | ?Cull@gizFerryMgr@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, gizFerryMgr>>(0x579820, this);
    }

    // 0x5797D0 | ?Update@gizFerryMgr@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, gizFerryMgr>>(0x5797D0, this);
    }

    // 0x579650 | ?Reset@gizFerryMgr@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, gizFerryMgr>>(0x579650, this);
    }
};

struct gizFerry : dgUnhitYBangerInstance
{
public:
    // gizFerry::`vftable' @ 0x5B6180

    // 0x579260 | ??0gizFerry@@QAE@XZ
    inline gizFerry()
    {
        stub<member_func_t<void, gizFerry>>(0x579260, this);
    }

    // 0x5792D0 | ??1gizFerry@@QAE@XZ
    inline ~gizFerry()
    {
        stub<member_func_t<void, gizFerry>>(0x5792D0, this);
    }

    // 0x5793A0 | ?Init@gizFerry@@QAEXPADPAVdgPath@@@Z
    inline void Init(char* arg1, class dgPath* arg2)
    {
        return stub<member_func_t<void, gizFerry, char*, class dgPath*>>(0x5793A0, this, arg1, arg2);
    }

    // 0x579460 | ?Update@gizFerry@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, gizFerry>>(0x579460, this);
    }

    // 0x579520 | ?SetSpeed@gizFerry@@QAEXM@Z
    inline void SetSpeed(f32 arg1)
    {
        return stub<member_func_t<void, gizFerry, f32>>(0x579520, this, arg1);
    }

    // 0x579540 | ?Cull@gizFerry@@QAEXH@Z
    inline void Cull(i32 arg1)
    {
        return stub<member_func_t<void, gizFerry, i32>>(0x579540, this, arg1);
    }

    // 0x5799A0 | ??_EgizFerry@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x579350 | ?Reset@gizFerry@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, gizFerry>>(0x579350, this);
    }

    // 0x579A00 | ?Draw@gizFerry@@UAEXH@Z
    inline void Draw(i32 arg1) override
    {
        return stub<member_func_t<void, gizFerry, i32>>(0x579A00, this, arg1);
    }

    // 0x579A10 | ?SizeOf@gizFerry@@UAEIXZ
    inline u32 SizeOf() override
    {
        return stub<member_func_t<u32, gizFerry>>(0x579A10, this);
    }
};
