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
    city:propulate

    0x45D200 | public: __thiscall cityPropulator::cityPropulator(class lvlSDL const &) | ??0cityPropulator@@QAE@ABVlvlSDL@@@Z
    0x45D220 | public: bool __thiscall cityPropulator::Load(char const *,char const *,char const *) | ?Load@cityPropulator@@QAE_NPBD00@Z
    0x45D270 | public: __thiscall cityPropulator::~cityPropulator(void) | ??1cityPropulator@@QAE@XZ
    0x45D290 | public: int __thiscall cityPropulator::LookupRule(char const *) | ?LookupRule@cityPropulator@@QAEHPBD@Z
    0x45D2C0 | public: void __thiscall cityPropulator::Propulate(int,int,int,void (__cdecl*)(int,char const *,class Matrix34 const &)) | ?Propulate@cityPropulator@@QAEXHHHP6AXHPBDABVMatrix34@@@Z@Z
*/

struct cityPropulator
{
public:
    // 0x45D200 | ??0cityPropulator@@QAE@ABVlvlSDL@@@Z
    inline cityPropulator(class lvlSDL const& arg1)
    {
        stub<member_func_t<void, cityPropulator, class lvlSDL const&>>(0x45D200, this, arg1);
    }

    // 0x45D220 | ?Load@cityPropulator@@QAE_NPBD00@Z
    inline bool Load(char const* arg1, char const* arg2, char const* arg3)
    {
        return stub<member_func_t<bool, cityPropulator, char const*, char const*, char const*>>(
            0x45D220, this, arg1, arg2, arg3);
    }

    // 0x45D270 | ??1cityPropulator@@QAE@XZ
    inline ~cityPropulator()
    {
        stub<member_func_t<void, cityPropulator>>(0x45D270, this);
    }

    // 0x45D290 | ?LookupRule@cityPropulator@@QAEHPBD@Z
    inline int32_t LookupRule(char const* arg1)
    {
        return stub<member_func_t<int32_t, cityPropulator, char const*>>(0x45D290, this, arg1);
    }

    // 0x45D2C0 | ?Propulate@cityPropulator@@QAEXHHHP6AXHPBDABVMatrix34@@@Z@Z
    inline void Propulate(
        int32_t arg1, int32_t arg2, int32_t arg3, void(__cdecl* arg4)(int32_t, char const*, class Matrix34 const&))
    {
        return stub<member_func_t<void, cityPropulator, int32_t, int32_t, int32_t,
            void(__cdecl*)(int32_t, char const*, class Matrix34 const&)>>(0x45D2C0, this, arg1, arg2, arg3, arg4);
    }
};
