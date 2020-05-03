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
    phcore:isectpoint

    0x494CE0 | public: void __thiscall phIntersectionPoint::Transform(class Matrix34 const *) | ?Transform@phIntersectionPoint@@QAEXPBVMatrix34@@@Z
    0x494D90 | public: void __thiscall phIntersectionPoint::Set(class Vector3 const &,class Vector3 const &,float,float,unsigned char) | ?Set@phIntersectionPoint@@QAEXABVVector3@@0MME@Z
    public: void __thiscall phIntersectionPoint::DebugReplay(void) | ?DebugReplay@phIntersectionPoint@@QAEXXZ
*/

class phIntersectionPoint
{
public:
    // 0x415220 | ??0phIntersectionPoint@@QAE@XZ
    phIntersectionPoint();

    // 0x494D90 | ?Set@phIntersectionPoint@@QAEXABVVector3@@0MME@Z
    void Set(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4, u8 arg5);

    // 0x494CE0 | ?Transform@phIntersectionPoint@@QAEXPBVMatrix34@@@Z
    void Transform(class Matrix34 const* arg1);
};

check_size(phIntersectionPoint, 0x0);
