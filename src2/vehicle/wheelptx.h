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
    vehicle:wheelptx

    0x4D1C00 | public: __thiscall vehWheelPtx::vehWheelPtx(void) | ??0vehWheelPtx@@QAE@XZ
    0x4D1C60 | public: virtual __thiscall vehWheelPtx::~vehWheelPtx(void) | ??1vehWheelPtx@@UAE@XZ
    0x4D1CC0 | public: static void __cdecl vehWheelPtx::ConstructClass(char const *) | ?ConstructClass@vehWheelPtx@@SAXPBD@Z
    0x4D1D90 | public: static void __cdecl vehWheelPtx::DestroyClass(void) | ?DestroyClass@vehWheelPtx@@SAXXZ
    0x4D1DC0 | public: virtual void __thiscall vehWheelPtx::Reset(void) | ?Reset@vehWheelPtx@@UAEXXZ
    0x4D1DD0 | public: void __thiscall vehWheelPtx::Init(class vehCarSim *) | ?Init@vehWheelPtx@@QAEXPAVvehCarSim@@@Z
    0x4D1E40 | public: virtual void __thiscall vehWheelPtx::Update(void) | ?Update@vehWheelPtx@@UAEXXZ
    0x4D1E90 | public: void __thiscall vehWheelPtx::UpdateWheel(class vehWheel *) | ?UpdateWheel@vehWheelPtx@@QAEXPAVvehWheel@@@Z
    0x4D1EF0 | public: void __thiscall vehWheelPtx::Blast(class vehWheel *,float,int,int) | ?Blast@vehWheelPtx@@QAEXPAVvehWheel@@MHH@Z
    public: virtual void __thiscall vehWheelPtx::AddWidgets(class bkBank &) | ?AddWidgets@vehWheelPtx@@UAEXAAVbkBank@@@Z
    public: static void __cdecl vehWheelPtx::AddRuleWidgets(class bkBank &) | ?AddRuleWidgets@vehWheelPtx@@SAXAAVbkBank@@@Z
    public: virtual void * __thiscall vehWheelPtx::`vector deleting destructor'(unsigned int) | ??_EvehWheelPtx@@UAEPAXI@Z
    0x4D2160 | public: virtual void * __thiscall vehWheelPtx::`scalar deleting destructor'(unsigned int) | ??_GvehWheelPtx@@UAEPAXI@Z
    0x5B2D98 | const vehWheelPtx::`vftable' | ??_7vehWheelPtx@@6B@
    public: static char * vehWheelPtx::TexName | ?TexName@vehWheelPtx@@2PADA
    public: static char * * vehWheelPtx::PtxName | ?PtxName@vehWheelPtx@@2PAPADA
    0x6AFFAC | public: static class asBirthRule * * vehWheelPtx::Rule | ?Rule@vehWheelPtx@@2PAPAVasBirthRule@@A
*/

struct vehWheelPtx : asNode
{
public:
    // vehWheelPtx::`vftable' @ 0x5B2D98

    // 0x4D1C00 | ??0vehWheelPtx@@QAE@XZ
    inline vehWheelPtx()
    {
        stub<member_func_t<void, vehWheelPtx>>(0x4D1C00, this);
    }

    // 0x4D1CC0 | ?ConstructClass@vehWheelPtx@@SAXPBD@Z
    static inline void ConstructClass(char const* arg1)
    {
        return stub<cdecl_t<void, char const*>>(0x4D1CC0, arg1);
    }

    // 0x4D1D90 | ?DestroyClass@vehWheelPtx@@SAXXZ
    static inline void DestroyClass()
    {
        return stub<cdecl_t<void>>(0x4D1D90);
    }

    // 0x4D1DD0 | ?Init@vehWheelPtx@@QAEXPAVvehCarSim@@@Z
    inline void Init(class vehCarSim* arg1)
    {
        return stub<member_func_t<void, vehWheelPtx, class vehCarSim*>>(0x4D1DD0, this, arg1);
    }

    // 0x4D1E90 | ?UpdateWheel@vehWheelPtx@@QAEXPAVvehWheel@@@Z
    inline void UpdateWheel(class vehWheel* arg1)
    {
        return stub<member_func_t<void, vehWheelPtx, class vehWheel*>>(0x4D1E90, this, arg1);
    }

    // 0x4D1EF0 | ?Blast@vehWheelPtx@@QAEXPAVvehWheel@@MHH@Z
    inline void Blast(class vehWheel* arg1, f32 arg2, i32 arg3, i32 arg4)
    {
        return stub<member_func_t<void, vehWheelPtx, class vehWheel*, f32, i32, i32>>(
            0x4D1EF0, this, arg1, arg2, arg3, arg4);
    }

    // 0x6AFFAC | ?Rule@vehWheelPtx@@2PAPAVasBirthRule@@A
    inline extern_var(0x6AFFAC, class asBirthRule**, Rule);

    // 0x4D1C60 | ??1vehWheelPtx@@UAE@XZ
    inline ~vehWheelPtx() override
    {
        stub<member_func_t<void, vehWheelPtx>>(0x4D1C60, this);
    }

    // 0x4D1E40 | ?Update@vehWheelPtx@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehWheelPtx>>(0x4D1E40, this);
    }

    // 0x4D1DC0 | ?Reset@vehWheelPtx@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, vehWheelPtx>>(0x4D1DC0, this);
    }
};
