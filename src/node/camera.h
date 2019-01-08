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
    node:camera

    0x4A2270 | public: __thiscall asUnderlay::asUnderlay(void) | ??0asUnderlay@@QAE@XZ
    0x4A2280 | public: virtual __thiscall asUnderlay::~asUnderlay(void) | ??1asUnderlay@@UAE@XZ
    0x4A2290 | public: void __thiscall asUnderlay::SetBitmap(class gfxBitmap *) | ?SetBitmap@asUnderlay@@QAEXPAVgfxBitmap@@@Z
    0x4A22A0 | public: void __thiscall asUnderlay::AddRef(void) | ?AddRef@asUnderlay@@QAEXXZ
    0x4A22B0 | public: virtual void __thiscall asUnderlay::Cull(void) | ?Cull@asUnderlay@@UAEXXZ
    0x4A22E0 | public: virtual __thiscall asCamera::~asCamera(void) | ??1asCamera@@UAE@XZ
    0x4A2340 | public: __thiscall asCamera::asCamera(void) | ??0asCamera@@QAE@XZ
    0x4A24A0 | public: virtual void __thiscall asCamera::Update(void) | ?Update@asCamera@@UAEXXZ
    0x4A2650 | public: void __thiscall asCamera::SetClipArea(float,float,float,float) | ?SetClipArea@asCamera@@QAEXMMMM@Z
    0x4A2790 | public: void __thiscall asCamera::SetLighting(int) | ?SetLighting@asCamera@@QAEXH@Z
    0x4A27E0 | public: void __thiscall asCamera::SetWorld(class Matrix34 &) | ?SetWorld@asCamera@@QAEXAAVMatrix34@@@Z
    0x4A27F0 | public: void __thiscall asCamera::GetNearClip(class Vector3 *,class Matrix34 &,enum asCamera::kNearClip) | ?GetNearClip@asCamera@@QAEXPAVVector3@@AAVMatrix34@@W4kNearClip@1@@Z
    0x4A2D60 | public: void __thiscall asCamera::DrawBegin(void) | ?DrawBegin@asCamera@@QAEXXZ
    0x4A2D70 | public: void __thiscall asCamera::DrawEnd(void) | ?DrawEnd@asCamera@@QAEXXZ
    0x4A2DD0 | public: void __thiscall asCamera::SetViewport(float,float,float,float,int) | ?SetViewport@asCamera@@QAEXMMMMH@Z
    0x4A2E50 | public: void __thiscall asCamera::SetView(float,float,float,float) | ?SetView@asCamera@@QAEXMMMM@Z
    0x4A2EC0 | public: void __thiscall asCamera::SetFog(float,float,float,float) | ?SetFog@asCamera@@QAEXMMMM@Z
    0x4A2EF0 | public: void __thiscall asCamera::SetUnderlay(char *) | ?SetUnderlay@asCamera@@QAEXPAD@Z
    0x4A2F30 | public: void __thiscall asCamera::SetUnderlayCB(class gfxBitmap *,class datCallback *) | ?SetUnderlayCB@asCamera@@QAEXPAVgfxBitmap@@PAVdatCallback@@@Z
    0x4A2F60 | public: int __thiscall asCamera::GetViewportWidth(void) | ?GetViewportWidth@asCamera@@QAEHXZ
    0x4A2F70 | public: int __thiscall asCamera::GetViewportHeight(void) | ?GetViewportHeight@asCamera@@QAEHXZ
    0x4A2F80 | public: void __thiscall asCamera::FadeOut(float,int) | ?FadeOut@asCamera@@QAEXMH@Z
    0x4A2FE0 | public: void __thiscall asCamera::FadeIn(float,int) | ?FadeIn@asCamera@@QAEXMH@Z
    0x4A3040 | public: float __thiscall asCamera::SphereVisible(class Vector3 const &,float,float *) | ?SphereVisible@asCamera@@QAEMABVVector3@@MPAM@Z
    0x4A3210 | public: void __thiscall asCamera::SetAmbient(class Vector3 const &) | ?SetAmbient@asCamera@@QAEXABVVector3@@@Z
    0x4A3220 | public: void __thiscall asCamera::SetMonochrome(int) | ?SetMonochrome@asCamera@@QAEXH@Z
    0x4A3230 | private: void __thiscall asCamera::Regen(void) | ?Regen@asCamera@@AAEXXZ
    void __cdecl FadeItOut(class asCamera *) | ?FadeItOut@@YAXPAVasCamera@@@Z
    void __cdecl FadeItIn(class asCamera *) | ?FadeItIn@@YAXPAVasCamera@@@Z
    void __cdecl FritzIt(class asCamera *) | ?FritzIt@@YAXPAVasCamera@@@Z
    void __cdecl ViewIt(class asCamera *) | ?ViewIt@@YAXPAVasCamera@@@Z
    void __cdecl AspectIt(class asCamera *) | ?AspectIt@@YAXPAVasCamera@@@Z
    public: virtual void __thiscall asCamera::AddWidgets(class bkBank &) | ?AddWidgets@asCamera@@UAEXAAVbkBank@@@Z
    public: virtual void * __thiscall asUnderlay::`vector deleting destructor'(unsigned int) | ??_EasUnderlay@@UAEPAXI@Z
    0x4A3240 | public: virtual void * __thiscall asUnderlay::`scalar deleting destructor'(unsigned int) | ??_GasUnderlay@@UAEPAXI@Z
    public: virtual void * __thiscall asCamera::`scalar deleting destructor'(unsigned int) | ??_GasCamera@@UAEPAXI@Z
    0x4A3270 | public: virtual void * __thiscall asCamera::`vector deleting destructor'(unsigned int) | ??_EasCamera@@UAEPAXI@Z
    public: virtual char * __thiscall asCamera::GetClassName(void) | ?GetClassName@asCamera@@UAEPADXZ
    0x5B2970 | const asUnderlay::`vftable' | ??_7asUnderlay@@6B@
    0x5B2978 | const asCamera::`vftable' | ??_7asCamera@@6B@
    float Duration | ?Duration@@3MA
