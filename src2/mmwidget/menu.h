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
    mmwidget:menu

    0x4E0770 | public: __thiscall UIMenu::UIMenu(int) | ??0UIMenu@@QAE@H@Z
    0x4E0870 | public: virtual __thiscall UIMenu::~UIMenu(void) | ??1UIMenu@@UAE@XZ
    0x4E0930 | public: void __thiscall UIMenu::AssignName(struct LocString *) | ?AssignName@UIMenu@@QAEXPAULocString@@@Z
    0x4E0980 | public: void __thiscall UIMenu::AssignBackground(char *) | ?AssignBackground@UIMenu@@QAEXPAD@Z
    0x4E09D0 | public: void __thiscall UIMenu::Enable(void) | ?Enable@UIMenu@@QAEXXZ
    0x4E0A40 | public: void __thiscall UIMenu::Disable(void) | ?Disable@UIMenu@@QAEXXZ
    0x4E0A60 | public: virtual void __thiscall UIMenu::PreSetup(void) | ?PreSetup@UIMenu@@UAEXXZ
    0x4E0A70 | public: virtual void __thiscall UIMenu::PostSetup(void) | ?PostSetup@UIMenu@@UAEXXZ
    0x4E0A80 | public: virtual void __thiscall UIMenu::Update(void) | ?Update@UIMenu@@UAEXXZ
    0x4E0A90 | public: void __thiscall UIMenu::SetAction(enum UIMenu::eSource) | ?SetAction@UIMenu@@QAEXW4eSource@1@@Z
    0x4E0AB0 | public: void __thiscall UIMenu::ForceWidgetAction(int) | ?ForceWidgetAction@UIMenu@@QAEXH@Z
    0x4E0AD0 | public: void __thiscall UIMenu::ClearAction(void) | ?ClearAction@UIMenu@@QAEXXZ
    0x4E0AE0 | public: void __thiscall UIMenu::ClearToolTip(void) | ?ClearToolTip@UIMenu@@QAEXXZ
    0x4E0B10 | public: virtual void __thiscall UIMenu::BackUp(void) | ?BackUp@UIMenu@@UAEXXZ
    0x4E0B20 | public: void __thiscall UIMenu::SetBstate(int) | ?SetBstate@UIMenu@@QAEXH@Z
    0x4E0B50 | public: void __thiscall UIMenu::SetFocusWidget(int) | ?SetFocusWidget@UIMenu@@QAEXH@Z
    0x4E0B90 | public: int __thiscall UIMenu::GetWidgetID(void) | ?GetWidgetID@UIMenu@@QAEHXZ
    0x4E0BA0 | public: int __thiscall UIMenu::GetBstate(void) | ?GetBstate@UIMenu@@QAEHXZ
    0x4E0BB0 | public: void __thiscall UIMenu::GetDimensions(float &,float &,float &,float &) | ?GetDimensions@UIMenu@@QAEXAAM000@Z
    0x4E0BE0 | public: void __thiscall UIMenu::DisableIME(void) | ?DisableIME@UIMenu@@QAEXXZ
    0x4E0C00 | public: int __thiscall UIMenu::FindTheFirstFocusWidget(void) | ?FindTheFirstFocusWidget@UIMenu@@QAEHXZ
    0x4E0C40 | public: int __thiscall UIMenu::Increment(void) | ?Increment@UIMenu@@QAEHXZ
    0x4E0CF0 | public: int __thiscall UIMenu::Decrement(void) | ?Decrement@UIMenu@@QAEHXZ
    0x4E0DA0 | public: int __thiscall UIMenu::ScanInput(union eqEvent *) | ?ScanInput@UIMenu@@QAEHPATeqEvent@@@Z
    0x4E0DE0 | public: virtual void __thiscall UIMenu::CheckInput(void) | ?CheckInput@UIMenu@@UAEXXZ
    0x4E0E70 | public: void __thiscall UIMenu::ScaleWidget(float &,float &,float &,float &) | ?ScaleWidget@UIMenu@@QAEXAAM000@Z
    0x4E0EB0 | public: class uiWidget * __thiscall UIMenu::AddHotSpot(int,char *,float,float,float,float,class datCallback) | ?AddHotSpot@UIMenu@@QAEPAVuiWidget@@HPADMMMMVdatCallback@@@Z
    0x4E0F90 | public: class UITextDropdown * __thiscall UIMenu::AddTextDropdown(int,struct LocString *,int *,float,float,float,float,class string,int,int,int,class datCallback,char *,class datCallback) | ?AddTextDropdown@UIMenu@@QAEPAVUITextDropdown@@HPAULocString@@PAHMMMMVstring@@HHHVdatCallback@@PAD3@Z
    0x4E1120 | public: class UITextRoller * __thiscall UIMenu::AddTextRoller(int,struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class datCallback) | ?AddTextRoller@UIMenu@@QAEPAVUITextRoller@@HPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@@Z
    0x4E1270 | public: class UITextRoller2 * __thiscall UIMenu::AddTextRoller2(int,struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class datCallback) | ?AddTextRoller2@UIMenu@@QAEPAVUITextRoller2@@HPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@@Z
    0x4E13E0 | public: class UITextScroll * __thiscall UIMenu::AddTextScroll(int,void *,float,float,float,float,class string,int,int *,class datCallback) | ?AddTextScroll@UIMenu@@QAEPAVUITextScroll@@HPAXMMMMVstring@@HPAHVdatCallback@@@Z
    0x4E1580 | public: class UICompositeScroll * __thiscall UIMenu::AddCompScroll(int,float,float,float,float,float,int,int *,int,int,class datCallback) | ?AddCompScroll@UIMenu@@QAEPAVUICompositeScroll@@HMMMMMHPAHHHVdatCallback@@@Z
    0x4E1700 | public: class UITextField * __thiscall UIMenu::AddTextField(int,struct LocString *,char *,float,float,float,float,int,int,int,int,int,class datCallback) | ?AddTextField@UIMenu@@QAEPAVUITextField@@HPAULocString@@PADMMMMHHHHHVdatCallback@@@Z
    0x4E1860 | public: class UIControlWidget * __thiscall UIMenu::AddUIControl(int,float,float,float,float,float,class mmIO *,class datCallback) | ?AddUIControl@UIMenu@@QAEPAVUIControlWidget@@HMMMMMPAVmmIO@@VdatCallback@@@Z
    0x4E1940 | public: class UISlider * __thiscall UIMenu::AddSlider(int,struct LocString *,float *,float,float,float,float,float,float,int,int,int,int,class datCallback,class datCallback) | ?AddSlider@UIMenu@@QAEPAVUISlider@@HPAULocString@@PAMMMMMMMHHHHVdatCallback@@2@Z
    0x4E1A90 | public: class UIButton * __thiscall UIMenu::AddButton(int,struct LocString *,float,float,float,float,int,int,class datCallback,int) | ?AddButton@UIMenu@@QAEPAVUIButton@@HPAULocString@@MMMMHHVdatCallback@@H@Z
    0x4E1BB0 | public: class UILabel * __thiscall UIMenu::AddLabel(int,struct LocString *,float,float,float,float,int,int) | ?AddLabel@UIMenu@@QAEPAVUILabel@@HPAULocString@@MMMMHH@Z
    0x4E1CB0 | public: class UIBMLabel * __thiscall UIMenu::AddBMLabel(int,char *,class string *,float,float,int *) | ?AddBMLabel@UIMenu@@QAEPAVUIBMLabel@@HPADPAVstring@@MMPAH@Z
    0x4E1DC0 | public: class UIIcon * __thiscall UIMenu::AddIcon(int,char *,float,float) | ?AddIcon@UIMenu@@QAEPAVUIIcon@@HPADMM@Z
    0x4E1ED0 | public: class UIIconW * __thiscall UIMenu::AddIconW(int,struct LocString *,char *,float,float,float,float,class datCallback) | ?AddIconW@UIMenu@@QAEPAVUIIconW@@HPAULocString@@PADMMMMVdatCallback@@@Z
    0x4E1FE0 | public: class UIToggleButton * __thiscall UIMenu::AddToggle(int,struct LocString *,int *,float,float,float,float,int,int,class datCallback) | ?AddToggle@UIMenu@@QAEPAVUIToggleButton@@HPAULocString@@PAHMMMMHHVdatCallback@@@Z
    0x4E2100 | public: class UIToggleButton2 * __thiscall UIMenu::AddToggle2(int,struct LocString *,int *,float,float,float,float,int,int,class datCallback) | ?AddToggle2@UIMenu@@QAEPAVUIToggleButton2@@HPAULocString@@PAHMMMMHHVdatCallback@@@Z
    0x4E2220 | public: class UIMexButton * __thiscall UIMenu::AddMex(int,struct LocString *,int *,int,float,float,float,float,int,int,class datCallback) | ?AddMex@UIMenu@@QAEPAVUIMexButton@@HPAULocString@@PAHHMMMMHHVdatCallback@@@Z
    0x4E2340 | public: class UIBMButton * __thiscall UIMenu::AddBMButton(int,char *,float,float,int,class datCallback,int *,int,int,class datCallback) | ?AddBMButton@UIMenu@@QAEPAVUIBMButton@@HPADMMHVdatCallback@@PAHHH1@Z
    0x4E24D0 | public: class UICWArray * __thiscall UIMenu::AddCWArray(int,float,float,float,float,int,class datCallback) | ?AddCWArray@UIMenu@@QAEPAVUICWArray@@HMMMMHVdatCallback@@@Z
    0x4E2610 | public: class UIVScrollBar * __thiscall UIMenu::AddVScrollBar(int,int *,float,float,float,float,float,float,int,int,class datCallback) | ?AddVScrollBar@UIMenu@@QAEPAVUIVScrollBar@@HPAHMMMMMMHHVdatCallback@@@Z
    0x4E2760 | public: void __thiscall UIMenu::MouseAction(union eqEvent) | ?MouseAction@UIMenu@@QAEXTeqEvent@@@Z
    0x4E27D0 | public: void __thiscall UIMenu::KeyboardAction(union eqEvent) | ?KeyboardAction@UIMenu@@QAEXTeqEvent@@@Z
    0x4E2860 | public: class uiWidget * __thiscall UIMenu::MouseHitCheck(int,float,float) | ?MouseHitCheck@UIMenu@@QAEPAVuiWidget@@HMM@Z
    0x4E2960 | public: void __thiscall UIMenu::SetSelected(void) | ?SetSelected@UIMenu@@QAEXXZ
    0x4E2990 | public: void __thiscall UIMenu::ClearSelected(void) | ?ClearSelected@UIMenu@@QAEXXZ
    0x4E29C0 | public: void __thiscall UIMenu::ClearWidgets(void) | ?ClearWidgets@UIMenu@@QAEXXZ
    0x4E29F0 | public: void __thiscall UIMenu::CheckMouseHits(void) | ?CheckMouseHits@UIMenu@@QAEXXZ
    0x4E2B40 | public: void __thiscall UIMenu::AddWidget(class uiWidget *,char *,float,float,float,float,int,char *) | ?AddWidget@UIMenu@@QAEXPAVuiWidget@@PADMMMMH1@Z
    0x4E2D40 | public: virtual void * __thiscall UIMenu::`scalar deleting destructor'(unsigned int) | ??_GUIMenu@@UAEPAXI@Z
    public: virtual void * __thiscall UIMenu::`vector deleting destructor'(unsigned int) | ??_EUIMenu@@UAEPAXI@Z
    0x4E2D70 | public: virtual int __thiscall UIMenu::IsAnOptionMenu(void) | ?IsAnOptionMenu@UIMenu@@UAEHXZ
    0x4E2D80 | public: __thiscall string::string(class string const &) | ??0string@@QAE@ABV0@@Z
    0x5B3234 | const UIMenu::`vftable' | ??_7UIMenu@@6B@
    public: static float UIMenu::UI_LEFT_MARGIN | ?UI_LEFT_MARGIN@UIMenu@@2MA
    public: static float UIMenu::UI_LEFT_MARGIN2 | ?UI_LEFT_MARGIN2@UIMenu@@2MA
    public: static float UIMenu::UI_TOP_MARGIN | ?UI_TOP_MARGIN@UIMenu@@2MA
    public: static float UIMenu::UI_BOTTOM_MARGIN | ?UI_BOTTOM_MARGIN@UIMenu@@2MA
    public: static float UIMenu::WIDGET_WIDTH | ?WIDGET_WIDTH@UIMenu@@2MA
    public: static float UIMenu::WIDGET_HEIGHT | ?WIDGET_HEIGHT@UIMenu@@2MA
    public: static float UIMenu::UI_RIGHT_MARGIN | ?UI_RIGHT_MARGIN@UIMenu@@2MA
*/

class UIMenu : asNode
{
public:
    // UIMenu::`vftable' @ 0x5B3234

    // 0x4E0770 | ??0UIMenu@@QAE@H@Z
    inline UIMenu(int32_t arg1)
    {
        stub<member_func_t<void, UIMenu, int32_t>>(0x4E0770, this, arg1);
    }

    // 0x4E0930 | ?AssignName@UIMenu@@QAEXPAULocString@@@Z
    inline void AssignName(struct LocString* arg1)
    {
        return stub<member_func_t<void, UIMenu, struct LocString*>>(0x4E0930, this, arg1);
    }

    // 0x4E0980 | ?AssignBackground@UIMenu@@QAEXPAD@Z
    inline void AssignBackground(char* arg1)
    {
        return stub<member_func_t<void, UIMenu, char*>>(0x4E0980, this, arg1);
    }

    // 0x4E09D0 | ?Enable@UIMenu@@QAEXXZ
    inline void Enable()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E09D0, this);
    }

    // 0x4E0A40 | ?Disable@UIMenu@@QAEXXZ
    inline void Disable()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0A40, this);
    }

    // 0x4E0A90 | ?SetAction@UIMenu@@QAEXW4eSource@1@@Z
    inline void SetAction(enum UIMenu::eSource arg1)
    {
        return stub<member_func_t<void, UIMenu, enum UIMenu::eSource>>(0x4E0A90, this, arg1);
    }

    // 0x4E0AB0 | ?ForceWidgetAction@UIMenu@@QAEXH@Z
    inline void ForceWidgetAction(int32_t arg1)
    {
        return stub<member_func_t<void, UIMenu, int32_t>>(0x4E0AB0, this, arg1);
    }

    // 0x4E0AD0 | ?ClearAction@UIMenu@@QAEXXZ
    inline void ClearAction()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0AD0, this);
    }

    // 0x4E0AE0 | ?ClearToolTip@UIMenu@@QAEXXZ
    inline void ClearToolTip()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0AE0, this);
    }

    // 0x4E0B20 | ?SetBstate@UIMenu@@QAEXH@Z
    inline void SetBstate(int32_t arg1)
    {
        return stub<member_func_t<void, UIMenu, int32_t>>(0x4E0B20, this, arg1);
    }

    // 0x4E0B50 | ?SetFocusWidget@UIMenu@@QAEXH@Z
    inline void SetFocusWidget(int32_t arg1)
    {
        return stub<member_func_t<void, UIMenu, int32_t>>(0x4E0B50, this, arg1);
    }

    // 0x4E0B90 | ?GetWidgetID@UIMenu@@QAEHXZ
    inline int32_t GetWidgetID()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4E0B90, this);
    }

    // 0x4E0BA0 | ?GetBstate@UIMenu@@QAEHXZ
    inline int32_t GetBstate()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4E0BA0, this);
    }

    // 0x4E0BB0 | ?GetDimensions@UIMenu@@QAEXAAM000@Z
    inline void GetDimensions(float& arg1, float& arg2, float& arg3, float& arg4)
    {
        return stub<member_func_t<void, UIMenu, float&, float&, float&, float&>>(
            0x4E0BB0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E0BE0 | ?DisableIME@UIMenu@@QAEXXZ
    inline void DisableIME()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0BE0, this);
    }

    // 0x4E0C00 | ?FindTheFirstFocusWidget@UIMenu@@QAEHXZ
    inline int32_t FindTheFirstFocusWidget()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4E0C00, this);
    }

    // 0x4E0C40 | ?Increment@UIMenu@@QAEHXZ
    inline int32_t Increment()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4E0C40, this);
    }

    // 0x4E0CF0 | ?Decrement@UIMenu@@QAEHXZ
    inline int32_t Decrement()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4E0CF0, this);
    }

    // 0x4E0DA0 | ?ScanInput@UIMenu@@QAEHPATeqEvent@@@Z
    inline int32_t ScanInput(union eqEvent* arg1)
    {
        return stub<member_func_t<int32_t, UIMenu, union eqEvent*>>(0x4E0DA0, this, arg1);
    }

    // 0x4E0E70 | ?ScaleWidget@UIMenu@@QAEXAAM000@Z
    inline void ScaleWidget(float& arg1, float& arg2, float& arg3, float& arg4)
    {
        return stub<member_func_t<void, UIMenu, float&, float&, float&, float&>>(
            0x4E0E70, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E0EB0 | ?AddHotSpot@UIMenu@@QAEPAVuiWidget@@HPADMMMMVdatCallback@@@Z
    inline class uiWidget* AddHotSpot(
        int32_t arg1, char* arg2, float arg3, float arg4, float arg5, float arg6, class datCallback arg7)
    {
        return stub<
            member_func_t<class uiWidget*, UIMenu, int32_t, char*, float, float, float, float, class datCallback>>(
            0x4E0EB0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4E0F90 | ?AddTextDropdown@UIMenu@@QAEPAVUITextDropdown@@HPAULocString@@PAHMMMMVstring@@HHHVdatCallback@@PAD3@Z
    inline class UITextDropdown* AddTextDropdown(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4,
        float arg5, float arg6, float arg7, class string arg8, int32_t arg9, int32_t arg10, int32_t arg11,
        class datCallback arg12, char* arg13, class datCallback arg14)
    {
        return stub<member_func_t<class UITextDropdown*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, class string, int32_t, int32_t, int32_t, class datCallback, char*, class datCallback>>(
            0x4E0F90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }

    // 0x4E1120 | ?AddTextRoller@UIMenu@@QAEPAVUITextRoller@@HPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@@Z
    inline class UITextRoller* AddTextRoller(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4,
        float arg5, float arg6, float arg7, class string arg8, int32_t arg9, int32_t arg10, int32_t arg11,
        int32_t arg12, class datCallback arg13)
    {
        return stub<member_func_t<class UITextRoller*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, class string, int32_t, int32_t, int32_t, int32_t, class datCallback>>(
            0x4E1120, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4E1270 | ?AddTextRoller2@UIMenu@@QAEPAVUITextRoller2@@HPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@@Z
    inline class UITextRoller2* AddTextRoller2(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4,
        float arg5, float arg6, float arg7, class string arg8, int32_t arg9, int32_t arg10, int32_t arg11,
        int32_t arg12, class datCallback arg13)
    {
        return stub<member_func_t<class UITextRoller2*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, class string, int32_t, int32_t, int32_t, int32_t, class datCallback>>(
            0x4E1270, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4E13E0 | ?AddTextScroll@UIMenu@@QAEPAVUITextScroll@@HPAXMMMMVstring@@HPAHVdatCallback@@@Z
    inline class UITextScroll* AddTextScroll(int32_t arg1, void* arg2, float arg3, float arg4, float arg5, float arg6,
        class string arg7, int32_t arg8, int32_t* arg9, class datCallback arg10)
    {
        return stub<member_func_t<class UITextScroll*, UIMenu, int32_t, void*, float, float, float, float, class string,
            int32_t, int32_t*, class datCallback>>(
            0x4E13E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4E1580 | ?AddCompScroll@UIMenu@@QAEPAVUICompositeScroll@@HMMMMMHPAHHHVdatCallback@@@Z
    inline class UICompositeScroll* AddCompScroll(int32_t arg1, float arg2, float arg3, float arg4, float arg5,
        float arg6, int32_t arg7, int32_t* arg8, int32_t arg9, int32_t arg10, class datCallback arg11)
    {
        return stub<member_func_t<class UICompositeScroll*, UIMenu, int32_t, float, float, float, float, float, int32_t,
            int32_t*, int32_t, int32_t, class datCallback>>(
            0x4E1580, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4E1700 | ?AddTextField@UIMenu@@QAEPAVUITextField@@HPAULocString@@PADMMMMHHHHHVdatCallback@@@Z
    inline class UITextField* AddTextField(int32_t arg1, struct LocString* arg2, char* arg3, float arg4, float arg5,
        float arg6, float arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12,
        class datCallback arg13)
    {
        return stub<member_func_t<class UITextField*, UIMenu, int32_t, struct LocString*, char*, float, float, float,
            float, int32_t, int32_t, int32_t, int32_t, int32_t, class datCallback>>(
            0x4E1700, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4E1860 | ?AddUIControl@UIMenu@@QAEPAVUIControlWidget@@HMMMMMPAVmmIO@@VdatCallback@@@Z
    inline class UIControlWidget* AddUIControl(int32_t arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
        class mmIO* arg7, class datCallback arg8)
    {
        return stub<member_func_t<class UIControlWidget*, UIMenu, int32_t, float, float, float, float, float,
            class mmIO*, class datCallback>>(0x4E1860, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4E1940 | ?AddSlider@UIMenu@@QAEPAVUISlider@@HPAULocString@@PAMMMMMMMHHHHVdatCallback@@2@Z
    inline class UISlider* AddSlider(int32_t arg1, struct LocString* arg2, float* arg3, float arg4, float arg5,
        float arg6, float arg7, float arg8, float arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13,
        class datCallback arg14, class datCallback arg15)
    {
        return stub<member_func_t<class UISlider*, UIMenu, int32_t, struct LocString*, float*, float, float, float,
            float, float, float, int32_t, int32_t, int32_t, int32_t, class datCallback, class datCallback>>(0x4E1940,
            this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }

    // 0x4E1A90 | ?AddButton@UIMenu@@QAEPAVUIButton@@HPAULocString@@MMMMHHVdatCallback@@H@Z
    inline class UIButton* AddButton(int32_t arg1, struct LocString* arg2, float arg3, float arg4, float arg5,
        float arg6, int32_t arg7, int32_t arg8, class datCallback arg9, int32_t arg10)
    {
        return stub<member_func_t<class UIButton*, UIMenu, int32_t, struct LocString*, float, float, float, float,
            int32_t, int32_t, class datCallback, int32_t>>(
            0x4E1A90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4E1BB0 | ?AddLabel@UIMenu@@QAEPAVUILabel@@HPAULocString@@MMMMHH@Z
    inline class UILabel* AddLabel(int32_t arg1, struct LocString* arg2, float arg3, float arg4, float arg5, float arg6,
        int32_t arg7, int32_t arg8)
    {
        return stub<member_func_t<class UILabel*, UIMenu, int32_t, struct LocString*, float, float, float, float,
            int32_t, int32_t>>(0x4E1BB0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4E1CB0 | ?AddBMLabel@UIMenu@@QAEPAVUIBMLabel@@HPADPAVstring@@MMPAH@Z
    inline class UIBMLabel* AddBMLabel(
        int32_t arg1, char* arg2, class string* arg3, float arg4, float arg5, int32_t* arg6)
    {
        return stub<member_func_t<class UIBMLabel*, UIMenu, int32_t, char*, class string*, float, float, int32_t*>>(
            0x4E1CB0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4E1DC0 | ?AddIcon@UIMenu@@QAEPAVUIIcon@@HPADMM@Z
    inline class UIIcon* AddIcon(int32_t arg1, char* arg2, float arg3, float arg4)
    {
        return stub<member_func_t<class UIIcon*, UIMenu, int32_t, char*, float, float>>(
            0x4E1DC0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4E1ED0 | ?AddIconW@UIMenu@@QAEPAVUIIconW@@HPAULocString@@PADMMMMVdatCallback@@@Z
    inline class UIIconW* AddIconW(int32_t arg1, struct LocString* arg2, char* arg3, float arg4, float arg5, float arg6,
        float arg7, class datCallback arg8)
    {
        return stub<member_func_t<class UIIconW*, UIMenu, int32_t, struct LocString*, char*, float, float, float, float,
            class datCallback>>(0x4E1ED0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4E1FE0 | ?AddToggle@UIMenu@@QAEPAVUIToggleButton@@HPAULocString@@PAHMMMMHHVdatCallback@@@Z
    inline class UIToggleButton* AddToggle(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4, float arg5,
        float arg6, float arg7, int32_t arg8, int32_t arg9, class datCallback arg10)
    {
        return stub<member_func_t<class UIToggleButton*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, int32_t, int32_t, class datCallback>>(
            0x4E1FE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4E2100 | ?AddToggle2@UIMenu@@QAEPAVUIToggleButton2@@HPAULocString@@PAHMMMMHHVdatCallback@@@Z
    inline class UIToggleButton2* AddToggle2(int32_t arg1, struct LocString* arg2, int32_t* arg3, float arg4,
        float arg5, float arg6, float arg7, int32_t arg8, int32_t arg9, class datCallback arg10)
    {
        return stub<member_func_t<class UIToggleButton2*, UIMenu, int32_t, struct LocString*, int32_t*, float, float,
            float, float, int32_t, int32_t, class datCallback>>(
            0x4E2100, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4E2220 | ?AddMex@UIMenu@@QAEPAVUIMexButton@@HPAULocString@@PAHHMMMMHHVdatCallback@@@Z
    inline class UIMexButton* AddMex(int32_t arg1, struct LocString* arg2, int32_t* arg3, int32_t arg4, float arg5,
        float arg6, float arg7, float arg8, int32_t arg9, int32_t arg10, class datCallback arg11)
    {
        return stub<member_func_t<class UIMexButton*, UIMenu, int32_t, struct LocString*, int32_t*, int32_t, float,
            float, float, float, int32_t, int32_t, class datCallback>>(
            0x4E2220, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4E2340 | ?AddBMButton@UIMenu@@QAEPAVUIBMButton@@HPADMMHVdatCallback@@PAHHH1@Z
    inline class UIBMButton* AddBMButton(int32_t arg1, char* arg2, float arg3, float arg4, int32_t arg5,
        class datCallback arg6, int32_t* arg7, int32_t arg8, int32_t arg9, class datCallback arg10)
    {
        return stub<member_func_t<class UIBMButton*, UIMenu, int32_t, char*, float, float, int32_t, class datCallback,
            int32_t*, int32_t, int32_t, class datCallback>>(
            0x4E2340, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4E24D0 | ?AddCWArray@UIMenu@@QAEPAVUICWArray@@HMMMMHVdatCallback@@@Z
    inline class UICWArray* AddCWArray(
        int32_t arg1, float arg2, float arg3, float arg4, float arg5, int32_t arg6, class datCallback arg7)
    {
        return stub<
            member_func_t<class UICWArray*, UIMenu, int32_t, float, float, float, float, int32_t, class datCallback>>(
            0x4E24D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4E2610 | ?AddVScrollBar@UIMenu@@QAEPAVUIVScrollBar@@HPAHMMMMMMHHVdatCallback@@@Z
    inline class UIVScrollBar* AddVScrollBar(int32_t arg1, int32_t* arg2, float arg3, float arg4, float arg5,
        float arg6, float arg7, float arg8, int32_t arg9, int32_t arg10, class datCallback arg11)
    {
        return stub<member_func_t<class UIVScrollBar*, UIMenu, int32_t, int32_t*, float, float, float, float, float,
            float, int32_t, int32_t, class datCallback>>(
            0x4E2610, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4E2760 | ?MouseAction@UIMenu@@QAEXTeqEvent@@@Z
    inline void MouseAction(union eqEvent arg1)
    {
        return stub<member_func_t<void, UIMenu, union eqEvent>>(0x4E2760, this, arg1);
    }

    // 0x4E27D0 | ?KeyboardAction@UIMenu@@QAEXTeqEvent@@@Z
    inline void KeyboardAction(union eqEvent arg1)
    {
        return stub<member_func_t<void, UIMenu, union eqEvent>>(0x4E27D0, this, arg1);
    }

    // 0x4E2860 | ?MouseHitCheck@UIMenu@@QAEPAVuiWidget@@HMM@Z
    inline class uiWidget* MouseHitCheck(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<class uiWidget*, UIMenu, int32_t, float, float>>(0x4E2860, this, arg1, arg2, arg3);
    }

    // 0x4E2960 | ?SetSelected@UIMenu@@QAEXXZ
    inline void SetSelected()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E2960, this);
    }

    // 0x4E2990 | ?ClearSelected@UIMenu@@QAEXXZ
    inline void ClearSelected()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E2990, this);
    }

    // 0x4E29C0 | ?ClearWidgets@UIMenu@@QAEXXZ
    inline void ClearWidgets()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E29C0, this);
    }

    // 0x4E29F0 | ?CheckMouseHits@UIMenu@@QAEXXZ
    inline void CheckMouseHits()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E29F0, this);
    }

    // 0x4E2B40 | ?AddWidget@UIMenu@@QAEXPAVuiWidget@@PADMMMMH1@Z
    inline void AddWidget(
        class uiWidget* arg1, char* arg2, float arg3, float arg4, float arg5, float arg6, int32_t arg7, char* arg8)
    {
        return stub<member_func_t<void, UIMenu, class uiWidget*, char*, float, float, float, float, int32_t, char*>>(
            0x4E2B40, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4E0870 | ??1UIMenu@@UAE@XZ
    inline ~UIMenu() override
    {
        stub<member_func_t<void, UIMenu>>(0x4E0870, this);
    }

    // 0x4E0A80 | ?Update@UIMenu@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0A80, this);
    }

    // 0x4E0A60 | ?PreSetup@UIMenu@@UAEXXZ
    virtual inline void PreSetup()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0A60, this);
    }

    // 0x4E0A70 | ?PostSetup@UIMenu@@UAEXXZ
    virtual inline void PostSetup()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0A70, this);
    }

    // 0x4E0B10 | ?BackUp@UIMenu@@UAEXXZ
    virtual inline void BackUp()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0B10, this);
    }

    // 0x4E0DE0 | ?CheckInput@UIMenu@@UAEXXZ
    virtual inline void CheckInput()
    {
        return stub<member_func_t<void, UIMenu>>(0x4E0DE0, this);
    }

    // 0x4E2D70 | ?IsAnOptionMenu@UIMenu@@UAEHXZ
    virtual inline int32_t IsAnOptionMenu()
    {
        return stub<member_func_t<int32_t, UIMenu>>(0x4E2D70, this);
    }
};
