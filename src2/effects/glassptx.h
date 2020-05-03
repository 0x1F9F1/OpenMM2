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

class ptxGlass
{
public:
    // 0x461AC0 | ?AddShards@ptxGlass@@QAEXABVVector3@@00ABVVector2@@11000@Z
    void AddShards(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class Vector2 const& arg4, class Vector2 const& arg5, class Vector2 const& arg6, class Vector3 const& arg7,
        class Vector3 const& arg8, class Vector3 const& arg9);

    // 0x461F80 | ?CreateShards@ptxGlass@@QAEXMMQAVVector2@@AAVMatrix34@@ABVVector3@@2@Z
    void CreateShards(f32 arg1, f32 arg2, class Vector2* const arg3, class Matrix34& arg4, class Vector3 const& arg5,
        class Vector3 const& arg6);

    // 0x462AE0 | ?DrawShards@ptxGlass@@QAEXH@Z
    void DrawShards(i32 arg1);

    // 0x461A10 | ?Init@ptxGlass@@QAEXHHPAVgfxTexture@@@Z
    void Init(i32 arg1, i32 arg2, class gfxTexture* arg3);

    // 0x462760 | ?Update@ptxGlass@@QAEXM@Z
    void Update(f32 arg1);
};

check_size(ptxGlass, 0x0);

struct ptxGlass::ptxShard
{
public:
    // 0x462CF0 | ?SetCentroidFromVerts@ptxShard@ptxGlass@@QAEXXZ
    void SetCentroidFromVerts();
};

check_size(ptxGlass::ptxShard, 0x0);
