/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    bool OldLightingState | ?OldLightingState@@3_NA
    enum gfxBlendFunc OldDestBlendFunc | ?OldDestBlendFunc@@3W4gfxBlendFunc@@A
    enum gfxBlendSet OldBlendSet | ?OldBlendSet@@3W4gfxBlendSet@@A
    enum gfxCullMode OldCullMode | ?OldCullMode@@3W4gfxCullMode@@A
    enum gfxBlendFunc OldSrcBlendFunc | ?OldSrcBlendFunc@@3W4gfxBlendFunc@@A
    bool OldZTestState | ?OldZTestState@@3_NA
*/

struct ltFlare
{
public:
    // 0x59BD80 | ??0ltFlare@@QAE@XZ
    inline ltFlare()
    {
        stub<member_func_t<void, ltFlare>>(0x59BD80, this);
    }

    // 0x59BDB0 | ?Random@ltFlare@@QAEXXZ
    inline void Random()
    {
        return stub<member_func_t<void, ltFlare>>(0x59BDB0, this);
    }
};

struct ltLensFlare
{
public:
    // 0x59BE80 | ??0ltLensFlare@@QAE@H@Z
    inline ltLensFlare(int32_t arg1)
    {
        stub<member_func_t<void, ltLensFlare, int32_t>>(0x59BE80, this, arg1);
    }

    // 0x59BF80 | ??1ltLensFlare@@QAE@XZ
    inline ~ltLensFlare()
    {
        stub<member_func_t<void, ltLensFlare>>(0x59BF80, this);
    }

    // 0x59BFA0 | ?DrawBegin@ltLensFlare@@QAEXXZ
    inline void DrawBegin()
    {
        return stub<member_func_t<void, ltLensFlare>>(0x59BFA0, this);
    }

    // 0x59C0C0 | ?DrawEnd@ltLensFlare@@QAEXXZ
    inline void DrawEnd()
    {
        return stub<member_func_t<void, ltLensFlare>>(0x59C0C0, this);
    }

    // 0x59C1C0 | ?Draw@ltLensFlare@@QAEXAAVVector3@@0M@Z
    inline void Draw(class Vector3& arg1, class Vector3& arg2, float arg3)
    {
        return stub<member_func_t<void, ltLensFlare, class Vector3&, class Vector3&, float>>(
            0x59C1C0, this, arg1, arg2, arg3);
    }
};
