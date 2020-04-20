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
    mmwidget:compscroll

    0x4EB050 | public: __thiscall UICompositeScroll::UICompositeScroll(void) | ??0UICompositeScroll@@QAE@XZ
    0x4EB140 | public: virtual __thiscall UICompositeScroll::~UICompositeScroll(void) | ??1UICompositeScroll@@UAE@XZ
    0x4EB1E0 | public: void __thiscall UICompositeScroll::Init(float,float,float,float,float,int,int *,int,int,class datCallback) | ?Init@UICompositeScroll@@QAEXMMMMMHPAHHHVdatCallback@@@Z
    0x4EB410 | public: void __thiscall UICompositeScroll::InitVScroll(float,float,float) | ?InitVScroll@UICompositeScroll@@QAEXMMM@Z
    0x4EB490 | public: void __thiscall UICompositeScroll::RemoveAllComponentChildren(void) | ?RemoveAllComponentChildren@UICompositeScroll@@QAEXXZ
    0x4EB4F0 | public: void __thiscall UICompositeScroll::AddComponent(class mmCompBase *) | ?AddComponent@UICompositeScroll@@QAEXPAVmmCompBase@@@Z
    0x4EB5C0 | public: void __thiscall UICompositeScroll::AddTitle(class mmCompBase *) | ?AddTitle@UICompositeScroll@@QAEXPAVmmCompBase@@@Z
    0x4EB5E0 | public: int __thiscall UICompositeScroll::GetSelectedCount(void) | ?GetSelectedCount@UICompositeScroll@@QAEHXZ
    0x4EB630 | public: void __thiscall UICompositeScroll::Redraw(void) | ?Redraw@UICompositeScroll@@QAEXXZ
    0x4EB760 | public: void __thiscall UICompositeScroll::VScrollCB(void) | ?VScrollCB@UICompositeScroll@@QAEXXZ
    0x4EB7D0 | public: void __thiscall UICompositeScroll::SetVScrollVals(void) | ?SetVScrollVals@UICompositeScroll@@QAEXXZ
    0x4EB820 | public: void __thiscall UICompositeScroll::SetVScrollPos(void) | ?SetVScrollPos@UICompositeScroll@@QAEXXZ
    0x4EB850 | public: virtual void __thiscall UICompositeScroll::Reset(void) | ?Reset@UICompositeScroll@@UAEXXZ
    0x4EB870 | public: virtual void __thiscall UICompositeScroll::Update(void) | ?Update@UICompositeScroll@@UAEXXZ
    0x4EB880 | public: int __thiscall UICompositeScroll::GetHit(float,float) | ?GetHit@UICompositeScroll@@QAEHMM@Z
    0x4EB900 | public: virtual void __thiscall UICompositeScroll::Action(union eqEvent) | ?Action@UICompositeScroll@@UAEXTeqEvent@@@Z
    0x4EBD10 | public: virtual void __thiscall UICompositeScroll::CaptureAction(union eqEvent) | ?CaptureAction@UICompositeScroll@@UAEXTeqEvent@@@Z
    0x4EBD80 | public: virtual void __thiscall UICompositeScroll::Switch(int) | ?Switch@UICompositeScroll@@UAEXH@Z
    0x4EBDC0 | public: void __thiscall UICompositeScroll::Clear(void) | ?Clear@UICompositeScroll@@QAEXXZ
    0x4EBDD0 | public: void __thiscall UICompositeScroll::SetHighlight(int) | ?SetHighlight@UICompositeScroll@@QAEXH@Z
    0x4EBDF0 | public: void __thiscall UICompositeScroll::SetHighlightComp(void) | ?SetHighlightComp@UICompositeScroll@@QAEXXZ
    0x4EBE90 | public: float __thiscall UICompositeScroll::GetHeight(void) | ?GetHeight@UICompositeScroll@@QAEMXZ
    0x4EBEB0 | public: void __thiscall UICompositeScroll::SetPosition(int) | ?SetPosition@UICompositeScroll@@QAEXH@Z
    0x4EBEF0 | public: virtual void * __thiscall UICompositeScroll::`scalar deleting destructor'(unsigned int) | ??_GUICompositeScroll@@UAEPAXI@Z
    public: virtual void * __thiscall UICompositeScroll::`vector deleting destructor'(unsigned int) | ??_EUICompositeScroll@@UAEPAXI@Z
    0x5B357C | const UICompositeScroll::`vftable' | ??_7UICompositeScroll@@6B@
*/

class UICompositeScroll : uiWidget
{
public:
    // UICompositeScroll::`vftable' @ 0x5B357C

    // 0x4EB050 | ??0UICompositeScroll@@QAE@XZ
    inline UICompositeScroll()
    {
        stub<member_func_t<void, UICompositeScroll>>(0x4EB050, this);
    }

    // 0x4EB1E0 | ?Init@UICompositeScroll@@QAEXMMMMMHPAHHHVdatCallback@@@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4, float arg5, int32_t arg6, int32_t* arg7,
        int32_t arg8, int32_t arg9, class datCallback arg10)
    {
        return stub<member_func_t<void, UICompositeScroll, float, float, float, float, float, int32_t, int32_t*,
            int32_t, int32_t, class datCallback>>(
            0x4EB1E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4EB410 | ?InitVScroll@UICompositeScroll@@QAEXMMM@Z
    inline void InitVScroll(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, UICompositeScroll, float, float, float>>(0x4EB410, this, arg1, arg2, arg3);
    }

    // 0x4EB490 | ?RemoveAllComponentChildren@UICompositeScroll@@QAEXXZ
    inline void RemoveAllComponentChildren()
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EB490, this);
    }

    // 0x4EB4F0 | ?AddComponent@UICompositeScroll@@QAEXPAVmmCompBase@@@Z
    inline void AddComponent(class mmCompBase* arg1)
    {
        return stub<member_func_t<void, UICompositeScroll, class mmCompBase*>>(0x4EB4F0, this, arg1);
    }

    // 0x4EB5C0 | ?AddTitle@UICompositeScroll@@QAEXPAVmmCompBase@@@Z
    inline void AddTitle(class mmCompBase* arg1)
    {
        return stub<member_func_t<void, UICompositeScroll, class mmCompBase*>>(0x4EB5C0, this, arg1);
    }

    // 0x4EB5E0 | ?GetSelectedCount@UICompositeScroll@@QAEHXZ
    inline int32_t GetSelectedCount()
    {
        return stub<member_func_t<int32_t, UICompositeScroll>>(0x4EB5E0, this);
    }

    // 0x4EB630 | ?Redraw@UICompositeScroll@@QAEXXZ
    inline void Redraw()
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EB630, this);
    }

    // 0x4EB760 | ?VScrollCB@UICompositeScroll@@QAEXXZ
    inline void VScrollCB()
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EB760, this);
    }

    // 0x4EB7D0 | ?SetVScrollVals@UICompositeScroll@@QAEXXZ
    inline void SetVScrollVals()
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EB7D0, this);
    }

    // 0x4EB820 | ?SetVScrollPos@UICompositeScroll@@QAEXXZ
    inline void SetVScrollPos()
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EB820, this);
    }

    // 0x4EB880 | ?GetHit@UICompositeScroll@@QAEHMM@Z
    inline int32_t GetHit(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, UICompositeScroll, float, float>>(0x4EB880, this, arg1, arg2);
    }

    // 0x4EBDC0 | ?Clear@UICompositeScroll@@QAEXXZ
    inline void Clear()
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EBDC0, this);
    }

    // 0x4EBDD0 | ?SetHighlight@UICompositeScroll@@QAEXH@Z
    inline void SetHighlight(int32_t arg1)
    {
        return stub<member_func_t<void, UICompositeScroll, int32_t>>(0x4EBDD0, this, arg1);
    }

    // 0x4EBDF0 | ?SetHighlightComp@UICompositeScroll@@QAEXXZ
    inline void SetHighlightComp()
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EBDF0, this);
    }

    // 0x4EBE90 | ?GetHeight@UICompositeScroll@@QAEMXZ
    inline float GetHeight()
    {
        return stub<member_func_t<float, UICompositeScroll>>(0x4EBE90, this);
    }

    // 0x4EBEB0 | ?SetPosition@UICompositeScroll@@QAEXH@Z
    inline void SetPosition(int32_t arg1)
    {
        return stub<member_func_t<void, UICompositeScroll, int32_t>>(0x4EBEB0, this, arg1);
    }

    // 0x4EB140 | ??1UICompositeScroll@@UAE@XZ
    inline ~UICompositeScroll() override
    {
        stub<member_func_t<void, UICompositeScroll>>(0x4EB140, this);
    }

    // 0x4EB870 | ?Update@UICompositeScroll@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EB870, this);
    }

    // 0x4EB850 | ?Reset@UICompositeScroll@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, UICompositeScroll>>(0x4EB850, this);
    }

    // 0x4EB900 | ?Action@UICompositeScroll@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UICompositeScroll, union eqEvent>>(0x4EB900, this, arg1);
    }

    // 0x4EBD10 | ?CaptureAction@UICompositeScroll@@UAEXTeqEvent@@@Z
    inline void CaptureAction(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UICompositeScroll, union eqEvent>>(0x4EBD10, this, arg1);
    }

    // 0x4EBD80 | ?Switch@UICompositeScroll@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UICompositeScroll, int32_t>>(0x4EBD80, this, arg1);
    }
};
