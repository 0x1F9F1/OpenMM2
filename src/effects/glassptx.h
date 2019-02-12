/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    effects:glassptx

    0x461A10 | public: void __thiscall ptxGlass::Init(int,int,class gfxTexture *) | ?Init@ptxGlass@@QAEXHHPAVgfxTexture@@@Z
    0x461AC0 | public: void __thiscall ptxGlass::AddShards(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector2 const &,class Vector2 const &,class Vector2 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &) | ?AddShards@ptxGlass@@QAEXABVVector3@@00ABVVector2@@11000@Z
    0x461F80 | public: void __thiscall ptxGlass::CreateShards(float,float,class Vector2 * const,class Matrix34 &,class Vector3 const &,class Vector3 const &) | ?CreateShards@ptxGlass@@QAEXMMQAVVector2@@AAVMatrix34@@ABVVector3@@2@Z
    0x462760 | public: void __thiscall ptxGlass::Update(float) | ?Update@ptxGlass@@QAEXM@Z
    0x462AE0 | public: void __thiscall ptxGlass::DrawShards(int) | ?DrawShards@ptxGlass@@QAEXH@Z
    0x462CF0 | public: void __thiscall ptxGlass::ptxShard::SetCentroidFromVerts(void) | ?SetCentroidFromVerts@ptxShard@ptxGlass@@QAEXXZ
    public: virtual void __thiscall ptxGlassBirthRules::AddWidgets(class bkBank &) | ?AddWidgets@ptxGlassBirthRules@@UAEXAAVbkBank@@@Z
    0x462D90 | public: virtual void __thiscall ptxGlassBirthRules::FileIO(class datParser &) | ?FileIO@ptxGlassBirthRules@@UAEXAAVdatParser@@@Z
*/

// #include "hooking.h"
