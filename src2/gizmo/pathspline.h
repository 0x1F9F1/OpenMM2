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

/*
    gizmo:pathspline

    0x57A050 | public: __thiscall gizPathspline::gizPathspline(void) | ??0gizPathspline@@QAE@XZ
    0x57A080 | public: __thiscall gizPathspline::~gizPathspline(void) | ??1gizPathspline@@QAE@XZ
    0x57A090 | public: void __thiscall gizPathspline::Reset(void) | ?Reset@gizPathspline@@QAEXXZ
    0x57A0E0 | public: void __thiscall gizPathspline::Init(class dgPath *,float) | ?Init@gizPathspline@@QAEXPAVdgPath@@M@Z
    0x57A100 | protected: void __thiscall gizPathspline::Compute(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?Compute@gizPathspline@@IAEXAAVVector3@@000@Z
    0x57A370 | protected: void __thiscall gizPathspline::Solve(class Vector3 &,class Vector3 &,float) | ?Solve@gizPathspline@@IAEXAAVVector3@@0M@Z
    0x57A410 | public: void __thiscall gizPathspline::Update(class Vector3 &,class Vector3 &,float) | ?Update@gizPathspline@@QAEXAAVVector3@@0M@Z
    0x57A440 | public: void __thiscall gizPathspline::UpdateRatio(class Vector3 &,class Vector3 &,float) | ?UpdateRatio@gizPathspline@@QAEXAAVVector3@@0M@Z
    0x57A520 | public: float __thiscall gizPathspline::GetCurrRatio(void) | ?GetCurrRatio@gizPathspline@@QAEMXZ
    0x57A530 | protected: void __thiscall gizPathspline::ComputePath(int,int,int) | ?ComputePath@gizPathspline@@IAEXHHH@Z
    0x57A6D0 | protected: void __thiscall gizPathspline::IncrementPath(void) | ?IncrementPath@gizPathspline@@IAEXXZ
    0x57A710 | protected: void __thiscall gizPathspline::DecrementPath(void) | ?DecrementPath@gizPathspline@@IAEXXZ
    0x57A750 | public: int __thiscall gizPathspline::GetNumVertex(void) | ?GetNumVertex@gizPathspline@@QAEHXZ
    0x57A760 | public: void __thiscall gizPathspline::SetSpeed(float) | ?SetSpeed@gizPathspline@@QAEXM@Z
    0x57A780 | public: class Vector3 & __thiscall gizPathspline::GetVertex(int) | ?GetVertex@gizPathspline@@QAEAAVVector3@@H@Z
    class Matrix44 Hermite | ?Hermite@@3VMatrix44@@A
*/

struct gizPathspline
{
public:
    // 0x57A050 | ??0gizPathspline@@QAE@XZ
    gizPathspline();

    // 0x57A080 | ??1gizPathspline@@QAE@XZ
    ~gizPathspline();

    // 0x57A520 | ?GetCurrRatio@gizPathspline@@QAEMXZ
    f32 GetCurrRatio();

    // 0x57A750 | ?GetNumVertex@gizPathspline@@QAEHXZ
    i32 GetNumVertex();

    // 0x57A780 | ?GetVertex@gizPathspline@@QAEAAVVector3@@H@Z
    class Vector3& GetVertex(i32 arg1);

    // 0x57A0E0 | ?Init@gizPathspline@@QAEXPAVdgPath@@M@Z
    void Init(class dgPath* arg1, f32 arg2);

    // 0x57A090 | ?Reset@gizPathspline@@QAEXXZ
    void Reset();

    // 0x57A760 | ?SetSpeed@gizPathspline@@QAEXM@Z
    void SetSpeed(f32 arg1);

    // 0x57A410 | ?Update@gizPathspline@@QAEXAAVVector3@@0M@Z
    void Update(class Vector3& arg1, class Vector3& arg2, f32 arg3);

    // 0x57A440 | ?UpdateRatio@gizPathspline@@QAEXAAVVector3@@0M@Z
    void UpdateRatio(class Vector3& arg1, class Vector3& arg2, f32 arg3);

protected:
    // 0x57A100 | ?Compute@gizPathspline@@IAEXAAVVector3@@000@Z
    void Compute(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4);

    // 0x57A530 | ?ComputePath@gizPathspline@@IAEXHHH@Z
    void ComputePath(i32 arg1, i32 arg2, i32 arg3);

    // 0x57A710 | ?DecrementPath@gizPathspline@@IAEXXZ
    void DecrementPath();

    // 0x57A6D0 | ?IncrementPath@gizPathspline@@IAEXXZ
    void IncrementPath();

    // 0x57A370 | ?Solve@gizPathspline@@IAEXAAVVector3@@0M@Z
    void Solve(class Vector3& arg1, class Vector3& arg2, f32 arg3);
};

check_size(gizPathspline, 0x48);
