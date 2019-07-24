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
    bank:bkwinbank

    public: __thiscall bkWinBank::bkWinBank(struct HWND__ *,char const *,int,int,bool) | ??0bkWinBank@@QAE@PAUHWND__@@PBDHH_N@Z
    protected: virtual __thiscall bkWinBank::~bkWinBank(void) | ??1bkWinBank@@MAE@XZ
    public: virtual void __thiscall bkWinBank::Resize(void) | ?Resize@bkWinBank@@UAEXXZ
    protected: void __thiscall bkWinBank::ResizeWindow(int) | ?ResizeWindow@bkWinBank@@IAEXH@Z
    protected: void __thiscall bkWinBank::ResetScrollPosition(void) | ?ResetScrollPosition@bkWinBank@@IAEXXZ
    public: virtual bool __thiscall bkWinBank::IsShown(void) | ?IsShown@bkWinBank@@UAE_NXZ
    public: virtual void __thiscall bkWinBank::Hide(void) | ?Hide@bkWinBank@@UAEXXZ
    public: virtual void __thiscall bkWinBank::Show(void) | ?Show@bkWinBank@@UAEXXZ
    public: virtual void __thiscall bkWinBank::Raise(bool) | ?Raise@bkWinBank@@UAEX_N@Z
    public: virtual void __thiscall bkWinBank::UpdateGroup(class bkGroup const &,bool) | ?UpdateGroup@bkWinBank@@UAEXABVbkGroup@@_N@Z
    public: virtual void __thiscall bkWinBank::Update(void) | ?Update@bkWinBank@@UAEXXZ
    public: virtual class bkButton * __thiscall bkWinBank::AddTitle(char const *) | ?AddTitle@bkWinBank@@UAEPAVbkButton@@PBD@Z
    public: virtual class bkButton * __thiscall bkWinBank::AddButton(char const *,class datCallback) | ?AddButton@bkWinBank@@UAEPAVbkButton@@PBDVdatCallback@@@Z
    public: virtual class bkText * __thiscall bkWinBank::AddText(char const *,char *,unsigned int,bool,class datCallback) | ?AddText@bkWinBank@@UAEPAVbkText@@PBDPADI_NVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkWinBank::AddToggle(char const *,bool *,class datCallback) | ?AddToggle@bkWinBank@@UAEPAVbkToggle@@PBDPA_NVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkWinBank::AddToggle(char const *,int *,class datCallback) | ?AddToggle@bkWinBank@@UAEPAVbkToggle@@PBDPAHVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkWinBank::AddToggle(char const *,unsigned int *,unsigned int,class datCallback) | ?AddToggle@bkWinBank@@UAEPAVbkToggle@@PBDPAIIVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkWinBank::AddToggle(char const *,unsigned short *,unsigned short,class datCallback) | ?AddToggle@bkWinBank@@UAEPAVbkToggle@@PBDPAGGVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkWinBank::AddToggle(char const *,unsigned char *,unsigned char,class datCallback) | ?AddToggle@bkWinBank@@UAEPAVbkToggle@@PBDPAEEVdatCallback@@@Z
    protected: virtual class bkSlider * __thiscall bkWinBank::AddSlider(char const *,class bkSliderData &,class datCallback) | ?AddSlider@bkWinBank@@MAEPAVbkSlider@@PBDAAVbkSliderData@@VdatCallback@@@Z
    public: virtual class bkCombo * __thiscall bkWinBank::AddCombo(char const *,int *,int,char const * *,int,class datCallback) | ?AddCombo@bkWinBank@@UAEPAVbkCombo@@PBDPAHHPAPBDHVdatCallback@@@Z
    public: virtual class bkCombo * __thiscall bkWinBank::AddCombo(char const *,unsigned char *,int,char const * *,int,class datCallback) | ?AddCombo@bkWinBank@@UAEPAVbkCombo@@PBDPAEHPAPBDHVdatCallback@@@Z
    public: virtual class bkGroup * __thiscall bkWinBank::PushGroup(char const *,bool) | ?PushGroup@bkWinBank@@UAEPAVbkGroup@@PBD_N@Z
    public: virtual class bkGroup * __thiscall bkWinBank::PopGroup(void) | ?PopGroup@bkWinBank@@UAEPAVbkGroup@@XZ
    protected: void __thiscall bkWinBank::OpenWindow(struct HWND__ *,char const *,int,int,bool) | ?OpenWindow@bkWinBank@@IAEXPAUHWND__@@PBDHH_N@Z
    public: virtual bool __thiscall bkWinBank::Remove(class bkWidget const &) | ?Remove@bkWinBank@@UAE_NABVbkWidget@@@Z
    public: virtual bool __thiscall bkWinBank::Remove(int) | ?Remove@bkWinBank@@UAE_NH@Z
    public: virtual void __thiscall bkWinBank::GetState(bool &,int &,int &,int &,int &) | ?GetState@bkWinBank@@UAEXAA_NAAH111@Z
    public: virtual void __thiscall bkWinBank::SetState(bool,int,int,int,int) | ?SetState@bkWinBank@@UAEX_NHHHH@Z
    protected: virtual void * __thiscall bkWinBank::`vector deleting destructor'(unsigned int) | ??_EbkWinBank@@MAEPAXI@Z
    protected: virtual void * __thiscall bkWinBank::`scalar deleting destructor'(unsigned int) | ??_GbkWinBank@@MAEPAXI@Z
    const bkWinBank::`vftable' | ??_7bkWinBank@@6B@
    int sGroupStackPos | ?sGroupStackPos@@3HA
    class bkWinGroup * * sGroupStack | ?sGroupStack@@3PAPAVbkWinGroup@@A
*/
