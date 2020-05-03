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

#include "node/node.h"

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

class UIMenu : public asNode
{
    // const UIMenu::`vftable' @ 0x5B3234

public:
    // 0x4E0770 | ??0UIMenu@@QAE@H@Z
    UIMenu(i32 arg1);

    // 0x4E2D40 | ??_GUIMenu@@UAEPAXI@Z
    // 0x4E0870 | ??1UIMenu@@UAE@XZ
    ~UIMenu() override;

    // 0x4E2340 | ?AddBMButton@UIMenu@@QAEPAVUIBMButton@@HPADMMHVdatCallback@@PAHHH1@Z
    class UIBMButton* AddBMButton(i32 arg1, char* arg2, f32 arg3, f32 arg4, i32 arg5, class datCallback arg6, i32* arg7,
        i32 arg8, i32 arg9, class datCallback arg10);

    // 0x4E1CB0 | ?AddBMLabel@UIMenu@@QAEPAVUIBMLabel@@HPADPAVstring@@MMPAH@Z
    class UIBMLabel* AddBMLabel(i32 arg1, char* arg2, class string* arg3, f32 arg4, f32 arg5, i32* arg6);

    // 0x4E1A90 | ?AddButton@UIMenu@@QAEPAVUIButton@@HPAULocString@@MMMMHHVdatCallback@@H@Z
    class UIButton* AddButton(i32 arg1, struct LocString* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7,
        i32 arg8, class datCallback arg9, i32 arg10);

    // 0x4E24D0 | ?AddCWArray@UIMenu@@QAEPAVUICWArray@@HMMMMHVdatCallback@@@Z
    class UICWArray* AddCWArray(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, i32 arg6, class datCallback arg7);

    // 0x4E1580 | ?AddCompScroll@UIMenu@@QAEPAVUICompositeScroll@@HMMMMMHPAHHHVdatCallback@@@Z
    class UICompositeScroll* AddCompScroll(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7,
        i32* arg8, i32 arg9, i32 arg10, class datCallback arg11);

    // 0x4E0EB0 | ?AddHotSpot@UIMenu@@QAEPAVuiWidget@@HPADMMMMVdatCallback@@@Z
    class uiWidget* AddHotSpot(i32 arg1, char* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class datCallback arg7);

    // 0x4E1DC0 | ?AddIcon@UIMenu@@QAEPAVUIIcon@@HPADMM@Z
    class UIIcon* AddIcon(i32 arg1, char* arg2, f32 arg3, f32 arg4);

    // 0x4E1ED0 | ?AddIconW@UIMenu@@QAEPAVUIIconW@@HPAULocString@@PADMMMMVdatCallback@@@Z
    class UIIconW* AddIconW(
        i32 arg1, struct LocString* arg2, char* arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, class datCallback arg8);

    // 0x4E1BB0 | ?AddLabel@UIMenu@@QAEPAVUILabel@@HPAULocString@@MMMMHH@Z
    class UILabel* AddLabel(
        i32 arg1, struct LocString* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, i32 arg8);

    // 0x4E2220 | ?AddMex@UIMenu@@QAEPAVUIMexButton@@HPAULocString@@PAHHMMMMHHVdatCallback@@@Z
    class UIMexButton* AddMex(i32 arg1, struct LocString* arg2, i32* arg3, i32 arg4, f32 arg5, f32 arg6, f32 arg7,
        f32 arg8, i32 arg9, i32 arg10, class datCallback arg11);

    // 0x4E1940 | ?AddSlider@UIMenu@@QAEPAVUISlider@@HPAULocString@@PAMMMMMMMHHHHVdatCallback@@2@Z
    class UISlider* AddSlider(i32 arg1, struct LocString* arg2, f32* arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7,
        f32 arg8, f32 arg9, i32 arg10, i32 arg11, i32 arg12, i32 arg13, class datCallback arg14,
        class datCallback arg15);

