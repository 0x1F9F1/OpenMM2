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
    lights:flare

    0x59BD80 | public: __thiscall ltFlare::ltFlare(void) | ??0ltFlare@@QAE@XZ
    0x59BDB0 | public: void __thiscall ltFlare::Random(void) | ?Random@ltFlare@@QAEXXZ
    public: void __thiscall ltFlare::AddWidgets(class bkBank &) | ?AddWidgets@ltFlare@@QAEXAAVbkBank@@@Z
    0x59BE80 | public: __thiscall ltLensFlare::ltLensFlare(int) | ??0ltLensFlare@@QAE@H@Z
    0x59BF80 | public: __thiscall ltLensFlare::~ltLensFlare(void) | ??1ltLensFlare@@QAE@XZ
    0x59BFA0 | public: void __thiscall ltLensFlare::DrawBegin(void) | ?DrawBegin@ltLensFlare@@QAEXXZ
    0x59C0C0 | public: void __thiscall ltLensFlare::DrawEnd(void) | ?DrawEnd@ltLensFlare@@QAEXXZ
    0x59C1C0 | public: void __thiscall ltLensFlare::Draw(class Vector3 &,class Vector3 &,float) | ?Draw@ltLensFlare@@QAEXAAVVector3@@0M@Z
    public: void __thiscall ltLensFlare::AddWidgets(class bkBank &) | ?AddWidgets@ltLensFlare@@QAEXAAVbkBank@@@Z
    0x6B4BAC | bool OldLightingState | ?OldLightingState@@3_NA
    0x6B4BB0 | enum gfxBlendFunc OldDestBlendFunc | ?OldDestBlendFunc@@3W4gfxBlendFunc@@A
    enum gfxBlendSet OldBlendSet | ?OldBlendSet@@3W4gfxBlendSet@@A
    0x6B4BB8 | enum gfxCullMode OldCullMode | ?OldCullMode@@3W4gfxCullMode@@A
    0x6B4BBC | enum gfxBlendFunc OldSrcBlendFunc | ?OldSrcBlendFunc@@3W4gfxBlendFunc@@A
    0x6B4BC0 | bool OldZTestState | ?OldZTestState@@3_NA
*/

struct ltFlare
{
public:
    // 0x59BD80 | ??0ltFlare@@QAE@XZ
    ltFlare();

    // 0x59BDB0 | ?Random@ltFlare@@QAEXXZ
    void Random();
};

check_size(ltFlare, 0x0);

struct ltLensFlare
{
public:
    // 0x59BE80 | ??0ltLensFlare@@QAE@H@Z
    ltLensFlare(i32 arg1);

    // 0x59BF80 | ??1ltLensFlare@@QAE@XZ
    ~ltLensFlare();

    // 0x59C1C0 | ?Draw@ltLensFlare@@QAEXAAVVector3@@0M@Z
    void Draw(class Vector3& arg1, class Vector3& arg2, f32 arg3);

    // 0x59BFA0 | ?DrawBegin@ltLensFlare@@QAEXXZ
    void DrawBegin();

    // 0x59C0C0 | ?DrawEnd@ltLensFlare@@QAEXXZ
    void DrawEnd();
};

check_size(ltLensFlare, 0x20);

// 0x6B4BB8 | ?OldCullMode@@3W4gfxCullMode@@A
inline extern_var(0x6B4BB8, enum gfxCullMode, OldCullMode);

// 0x6B4BB0 | ?OldDestBlendFunc@@3W4gfxBlendFunc@@A
inline extern_var(0x6B4BB0, enum gfxBlendFunc, OldDestBlendFunc);

// 0x6B4BAC | ?OldLightingState@@3_NA
inline extern_var(0x6B4BAC, bool, OldLightingState);

// 0x6B4BBC | ?OldSrcBlendFunc@@3W4gfxBlendFunc@@A
inline extern_var(0x6B4BBC, enum gfxBlendFunc, OldSrcBlendFunc);

// 0x6B4BC0 | ?OldZTestState@@3_NA
inline extern_var(0x6B4BC0, bool, OldZTestState);
