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
    model:model2

    0x597D00 | public: void __thiscall modModel::Draw(class Matrix44 const *,class modShader *,unsigned int) const | ?Draw@modModel@@QBEXPBVMatrix44@@PAVmodShader@@I@Z
    0x597EA0 | public: void __thiscall modModel::DrawWithTexGenCoords(class Matrix44 const *,class gfxTexture &,unsigned int) const | ?DrawWithTexGenCoords@modModel@@QBEXPBVMatrix44@@AAVgfxTexture@@I@Z
    0x597F00 | public: void __thiscall modModel::DrawPlain(class Matrix44 const *,unsigned int) const | ?DrawPlain@modModel@@QBEXPBVMatrix44@@I@Z
    0x597FB0 | public: void __thiscall modModel::GetBoundingBox(class Vector3 &,class Vector3 &,class Matrix34 *) const | ?GetBoundingBox@modModel@@QBEXAAVVector3@@0PAVMatrix34@@@Z
    0x598190 | public: int __thiscall modModel::GetAdjunctCount(void) const | ?GetAdjunctCount@modModel@@QBEHXZ
    0x5981C0 | public: class modShader * __thiscall modModel::CopyShaders(void) const | ?CopyShaders@modModel@@QBEPAVmodShader@@XZ
    0x598230 | public: class Vector3 & __thiscall modModel::GetPosition(class Vector3 &,int) const | ?GetPosition@modModel@@QBEAAVVector3@@AAV2@H@Z
    0x598290 | public: void __thiscall modModel::SetPosition(class Vector3 const &,int) const | ?SetPosition@modModel@@QBEXABVVector3@@H@Z
    0x5982F0 | private: bool __thiscall modModel::LoadAscii(class datTokenizer &) | ?LoadAscii@modModel@@AAE_NAAVdatTokenizer@@@Z
    0x5990F0 | private: bool __thiscall modModel::LoadBinary(class datBinTokenizer &) | ?LoadBinary@modModel@@AAE_NAAVdatBinTokenizer@@@Z
    0x5999C0 | private: bool __thiscall modModel::SaveToBinary(class datTokenizer &,class Stream *) | ?SaveToBinary@modModel@@AAE_NAAVdatTokenizer@@PAVStream@@@Z
    0x59A1E0 | void __cdecl UnderscoreSpaces(char *,int) | ?UnderscoreSpaces@@YAXPADH@Z
    0x59A210 | private: bool __thiscall modModel::SaveToAscii(class datBinTokenizer &,class Stream *) | ?SaveToAscii@modModel@@AAE_NAAVdatBinTokenizer@@PAVStream@@@Z
*/

// 0x59A1E0 | ?UnderscoreSpaces@@YAXPADH@Z
inline void UnderscoreSpaces(char* arg1, i32 arg2)
{
    return stub<cdecl_t<void, char*, i32>>(0x59A1E0, arg1, arg2);
}

class modModel
{
public:
    // 0x597A20 | ?ModelAlreadyLoaded@modModel@@SA_NPBD@Z
    static inline bool ModelAlreadyLoaded(char const* arg1)
    {
        return stub<cdecl_t<bool, char const*>>(0x597A20, arg1);
    }

    // 0x597A40 | ?DeleteModelHash@modModel@@SAXPBD@Z
    static inline void DeleteModelHash(char const* arg1)
    {
        return stub<cdecl_t<void, char const*>>(0x597A40, arg1);
    }

    // 0x597D00 | ?Draw@modModel@@QBEXPBVMatrix44@@PAVmodShader@@I@Z
    void Draw(class Matrix44 const* arg1, class modShader* arg2, u32 arg3)
    {
        return stub<member_func_t<void, modModel, class Matrix44 const*, class modShader*, u32>>(
            0x597D00, this, arg1, arg2, arg3);
    }

    // 0x597EA0 | ?DrawWithTexGenCoords@modModel@@QBEXPBVMatrix44@@AAVgfxTexture@@I@Z
    void DrawWithTexGenCoords(class Matrix44 const* arg1, class gfxTexture& arg2, u32 arg3)
    {
        return stub<member_func_t<void, modModel, class Matrix44 const*, class gfxTexture&, u32>>(
            0x597EA0, this, arg1, arg2, arg3);
    }

    // 0x597F00 | ?DrawPlain@modModel@@QBEXPBVMatrix44@@I@Z
    void DrawPlain(class Matrix44 const* arg1, u32 arg2)
    {
        return stub<member_func_t<void, modModel, class Matrix44 const*, u32>>(0x597F00, this, arg1, arg2);
    }

    // 0x597FB0 | ?GetBoundingBox@modModel@@QBEXAAVVector3@@0PAVMatrix34@@@Z
    void GetBoundingBox(class Vector3& arg1, class Vector3& arg2, class Matrix34* arg3)
    {
        return stub<member_func_t<void, modModel, class Vector3&, class Vector3&, class Matrix34*>>(
            0x597FB0, this, arg1, arg2, arg3);
    }

    // 0x598190 | ?GetAdjunctCount@modModel@@QBEHXZ
    i32 GetAdjunctCount()
    {
        return stub<member_func_t<i32, modModel>>(0x598190, this);
    }

    // 0x5981C0 | ?CopyShaders@modModel@@QBEPAVmodShader@@XZ
    class modShader* CopyShaders()
    {
        return stub<member_func_t<class modShader*, modModel>>(0x5981C0, this);
    }

    // 0x598230 | ?GetPosition@modModel@@QBEAAVVector3@@AAV2@H@Z
    class Vector3& GetPosition(class Vector3& arg1, i32 arg2)
    {
        return stub<member_func_t<class Vector3&, modModel, class Vector3&, i32>>(0x598230, this, arg1, arg2);
    }

    // 0x598290 | ?SetPosition@modModel@@QBEXABVVector3@@H@Z
    void SetPosition(class Vector3 const& arg1, i32 arg2)
    {
        return stub<member_func_t<void, modModel, class Vector3 const&, i32>>(0x598290, this, arg1, arg2);
    }

    // 0x5982F0 | ?LoadAscii@modModel@@AAE_NAAVdatTokenizer@@@Z
    bool LoadAscii(class datTokenizer& arg1)
    {
        return stub<member_func_t<bool, modModel, class datTokenizer&>>(0x5982F0, this, arg1);
    }

    // 0x5990F0 | ?LoadBinary@modModel@@AAE_NAAVdatBinTokenizer@@@Z
    bool LoadBinary(class datBinTokenizer& arg1)
    {
        return stub<member_func_t<bool, modModel, class datBinTokenizer&>>(0x5990F0, this, arg1);
    }

    // 0x5999C0 | ?SaveToBinary@modModel@@AAE_NAAVdatTokenizer@@PAVStream@@@Z
    bool SaveToBinary(class datTokenizer& arg1, class Stream* arg2)
    {
        return stub<member_func_t<bool, modModel, class datTokenizer&, class Stream*>>(0x5999C0, this, arg1, arg2);
    }

    // 0x59A210 | ?SaveToAscii@modModel@@AAE_NAAVdatBinTokenizer@@PAVStream@@@Z
    bool SaveToAscii(class datBinTokenizer& arg1, class Stream* arg2)
    {
        return stub<member_func_t<bool, modModel, class datBinTokenizer&, class Stream*>>(0x59A210, this, arg1, arg2);
    }
};
