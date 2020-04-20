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
    mmwidget:tscroll

    0x4EA1E0 | public: __thiscall UITextScroll::UITextScroll(void) | ??0UITextScroll@@QAE@XZ
    0x4EA2F0 | public: virtual __thiscall UITextScroll::~UITextScroll(void) | ??1UITextScroll@@UAE@XZ
    0x4EA3D0 | public: void __thiscall UITextScroll::Init(void *,float,float,float,float,class string,int,int *,class datCallback) | ?Init@UITextScroll@@QAEXPAXMMMMVstring@@HPAHVdatCallback@@@Z
    0x4EA730 | public: void __thiscall UITextScroll::InitVScroll(float,float,float) | ?InitVScroll@UITextScroll@@QAEXMMM@Z
    0x4EA740 | public: void __thiscall UITextScroll::VScrollCB(void) | ?VScrollCB@UITextScroll@@QAEXXZ
    0x4EA780 | public: void __thiscall UITextScroll::SetVScrollVals(void) | ?SetVScrollVals@UITextScroll@@QAEXXZ
    0x4EA7A0 | public: void __thiscall UITextScroll::SetVScrollPos(void) | ?SetVScrollPos@UITextScroll@@QAEXXZ
    0x4EA7D0 | public: void __thiscall UITextScroll::Recalc(class string) | ?Recalc@UITextScroll@@QAEXVstring@@@Z
    0x4EA950 | private: void __thiscall UITextScroll::FillScroll(void) | ?FillScroll@UITextScroll@@AAEXXZ
    0x4EAA30 | public: void __thiscall UITextScroll::GetCurrentString(char *,int) | ?GetCurrentString@UITextScroll@@QAEXPADH@Z
    0x4EAA80 | public: void __thiscall UITextScroll::SetHighlight(int) | ?SetHighlight@UITextScroll@@QAEXH@Z
    0x4EAAD0 | public: int __thiscall UITextScroll::GetHit(float,float) | ?GetHit@UITextScroll@@QAEHMM@Z
    0x4EAB50 | private: void __thiscall UITextScroll::KeyAction(void) | ?KeyAction@UITextScroll@@AAEXXZ
    0x4EABB0 | public: virtual void __thiscall UITextScroll::Action(union eqEvent) | ?Action@UITextScroll@@UAEXTeqEvent@@@Z
    0x4EAC70 | public: virtual void __thiscall UITextScroll::Switch(int) | ?Switch@UITextScroll@@UAEXH@Z
    0x4EACB0 | private: void __thiscall UITextScroll::SetTextColor(void) | ?SetTextColor@UITextScroll@@AAEXXZ
    0x4EAD10 | public: void __thiscall UITextScroll::SetText(int,struct LocString *) | ?SetText@UITextScroll@@QAEXHPAULocString@@@Z
    0x4EAD50 | private: void __thiscall UITextScroll::ResetTextScroll(void) | ?ResetTextScroll@UITextScroll@@AAEXXZ
    0x4EADD0 | private: void __thiscall UITextScroll::InitTextScroll(class string) | ?InitTextScroll@UITextScroll@@AAEXVstring@@@Z
    0x4EAF00 | private: void __thiscall UITextScroll::AddTextScrollLine(char *,int) | ?AddTextScrollLine@UITextScroll@@AAEXPADH@Z
    0x4EAF80 | private: void __thiscall UITextScroll::AddTextScrollLine(char *) | ?AddTextScrollLine@UITextScroll@@AAEXPAD@Z
    0x4EB020 | public: virtual void * __thiscall UITextScroll::`scalar deleting destructor'(unsigned int) | ??_GUITextScroll@@UAEPAXI@Z
    public: virtual void * __thiscall UITextScroll::`vector deleting destructor'(unsigned int) | ??_EUITextScroll@@UAEPAXI@Z
    0x5B3518 | const UITextScroll::`vftable' | ??_7UITextScroll@@6B@
*/

class UITextScroll : uiWidget
{
public:
    // UITextScroll::`vftable' @ 0x5B3518

    // 0x4EA1E0 | ??0UITextScroll@@QAE@XZ
    inline UITextScroll()
    {
        stub<member_func_t<void, UITextScroll>>(0x4EA1E0, this);
    }

    // 0x4EA3D0 | ?Init@UITextScroll@@QAEXPAXMMMMVstring@@HPAHVdatCallback@@@Z
    inline void Init(void* arg1, float arg2, float arg3, float arg4, float arg5, class string arg6, int32_t arg7,
        int32_t* arg8, class datCallback arg9)
    {
        return stub<member_func_t<void, UITextScroll, void*, float, float, float, float, class string, int32_t,
            int32_t*, class datCallback>>(0x4EA3D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x4EA730 | ?InitVScroll@UITextScroll@@QAEXMMM@Z
    inline void InitVScroll(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, UITextScroll, float, float, float>>(0x4EA730, this, arg1, arg2, arg3);
    }

    // 0x4EA740 | ?VScrollCB@UITextScroll@@QAEXXZ
    inline void VScrollCB()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4EA740, this);
    }

    // 0x4EA780 | ?SetVScrollVals@UITextScroll@@QAEXXZ
    inline void SetVScrollVals()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4EA780, this);
    }

    // 0x4EA7A0 | ?SetVScrollPos@UITextScroll@@QAEXXZ
    inline void SetVScrollPos()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4EA7A0, this);
    }

    // 0x4EA7D0 | ?Recalc@UITextScroll@@QAEXVstring@@@Z
    inline void Recalc(class string arg1)
    {
        return stub<member_func_t<void, UITextScroll, class string>>(0x4EA7D0, this, arg1);
    }

    // 0x4EA950 | ?FillScroll@UITextScroll@@AAEXXZ
    inline void FillScroll()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4EA950, this);
    }

    // 0x4EAA30 | ?GetCurrentString@UITextScroll@@QAEXPADH@Z
    inline void GetCurrentString(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, UITextScroll, char*, int32_t>>(0x4EAA30, this, arg1, arg2);
    }

    // 0x4EAA80 | ?SetHighlight@UITextScroll@@QAEXH@Z
    inline void SetHighlight(int32_t arg1)
    {
        return stub<member_func_t<void, UITextScroll, int32_t>>(0x4EAA80, this, arg1);
    }

    // 0x4EAAD0 | ?GetHit@UITextScroll@@QAEHMM@Z
    inline int32_t GetHit(float arg1, float arg2)
    {
        return stub<member_func_t<int32_t, UITextScroll, float, float>>(0x4EAAD0, this, arg1, arg2);
    }

    // 0x4EAB50 | ?KeyAction@UITextScroll@@AAEXXZ
    inline void KeyAction()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4EAB50, this);
    }

    // 0x4EACB0 | ?SetTextColor@UITextScroll@@AAEXXZ
    inline void SetTextColor()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4EACB0, this);
    }

    // 0x4EAD10 | ?SetText@UITextScroll@@QAEXHPAULocString@@@Z
    inline void SetText(int32_t arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, UITextScroll, int32_t, struct LocString*>>(0x4EAD10, this, arg1, arg2);
    }

    // 0x4EAD50 | ?ResetTextScroll@UITextScroll@@AAEXXZ
    inline void ResetTextScroll()
    {
        return stub<member_func_t<void, UITextScroll>>(0x4EAD50, this);
    }

    // 0x4EADD0 | ?InitTextScroll@UITextScroll@@AAEXVstring@@@Z
    inline void InitTextScroll(class string arg1)
    {
        return stub<member_func_t<void, UITextScroll, class string>>(0x4EADD0, this, arg1);
    }

    // 0x4EAF00 | ?AddTextScrollLine@UITextScroll@@AAEXPADH@Z
    inline void AddTextScrollLine(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, UITextScroll, char*, int32_t>>(0x4EAF00, this, arg1, arg2);
    }

    // 0x4EAF80 | ?AddTextScrollLine@UITextScroll@@AAEXPAD@Z
    inline void AddTextScrollLine(char* arg1)
    {
        return stub<member_func_t<void, UITextScroll, char*>>(0x4EAF80, this, arg1);
    }

    // 0x4EA2F0 | ??1UITextScroll@@UAE@XZ
    inline ~UITextScroll() override
    {
        stub<member_func_t<void, UITextScroll>>(0x4EA2F0, this);
    }

    // 0x4EABB0 | ?Action@UITextScroll@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextScroll, union eqEvent>>(0x4EABB0, this, arg1);
    }

    // 0x4EAC70 | ?Switch@UITextScroll@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UITextScroll, int32_t>>(0x4EAC70, this, arg1);
    }
};
