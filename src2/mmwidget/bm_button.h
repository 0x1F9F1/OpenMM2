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

#include "textfield.h"

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

class UIBMButton : public uiWidget
{
    // const UIBMButton::`vftable' @ 0x5B39FC

public:
    // 0x4EE6F0 | ??0UIBMButton@@QAE@XZ
    UIBMButton();

    // 0x4EF660 | ??_GUIBMButton@@UAEPAXI@Z
    // 0x4EE790 | ??1UIBMButton@@UAE@XZ
    ~UIBMButton() override;

    // 0x4EEF20 | ?Action@UIBMButton@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4EF2B0 | ?Cull@UIBMButton@@UAEXXZ
    void Cull() override;

    // 0x4EF6B0 | ?Disable@UIBMButton@@UAEXXZ
    void Disable() override;

    // 0x4EECD0 | ?DoToggle@UIBMButton@@QAEXXZ
    void DoToggle();

    // 0x4EF690 | ?Enable@UIBMButton@@UAEXXZ
    void Enable() override;

    // 0x4EEAD0 | ?GetDiv@UIBMButton@@QAEHXZ
    i32 GetDiv();

    // 0x4EEC80 | ?GetHitArea@UIBMButton@@QAEXAAM0@Z
    void GetHitArea(f32& arg1, f32& arg2);

    // 0x4EF2A0 | ?GetScreenHeight@UIBMButton@@UAEMXZ
    f32 GetScreenHeight() override;

    // 0x4EE810 | ?Init@UIBMButton@@QAEXPADMMHHPAHHHPAULocString@@VdatCallback@@3@Z
    void Init(char* arg1, f32 arg2, f32 arg3, i32 arg4, i32 arg5, i32* arg6, i32 arg7, i32 arg8, struct LocString* arg9,
        class datCallback arg10, class datCallback arg11);

    // 0x4EED90 | ?Kill@UIBMButton@@QAEXXZ
    void Kill();

    // 0x4EEA90 | ?LoadBitmap@UIBMButton@@QAEXPAD@Z
    void LoadBitmap(char* arg1);

    // 0x4EEFE0 | ?MexOff@UIBMButton@@QAEXXZ
    void MexOff();

    // 0x4EEFF0 | ?MexOn@UIBMButton@@QAEXXZ
    void MexOn();

    // 0x4EF030 | ?MexToggle@UIBMButton@@QAEXXZ
    void MexToggle();

    // 0x4EF1F0 | ?ReturnDescription@UIBMButton@@UAEPADXZ
    char* ReturnDescription() override;

    // 0x4EEB30 | ?SetPosition@UIBMButton@@UAEXMM@Z
    void SetPosition(f32 arg1, f32 arg2) override;

    // 0x4EEDF0 | ?Switch@UIBMButton@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4EEDB0 | ?Unkill@UIBMButton@@QAEXXZ
    void Unkill();

    // 0x4EF060 | ?Update@UIBMButton@@UAEXXZ
    void Update() override;

private:
    // 0x4EEB00 | ?GetSize@UIBMButton@@AAEXXZ
    void GetSize();

    // 0x4EF620 | ?PlaySound@UIBMButton@@AAEXXZ
    void PlaySound();

    // 0x4EF430 | ?AllocateSounds@UIBMButton@@CAXXZ
    static void AllocateSounds();

    // 0x6B0418 | ?s_pSound@UIBMButton@@0PAVAudSoundBase@@A
    static inline extern_var(0x6B0418, class AudSoundBase*, s_pSound);
};

check_size(UIBMButton, 0xD8);
