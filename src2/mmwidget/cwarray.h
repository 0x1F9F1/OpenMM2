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
    mmwidget:cwarray

    0x4EF6D0 | public: __thiscall UICWArray::UICWArray(void) | ??0UICWArray@@QAE@XZ
    0x4EF7A0 | public: virtual __thiscall UICWArray::~UICWArray(void) | ??1UICWArray@@UAE@XZ
    0x4EF830 | public: virtual void __thiscall UICWArray::Reset(void) | ?Reset@UICWArray@@UAEXXZ
    0x4EF840 | public: void __thiscall UICWArray::Init(float,float,float,float,int,class datCallback) | ?Init@UICWArray@@QAEXMMMMHVdatCallback@@@Z
    0x4EFA90 | public: void __thiscall UICWArray::VScrollCB(void) | ?VScrollCB@UICWArray@@QAEXXZ
    0x4EFB00 | public: void __thiscall UICWArray::SetVScrollVals(void) | ?SetVScrollVals@UICWArray@@QAEXXZ
    0x4EFB70 | public: void __thiscall UICWArray::SetVScrollPos(void) | ?SetVScrollPos@UICWArray@@QAEXXZ
    0x4EFBA0 | public: void __thiscall UICWArray::SetStartOffset(int) | ?SetStartOffset@UICWArray@@QAEXH@Z
    0x4EFBE0 | public: void __thiscall UICWArray::Redraw(void) | ?Redraw@UICWArray@@QAEXXZ
    0x4EFD40 | public: virtual void __thiscall UICWArray::Switch(int) | ?Switch@UICWArray@@UAEXH@Z
    0x4EFD80 | public: virtual void __thiscall UICWArray::Action(union eqEvent) | ?Action@UICWArray@@UAEXTeqEvent@@@Z
    0x4EFEC0 | public: virtual void __thiscall UICWArray::CaptureAction(union eqEvent) | ?CaptureAction@UICWArray@@UAEXTeqEvent@@@Z
    0x4EFF30 | public: virtual void __thiscall UICWArray::Update(void) | ?Update@UICWArray@@UAEXXZ
    0x4EFFC0 | public: void __thiscall UICWArray::EnterCapture(int) | ?EnterCapture@UICWArray@@QAEXH@Z
    0x4F0030 | public: void __thiscall UICWArray::ForceCapture(void) | ?ForceCapture@UICWArray@@QAEXXZ
    0x4F0060 | public: void __thiscall UICWArray::AcceptCapture(void) | ?AcceptCapture@UICWArray@@QAEXXZ
    0x4F00B0 | public: void __thiscall UICWArray::ResetCapture(void) | ?ResetCapture@UICWArray@@QAEXXZ
    0x4F00E0 | public: void __thiscall UICWArray::CheckCapture(void) | ?CheckCapture@UICWArray@@QAEXXZ
    0x4F0190 | public: void __thiscall UICWArray::SaveCFG(void) | ?SaveCFG@UICWArray@@QAEXXZ
    0x4F01D0 | public: void __thiscall UICWArray::LoadCFG(void) | ?LoadCFG@UICWArray@@QAEXXZ
    0x4F0220 | public: void __thiscall UICWArray::DefaultCFG(void) | ?DefaultCFG@UICWArray@@QAEXXZ
    0x4F0250 | public: void __thiscall UICWArray::DebugForceSetting(void) | ?DebugForceSetting@UICWArray@@QAEXXZ
    0x4F0270 | public: virtual void * __thiscall UICWArray::`scalar deleting destructor'(unsigned int) | ??_GUICWArray@@UAEPAXI@Z
    public: virtual void * __thiscall UICWArray::`vector deleting destructor'(unsigned int) | ??_EUICWArray@@UAEPAXI@Z
    0x4F02A0 | public: virtual void * __thiscall UIControlWidget::`vector deleting destructor'(unsigned int) | ??_EUIControlWidget@@UAEPAXI@Z
    0x5B3A60 | const UICWArray::`vftable' | ??_7UICWArray@@6B@
*/

class UICWArray : uiWidget
{
public:
    // UICWArray::`vftable' @ 0x5B3A60

    // 0x4EF6D0 | ??0UICWArray@@QAE@XZ
    inline UICWArray()
    {
        stub<member_func_t<void, UICWArray>>(0x4EF6D0, this);
    }

