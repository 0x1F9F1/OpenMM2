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

class modModel
{
public:
    // 0x5981C0 | ?CopyShaders@modModel@@QBEPAVmodShader@@XZ
    class modShader* CopyShaders();

    // 0x597D00 | ?Draw@modModel@@QBEXPBVMatrix44@@PAVmodShader@@I@Z
    void Draw(class Matrix44 const* arg1, class modShader* arg2, u32 arg3);

    // 0x597F00 | ?DrawPlain@modModel@@QBEXPBVMatrix44@@I@Z
    void DrawPlain(class Matrix44 const* arg1, u32 arg2);

    // 0x597EA0 | ?DrawWithTexGenCoords@modModel@@QBEXPBVMatrix44@@AAVgfxTexture@@I@Z
    void DrawWithTexGenCoords(class Matrix44 const* arg1, class gfxTexture& arg2, u32 arg3);

    // 0x598190 | ?GetAdjunctCount@modModel@@QBEHXZ
    i32 GetAdjunctCount();

    // 0x597FB0 | ?GetBoundingBox@modModel@@QBEXAAVVector3@@0PAVMatrix34@@@Z
    void GetBoundingBox(class Vector3& arg1, class Vector3& arg2, class Matrix34* arg3);

    // 0x598230 | ?GetPosition@modModel@@QBEAAVVector3@@AAV2@H@Z
    class Vector3& GetPosition(class Vector3& arg1, i32 arg2);

    // 0x598290 | ?SetPosition@modModel@@QBEXABVVector3@@H@Z
    void SetPosition(class Vector3 const& arg1, i32 arg2);

    // 0x597A40 | ?DeleteModelHash@modModel@@SAXPBD@Z
    static void DeleteModelHash(char const* arg1);

    // 0x597A20 | ?ModelAlreadyLoaded@modModel@@SA_NPBD@Z
    static bool ModelAlreadyLoaded(char const* arg1);

private:
    // 0x5982F0 | ?LoadAscii@modModel@@AAE_NAAVdatTokenizer@@@Z
    bool LoadAscii(class datTokenizer& arg1);

    // 0x5990F0 | ?LoadBinary@modModel@@AAE_NAAVdatBinTokenizer@@@Z
    bool LoadBinary(class datBinTokenizer& arg1);

    // 0x59A210 | ?SaveToAscii@modModel@@AAE_NAAVdatBinTokenizer@@PAVStream@@@Z
    bool SaveToAscii(class datBinTokenizer& arg1, class Stream* arg2);

    // 0x5999C0 | ?SaveToBinary@modModel@@AAE_NAAVdatTokenizer@@PAVStream@@@Z
    bool SaveToBinary(class datTokenizer& arg1, class Stream* arg2);
};

check_size(modModel, 0x0);

// 0x59A1E0 | ?UnderscoreSpaces@@YAXPADH@Z
void UnderscoreSpaces(char* arg1, i32 arg2);
