/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    bank:bklocbank

    public: __thiscall bkLocBank::bkLocBank(char const *,int,int,bool) | ??0bkLocBank@@QAE@PBDHH_N@Z
    public: virtual void __thiscall bkLocBank::SetState(bool,int,int,int,int) | ?SetState@bkLocBank@@UAEX_NHHHH@Z
    public: virtual void __thiscall bkLocBank::GetState(bool &,int &,int &,int &,int &) | ?GetState@bkLocBank@@UAEXAA_NAAH111@Z
    public: virtual bool __thiscall bkLocBank::IsShown(void) | ?IsShown@bkLocBank@@UAE_NXZ
    public: virtual void __thiscall bkLocBank::Hide(void) | ?Hide@bkLocBank@@UAEXXZ
    public: virtual void __thiscall bkLocBank::Show(void) | ?Show@bkLocBank@@UAEXXZ
    public: virtual void __thiscall bkLocBank::Update(void) | ?Update@bkLocBank@@UAEXXZ
    public: void __thiscall bkLocBank::Draw(void) | ?Draw@bkLocBank@@QAEXXZ
    public: virtual class bkButton * __thiscall bkLocBank::AddTitle(char const *) | ?AddTitle@bkLocBank@@UAEPAVbkButton@@PBD@Z
    public: virtual class bkButton * __thiscall bkLocBank::AddButton(char const *,class datCallback) | ?AddButton@bkLocBank@@UAEPAVbkButton@@PBDVdatCallback@@@Z
    public: virtual class bkText * __thiscall bkLocBank::AddText(char const *,char *,unsigned int,class datCallback) | ?AddText@bkLocBank@@UAEPAVbkText@@PBDPADIVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkLocBank::AddToggle(char const *,bool *,class datCallback) | ?AddToggle@bkLocBank@@UAEPAVbkToggle@@PBDPA_NVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkLocBank::AddToggle(char const *,int *,class datCallback) | ?AddToggle@bkLocBank@@UAEPAVbkToggle@@PBDPAHVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkLocBank::AddToggle(char const *,unsigned int *,unsigned int,class datCallback) | ?AddToggle@bkLocBank@@UAEPAVbkToggle@@PBDPAIIVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkLocBank::AddToggle(char const *,unsigned short *,unsigned short,class datCallback) | ?AddToggle@bkLocBank@@UAEPAVbkToggle@@PBDPAGGVdatCallback@@@Z
    public: virtual class bkToggle * __thiscall bkLocBank::AddToggle(char const *,unsigned char *,unsigned char,class datCallback) | ?AddToggle@bkLocBank@@UAEPAVbkToggle@@PBDPAEEVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkLocBank::AddSlider(char const *,float *,float,float,float,class datCallback) | ?AddSlider@bkLocBank@@UAEPAVbkSlider@@PBDPAMMMMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkLocBank::AddSlider(char const *,unsigned char *,unsigned char,unsigned char,float,class datCallback) | ?AddSlider@bkLocBank@@UAEPAVbkSlider@@PBDPAEEEMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkLocBank::AddSlider(char const *,signed char *,signed char,signed char,float,class datCallback) | ?AddSlider@bkLocBank@@UAEPAVbkSlider@@PBDPACCCMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkLocBank::AddSlider(char const *,unsigned short *,unsigned short,unsigned short,float,class datCallback) | ?AddSlider@bkLocBank@@UAEPAVbkSlider@@PBDPAGGGMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkLocBank::AddSlider(char const *,short *,short,short,float,class datCallback) | ?AddSlider@bkLocBank@@UAEPAVbkSlider@@PBDPAFFFMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkLocBank::AddSlider(char const *,unsigned int *,unsigned int,unsigned int,float,class datCallback) | ?AddSlider@bkLocBank@@UAEPAVbkSlider@@PBDPAIIIMVdatCallback@@@Z
    public: virtual class bkSlider * __thiscall bkLocBank::AddSlider(char const *,int *,int,int,float,class datCallback) | ?AddSlider@bkLocBank@@UAEPAVbkSlider@@PBDPAHHHMVdatCallback@@@Z
    public: virtual class bkCombo * __thiscall bkLocBank::AddCombo(char const *,unsigned char *,int,char const * *,int,class datCallback) | ?AddCombo@bkLocBank@@UAEPAVbkCombo@@PBDPAEHPAPBDHVdatCallback@@@Z
    public: virtual class bkCombo * __thiscall bkLocBank::AddCombo(char const *,int *,int,char const * *,int,class datCallback) | ?AddCombo@bkLocBank@@UAEPAVbkCombo@@PBDPAHHPAPBDHVdatCallback@@@Z
    public: virtual class bkGroup * __thiscall bkLocBank::PushGroup(char const *,bool) | ?PushGroup@bkLocBank@@UAEPAVbkGroup@@PBD_N@Z
    public: virtual class bkGroup * __thiscall bkLocBank::PopGroup(void) | ?PopGroup@bkLocBank@@UAEPAVbkGroup@@XZ
    private: static void __cdecl bkLocBank::GroupCallback(void *) | ?GroupCallback@bkLocBank@@CAXPAX@Z
    public: void __thiscall bkLocBank::AddWidget(class bkLocWidget *) | ?AddWidget@bkLocBank@@QAEXPAVbkLocWidget@@@Z
    public: void __cdecl bkLocBank::Printf(char const *,...) | ?Printf@bkLocBank@@QAAXPBDZZ
    public: virtual void * __thiscall bkLocBank::`vector deleting destructor'(unsigned int) | ??_EbkLocBank@@UAEPAXI@Z
    public: virtual void * __thiscall bkLocBank::`scalar deleting destructor'(unsigned int) | ??_GbkLocBank@@UAEPAXI@Z
    const bkLocBank::`vftable' | ??_7bkLocBank@@6B@
    protected: static int bkLocBank::NumShown | ?NumShown@bkLocBank@@1HA
    public: static class bkLocBank * bkLocBank::ActiveBank | ?ActiveBank@bkLocBank@@2PAV1@A
    public: static int bkLocBank::Indent | ?Indent@bkLocBank@@2HA
*/

#include "hooking.h"
