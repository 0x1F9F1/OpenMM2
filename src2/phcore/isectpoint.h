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
    phcore:isectpoint

    0x494CE0 | public: void __thiscall phIntersectionPoint::Transform(class Matrix34 const *) | ?Transform@phIntersectionPoint@@QAEXPBVMatrix34@@@Z
    0x494D90 | public: void __thiscall phIntersectionPoint::Set(class Vector3 const &,class Vector3 const &,float,float,unsigned char) | ?Set@phIntersectionPoint@@QAEXABVVector3@@0MME@Z
    public: void __thiscall phIntersectionPoint::DebugReplay(void) | ?DebugReplay@phIntersectionPoint@@QAEXXZ
*/

class phIntersectionPoint
{
public:
    // 0x415220 | ??0phIntersectionPoint@@QAE@XZ
    inline phIntersectionPoint()
    {
        stub<member_func_t<void, phIntersectionPoint>>(0x415220, this);
    }

    // 0x494CE0 | ?Transform@phIntersectionPoint@@QAEXPBVMatrix34@@@Z
    inline void Transform(class Matrix34 const* arg1)
    {
        return stub<member_func_t<void, phIntersectionPoint, class Matrix34 const*>>(0x494CE0, this, arg1);
    }

    // 0x494D90 | ?Set@phIntersectionPoint@@QAEXABVVector3@@0MME@Z
    inline void Set(class Vector3 const& arg1, class Vector3 const& arg2, float arg3, float arg4, uint8_t arg5)
    {
        return stub<member_func_t<void, phIntersectionPoint, class Vector3 const&, class Vector3 const&, float, float,
            uint8_t>>(0x494D90, this, arg1, arg2, arg3, arg4, arg5);
    }
};
