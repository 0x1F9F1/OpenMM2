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
    mmwidget:bm_button

    0x4EE6F0 | public: __thiscall UIBMButton::UIBMButton(void) | ??0UIBMButton@@QAE@XZ
    0x4EE790 | public: virtual __thiscall UIBMButton::~UIBMButton(void) | ??1UIBMButton@@UAE@XZ
    0x4EE810 | public: void __thiscall UIBMButton::Init(char *,float,float,int,int,int *,int,int,struct LocString *,class datCallback,class datCallback) | ?Init@UIBMButton@@QAEXPADMMHHPAHHHPAULocString@@VdatCallback@@3@Z
    0x4EEA90 | public: void __thiscall UIBMButton::LoadBitmap(char *) | ?LoadBitmap@UIBMButton@@QAEXPAD@Z
    0x4EEAD0 | public: int __thiscall UIBMButton::GetDiv(void) | ?GetDiv@UIBMButton@@QAEHXZ
    0x4EEB00 | private: void __thiscall UIBMButton::GetSize(void) | ?GetSize@UIBMButton@@AAEXXZ
    0x4EEB30 | public: virtual void __thiscall UIBMButton::SetPosition(float,float) | ?SetPosition@UIBMButton@@UAEXMM@Z
    0x4EEC80 | public: void __thiscall UIBMButton::GetHitArea(float &,float &) | ?GetHitArea@UIBMButton@@QAEXAAM0@Z
    0x4EECD0 | public: void __thiscall UIBMButton::DoToggle(void) | ?DoToggle@UIBMButton@@QAEXXZ
    0x4EED90 | public: void __thiscall UIBMButton::Kill(void) | ?Kill@UIBMButton@@QAEXXZ
    0x4EEDB0 | public: void __thiscall UIBMButton::Unkill(void) | ?Unkill@UIBMButton@@QAEXXZ
    0x4EEDF0 | public: virtual void __thiscall UIBMButton::Switch(int) | ?Switch@UIBMButton@@UAEXH@Z
    0x4EEF20 | public: virtual void __thiscall UIBMButton::Action(union eqEvent) | ?Action@UIBMButton@@UAEXTeqEvent@@@Z
    0x4EEFE0 | public: void __thiscall UIBMButton::MexOff(void) | ?MexOff@UIBMButton@@QAEXXZ
    0x4EEFF0 | public: void __thiscall UIBMButton::MexOn(void) | ?MexOn@UIBMButton@@QAEXXZ
    0x4EF030 | public: void __thiscall UIBMButton::MexToggle(void) | ?MexToggle@UIBMButton@@QAEXXZ
    0x4EF060 | public: virtual void __thiscall UIBMButton::Update(void) | ?Update@UIBMButton@@UAEXXZ
    0x4EF1F0 | public: virtual char * __thiscall UIBMButton::ReturnDescription(void) | ?ReturnDescription@UIBMButton@@UAEPADXZ
    0x4EF2A0 | public: virtual float __thiscall UIBMButton::GetScreenHeight(void) | ?GetScreenHeight@UIBMButton@@UAEMXZ
    0x4EF2B0 | public: virtual void __thiscall UIBMButton::Cull(void) | ?Cull@UIBMButton@@UAEXXZ
    0x4EF430 | private: static void __cdecl UIBMButton::AllocateSounds(void) | ?AllocateSounds@UIBMButton@@CAXXZ
    0x4EF620 | private: void __thiscall UIBMButton::PlaySound(void) | ?PlaySound@UIBMButton@@AAEXXZ
    public: virtual void * __thiscall UIBMButton::`vector deleting destructor'(unsigned int) | ??_EUIBMButton@@UAEPAXI@Z
    0x4EF660 | public: virtual void * __thiscall UIBMButton::`scalar deleting destructor'(unsigned int) | ??_GUIBMButton@@UAEPAXI@Z
    0x4EF690 | public: virtual void __thiscall UIBMButton::Enable(void) | ?Enable@UIBMButton@@UAEXXZ
    0x4EF6B0 | public: virtual void __thiscall UIBMButton::Disable(void) | ?Disable@UIBMButton@@UAEXXZ
    0x5B39FC | const UIBMButton::`vftable' | ??_7UIBMButton@@6B@
    0x6B0418 | private: static class AudSoundBase * UIBMButton::s_pSound | ?s_pSound@UIBMButton@@0PAVAudSoundBase@@A
*/

class UIBMButton : uiWidget
{
public:
    // UIBMButton::`vftable' @ 0x5B39FC

    // 0x4EE6F0 | ??0UIBMButton@@QAE@XZ
    inline UIBMButton()
    {
        stub<member_func_t<void, UIBMButton>>(0x4EE6F0, this);
    }

    // 0x4EE810 | ?Init@UIBMButton@@QAEXPADMMHHPAHHHPAULocString@@VdatCallback@@3@Z
    inline void Init(char* arg1, f32 arg2, f32 arg3, i32 arg4, i32 arg5, i32* arg6, i32 arg7, i32 arg8,
        struct LocString* arg9, class datCallback arg10, class datCallback arg11)
    {
        return stub<member_func_t<void, UIBMButton, char*, f32, f32, i32, i32, i32*, i32, i32, struct LocString*,
            class datCallback, class datCallback>>(
            0x4EE810, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4EEA90 | ?LoadBitmap@UIBMButton@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, UIBMButton, char*>>(0x4EEA90, this, arg1);
    }

    // 0x4EEAD0 | ?GetDiv@UIBMButton@@QAEHXZ
    inline i32 GetDiv()
    {
        return stub<member_func_t<i32, UIBMButton>>(0x4EEAD0, this);
    }

    // 0x4EEB00 | ?GetSize@UIBMButton@@AAEXXZ
    inline void GetSize()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EEB00, this);
    }

    // 0x4EEC80 | ?GetHitArea@UIBMButton@@QAEXAAM0@Z
    inline void GetHitArea(f32& arg1, f32& arg2)
    {
        return stub<member_func_t<void, UIBMButton, f32&, f32&>>(0x4EEC80, this, arg1, arg2);
    }

    // 0x4EECD0 | ?DoToggle@UIBMButton@@QAEXXZ
    inline void DoToggle()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EECD0, this);
    }

    // 0x4EED90 | ?Kill@UIBMButton@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EED90, this);
    }

    // 0x4EEDB0 | ?Unkill@UIBMButton@@QAEXXZ
    inline void Unkill()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EEDB0, this);
    }

    // 0x4EEFE0 | ?MexOff@UIBMButton@@QAEXXZ
    inline void MexOff()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EEFE0, this);
    }

    // 0x4EEFF0 | ?MexOn@UIBMButton@@QAEXXZ
    inline void MexOn()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EEFF0, this);
    }

    // 0x4EF030 | ?MexToggle@UIBMButton@@QAEXXZ
    inline void MexToggle()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EF030, this);
    }

    // 0x4EF430 | ?AllocateSounds@UIBMButton@@CAXXZ
    static inline void AllocateSounds()
    {
        return stub<cdecl_t<void>>(0x4EF430);
    }

    // 0x4EF620 | ?PlaySound@UIBMButton@@AAEXXZ
    inline void PlaySound()
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EF620, this);
    }

    // 0x6B0418 | ?s_pSound@UIBMButton@@0PAVAudSoundBase@@A
    inline extern_var(0x6B0418, class AudSoundBase*, s_pSound);

    // 0x4EE790 | ??1UIBMButton@@UAE@XZ
    inline ~UIBMButton() override
    {
        stub<member_func_t<void, UIBMButton>>(0x4EE790, this);
    }

    // 0x4EF2B0 | ?Cull@UIBMButton@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EF2B0, this);
    }

    // 0x4EF060 | ?Update@UIBMButton@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EF060, this);
    }

    // 0x4EF6B0 | ?Disable@UIBMButton@@UAEXXZ
    inline void Disable() override
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EF6B0, this);
    }

    // 0x4EF690 | ?Enable@UIBMButton@@UAEXXZ
    inline void Enable() override
    {
        return stub<member_func_t<void, UIBMButton>>(0x4EF690, this);
    }

    // 0x4EEF20 | ?Action@UIBMButton@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIBMButton, union eqEvent>>(0x4EEF20, this, arg1);
    }

    // 0x4EEDF0 | ?Switch@UIBMButton@@UAEXH@Z
    inline void Switch(i32 arg1) override
    {
        return stub<member_func_t<void, UIBMButton, i32>>(0x4EEDF0, this, arg1);
    }

    // 0x4EF1F0 | ?ReturnDescription@UIBMButton@@UAEPADXZ
    inline char* ReturnDescription() override
    {
        return stub<member_func_t<char*, UIBMButton>>(0x4EF1F0, this);
    }

    // 0x4EEB30 | ?SetPosition@UIBMButton@@UAEXMM@Z
    inline void SetPosition(f32 arg1, f32 arg2) override
    {
        return stub<member_func_t<void, UIBMButton, f32, f32>>(0x4EEB30, this, arg1, arg2);
    }

    // 0x4EF2A0 | ?GetScreenHeight@UIBMButton@@UAEMXZ
    inline f32 GetScreenHeight() override
    {
        return stub<member_func_t<f32, UIBMButton>>(0x4EF2A0, this);
    }
};
