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
    ai:aiRailSet

    0x556D50 | public: __thiscall aiRailSet::aiRailSet(void) | ??0aiRailSet@@QAE@XZ
    0x556E10 | public: __thiscall aiRailSet::~aiRailSet(void) | ??1aiRailSet@@QAE@XZ
    0x556E20 | public: void __thiscall aiRailSet::Reset(void) | ?Reset@aiRailSet@@QAEXXZ
    0x556E60 | public: void __thiscall aiRailSet::CalcRailPosition(class Vector3 &,float) | ?CalcRailPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    0x5577A0 | public: void __thiscall aiRailSet::CalcRailPosOrient(class Vector3 &,class Vector3 &,float) | ?CalcRailPosOrient@aiRailSet@@QAEXAAVVector3@@0M@Z
    0x558270 | public: int __thiscall aiRailSet::SolveTurnType(class aiPath *,class aiPath *) | ?SolveTurnType@aiRailSet@@QAEHPAVaiPath@@0@Z
    0x5583F0 | public: void __thiscall aiRailSet::CalcXZPosition(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZPosition@aiRailSet@@QAEXAAVVector3@@0000M@Z
    0x5585E0 | public: void __thiscall aiRailSet::CalcXZDirection(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZDirection@aiRailSet@@QAEXAAVVector3@@0000M@Z
    0x558780 | public: void __thiscall aiRailSet::CalcXZPosOrient(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,float) | ?CalcXZPosOrient@aiRailSet@@QAEXAAVVector3@@00000M@Z
    0x558990 | public: void __thiscall aiRailSet::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000@Z
    0x558B40 | public: void __thiscall aiRailSet::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &,class Vector4 &,class Vector4 &) | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000AAVVector4@@1@Z
    0x558D00 | public: void __thiscall aiRailSet::SolveXZCurve(class Vector3 &,class Vector3 &,float) | ?SolveXZCurve@aiRailSet@@QAEXAAVVector3@@0M@Z
    0x558D80 | public: void __thiscall aiRailSet::SolveXZPosition(class Vector3 &,float) | ?SolveXZPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    0x558DC0 | public: void __thiscall aiRailSet::Dump(void) | ?Dump@aiRailSet@@QAEXXZ
    0x558FB0 | public: void __thiscall aiRailSet::ReplayDebug(void) | ?ReplayDebug@aiRailSet@@QAEXXZ
    public: class Vector3 * __thiscall aiPath::VertXDir(int,int) | ?VertXDir@aiPath@@QAEPAVVector3@@HH@Z
*/

class aiRailSet
{
public:
    // 0x556D50 | ??0aiRailSet@@QAE@XZ
    inline aiRailSet()
    {
        stub<member_func_t<void, aiRailSet>>(0x556D50, this);
    }

    // 0x556E10 | ??1aiRailSet@@QAE@XZ
    inline ~aiRailSet()
    {
        stub<member_func_t<void, aiRailSet>>(0x556E10, this);
    }

    // 0x556E20 | ?Reset@aiRailSet@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiRailSet>>(0x556E20, this);
    }

    // 0x556E60 | ?CalcRailPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    inline void CalcRailPosition(class Vector3& arg1, f32 arg2)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, f32>>(0x556E60, this, arg1, arg2);
    }

    // 0x5577A0 | ?CalcRailPosOrient@aiRailSet@@QAEXAAVVector3@@0M@Z
    inline void CalcRailPosOrient(class Vector3& arg1, class Vector3& arg2, f32 arg3)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, f32>>(
            0x5577A0, this, arg1, arg2, arg3);
    }

    // 0x558270 | ?SolveTurnType@aiRailSet@@QAEHPAVaiPath@@0@Z
    inline i32 SolveTurnType(class aiPath* arg1, class aiPath* arg2)
    {
        return stub<member_func_t<i32, aiRailSet, class aiPath*, class aiPath*>>(0x558270, this, arg1, arg2);
    }

    // 0x5583F0 | ?CalcXZPosition@aiRailSet@@QAEXAAVVector3@@0000M@Z
    inline void CalcXZPosition(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector3& arg5, f32 arg6)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector3&, f32>>(0x5583F0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x5585E0 | ?CalcXZDirection@aiRailSet@@QAEXAAVVector3@@0000M@Z
    inline void CalcXZDirection(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector3& arg5, f32 arg6)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector3&, f32>>(0x5585E0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x558780 | ?CalcXZPosOrient@aiRailSet@@QAEXAAVVector3@@00000M@Z
    inline void CalcXZPosOrient(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector3& arg5, class Vector3& arg6, f32 arg7)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector3&, class Vector3&, f32>>(0x558780, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x558990 | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000@Z
    inline void ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
            0x558990, this, arg1, arg2, arg3, arg4);
    }

    // 0x558B40 | ?ComputeXZCurve@aiRailSet@@QAEXAAVVector3@@000AAVVector4@@1@Z
    inline void ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
        class Vector4& arg5, class Vector4& arg6)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
            class Vector4&, class Vector4&>>(0x558B40, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x558D00 | ?SolveXZCurve@aiRailSet@@QAEXAAVVector3@@0M@Z
    inline void SolveXZCurve(class Vector3& arg1, class Vector3& arg2, f32 arg3)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, class Vector3&, f32>>(
            0x558D00, this, arg1, arg2, arg3);
    }

    // 0x558D80 | ?SolveXZPosition@aiRailSet@@QAEXAAVVector3@@M@Z
    inline void SolveXZPosition(class Vector3& arg1, f32 arg2)
    {
        return stub<member_func_t<void, aiRailSet, class Vector3&, f32>>(0x558D80, this, arg1, arg2);
    }

    // 0x558DC0 | ?Dump@aiRailSet@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiRailSet>>(0x558DC0, this);
    }

    // 0x558FB0 | ?ReplayDebug@aiRailSet@@QAEXXZ
    inline void ReplayDebug()
    {
        return stub<member_func_t<void, aiRailSet>>(0x558FB0, this);
    }
};
