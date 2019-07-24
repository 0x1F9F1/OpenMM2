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
    bank:bank

    public: __thiscall bkBank::bkBank(char const *) | ??0bkBank@@QAE@PBD@Z
    public: virtual __thiscall bkBank::~bkBank(void) | ??1bkBank@@UAE@XZ
    public: virtual void __thiscall bkBank::Update(void) | ?Update@bkBank@@UAEXXZ
    public: virtual class bkButton * __thiscall bkBank::AddTitle(char const *) | ?AddTitle@bkBank@@UAEPAVbkButton@@PBD@Z
    public: virtual class bkButton * __thiscall bkBank::AddButton(char const *,class datCallback) | ?AddButton@bkBank@@UAEPAVbkButton@@PBDVdatCallback@@@Z
    public: virtual class bkText * __thiscall bkBank::AddText(char const *,char *,unsigned int,bool,class datCallback) | ?AddText@bkBank@@UAEPAVbkText@@PBDPADI_NVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkBank::AddToggle(char const *,bool *,class datCallback) | ?AddToggle@bkBank@@UAEPAVbkToggle@@PBDPA_NVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkBank::AddToggle(char const *,int *,class datCallback) | ?AddToggle@bkBank@@UAEPAVbkToggle@@PBDPAHVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkBank::AddToggle(char const *,unsigned int *,unsigned int,class datCallback) | ?AddToggle@bkBank@@UAEPAVbkToggle@@PBDPAIIVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkBank::AddToggle(char const *,unsigned short *,unsigned short,class datCallback) | ?AddToggle@bkBank@@UAEPAVbkToggle@@PBDPAGGVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkBank::AddToggle(char const *,unsigned char *,unsigned char,class datCallback) | ?AddToggle@bkBank@@UAEPAVbkToggle@@PBDPAEEVdatCallback@@@Z
    protected: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,class bkSliderData &,class datCallback) | ?AddSlider@bkBank@@MAEPAVbkSlider@@PBDAAVbkSliderData@@VdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,float *,float,float,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAMMMMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,unsigned char *,unsigned char,unsigned char,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAEEEMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,signed char *,signed char,signed char,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPACCCMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,unsigned int *,unsigned int,unsigned int,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAIIIMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,int *,int,int,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAHHHMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,unsigned short *,unsigned short,unsigned short,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAGGGMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,short *,short,short,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAFFFMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,class Vector2 *,float,float,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAVVector2@@MMMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,class Vector3 *,float,float,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAVVector3@@MMMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkBank::AddSlider(char const *,class Vector4 *,float,float,float,class datCallback) | ?AddSlider@bkBank@@UAEPAVbkSlider@@PBDPAVVector4@@MMMVdatCallback@@@Z
    public: virtual class bkCombo * __thiscall bkBank::AddCombo(char const *,int *,int,char const * *,int,class datCallback) | ?AddCombo@bkBank@@UAEPAVbkCombo@@PBDPAHHPAPBDHVdatCallback@@@Z
    public: virtual class bkCombo * __thiscall bkBank::AddCombo(char const *,unsigned char *,int,char const * *,int,class datCallback) | ?AddCombo@bkBank@@UAEPAVbkCombo@@PBDPAEHPAPBDHVdatCallback@@@Z
    public: virtual class bkColor * __thiscall bkBank::AddColor(char const *,class Vector3 *,class datCallback) | ?AddColor@bkBank@@UAEPAVbkColor@@PBDPAVVector3@@VdatCallback@@@Z
    public: virtual class bkColor * __thiscall bkBank::AddColor(char const *,class Vector4 *,class datCallback) | ?AddColor@bkBank@@UAEPAVbkColor@@PBDPAVVector4@@VdatCallback@@@Z
    public: virtual class bkGroup * __thiscall bkBank::PushGroup(char const *,bool) | ?PushGroup@bkBank@@UAEPAVbkGroup@@PBD_N@Z
    public: virtual class bkGroup * __thiscall bkBank::PopGroup(void) | ?PopGroup@bkBank@@UAEPAVbkGroup@@XZ
    public: virtual void __thiscall bkBank::AddWidget(class bkWidget *) | ?AddWidget@bkBank@@UAEXPAVbkWidget@@@Z
    public: void __thiscall bkBank::SetWidgetWidth(int) | ?SetWidgetWidth@bkBank@@QAEXH@Z
    public: virtual void __thiscall bkBank::UpdateGroup(class bkGroup const &,bool) | ?UpdateGroup@bkBank@@UAEXABVbkGroup@@_N@Z
    public: void __thiscall bkBank::Truncate(int) | ?Truncate@bkBank@@QAEXH@Z
    public: virtual bool __thiscall bkBank::Remove(class bkWidget const &) | ?Remove@bkBank@@UAE_NABVbkWidget@@@Z
    public: virtual bool __thiscall bkBank::Remove(int) | ?Remove@bkBank@@UAE_NH@Z
    public: virtual void * __thiscall bkBank::`vector deleting destructor'(unsigned int) | ??_EbkBank@@UAEPAXI@Z
    public: virtual void * __thiscall bkBank::`scalar deleting destructor'(unsigned int) | ??_GbkBank@@UAEPAXI@Z
    public: virtual bool __thiscall bkBank::IsShown(void) | ?IsShown@bkBank@@UAE_NXZ
    public: virtual void __thiscall bkBank::Hide(void) | ?Hide@bkBank@@UAEXXZ
    public: virtual void __thiscall bkBank::Show(void) | ?Show@bkBank@@UAEXXZ
    public: virtual class bkText * __thiscall bkBank::AddText(char const *,char *,unsigned int,class datCallback) | ?AddText@bkBank@@UAEPAVbkText@@PBDPADIVdatCallback@@@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned char>::IncrByDelta(void) | ?IncrByDelta@?$bkSliderDataInt@E@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned char>::DecrByDelta(void) | ?DecrByDelta@?$bkSliderDataInt@E@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned char>::Incr(float) | ?Incr@?$bkSliderDataInt@E@@UAEXM@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned char>::Update(char *) | ?Update@?$bkSliderDataInt@E@@UAE_NPAD@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned char>::SetValue(char const *) | ?SetValue@?$bkSliderDataInt@E@@UAE_NPBD@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned char>::GetValue(char *) | ?GetValue@?$bkSliderDataInt@E@@UAEXPAD@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned char>::SetAddr(void *) | ?SetAddr@?$bkSliderDataInt@E@@UAEXPAX@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned char>::SetRange(float,float) | ?SetRange@?$bkSliderDataInt@E@@UAEXMM@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned char>::IsFloat(void) const | ?IsFloat@?$bkSliderDataInt@E@@UBE_NXZ
    public: virtual bool __thiscall bkSliderDataInt<unsigned char>::CanBeNegative(void) const | ?CanBeNegative@?$bkSliderDataInt@E@@UBE_NXZ
    public: virtual void __thiscall bkSliderDataInt<signed char>::IncrByDelta(void) | ?IncrByDelta@?$bkSliderDataInt@C@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<signed char>::DecrByDelta(void) | ?DecrByDelta@?$bkSliderDataInt@C@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<signed char>::Incr(float) | ?Incr@?$bkSliderDataInt@C@@UAEXM@Z
    public: virtual bool __thiscall bkSliderDataInt<signed char>::Update(char *) | ?Update@?$bkSliderDataInt@C@@UAE_NPAD@Z
    public: virtual bool __thiscall bkSliderDataInt<signed char>::SetValue(char const *) | ?SetValue@?$bkSliderDataInt@C@@UAE_NPBD@Z
    public: virtual void __thiscall bkSliderDataInt<signed char>::GetValue(char *) | ?GetValue@?$bkSliderDataInt@C@@UAEXPAD@Z
    public: virtual void __thiscall bkSliderDataInt<signed char>::SetAddr(void *) | ?SetAddr@?$bkSliderDataInt@C@@UAEXPAX@Z
    public: virtual void __thiscall bkSliderDataInt<signed char>::SetRange(float,float) | ?SetRange@?$bkSliderDataInt@C@@UAEXMM@Z
    public: virtual bool __thiscall bkSliderDataInt<signed char>::IsFloat(void) const | ?IsFloat@?$bkSliderDataInt@C@@UBE_NXZ
    public: virtual bool __thiscall bkSliderDataInt<signed char>::CanBeNegative(void) const | ?CanBeNegative@?$bkSliderDataInt@C@@UBE_NXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned int>::IncrByDelta(void) | ?IncrByDelta@?$bkSliderDataInt@I@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned int>::DecrByDelta(void) | ?DecrByDelta@?$bkSliderDataInt@I@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned int>::Incr(float) | ?Incr@?$bkSliderDataInt@I@@UAEXM@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned int>::Update(char *) | ?Update@?$bkSliderDataInt@I@@UAE_NPAD@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned int>::SetValue(char const *) | ?SetValue@?$bkSliderDataInt@I@@UAE_NPBD@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned int>::GetValue(char *) | ?GetValue@?$bkSliderDataInt@I@@UAEXPAD@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned int>::SetAddr(void *) | ?SetAddr@?$bkSliderDataInt@I@@UAEXPAX@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned int>::SetRange(float,float) | ?SetRange@?$bkSliderDataInt@I@@UAEXMM@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned int>::IsFloat(void) const | ?IsFloat@?$bkSliderDataInt@I@@UBE_NXZ
    public: virtual bool __thiscall bkSliderDataInt<unsigned int>::CanBeNegative(void) const | ?CanBeNegative@?$bkSliderDataInt@I@@UBE_NXZ
    public: virtual void __thiscall bkSliderDataInt<int>::IncrByDelta(void) | ?IncrByDelta@?$bkSliderDataInt@H@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<int>::DecrByDelta(void) | ?DecrByDelta@?$bkSliderDataInt@H@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<int>::Incr(float) | ?Incr@?$bkSliderDataInt@H@@UAEXM@Z
    public: virtual bool __thiscall bkSliderDataInt<int>::Update(char *) | ?Update@?$bkSliderDataInt@H@@UAE_NPAD@Z
    public: virtual bool __thiscall bkSliderDataInt<int>::SetValue(char const *) | ?SetValue@?$bkSliderDataInt@H@@UAE_NPBD@Z
    public: virtual void __thiscall bkSliderDataInt<int>::GetValue(char *) | ?GetValue@?$bkSliderDataInt@H@@UAEXPAD@Z
    public: virtual void __thiscall bkSliderDataInt<int>::SetAddr(void *) | ?SetAddr@?$bkSliderDataInt@H@@UAEXPAX@Z
    public: virtual void __thiscall bkSliderDataInt<int>::SetRange(float,float) | ?SetRange@?$bkSliderDataInt@H@@UAEXMM@Z
    public: virtual bool __thiscall bkSliderDataInt<int>::IsFloat(void) const | ?IsFloat@?$bkSliderDataInt@H@@UBE_NXZ
    public: virtual bool __thiscall bkSliderDataInt<int>::CanBeNegative(void) const | ?CanBeNegative@?$bkSliderDataInt@H@@UBE_NXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned short>::IncrByDelta(void) | ?IncrByDelta@?$bkSliderDataInt@G@@UAEXXZ
    public: virtual void __thiscall bkSliderDataFloat::IncrByDelta(void) | ?IncrByDelta@bkSliderDataFloat@@UAEXXZ
    public: virtual void __thiscall bkSliderDataFloat::DecrByDelta(void) | ?DecrByDelta@bkSliderDataFloat@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned short>::DecrByDelta(void) | ?DecrByDelta@?$bkSliderDataInt@G@@UAEXXZ
    public: virtual void __thiscall bkSliderDataFloat::Incr(float) | ?Incr@bkSliderDataFloat@@UAEXM@Z
    public: virtual bool __thiscall bkSliderDataFloat::Update(char *) | ?Update@bkSliderDataFloat@@UAE_NPAD@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned short>::Incr(float) | ?Incr@?$bkSliderDataInt@G@@UAEXM@Z
    public: virtual bool __thiscall bkSliderDataFloat::SetValue(char const *) | ?SetValue@bkSliderDataFloat@@UAE_NPBD@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned short>::Update(char *) | ?Update@?$bkSliderDataInt@G@@UAE_NPAD@Z
    public: virtual void __thiscall bkSliderDataFloat::GetValue(char *) | ?GetValue@bkSliderDataFloat@@UAEXPAD@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned short>::SetValue(char const *) | ?SetValue@?$bkSliderDataInt@G@@UAE_NPBD@Z
    public: virtual void __thiscall bkSliderDataFloat::SetAddr(void *) | ?SetAddr@bkSliderDataFloat@@UAEXPAX@Z
    public: virtual void __thiscall bkSliderDataFloat::SetRange(float,float) | ?SetRange@bkSliderDataFloat@@UAEXMM@Z
    public: virtual bool __thiscall bkSliderDataFloat::IsFloat(void) const | ?IsFloat@bkSliderDataFloat@@UBE_NXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned short>::GetValue(char *) | ?GetValue@?$bkSliderDataInt@G@@UAEXPAD@Z
    public: virtual bool __thiscall bkSliderDataFloat::CanBeNegative(void) const | ?CanBeNegative@bkSliderDataFloat@@UBE_NXZ
    public: virtual void __thiscall bkSliderDataInt<unsigned short>::SetAddr(void *) | ?SetAddr@?$bkSliderDataInt@G@@UAEXPAX@Z
    public: virtual void __thiscall bkSliderDataInt<unsigned short>::SetRange(float,float) | ?SetRange@?$bkSliderDataInt@G@@UAEXMM@Z
    public: virtual bool __thiscall bkSliderDataInt<unsigned short>::IsFloat(void) const | ?IsFloat@?$bkSliderDataInt@G@@UBE_NXZ
    public: virtual bool __thiscall bkSliderDataInt<unsigned short>::CanBeNegative(void) const | ?CanBeNegative@?$bkSliderDataInt@G@@UBE_NXZ
    public: virtual void __thiscall bkSliderDataInt<short>::IncrByDelta(void) | ?IncrByDelta@?$bkSliderDataInt@F@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<short>::DecrByDelta(void) | ?DecrByDelta@?$bkSliderDataInt@F@@UAEXXZ
    public: virtual void __thiscall bkSliderDataInt<short>::Incr(float) | ?Incr@?$bkSliderDataInt@F@@UAEXM@Z
    public: virtual bool __thiscall bkSliderDataInt<short>::Update(char *) | ?Update@?$bkSliderDataInt@F@@UAE_NPAD@Z
    public: virtual bool __thiscall bkSliderDataInt<short>::SetValue(char const *) | ?SetValue@?$bkSliderDataInt@F@@UAE_NPBD@Z
    public: virtual void __thiscall bkSliderDataInt<short>::GetValue(char *) | ?GetValue@?$bkSliderDataInt@F@@UAEXPAD@Z
    public: virtual void __thiscall bkSliderDataInt<short>::SetAddr(void *) | ?SetAddr@?$bkSliderDataInt@F@@UAEXPAX@Z
    public: virtual void __thiscall bkSliderDataInt<short>::SetRange(float,float) | ?SetRange@?$bkSliderDataInt@F@@UAEXMM@Z
    public: virtual bool __thiscall bkSliderDataInt<short>::IsFloat(void) const | ?IsFloat@?$bkSliderDataInt@F@@UBE_NXZ
    public: virtual bool __thiscall bkSliderDataInt<short>::CanBeNegative(void) const | ?CanBeNegative@?$bkSliderDataInt@F@@UBE_NXZ
    const bkBank::`vftable' | ??_7bkBank@@6B@
    const bkSliderDataFloat::`vftable' | ??_7bkSliderDataFloat@@6B@
    const bkSliderDataInt<unsigned char>::`vftable' | ??_7?$bkSliderDataInt@E@@6B@
    const bkSliderDataInt<signed char>::`vftable' | ??_7?$bkSliderDataInt@C@@6B@
    const bkSliderDataInt<unsigned int>::`vftable' | ??_7?$bkSliderDataInt@I@@6B@
    const bkSliderDataInt<int>::`vftable' | ??_7?$bkSliderDataInt@H@@6B@
    const bkSliderDataInt<unsigned short>::`vftable' | ??_7?$bkSliderDataInt@G@@6B@
    const bkSliderDataInt<short>::`vftable' | ??_7?$bkSliderDataInt@F@@6B@
*/
