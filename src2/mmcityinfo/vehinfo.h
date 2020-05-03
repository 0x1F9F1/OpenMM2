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

/*
    mmcityinfo:vehinfo

    0x529720 | public: __thiscall mmVehInfo::mmVehInfo(void) | ??0mmVehInfo@@QAE@XZ
    0x529770 | public: virtual __thiscall mmVehInfo::~mmVehInfo(void) | ??1mmVehInfo@@UAE@XZ
    0x529780 | void __cdecl mygetstring(struct _iobuf *,char *) | ?mygetstring@@YAXPAU_iobuf@@PAD@Z
    0x5297B0 | public: int __thiscall mmVehInfo::Load(char *) | ?Load@mmVehInfo@@QAEHPAD@Z
    0x529A00 | public: int __thiscall mmVehInfo::HasColorVariations(void) | ?HasColorVariations@mmVehInfo@@QAEHXZ
    0x529A20 | public: void __thiscall mmVehInfo::Print(void) | ?Print@mmVehInfo@@QAEXXZ
    0x529AA0 | public: unsigned long __thiscall mmVehInfo::GetTuningCRC(void) | ?GetTuningCRC@mmVehInfo@@QAEKXZ
    0x529AB0 | public: void __thiscall mmVehInfo::ComputeTuningCRC(void) | ?ComputeTuningCRC@mmVehInfo@@QAEXXZ
    public: virtual void * __thiscall mmVehInfo::`vector deleting destructor'(unsigned int) | ??_EmmVehInfo@@UAEPAXI@Z
    0x529B50 | public: virtual void * __thiscall mmVehInfo::`scalar deleting destructor'(unsigned int) | ??_GmmVehInfo@@UAEPAXI@Z
    0x5B5248 | const mmVehInfo::`vftable' | ??_7mmVehInfo@@6B@
*/

class mmVehInfo
{
    // const mmVehInfo::`vftable' @ 0x5B5248

public:
    // 0x529720 | ??0mmVehInfo@@QAE@XZ
    mmVehInfo();

    // 0x529B50 | ??_GmmVehInfo@@UAEPAXI@Z
    // 0x529770 | ??1mmVehInfo@@UAE@XZ
    virtual ~mmVehInfo();

    // 0x529AB0 | ?ComputeTuningCRC@mmVehInfo@@QAEXXZ
    void ComputeTuningCRC();

    // 0x529AA0 | ?GetTuningCRC@mmVehInfo@@QAEKXZ
    u32 GetTuningCRC();

    // 0x529A00 | ?HasColorVariations@mmVehInfo@@QAEHXZ
    i32 HasColorVariations();

    // 0x4F7A90 | ?IsValid@mmVehInfo@@QAEHXZ
    i32 IsValid();

    // 0x5297B0 | ?Load@mmVehInfo@@QAEHPAD@Z
    i32 Load(char* arg1);

    // 0x529A20 | ?Print@mmVehInfo@@QAEXXZ
    void Print();
};

check_size(mmVehInfo, 0x0);

// 0x529780 | ?mygetstring@@YAXPAU_iobuf@@PAD@Z
void mygetstring(struct _iobuf* arg1, char* arg2);
