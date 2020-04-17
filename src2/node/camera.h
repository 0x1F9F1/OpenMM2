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

class asCamera : asNode
{
public:
    // asCamera::`vftable' @ 0x5B2978

    // 0x4A2340 | ??0asCamera@@QAE@XZ
    asCamera()
    {
        stub<member_func_t<void, asCamera>>(0x4A2340, this);
    }

    // 0x4A2650 | ?SetClipArea@asCamera@@QAEXMMMM@Z
    void SetClipArea(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
    {
        return stub<member_func_t<void, asCamera, f32, f32, f32, f32>>(0x4A2650, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A2790 | ?SetLighting@asCamera@@QAEXH@Z
    void SetLighting(i32 arg1)
    {
        return stub<member_func_t<void, asCamera, i32>>(0x4A2790, this, arg1);
    }

    // 0x4A27E0 | ?SetWorld@asCamera@@QAEXAAVMatrix34@@@Z
    void SetWorld(class Matrix34& arg1)
    {
        return stub<member_func_t<void, asCamera, class Matrix34&>>(0x4A27E0, this, arg1);
    }

    // 0x4A27F0 | ?GetNearClip@asCamera@@QAEXPAVVector3@@AAVMatrix34@@W4kNearClip@1@@Z
    void GetNearClip(class Vector3* arg1, class Matrix34& arg2, enum asCamera::kNearClip arg3)
    {
        return stub<member_func_t<void, asCamera, class Vector3*, class Matrix34&, enum asCamera::kNearClip>>(
            0x4A27F0, this, arg1, arg2, arg3);
    }

    // 0x4A2D60 | ?DrawBegin@asCamera@@QAEXXZ
    void DrawBegin()
    {
        return stub<member_func_t<void, asCamera>>(0x4A2D60, this);
    }

    // 0x4A2D70 | ?DrawEnd@asCamera@@QAEXXZ
    void DrawEnd()
    {
        return stub<member_func_t<void, asCamera>>(0x4A2D70, this);
    }

    // 0x4A2DD0 | ?SetViewport@asCamera@@QAEXMMMMH@Z
    void SetViewport(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5)
    {
        return stub<member_func_t<void, asCamera, f32, f32, f32, f32, i32>>(
            0x4A2DD0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4A2E50 | ?SetView@asCamera@@QAEXMMMM@Z
    void SetView(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
    {
        return stub<member_func_t<void, asCamera, f32, f32, f32, f32>>(0x4A2E50, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A2EC0 | ?SetFog@asCamera@@QAEXMMMM@Z
    void SetFog(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
    {
        return stub<member_func_t<void, asCamera, f32, f32, f32, f32>>(0x4A2EC0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4A2EF0 | ?SetUnderlay@asCamera@@QAEXPAD@Z
    void SetUnderlay(char* arg1)
    {
        return stub<member_func_t<void, asCamera, char*>>(0x4A2EF0, this, arg1);
    }

    // 0x4A2F30 | ?SetUnderlayCB@asCamera@@QAEXPAVgfxBitmap@@PAVdatCallback@@@Z
    void SetUnderlayCB(class gfxBitmap* arg1, class datCallback* arg2)
    {
        return stub<member_func_t<void, asCamera, class gfxBitmap*, class datCallback*>>(0x4A2F30, this, arg1, arg2);
    }

    // 0x4A2F60 | ?GetViewportWidth@asCamera@@QAEHXZ
    i32 GetViewportWidth()
    {
        return stub<member_func_t<i32, asCamera>>(0x4A2F60, this);
    }

    // 0x4A2F70 | ?GetViewportHeight@asCamera@@QAEHXZ
    i32 GetViewportHeight()
    {
        return stub<member_func_t<i32, asCamera>>(0x4A2F70, this);
    }

    // 0x4A2F80 | ?FadeOut@asCamera@@QAEXMH@Z
    void FadeOut(f32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, asCamera, f32, i32>>(0x4A2F80, this, arg1, arg2);
    }

    // 0x4A2FE0 | ?FadeIn@asCamera@@QAEXMH@Z
    void FadeIn(f32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, asCamera, f32, i32>>(0x4A2FE0, this, arg1, arg2);
    }

    // 0x4A3040 | ?SphereVisible@asCamera@@QAEMABVVector3@@MPAM@Z
    f32 SphereVisible(class Vector3 const& arg1, f32 arg2, f32* arg3)
    {
        return stub<member_func_t<f32, asCamera, class Vector3 const&, f32, f32*>>(0x4A3040, this, arg1, arg2, arg3);
    }

    // 0x4A3210 | ?SetAmbient@asCamera@@QAEXABVVector3@@@Z
    void SetAmbient(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, asCamera, class Vector3 const&>>(0x4A3210, this, arg1);
    }

    // 0x4A3220 | ?SetMonochrome@asCamera@@QAEXH@Z
    void SetMonochrome(i32 arg1)
    {
        return stub<member_func_t<void, asCamera, i32>>(0x4A3220, this, arg1);
    }

    // 0x4A3230 | ?Regen@asCamera@@AAEXXZ
    void Regen()
    {
        return stub<member_func_t<void, asCamera>>(0x4A3230, this);
    }

    // 0x4A22E0 | ??1asCamera@@UAE@XZ
    ~asCamera() override
    {
        stub<member_func_t<void, asCamera>>(0x4A22E0, this);
    }

    // 0x4A24A0 | ?Update@asCamera@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, asCamera>>(0x4A24A0, this);
    }
};

struct asUnderlay
{
public:
    // asUnderlay::`vftable' @ 0x5B2970

    // 0x4A2270 | ??0asUnderlay@@QAE@XZ
    asUnderlay()
    {
        stub<member_func_t<void, asUnderlay>>(0x4A2270, this);
    }

    // 0x4A2290 | ?SetBitmap@asUnderlay@@QAEXPAVgfxBitmap@@@Z
    void SetBitmap(class gfxBitmap* arg1)
    {
        return stub<member_func_t<void, asUnderlay, class gfxBitmap*>>(0x4A2290, this, arg1);
    }

    // 0x4A22A0 | ?AddRef@asUnderlay@@QAEXXZ
    void AddRef()
    {
        return stub<member_func_t<void, asUnderlay>>(0x4A22A0, this);
    }

    // 0x4A2280 | ??1asUnderlay@@UAE@XZ
    virtual ~asUnderlay()
    {
        stub<member_func_t<void, asUnderlay>>(0x4A2280, this);
    }

    // 0x4A22B0 | ?Cull@asUnderlay@@UAEXXZ
    virtual void Cull()
    {
        return stub<member_func_t<void, asUnderlay>>(0x4A22B0, this);
    }
};
