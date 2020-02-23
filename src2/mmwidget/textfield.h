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
    mmwidget:textfield

    0x4E6690 | public: __thiscall UITextField::UITextField(void) | ??0UITextField@@QAE@XZ
    0x4E67B0 | public: virtual __thiscall UITextField::~UITextField(void) | ??1UITextField@@UAE@XZ
    0x4E6820 | public: void __thiscall UITextField::Init(struct LocString *,char *,float,float,float,float,int,int,int,int,int,class datCallback,class UIMenu *) | ?Init@UITextField@@QAEXPAULocString@@PADMMMMHHHHHVdatCallback@@PAVUIMenu@@@Z
    0x4E6B20 | public: void __thiscall UITextField::SetText(struct LocString *) | ?SetText@UITextField@@QAEXPAULocString@@@Z
    0x4E6B40 | public: void __thiscall UITextField::SetField(char *) | ?SetField@UITextField@@QAEXPAD@Z
    0x4E6BA0 | public: virtual void __thiscall UITextField::CaptureAction(union eqEvent) | ?CaptureAction@UITextField@@UAEXTeqEvent@@@Z
    0x4E6BB0 | public: virtual void __thiscall UITextField::Action(union eqEvent) | ?Action@UITextField@@UAEXTeqEvent@@@Z
    0x4E6C00 | public: void __thiscall UITextField::ClearField(void) | ?ClearField@UITextField@@QAEXXZ
    0x4E6C60 | public: void __thiscall UITextField::SetTextField(void) | ?SetTextField@UITextField@@QAEXXZ
    0x4E6CB0 | public: void __thiscall UITextField::ToggleField(int) | ?ToggleField@UITextField@@QAEXH@Z
    0x4E6E00 | public: virtual void __thiscall UITextField::Switch(int) | ?Switch@UITextField@@UAEXH@Z
    0x4E6EB0 | public: int __thiscall UITextField::IsValidChar(unsigned short) | ?IsValidChar@UITextField@@QAEHG@Z
    0x4E6F70 | public: void __thiscall UITextField::WmCharHandler(unsigned char) | ?WmCharHandler@UITextField@@QAEXE@Z
    0x4E70F0 | public: void __thiscall UITextField::KeyAction(union eqEvent *) | ?KeyAction@UITextField@@QAEXPATeqEvent@@@Z
    0x4E7200 | public: void __thiscall UITextField::SetCompositionWindow(void) | ?SetCompositionWindow@UITextField@@QAEXXZ
    0x4E72F0 | public: virtual void * __thiscall UITextField::`scalar deleting destructor'(unsigned int) | ??_GUITextField@@UAEPAXI@Z
    public: virtual void * __thiscall UITextField::`vector deleting destructor'(unsigned int) | ??_EUITextField@@UAEPAXI@Z
    0x4E7320 | public: virtual __thiscall uiWidget::~uiWidget(void) | ??1uiWidget@@UAE@XZ
    0x4E7330 | public: virtual void __thiscall uiWidget::Disable(void) | ?Disable@uiWidget@@UAEXXZ
    0x4E7340 | public: virtual void __thiscall uiWidget::Enable(void) | ?Enable@uiWidget@@UAEXXZ
    0x4E7350 | public: virtual void __thiscall uiWidget::TurnOn(void) | ?TurnOn@uiWidget@@UAEXXZ
    0x4E7370 | public: virtual void __thiscall uiWidget::TurnOff(void) | ?TurnOff@uiWidget@@UAEXXZ
    0x4E7380 | public: virtual void __thiscall uiWidget::SetReadOnly(int) | ?SetReadOnly@uiWidget@@UAEXH@Z
    0x4E73A0 | public: virtual void __thiscall uiWidget::Action(union eqEvent) | ?Action@uiWidget@@UAEXTeqEvent@@@Z
    0x4E73B0 | public: virtual void __thiscall uiWidget::CaptureAction(union eqEvent) | ?CaptureAction@uiWidget@@UAEXTeqEvent@@@Z
    0x4E73C0 | public: virtual void __thiscall uiWidget::EvalMouseX(float) | ?EvalMouseX@uiWidget@@UAEXM@Z
    0x4E73D0 | public: virtual char * __thiscall uiWidget::ReturnDescription(void) | ?ReturnDescription@uiWidget@@UAEPADXZ
    0x4E73E0 | public: virtual void __thiscall uiWidget::SetPosition(float,float) | ?SetPosition@uiWidget@@UAEXMM@Z
    0x4E73F0 | public: virtual float __thiscall uiWidget::GetScreenHeight(void) | ?GetScreenHeight@uiWidget@@UAEMXZ
    0x4E7400 | public: virtual void * __thiscall uiWidget::`scalar deleting destructor'(unsigned int) | ??_GuiWidget@@UAEPAXI@Z
    public: virtual void * __thiscall uiWidget::`vector deleting destructor'(unsigned int) | ??_EuiWidget@@UAEPAXI@Z
    0x4E7430 | public: virtual void __thiscall UITextField::Update(void) | ?Update@UITextField@@UAEXXZ
    0x5B3310 | const UITextField::`vftable' | ??_7UITextField@@6B@
    0x5B3374 | const uiWidget::`vftable' | ??_7uiWidget@@6B@
