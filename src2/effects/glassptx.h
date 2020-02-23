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
    // 0x461A10 | ?Init@ptxGlass@@QAEXHHPAVgfxTexture@@@Z
    inline void Init(i32 arg1, i32 arg2, class gfxTexture* arg3)
    {
        return stub<member_func_t<void, ptxGlass, i32, i32, class gfxTexture*>>(0x461A10, this, arg1, arg2, arg3);
    }

    // 0x461AC0 | ?AddShards@ptxGlass@@QAEXABVVector3@@00ABVVector2@@11000@Z
    inline void AddShards(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class Vector2 const& arg4, class Vector2 const& arg5, class Vector2 const& arg6, class Vector3 const& arg7,
        class Vector3 const& arg8, class Vector3 const& arg9)
    {
        return stub<member_func_t<void, ptxGlass, class Vector3 const&, class Vector3 const&, class Vector3 const&,
            class Vector2 const&, class Vector2 const&, class Vector2 const&, class Vector3 const&,
            class Vector3 const&, class Vector3 const&>>(
            0x461AC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x461F80 | ?CreateShards@ptxGlass@@QAEXMMQAVVector2@@AAVMatrix34@@ABVVector3@@2@Z
    inline void CreateShards(f32 arg1, f32 arg2, class Vector2* const arg3, class Matrix34& arg4,
        class Vector3 const& arg5, class Vector3 const& arg6)
    {
        return stub<member_func_t<void, ptxGlass, f32, f32, class Vector2* const, class Matrix34&, class Vector3 const&,
            class Vector3 const&>>(0x461F80, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x462760 | ?Update@ptxGlass@@QAEXM@Z
    inline void Update(f32 arg1)
    {
        return stub<member_func_t<void, ptxGlass, f32>>(0x462760, this, arg1);
    }

    // 0x462AE0 | ?DrawShards@ptxGlass@@QAEXH@Z
    inline void DrawShards(i32 arg1)
    {
        return stub<member_func_t<void, ptxGlass, i32>>(0x462AE0, this, arg1);
    }
};

struct ptxGlass::ptxShard
{
public:
    // 0x462CF0 | ?SetCentroidFromVerts@ptxShard@ptxGlass@@QAEXXZ
    inline void SetCentroidFromVerts()
    {
        return stub<member_func_t<void, ptxShard>>(0x462CF0, this);
    }
};
