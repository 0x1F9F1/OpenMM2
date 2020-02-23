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
    crskeleton:skeleton

    0x57C510 | public: __thiscall crSkeleton::crSkeleton(void) | ??0crSkeleton@@QAE@XZ
    0x57C5C0 | public: __thiscall crSkeleton::~crSkeleton(void) | ??1crSkeleton@@QAE@XZ
    0x57C5D0 | public: void __thiscall crSkeleton::Init(class crSkeletonData const &,class Matrix34 *) | ?Init@crSkeleton@@QAEXABVcrSkeletonData@@PAVMatrix34@@@Z
    0x57C630 | public: void __thiscall crSkeleton::Update(void) | ?Update@crSkeleton@@QAEXXZ
    0x57C650 | public: void __thiscall crSkeleton::Attach(class Matrix34 * const) const | ?Attach@crSkeleton@@QBEXQAVMatrix34@@@Z
    0x57C690 | public: void __thiscall crSkeleton::Attach(class Matrix44 * const) const | ?Attach@crSkeleton@@QBEXQAVMatrix44@@@Z
*/

class crSkeleton
{
public:
    // 0x57C510 | ??0crSkeleton@@QAE@XZ
    inline crSkeleton()
    {
        stub<member_func_t<void, crSkeleton>>(0x57C510, this);
    }

    // 0x57C5C0 | ??1crSkeleton@@QAE@XZ
    inline ~crSkeleton()
    {
        stub<member_func_t<void, crSkeleton>>(0x57C5C0, this);
    }

    // 0x57C5D0 | ?Init@crSkeleton@@QAEXABVcrSkeletonData@@PAVMatrix34@@@Z
    inline void Init(class crSkeletonData const& arg1, class Matrix34* arg2)
    {
        return stub<member_func_t<void, crSkeleton, class crSkeletonData const&, class Matrix34*>>(
            0x57C5D0, this, arg1, arg2);
    }

    // 0x57C630 | ?Update@crSkeleton@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, crSkeleton>>(0x57C630, this);
    }

    // 0x57C650 | ?Attach@crSkeleton@@QBEXQAVMatrix34@@@Z
    inline void Attach(class Matrix34* const arg1)
    {
        return stub<member_func_t<void, crSkeleton, class Matrix34* const>>(0x57C650, this, arg1);
    }

    // 0x57C690 | ?Attach@crSkeleton@@QBEXQAVMatrix44@@@Z
    inline void Attach(class Matrix44* const arg1)
    {
        return stub<member_func_t<void, crSkeleton, class Matrix44* const>>(0x57C690, this, arg1);
    }
};
