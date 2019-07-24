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
    mmwidget:compcity

    0x59E7E0 | public: __thiscall mmCompCity::mmCompCity(void) | ??0mmCompCity@@QAE@XZ
    0x59E810 | public: virtual __thiscall mmCompCity::~mmCompCity(void) | ??1mmCompCity@@UAE@XZ
    0x59E8A0 | public: void __thiscall mmCompCity::Init(char *,int,int,int) | ?Init@mmCompCity@@QAEXPADHHH@Z
    0x59E910 | public: void __thiscall mmCompCity::InitTitle(float,float,float,float,struct LocString *,struct LocString *,struct LocString *,struct LocString *) | ?InitTitle@mmCompCity@@QAEXMMMMPAULocString@@000@Z
    0x59E980 | public: virtual void __thiscall mmCompCity::Reset(void) | ?Reset@mmCompCity@@UAEXXZ
    0x59E990 | public: virtual void __thiscall mmCompCity::Update(void) | ?Update@mmCompCity@@UAEXXZ
    0x59E9A0 | public: void __thiscall mmCompCity::SetSubwidgetGeometry(void) | ?SetSubwidgetGeometry@mmCompCity@@QAEXXZ
    0x59EA00 | public: void __thiscall mmCompCity::SetTitleGeometry(void) | ?SetTitleGeometry@mmCompCity@@QAEXXZ
    0x59EA20 | public: virtual void __thiscall mmCompCity::SetPosition(class mmTextNode *,int,float) | ?SetPosition@mmCompCity@@UAEXPAVmmTextNode@@HM@Z
    0x59EA60 | public: virtual void __thiscall mmCompCity::Highlight(class mmTextNode *,int) | ?Highlight@mmCompCity@@UAEXPAVmmTextNode@@H@Z
    0x59EAB0 | public: virtual void __thiscall mmCompCity::Box(int,class mmTextNode *,int) | ?Box@mmCompCity@@UAEXHPAVmmTextNode@@H@Z
    0x59EAE0 | public: virtual void __thiscall mmCompCity::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompCity@@UAEXMMMM@Z
    0x59EB10 | public: virtual void __thiscall mmCompCity::Cull(void) | ?Cull@mmCompCity@@UAEXXZ
    0x59EB20 | public: virtual void * __thiscall mmCompCity::`scalar deleting destructor'(unsigned int) | ??_GmmCompCity@@UAEPAXI@Z
    0x59EB50 | public: virtual __thiscall mmCompBase::~mmCompBase(void) | ??1mmCompBase@@UAE@XZ
    0x59EB60 | public: virtual void __thiscall mmCompBase::DisableBlt(void) | ?DisableBlt@mmCompBase@@UAEXXZ
    0x59EB70 | public: virtual void __thiscall mmCompBase::SetBltXY(float,float) | ?SetBltXY@mmCompBase@@UAEXMM@Z
    0x59EB90 | public: virtual void __thiscall mmCompBase::Action(union eqEvent) | ?Action@mmCompBase@@UAEXTeqEvent@@@Z
    0x59EBA0 | public: virtual void __thiscall mmCompBase::CaptureAction(union eqEvent) | ?CaptureAction@mmCompBase@@UAEXTeqEvent@@@Z
    0x59EBB0 | public: virtual void __thiscall mmCompBase::Switch(int) | ?Switch@mmCompBase@@UAEXH@Z
    0x59EBC0 | public: virtual void __thiscall mmCompBase::Action(union eqEvent,float,float,int) | ?Action@mmCompBase@@UAEXTeqEvent@@MMH@Z
    0x59EBD0 | public: virtual void __thiscall mmCompBase::EvalMouseXY(float,float) | ?EvalMouseXY@mmCompBase@@UAEXMM@Z
    0x59EBE0 | public: virtual void __thiscall mmCompBase::Highlight(class mmTextNode *,int) | ?Highlight@mmCompBase@@UAEXPAVmmTextNode@@H@Z
    0x59EBF0 | public: virtual void __thiscall mmCompBase::Box(int,class mmTextNode *,int) | ?Box@mmCompBase@@UAEXHPAVmmTextNode@@H@Z
    0x59EC00 | public: virtual void __thiscall mmCompBase::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompBase@@UAEXMMMM@Z
    0x59EC20 | public: virtual void * __thiscall mmCompBase::`scalar deleting destructor'(unsigned int) | ??_GmmCompBase@@UAEPAXI@Z
    public: virtual void * __thiscall mmCompBase::`vector deleting destructor'(unsigned int) | ??_EmmCompBase@@UAEPAXI@Z
    0x5B87D4 | const mmCompCity::`vftable' | ??_7mmCompCity@@6B@
    0x5B8834 | const mmCompBase::`vftable' | ??_7mmCompBase@@6B@
*/

class mmCompBase : asNode
{
public:
    // mmCompBase::`vftable' @ 0x5B8834

    // 0x59EB50 | ??1mmCompBase@@UAE@XZ
    inline ~mmCompBase() override
    {
        stub<member_func_t<void, mmCompBase>>(0x59EB50, this);
    }

    // 0x59FF30 | ?Update@mmCompBase@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCompBase>>(0x59FF30, this);
    }

    // 0x59FF20 | ?Reset@mmCompBase@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCompBase>>(0x59FF20, this);
    }

    // 0x59EB60 | ?DisableBlt@mmCompBase@@UAEXXZ
    virtual inline void DisableBlt()
    {
        return stub<member_func_t<void, mmCompBase>>(0x59EB60, this);
    }

    // 0x59EB70 | ?SetBltXY@mmCompBase@@UAEXMM@Z
    virtual inline void SetBltXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmCompBase, float, float>>(0x59EB70, this, arg1, arg2);
    }

    // 0x59EBC0 | ?Action@mmCompBase@@UAEXTeqEvent@@MMH@Z
    virtual inline void Action(union eqEvent arg1, float arg2, float arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmCompBase, union eqEvent, float, float, int32_t>>(
            0x59EBC0, this, arg1, arg2, arg3, arg4);
    }

    // 0x59EB90 | ?Action@mmCompBase@@UAEXTeqEvent@@@Z
    virtual inline void Action(union eqEvent arg1)
    {
        return stub<member_func_t<void, mmCompBase, union eqEvent>>(0x59EB90, this, arg1);
    }

    // 0x59EBA0 | ?CaptureAction@mmCompBase@@UAEXTeqEvent@@@Z
    virtual inline void CaptureAction(union eqEvent arg1)
    {
        return stub<member_func_t<void, mmCompBase, union eqEvent>>(0x59EBA0, this, arg1);
    }

    // 0x59EBB0 | ?Switch@mmCompBase@@UAEXH@Z
    virtual inline void Switch(int32_t arg1)
    {
        return stub<member_func_t<void, mmCompBase, int32_t>>(0x59EBB0, this, arg1);
    }

    // 0x59EBD0 | ?EvalMouseXY@mmCompBase@@UAEXMM@Z
    virtual inline void EvalMouseXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmCompBase, float, float>>(0x59EBD0, this, arg1, arg2);
    }

    // 0x59EBE0 | ?Highlight@mmCompBase@@UAEXPAVmmTextNode@@H@Z
    virtual inline void Highlight(class mmTextNode* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCompBase, class mmTextNode*, int32_t>>(0x59EBE0, this, arg1, arg2);
    }

    // 0x59EBF0 | ?Box@mmCompBase@@UAEXHPAVmmTextNode@@H@Z
    virtual inline void Box(int32_t arg1, class mmTextNode* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, mmCompBase, int32_t, class mmTextNode*, int32_t>>(
            0x59EBF0, this, arg1, arg2, arg3);
    }

    // 0x59EC00 | ?SetGeometry@mmCompBase@@UAEXMMMM@Z
    virtual inline void SetGeometry(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, mmCompBase, float, float, float, float>>(
            0x59EC00, this, arg1, arg2, arg3, arg4);
    }

    // 0x582519 | __purecall
    virtual inline void SetPosition(class mmTextNode* arg1, int32_t arg2, float arg3)
    {
        return stub<member_func_t<void, mmCompBase, class mmTextNode*, int32_t, float>>(
            0x582519, this, arg1, arg2, arg3);
    }
};

