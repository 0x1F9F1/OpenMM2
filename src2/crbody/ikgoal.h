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
    crbody:ikgoal

    0x57EC60 | public: __thiscall crIKGoal::crIKGoal(void) | ??0crIKGoal@@QAE@XZ
    0x57EC90 | public: void __thiscall crIKGoal::ToMatrix(class Matrix34 &) const | ?ToMatrix@crIKGoal@@QBEXAAVMatrix34@@@Z
    0x57ECC0 | public: void __thiscall crIKGoal::FromMatrix(class Matrix34 &) | ?FromMatrix@crIKGoal@@QAEXAAVMatrix34@@@Z
    public: void __thiscall crIKGoal::AddWidgets(class bkBank &) | ?AddWidgets@crIKGoal@@QAEXAAVbkBank@@@Z
*/

class crIKGoal
{
public:
    // 0x57EC60 | ??0crIKGoal@@QAE@XZ
    crIKGoal();

    // 0x57ECC0 | ?FromMatrix@crIKGoal@@QAEXAAVMatrix34@@@Z
    void FromMatrix(class Matrix34& arg1);

    // 0x57EC90 | ?ToMatrix@crIKGoal@@QBEXAAVMatrix34@@@Z
    void ToMatrix(class Matrix34& arg1);
};

check_size(crIKGoal, 0x28);