    // 0x4E0F90 | ?AddTextDropdown@UIMenu@@QAEPAVUITextDropdown@@HPAULocString@@PAHMMMMVstring@@HHHVdatCallback@@PAD3@Z
    class UITextDropdown* AddTextDropdown(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
        f32 arg7, class string arg8, i32 arg9, i32 arg10, i32 arg11, class datCallback arg12, char* arg13,
        class datCallback arg14);

    // 0x4E1700 | ?AddTextField@UIMenu@@QAEPAVUITextField@@HPAULocString@@PADMMMMHHHHHVdatCallback@@@Z
    class UITextField* AddTextField(i32 arg1, struct LocString* arg2, char* arg3, f32 arg4, f32 arg5, f32 arg6,
        f32 arg7, i32 arg8, i32 arg9, i32 arg10, i32 arg11, i32 arg12, class datCallback arg13);

    // 0x4E1120 | ?AddTextRoller@UIMenu@@QAEPAVUITextRoller@@HPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@@Z
    class UITextRoller* AddTextRoller(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
        f32 arg7, class string arg8, i32 arg9, i32 arg10, i32 arg11, i32 arg12, class datCallback arg13);

    // 0x4E1270 | ?AddTextRoller2@UIMenu@@QAEPAVUITextRoller2@@HPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@@Z
    class UITextRoller2* AddTextRoller2(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
        f32 arg7, class string arg8, i32 arg9, i32 arg10, i32 arg11, i32 arg12, class datCallback arg13);

    // 0x4E13E0 | ?AddTextScroll@UIMenu@@QAEPAVUITextScroll@@HPAXMMMMVstring@@HPAHVdatCallback@@@Z
    class UITextScroll* AddTextScroll(i32 arg1, void* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class string arg7,
        i32 arg8, i32* arg9, class datCallback arg10);

    // 0x4E1FE0 | ?AddToggle@UIMenu@@QAEPAVUIToggleButton@@HPAULocString@@PAHMMMMHHVdatCallback@@@Z
    class UIToggleButton* AddToggle(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7,
        i32 arg8, i32 arg9, class datCallback arg10);

    // 0x4E2100 | ?AddToggle2@UIMenu@@QAEPAVUIToggleButton2@@HPAULocString@@PAHMMMMHHVdatCallback@@@Z
    class UIToggleButton2* AddToggle2(i32 arg1, struct LocString* arg2, i32* arg3, f32 arg4, f32 arg5, f32 arg6,
        f32 arg7, i32 arg8, i32 arg9, class datCallback arg10);

    // 0x4E1860 | ?AddUIControl@UIMenu@@QAEPAVUIControlWidget@@HMMMMMPAVmmIO@@VdatCallback@@@Z
    class UIControlWidget* AddUIControl(
        i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class mmIO* arg7, class datCallback arg8);

    // 0x4E2610 | ?AddVScrollBar@UIMenu@@QAEPAVUIVScrollBar@@HPAHMMMMMMHHVdatCallback@@@Z
    class UIVScrollBar* AddVScrollBar(i32 arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8,
        i32 arg9, i32 arg10, class datCallback arg11);

    // 0x4E2B40 | ?AddWidget@UIMenu@@QAEXPAVuiWidget@@PADMMMMH1@Z
    void AddWidget(class uiWidget* arg1, char* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, char* arg8);

    // 0x4E0980 | ?AssignBackground@UIMenu@@QAEXPAD@Z
    void AssignBackground(char* arg1);

    // 0x4E0930 | ?AssignName@UIMenu@@QAEXPAULocString@@@Z
    void AssignName(struct LocString* arg1);

    // 0x4E29F0 | ?CheckMouseHits@UIMenu@@QAEXXZ
    void CheckMouseHits();

    // 0x4E0AD0 | ?ClearAction@UIMenu@@QAEXXZ
    void ClearAction();

