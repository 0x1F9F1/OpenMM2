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
    dgragdoll:ragdolldata

    0x5A80B0 | public: __thiscall dgRagdollData::dgRagdollData(void) | ??0dgRagdollData@@QAE@XZ
    public: void __thiscall dgRagdollData::AddWidgets(class bkBank &) | ?AddWidgets@dgRagdollData@@QAEXAAVbkBank@@@Z
    0x5A8170 | public: void __thiscall dgRagdollData::FileIO(class datParser &) | ?FileIO@dgRagdollData@@QAEXAAVdatParser@@@Z
*/

class dgRagdollData
{
public:
    // 0x5A80B0 | ??0dgRagdollData@@QAE@XZ
    inline dgRagdollData()
    {
        stub<member_func_t<void, dgRagdollData>>(0x5A80B0, this);
    }

    // 0x5A8170 | ?FileIO@dgRagdollData@@QAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1)
    {
        return stub<member_func_t<void, dgRagdollData, class datParser&>>(0x5A8170, this, arg1);
    }
};