struct mmCompCity : mmCompBase
{
public:
    // mmCompCity::`vftable' @ 0x5B87D4

    // 0x59E7E0 | ??0mmCompCity@@QAE@XZ
    inline mmCompCity()
    {
        stub<member_func_t<void, mmCompCity>>(0x59E7E0, this);
    }

    // 0x59E8A0 | ?Init@mmCompCity@@QAEXPADHHH@Z
    inline void Init(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
    {
        return stub<member_func_t<void, mmCompCity, char*, int32_t, int32_t, int32_t>>(
            0x59E8A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x59E910 | ?InitTitle@mmCompCity@@QAEXMMMMPAULocString@@000@Z
    inline void InitTitle(float arg1, float arg2, float arg3, float arg4, struct LocString* arg5,
        struct LocString* arg6, struct LocString* arg7, struct LocString* arg8)
    {
        return stub<member_func_t<void, mmCompCity, float, float, float, float, struct LocString*, struct LocString*,
            struct LocString*, struct LocString*>>(0x59E910, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x59E9A0 | ?SetSubwidgetGeometry@mmCompCity@@QAEXXZ
    inline void SetSubwidgetGeometry()
    {
        return stub<member_func_t<void, mmCompCity>>(0x59E9A0, this);
    }

    // 0x59EA00 | ?SetTitleGeometry@mmCompCity@@QAEXXZ
    inline void SetTitleGeometry()
    {
        return stub<member_func_t<void, mmCompCity>>(0x59EA00, this);
    }

    // 0x59E810 | ??1mmCompCity@@UAE@XZ
    inline ~mmCompCity() override
    {
        stub<member_func_t<void, mmCompCity>>(0x59E810, this);
    }

    // 0x59EB10 | ?Cull@mmCompCity@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCompCity>>(0x59EB10, this);
    }

    // 0x59E990 | ?Update@mmCompCity@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCompCity>>(0x59E990, this);
    }

    // 0x59E980 | ?Reset@mmCompCity@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCompCity>>(0x59E980, this);
    }

    // 0x59EA60 | ?Highlight@mmCompCity@@UAEXPAVmmTextNode@@H@Z
    inline void Highlight(class mmTextNode* arg1, int32_t arg2) override
    {
        return stub<member_func_t<void, mmCompCity, class mmTextNode*, int32_t>>(0x59EA60, this, arg1, arg2);
    }

    // 0x59EAB0 | ?Box@mmCompCity@@UAEXHPAVmmTextNode@@H@Z
    inline void Box(int32_t arg1, class mmTextNode* arg2, int32_t arg3) override
    {
        return stub<member_func_t<void, mmCompCity, int32_t, class mmTextNode*, int32_t>>(
            0x59EAB0, this, arg1, arg2, arg3);
    }

    // 0x59EAE0 | ?SetGeometry@mmCompCity@@UAEXMMMM@Z
    inline void SetGeometry(float arg1, float arg2, float arg3, float arg4) override
    {
        return stub<member_func_t<void, mmCompCity, float, float, float, float>>(
            0x59EAE0, this, arg1, arg2, arg3, arg4);
    }

    // 0x59EA20 | ?SetPosition@mmCompCity@@UAEXPAVmmTextNode@@HM@Z
    inline void SetPosition(class mmTextNode* arg1, int32_t arg2, float arg3) override
    {
        return stub<member_func_t<void, mmCompCity, class mmTextNode*, int32_t, float>>(
            0x59EA20, this, arg1, arg2, arg3);
    }
};