*/

class uiWidget : asNode
{
public:
    // uiWidget::`vftable' @ 0x5B3374

    // 0x4E7440 | ??0uiWidget@@QAE@XZ
    inline uiWidget()
    {
        stub<member_func_t<void, uiWidget>>(0x4E7440, this);
    }

    // 0x4E7470 | ?AddToolTip@uiWidget@@QAEXPAVUIMenu@@PAULocString@@@Z
    inline void AddToolTip(class UIMenu* arg1, struct LocString* arg2)
    {
        return stub<member_func_t<void, uiWidget, class UIMenu*, struct LocString*>>(0x4E7470, this, arg1, arg2);
    }

    // 0x4E74A0 | ?ResetToolTip@uiWidget@@QAEXXZ
    inline void ResetToolTip()
    {
        return stub<member_func_t<void, uiWidget>>(0x4E74A0, this);
    }

    // 0x4E74B0 | ?SetToolTipText@uiWidget@@QAEXPAULocString@@@Z
    inline void SetToolTipText(struct LocString* arg1)
    {
        return stub<member_func_t<void, uiWidget, struct LocString*>>(0x4E74B0, this, arg1);
    }

    // 0x4E7320 | ??1uiWidget@@UAE@XZ
    inline ~uiWidget() override
    {
        stub<member_func_t<void, uiWidget>>(0x4E7320, this);
    }

    // 0x4E7330 | ?Disable@uiWidget@@UAEXXZ
    virtual inline void Disable()
    {
        return stub<member_func_t<void, uiWidget>>(0x4E7330, this);
    }

    // 0x4E7340 | ?Enable@uiWidget@@UAEXXZ
    virtual inline void Enable()
    {
        return stub<member_func_t<void, uiWidget>>(0x4E7340, this);
    }

    // 0x4E7350 | ?TurnOn@uiWidget@@UAEXXZ
    virtual inline void TurnOn()
    {
        return stub<member_func_t<void, uiWidget>>(0x4E7350, this);
    }

    // 0x4E7370 | ?TurnOff@uiWidget@@UAEXXZ
    virtual inline void TurnOff()
    {
        return stub<member_func_t<void, uiWidget>>(0x4E7370, this);
    }

    // 0x4E7380 | ?SetReadOnly@uiWidget@@UAEXH@Z
    virtual inline void SetReadOnly(i32 arg1)
    {
        return stub<member_func_t<void, uiWidget, i32>>(0x4E7380, this, arg1);
    }

    // 0x4E73A0 | ?Action@uiWidget@@UAEXTeqEvent@@@Z
    virtual inline void Action(union eqEvent arg1)
    {
        return stub<member_func_t<void, uiWidget, union eqEvent>>(0x4E73A0, this, arg1);
    }

    // 0x4E73B0 | ?CaptureAction@uiWidget@@UAEXTeqEvent@@@Z
    virtual inline void CaptureAction(union eqEvent arg1)
    {
        return stub<member_func_t<void, uiWidget, union eqEvent>>(0x4E73B0, this, arg1);
    }

    // 0x4E7480 | ?Switch@uiWidget@@UAEXH@Z
    virtual inline void Switch(i32 arg1)
    {
        return stub<member_func_t<void, uiWidget, i32>>(0x4E7480, this, arg1);
    }

    // 0x4E73C0 | ?EvalMouseX@uiWidget@@UAEXM@Z
    virtual inline void EvalMouseX(f32 arg1)
    {
        return stub<member_func_t<void, uiWidget, f32>>(0x4E73C0, this, arg1);
    }