    // 0x4EF840 | ?Init@UICWArray@@QAEXMMMMHVdatCallback@@@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4, int32_t arg5, class datCallback arg6)
    {
        return stub<member_func_t<void, UICWArray, float, float, float, float, int32_t, class datCallback>>(
            0x4EF840, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4EFA90 | ?VScrollCB@UICWArray@@QAEXXZ
    inline void VScrollCB()
    {
        return stub<member_func_t<void, UICWArray>>(0x4EFA90, this);
    }

    // 0x4EFB00 | ?SetVScrollVals@UICWArray@@QAEXXZ
    inline void SetVScrollVals()
    {
        return stub<member_func_t<void, UICWArray>>(0x4EFB00, this);
    }

    // 0x4EFB70 | ?SetVScrollPos@UICWArray@@QAEXXZ
    inline void SetVScrollPos()
    {
        return stub<member_func_t<void, UICWArray>>(0x4EFB70, this);
    }

    // 0x4EFBA0 | ?SetStartOffset@UICWArray@@QAEXH@Z
    inline void SetStartOffset(int32_t arg1)
    {
        return stub<member_func_t<void, UICWArray, int32_t>>(0x4EFBA0, this, arg1);
    }

    // 0x4EFBE0 | ?Redraw@UICWArray@@QAEXXZ
    inline void Redraw()
    {
        return stub<member_func_t<void, UICWArray>>(0x4EFBE0, this);
    }

    // 0x4EFFC0 | ?EnterCapture@UICWArray@@QAEXH@Z
    inline void EnterCapture(int32_t arg1)
    {
        return stub<member_func_t<void, UICWArray, int32_t>>(0x4EFFC0, this, arg1);
    }

    // 0x4F0030 | ?ForceCapture@UICWArray@@QAEXXZ
    inline void ForceCapture()
    {
        return stub<member_func_t<void, UICWArray>>(0x4F0030, this);
    }

    // 0x4F0060 | ?AcceptCapture@UICWArray@@QAEXXZ
    inline void AcceptCapture()
    {
        return stub<member_func_t<void, UICWArray>>(0x4F0060, this);
    }

    // 0x4F00B0 | ?ResetCapture@UICWArray@@QAEXXZ
    inline void ResetCapture()
    {
        return stub<member_func_t<void, UICWArray>>(0x4F00B0, this);
    }

    // 0x4F00E0 | ?CheckCapture@UICWArray@@QAEXXZ
    inline void CheckCapture()
    {
        return stub<member_func_t<void, UICWArray>>(0x4F00E0, this);
    }

    // 0x4F0190 | ?SaveCFG@UICWArray@@QAEXXZ
    inline void SaveCFG()
    {
        return stub<member_func_t<void, UICWArray>>(0x4F0190, this);
    }

    // 0x4F01D0 | ?LoadCFG@UICWArray@@QAEXXZ
    inline void LoadCFG()
    {
        return stub<member_func_t<void, UICWArray>>(0x4F01D0, this);
    }

    // 0x4F0220 | ?DefaultCFG@UICWArray@@QAEXXZ
    inline void DefaultCFG()
    {
        return stub<member_func_t<void, UICWArray>>(0x4F0220, this);
    }

    // 0x4F0250 | ?DebugForceSetting@UICWArray@@QAEXXZ
    inline void DebugForceSetting()
    {
        return stub<member_func_t<void, UICWArray>>(0x4F0250, this);
    }

    // 0x4EF7A0 | ??1UICWArray@@UAE@XZ
    inline ~UICWArray() override
    {
        stub<member_func_t<void, UICWArray>>(0x4EF7A0, this);
    }

    // 0x4EFF30 | ?Update@UICWArray@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UICWArray>>(0x4EFF30, this);
    }

    // 0x4EF830 | ?Reset@UICWArray@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, UICWArray>>(0x4EF830, this);
    }

    // 0x4EFD80 | ?Action@UICWArray@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UICWArray, union eqEvent>>(0x4EFD80, this, arg1);
    }

    // 0x4EFEC0 | ?CaptureAction@UICWArray@@UAEXTeqEvent@@@Z
    inline void CaptureAction(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UICWArray, union eqEvent>>(0x4EFEC0, this, arg1);
    }

    // 0x4EFD40 | ?Switch@UICWArray@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UICWArray, int32_t>>(0x4EFD40, this, arg1);
    }
};