*/

#include "hooking.h"

#include "node/node.h"
#include "vector/matrix34.h"

class asCamera
    : public asNode
{
public:
    int Cullable2D;
    int field_1C;
    uint32_t dword20;
    float float24;
    float float28;
    float float2C;
    float float30;
    uint32_t dword34;
    uint32_t dword38;
    uint32_t dword3C;
    uint32_t dword40;
    uint32_t dword44;
    uint32_t dword48;
    float dword4C;
    uint32_t dword50;
    float dword54;
    float gap58;
    float field_5C;
    float field_60;
    float field_64;
    float field_68;
    float field_6C;
    float field_70;
    float field_74;
    float field_78;
    float field_7C;
    float field_80;
    float field_84;
    float field_88;
    float field_8C;
    float field_90;
    float field_94;
    float field_98;
    float field_9C;
    uint32_t dwordA0;
    uint32_t dwordA4;
    uint32_t dwordA8;
    float dwordAC;
    uint32_t dwordB0;
    uint32_t dwordB4;
    float gapB8;
    float field_BC;
    float field_C0;
    float field_C4;
    float dwordC8;
    float dwordCC;
    float dwordD0;
    Matrix34 matrix34D4;
    Matrix34 matrix34104;
    uint32_t dword134;
    uint32_t dword138;
    uint32_t dword13C;
    uint32_t dword140;
    uint32_t dword144;
    uint32_t dword148;
    float dword14C;
    float dword150;
    float dword154;
    uint32_t dword158;
    uint32_t dword15C;
    uint32_t dword160;
    float dword164;
    uint32_t dword168;
    uint32_t dword16C;

    asCamera() = delete;

    virtual ~asCamera() override = 0;

    virtual void Update() override;

    void DrawBegin();
    void DrawEnd();
};

check_size(asCamera, 0x170);