    // 0x4E73D0 | ?ReturnDescription@uiWidget@@UAEPADXZ
    virtual inline char* ReturnDescription()
    {
        return stub<member_func_t<char*, uiWidget>>(0x4E73D0, this);
    }

    // 0x4E73E0 | ?SetPosition@uiWidget@@UAEXMM@Z
    virtual inline void SetPosition(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, uiWidget, f32, f32>>(0x4E73E0, this, arg1, arg2);
    }

    // 0x4E73F0 | ?GetScreenHeight@uiWidget@@UAEMXZ
    virtual inline f32 GetScreenHeight()
    {
        return stub<member_func_t<f32, uiWidget>>(0x4E73F0, this);
    }
};

class UITextField : uiWidget
{
public:
    // UITextField::`vftable' @ 0x5B3310

    // 0x4E6690 | ??0UITextField@@QAE@XZ
    inline UITextField()
    {
        stub<member_func_t<void, UITextField>>(0x4E6690, this);
    }

    // 0x4E6820 | ?Init@UITextField@@QAEXPAULocString@@PADMMMMHHHHHVdatCallback@@PAVUIMenu@@@Z
    inline void Init(struct LocString* arg1, char* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, i32 arg8,
        i32 arg9, i32 arg10, i32 arg11, class datCallback arg12, class UIMenu* arg13)
    {
        return stub<member_func_t<void, UITextField, struct LocString*, char*, f32, f32, f32, f32, i32, i32, i32, i32,
            i32, class datCallback, class UIMenu*>>(
            0x4E6820, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4E6B20 | ?SetText@UITextField@@QAEXPAULocString@@@Z
    inline void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, UITextField, struct LocString*>>(0x4E6B20, this, arg1);
    }

    // 0x4E6B40 | ?SetField@UITextField@@QAEXPAD@Z
    inline void SetField(char* arg1)
    {
        return stub<member_func_t<void, UITextField, char*>>(0x4E6B40, this, arg1);
    }

    // 0x4E6C00 | ?ClearField@UITextField@@QAEXXZ
    inline void ClearField()
    {
        return stub<member_func_t<void, UITextField>>(0x4E6C00, this);
    }

    // 0x4E6C60 | ?SetTextField@UITextField@@QAEXXZ
    inline void SetTextField()
    {
        return stub<member_func_t<void, UITextField>>(0x4E6C60, this);
    }

    // 0x4E6CB0 | ?ToggleField@UITextField@@QAEXH@Z
    inline void ToggleField(i32 arg1)
    {
        return stub<member_func_t<void, UITextField, i32>>(0x4E6CB0, this, arg1);
    }

    // 0x4E6EB0 | ?IsValidChar@UITextField@@QAEHG@Z
    inline i32 IsValidChar(u16 arg1)
    {
        return stub<member_func_t<i32, UITextField, u16>>(0x4E6EB0, this, arg1);
    }

    // 0x4E6F70 | ?WmCharHandler@UITextField@@QAEXE@Z
    inline void WmCharHandler(u8 arg1)
    {
        return stub<member_func_t<void, UITextField, u8>>(0x4E6F70, this, arg1);
    }

    // 0x4E70F0 | ?KeyAction@UITextField@@QAEXPATeqEvent@@@Z
    inline void KeyAction(union eqEvent* arg1)
    {
        return stub<member_func_t<void, UITextField, union eqEvent*>>(0x4E70F0, this, arg1);
    }

    // 0x4E7200 | ?SetCompositionWindow@UITextField@@QAEXXZ
    inline void SetCompositionWindow()
    {
        return stub<member_func_t<void, UITextField>>(0x4E7200, this);
    }

    // 0x4E67B0 | ??1UITextField@@UAE@XZ
    inline ~UITextField() override
    {
        stub<member_func_t<void, UITextField>>(0x4E67B0, this);
    }

    // 0x4E7430 | ?Update@UITextField@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UITextField>>(0x4E7430, this);
    }

    // 0x4E6BB0 | ?Action@UITextField@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextField, union eqEvent>>(0x4E6BB0, this, arg1);
    }

    // 0x4E6BA0 | ?CaptureAction@UITextField@@UAEXTeqEvent@@@Z
    inline void CaptureAction(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextField, union eqEvent>>(0x4E6BA0, this, arg1);
    }

    // 0x4E6E00 | ?Switch@UITextField@@UAEXH@Z
    inline void Switch(i32 arg1) override
    {
        return stub<member_func_t<void, UITextField, i32>>(0x4E6E00, this, arg1);
    }
};
