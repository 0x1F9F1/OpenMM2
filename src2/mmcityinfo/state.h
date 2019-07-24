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
    mmcityinfo:state

    0x523310 | public: void __thiscall mmStatePack::SetDefaults(char *,char *) | ?SetDefaults@mmStatePack@@QAEXPAD0@Z
    0x523590 | public: bool __thiscall mmStatePack::ParseStateArgs(void) | ?ParseStateArgs@mmStatePack@@QAE_NXZ
    0x5235A0 | public: __thiscall NetStartArray::NetStartArray(void) | ??0NetStartArray@@QAE@XZ
    0x5235B0 | public: __thiscall NetStartArray::~NetStartArray(void) | ??1NetStartArray@@QAE@XZ
    0x5235C0 | public: void __thiscall NetStartArray::Clear(void) | ?Clear@NetStartArray@@QAEXXZ
    0x5235D0 | public: int __thiscall NetStartArray::GetIndex(unsigned long) | ?GetIndex@NetStartArray@@QAEHK@Z
    0x5235F0 | public: void __thiscall NetStartArray::ClearIndex(unsigned long) | ?ClearIndex@NetStartArray@@QAEXK@Z
    0x523610 | public: int __thiscall NetStartArray::AssignOpenIndex(unsigned long) | ?AssignOpenIndex@NetStartArray@@QAEHK@Z
    0x523650 | public: void __thiscall NetStartArray::Init(unsigned long *) | ?Init@NetStartArray@@QAEXPAK@Z
    0x5237B0 | public: __thiscall mmStatePack::~mmStatePack(void) | ??1mmStatePack@@QAE@XZ
    0x523800 | public: __thiscall mmStatePack::mmStatePack(void) | ??0mmStatePack@@QAE@XZ
    0x523850 | public: virtual __thiscall mmPlayerData::~mmPlayerData(void) | ??1mmPlayerData@@UAE@XZ
    0x5238B0 | public: virtual void * __thiscall mmPlayerData::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerData@@UAEPAXI@Z
    public: virtual void * __thiscall mmPlayerData::`vector deleting destructor'(unsigned int) | ??_EmmPlayerData@@UAEPAXI@Z
    0x5B51F8 | const mmPlayerData::`vftable' | ??_7mmPlayerData@@6B@
    class mmStatePack MMSTATE | ?MMSTATE@@3VmmStatePack@@A
    0x6B19F8 | class mmPlayerData MMCURRPLAYER | ?MMCURRPLAYER@@3VmmPlayerData@@A
*/

// 0x6B19F8 | ?MMCURRPLAYER@@3VmmPlayerData@@A
inline extern_var(0x6B19F8, class mmPlayerData, MMCURRPLAYER);

struct mmStatePack : dgStatePack
{
public:
    // 0x523310 | ?SetDefaults@mmStatePack@@QAEXPAD0@Z
    inline void SetDefaults(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, mmStatePack, char*, char*>>(0x523310, this, arg1, arg2);
    }

    // 0x523590 | ?ParseStateArgs@mmStatePack@@QAE_NXZ
    inline bool ParseStateArgs()
    {
        return stub<member_func_t<bool, mmStatePack>>(0x523590, this);
    }

    // 0x5237B0 | ??1mmStatePack@@QAE@XZ
    inline ~mmStatePack()
    {
        stub<member_func_t<void, mmStatePack>>(0x5237B0, this);
    }

    // 0x523800 | ??0mmStatePack@@QAE@XZ
    inline mmStatePack()
    {
        stub<member_func_t<void, mmStatePack>>(0x523800, this);
    }
};

struct NetStartArray
{
public:
    // 0x5235A0 | ??0NetStartArray@@QAE@XZ
    inline NetStartArray()
    {
        stub<member_func_t<void, NetStartArray>>(0x5235A0, this);
    }

    // 0x5235B0 | ??1NetStartArray@@QAE@XZ
    inline ~NetStartArray()
    {
        stub<member_func_t<void, NetStartArray>>(0x5235B0, this);
    }

    // 0x5235C0 | ?Clear@NetStartArray@@QAEXXZ
    inline void Clear()
    {
        return stub<member_func_t<void, NetStartArray>>(0x5235C0, this);
    }

    // 0x5235D0 | ?GetIndex@NetStartArray@@QAEHK@Z
    inline int32_t GetIndex(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, NetStartArray, uint32_t>>(0x5235D0, this, arg1);
    }

    // 0x5235F0 | ?ClearIndex@NetStartArray@@QAEXK@Z
    inline void ClearIndex(uint32_t arg1)
    {
        return stub<member_func_t<void, NetStartArray, uint32_t>>(0x5235F0, this, arg1);
    }

    // 0x523610 | ?AssignOpenIndex@NetStartArray@@QAEHK@Z
    inline int32_t AssignOpenIndex(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, NetStartArray, uint32_t>>(0x523610, this, arg1);
    }

    // 0x523650 | ?Init@NetStartArray@@QAEXPAK@Z
    inline void Init(uint32_t* arg1)
    {
        return stub<member_func_t<void, NetStartArray, uint32_t*>>(0x523650, this, arg1);
    }
};
