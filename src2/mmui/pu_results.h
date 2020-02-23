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
    mmui:pu_results

    0x508FC0 | public: __thiscall PUResults::PUResults(int,float,float,float,float,char *,int,int) | ??0PUResults@@QAE@HMMMMPADHH@Z
    0x509120 | public: void __thiscall PUResults::Init320(void) | ?Init320@PUResults@@QAEXXZ
    0x509600 | public: void __thiscall PUResults::Init640(void) | ?Init640@PUResults@@QAEXXZ
    0x509B10 | public: virtual __thiscall PUResults::~PUResults(void) | ??1PUResults@@UAE@XZ
    0x509B20 | public: void __thiscall PUResults::AddTitle(struct LocString *,struct LocString *) | ?AddTitle@PUResults@@QAEXPAULocString@@0@Z
    0x509B50 | public: virtual void __thiscall PUResults::Reset(void) | ?Reset@PUResults@@UAEXXZ
    0x509B60 | public: void __thiscall PUResults::RosterRO(int) | ?RosterRO@PUResults@@QAEXH@Z
    0x509B80 | public: void __thiscall PUResults::RestartRO(int) | ?RestartRO@PUResults@@QAEXH@Z
    0x509BA0 | public: int __thiscall PUResults::IsRosterReadOnly(void) | ?IsRosterReadOnly@PUResults@@QAEHXZ
    0x509BB0 | public: int __thiscall PUResults::IsRaceMenuReadOnly(void) | ?IsRaceMenuReadOnly@PUResults@@QAEHXZ
    0x509BC0 | public: void __thiscall PUResults::RaceMenuRO(int) | ?RaceMenuRO@PUResults@@QAEXH@Z
    0x509BE0 | public: void __thiscall PUResults::AddName(int,char const *,float) | ?AddName@PUResults@@QAEXHPBDM@Z
    0x509CA0 | public: void __thiscall PUResults::AddName(int,char const *,char const *) | ?AddName@PUResults@@QAEXHPBD0@Z
    0x509D40 | public: void __thiscall PUResults::AddName(int,char const *,int) | ?AddName@PUResults@@QAEXHPBDH@Z
    0x509E10 | public: void __thiscall PUResults::AddLoser(int,char const *) | ?AddLoser@PUResults@@QAEXHPBD@Z
    0x509E70 | public: void __thiscall PUResults::ClearNames(void) | ?ClearNames@PUResults@@QAEXXZ
    0x509EE0 | public: void __thiscall PUResults::DisableNextRace(void) | ?DisableNextRace@PUResults@@QAEXXZ
    0x509EF0 | public: void __thiscall PUResults::EnableNextRace(void) | ?EnableNextRace@PUResults@@QAEXXZ
    0x509F00 | public: void __thiscall PUResults::SetMessage(struct LocString *) | ?SetMessage@PUResults@@QAEXPAULocString@@@Z
    0x509F20 | public: virtual void * __thiscall PUResults::`scalar deleting destructor'(unsigned int) | ??_GPUResults@@UAEPAXI@Z
    public: virtual void * __thiscall PUResults::`vector deleting destructor'(unsigned int) | ??_EPUResults@@UAEPAXI@Z
    0x5B4680 | const PUResults::`vftable' | ??_7PUResults@@6B@
*/

struct PUResults : PUMenuBase
{
public:
    // PUResults::`vftable' @ 0x5B4680

    // 0x508FC0 | ??0PUResults@@QAE@HMMMMPADHH@Z
    inline PUResults(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6, i32 arg7, i32 arg8)
    {
        stub<member_func_t<void, PUResults, i32, f32, f32, f32, f32, char*, i32, i32>>(
            0x508FC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x509120 | ?Init320@PUResults@@QAEXXZ
    inline void Init320()
    {
        return stub<member_func_t<void, PUResults>>(0x509120, this);
    }

    // 0x509600 | ?Init640@PUResults@@QAEXXZ
    inline void Init640()
    {
        return stub<member_func_t<void, PUResults>>(0x509600, this);
    }

    // 0x509B20 | ?AddTitle@PUResults@@QAEXPAULocString@@0@Z
    inline void AddTitle(struct LocString* arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, PUResults, struct LocString*, struct LocString*>>(0x509B20, this, arg1, arg2);
    }

    // 0x509B60 | ?RosterRO@PUResults@@QAEXH@Z
    inline void RosterRO(i32 arg1)
    {
        return stub<member_func_t<void, PUResults, i32>>(0x509B60, this, arg1);
    }

    // 0x509B80 | ?RestartRO@PUResults@@QAEXH@Z
    inline void RestartRO(i32 arg1)
    {
        return stub<member_func_t<void, PUResults, i32>>(0x509B80, this, arg1);
    }

    // 0x509BA0 | ?IsRosterReadOnly@PUResults@@QAEHXZ
    inline i32 IsRosterReadOnly()
    {
        return stub<member_func_t<i32, PUResults>>(0x509BA0, this);
    }

    // 0x509BB0 | ?IsRaceMenuReadOnly@PUResults@@QAEHXZ
    inline i32 IsRaceMenuReadOnly()
    {
        return stub<member_func_t<i32, PUResults>>(0x509BB0, this);
    }

    // 0x509BC0 | ?RaceMenuRO@PUResults@@QAEXH@Z
    inline void RaceMenuRO(i32 arg1)
    {
        return stub<member_func_t<void, PUResults, i32>>(0x509BC0, this, arg1);
    }

    // 0x509BE0 | ?AddName@PUResults@@QAEXHPBDM@Z
    inline void AddName(i32 arg1, char const* arg2, f32 arg3)
    {
        return stub<member_func_t<void, PUResults, i32, char const*, f32>>(0x509BE0, this, arg1, arg2, arg3);
    }

    // 0x509CA0 | ?AddName@PUResults@@QAEXHPBD0@Z
    inline void AddName(i32 arg1, char const* arg2, char const* arg3)
    {
        return stub<member_func_t<void, PUResults, i32, char const*, char const*>>(0x509CA0, this, arg1, arg2, arg3);
    }

    // 0x509D40 | ?AddName@PUResults@@QAEXHPBDH@Z
    inline void AddName(i32 arg1, char const* arg2, i32 arg3)
    {
        return stub<member_func_t<void, PUResults, i32, char const*, i32>>(0x509D40, this, arg1, arg2, arg3);
    }

    // 0x509E10 | ?AddLoser@PUResults@@QAEXHPBD@Z
    inline void AddLoser(i32 arg1, char const* arg2)
    {
        return stub<member_func_t<void, PUResults, i32, char const*>>(0x509E10, this, arg1, arg2);
    }

    // 0x509E70 | ?ClearNames@PUResults@@QAEXXZ
    inline void ClearNames()
    {
        return stub<member_func_t<void, PUResults>>(0x509E70, this);
    }

    // 0x509EE0 | ?DisableNextRace@PUResults@@QAEXXZ
    inline void DisableNextRace()
    {
        return stub<member_func_t<void, PUResults>>(0x509EE0, this);
    }

    // 0x509EF0 | ?EnableNextRace@PUResults@@QAEXXZ
    inline void EnableNextRace()
    {
        return stub<member_func_t<void, PUResults>>(0x509EF0, this);
    }

    // 0x509F00 | ?SetMessage@PUResults@@QAEXPAULocString@@@Z
    inline void SetMessage(struct LocString* arg1)
    {
        return stub<member_func_t<void, PUResults, struct LocString*>>(0x509F00, this, arg1);
    }

    // 0x509B10 | ??1PUResults@@UAE@XZ
    inline ~PUResults() override
    {
        stub<member_func_t<void, PUResults>>(0x509B10, this);
    }

    // 0x509B50 | ?Reset@PUResults@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, PUResults>>(0x509B50, this);
    }
};
