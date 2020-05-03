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
    crskeleton:bone

    0x57CB20 | public: __thiscall crBone::crBone(void) | ??0crBone@@QAE@XZ
    0x57CB50 | public: void __thiscall crBone::Transform(class Matrix34 *) | ?Transform@crBone@@QAEXPAVMatrix34@@@Z
*/

class crBone
{
public:
    // 0x57CB20 | ??0crBone@@QAE@XZ
    crBone();

    // 0x57CB50 | ?Transform@crBone@@QAEXPAVMatrix34@@@Z
    void Transform(class Matrix34* arg1);
};

check_size(crBone, 0x0);
