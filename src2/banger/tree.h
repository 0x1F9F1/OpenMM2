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
    banger:tree

    0x442B00 | public: __thiscall dgTreeRenderer::dgTreeRenderer(void) | ??0dgTreeRenderer@@QAE@XZ
    0x442B20 | public: void __thiscall dgTreeRenderer::AddTree(class dgBangerInstance *,int) | ?AddTree@dgTreeRenderer@@QAEXPAVdgBangerInstance@@H@Z
    0x442B50 | public: void __thiscall dgTreeRenderer::RenderTrees(void) | ?RenderTrees@dgTreeRenderer@@QAEXXZ
    0x627680 | private: static class dgTreeRenderer * dgTreeRenderer::sm_Instance | ?sm_Instance@dgTreeRenderer@@0PAV1@A
*/

class dgTreeRenderer
{
public:
    // 0x442B00 | ??0dgTreeRenderer@@QAE@XZ
    inline dgTreeRenderer()
    {
        stub<member_func_t<void, dgTreeRenderer>>(0x442B00, this);
    }

    // 0x442B20 | ?AddTree@dgTreeRenderer@@QAEXPAVdgBangerInstance@@H@Z
    inline void AddTree(class dgBangerInstance* arg1, i32 arg2)
    {
        return stub<member_func_t<void, dgTreeRenderer, class dgBangerInstance*, i32>>(0x442B20, this, arg1, arg2);
    }

    // 0x442B50 | ?RenderTrees@dgTreeRenderer@@QAEXXZ
    inline void RenderTrees()
    {
        return stub<member_func_t<void, dgTreeRenderer>>(0x442B50, this);
    }

    // 0x627680 | ?sm_Instance@dgTreeRenderer@@0PAV1@A
    inline extern_var(0x627680, class dgTreeRenderer*, sm_Instance);
};
