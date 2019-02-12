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

// #include "hooking.h"