    // 0x4E2990 | ?ClearSelected@UIMenu@@QAEXXZ
    void ClearSelected();

    // 0x4E0AE0 | ?ClearToolTip@UIMenu@@QAEXXZ
    void ClearToolTip();

    // 0x4E29C0 | ?ClearWidgets@UIMenu@@QAEXXZ
    void ClearWidgets();

    // 0x4E0CF0 | ?Decrement@UIMenu@@QAEHXZ
    i32 Decrement();

    // 0x4E0A40 | ?Disable@UIMenu@@QAEXXZ
    void Disable();

    // 0x4E0BE0 | ?DisableIME@UIMenu@@QAEXXZ
    void DisableIME();

    // 0x4E09D0 | ?Enable@UIMenu@@QAEXXZ
    void Enable();

    // 0x4E0C00 | ?FindTheFirstFocusWidget@UIMenu@@QAEHXZ
    i32 FindTheFirstFocusWidget();

    // 0x4E0AB0 | ?ForceWidgetAction@UIMenu@@QAEXH@Z
    void ForceWidgetAction(i32 arg1);

    // 0x4E0BA0 | ?GetBstate@UIMenu@@QAEHXZ
    i32 GetBstate();

    // 0x4E0BB0 | ?GetDimensions@UIMenu@@QAEXAAM000@Z
    void GetDimensions(f32& arg1, f32& arg2, f32& arg3, f32& arg4);

    // 0x4E0B90 | ?GetWidgetID@UIMenu@@QAEHXZ
    i32 GetWidgetID();

    // 0x4E0C40 | ?Increment@UIMenu@@QAEHXZ
    i32 Increment();

    // 0x4E27D0 | ?KeyboardAction@UIMenu@@QAEXTeqEvent@@@Z
    void KeyboardAction(union eqEvent arg1);

    // 0x4E2760 | ?MouseAction@UIMenu@@QAEXTeqEvent@@@Z
    void MouseAction(union eqEvent arg1);

    // 0x4E2860 | ?MouseHitCheck@UIMenu@@QAEPAVuiWidget@@HMM@Z
    class uiWidget* MouseHitCheck(i32 arg1, f32 arg2, f32 arg3);

    // 0x4E0E70 | ?ScaleWidget@UIMenu@@QAEXAAM000@Z
    void ScaleWidget(f32& arg1, f32& arg2, f32& arg3, f32& arg4);

    // 0x4E0DA0 | ?ScanInput@UIMenu@@QAEHPATeqEvent@@@Z
    i32 ScanInput(union eqEvent* arg1);

    // 0x4E0A90 | ?SetAction@UIMenu@@QAEXW4eSource@1@@Z
    void SetAction(enum UIMenu::eSource arg1);

    // 0x4E0B20 | ?SetBstate@UIMenu@@QAEXH@Z
    void SetBstate(i32 arg1);

    // 0x4E0B50 | ?SetFocusWidget@UIMenu@@QAEXH@Z
    void SetFocusWidget(i32 arg1);

    // 0x4E2960 | ?SetSelected@UIMenu@@QAEXXZ
    void SetSelected();

    // 0x4E0A80 | ?Update@UIMenu@@UAEXXZ
    void Update() override;

    // 0x4E0A60 | ?PreSetup@UIMenu@@UAEXXZ
    virtual void PreSetup();

    // 0x4E0A70 | ?PostSetup@UIMenu@@UAEXXZ
    virtual void PostSetup();

    // 0x4E0B10 | ?BackUp@UIMenu@@UAEXXZ
    virtual void BackUp();

    // 0x4E0DE0 | ?CheckInput@UIMenu@@UAEXXZ
    virtual void CheckInput();

    // 0x4E2D70 | ?IsAnOptionMenu@UIMenu@@UAEHXZ
    virtual i32 IsAnOptionMenu();
};

check_size(UIMenu, 0x0);
