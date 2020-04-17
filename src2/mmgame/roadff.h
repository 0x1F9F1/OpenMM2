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
    mmgame:roadff

    0x42FD70 | public: __thiscall mmCarRoadFF::mmCarRoadFF(void) | ??0mmCarRoadFF@@QAE@XZ
    0x42FDB0 | public: virtual __thiscall mmCarRoadFF::~mmCarRoadFF(void) | ??1mmCarRoadFF@@UAE@XZ
    0x42FE10 | public: void __thiscall mmCarRoadFF::AssignProperties(float,int) | ?AssignProperties@mmCarRoadFF@@QAEXMH@Z
    0x42FE20 | public: void __thiscall mmCarRoadFF::SetFGVals(float,float,float) | ?SetFGVals@mmCarRoadFF@@QAEXMMM@Z
    0x42FF10 | public: void __thiscall mmCarRoadFF::Start(void) | ?Start@mmCarRoadFF@@QAEXXZ
    0x42FF30 | public: void __thiscall mmCarRoadFF::Stop(void) | ?Stop@mmCarRoadFF@@QAEXXZ
    0x42FF40 | public: virtual void __thiscall mmCarRoadFF::Reset(void) | ?Reset@mmCarRoadFF@@UAEXXZ
    0x42FF70 | public: int __thiscall mmCarRoadFF::IsPlaying(void) | ?IsPlaying@mmCarRoadFF@@QAEHXZ
    0x42FF80 | public: virtual void __thiscall mmCarRoadFF::Update(void) | ?Update@mmCarRoadFF@@UAEXXZ
    0x42FFD0 | public: void __thiscall mmCarRoadFF::UpdateVals(void) | ?UpdateVals@mmCarRoadFF@@QAEXXZ
    public: virtual void * __thiscall mmCarRoadFF::`vector deleting destructor'(unsigned int) | ??_EmmCarRoadFF@@UAEPAXI@Z
    0x430020 | public: virtual void * __thiscall mmCarRoadFF::`scalar deleting destructor'(unsigned int) | ??_GmmCarRoadFF@@UAEPAXI@Z
    0x5B0D38 | const mmCarRoadFF::`vftable' | ??_7mmCarRoadFF@@6B@
*/

struct mmCarRoadFF : asNode
{
public:
    // mmCarRoadFF::`vftable' @ 0x5B0D38

    // 0x42FD70 | ??0mmCarRoadFF@@QAE@XZ
    mmCarRoadFF()
    {
        stub<member_func_t<void, mmCarRoadFF>>(0x42FD70, this);
    }

    // 0x42FE10 | ?AssignProperties@mmCarRoadFF@@QAEXMH@Z
    void AssignProperties(f32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmCarRoadFF, f32, i32>>(0x42FE10, this, arg1, arg2);
    }

    // 0x42FE20 | ?SetFGVals@mmCarRoadFF@@QAEXMMM@Z
    void SetFGVals(f32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, mmCarRoadFF, f32, f32, f32>>(0x42FE20, this, arg1, arg2, arg3);
    }

    // 0x42FF10 | ?Start@mmCarRoadFF@@QAEXXZ
    void Start()
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x42FF10, this);
    }

    // 0x42FF30 | ?Stop@mmCarRoadFF@@QAEXXZ
    void Stop()
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x42FF30, this);
    }

    // 0x42FF70 | ?IsPlaying@mmCarRoadFF@@QAEHXZ
    i32 IsPlaying()
    {
        return stub<member_func_t<i32, mmCarRoadFF>>(0x42FF70, this);
    }

    // 0x42FFD0 | ?UpdateVals@mmCarRoadFF@@QAEXXZ
    void UpdateVals()
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x42FFD0, this);
    }

    // 0x42FDB0 | ??1mmCarRoadFF@@UAE@XZ
    ~mmCarRoadFF() override
    {
        stub<member_func_t<void, mmCarRoadFF>>(0x42FDB0, this);
    }

    // 0x42FF80 | ?Update@mmCarRoadFF@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x42FF80, this);
    }

    // 0x42FF40 | ?Reset@mmCarRoadFF@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, mmCarRoadFF>>(0x42FF40, this);
    }
};
