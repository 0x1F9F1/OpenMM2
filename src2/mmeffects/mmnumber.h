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
    mmeffects:mmnumber

    0x5332B0 | public: __thiscall mmNumberFont::mmNumberFont(char *) | ??0mmNumberFont@@QAE@PAD@Z
    0x5332E0 | public: __thiscall mmNumberFont::~mmNumberFont(void) | ??1mmNumberFont@@QAE@XZ
    0x533340 | public: void __thiscall mmNumberFont::LoadFont(char *,int,unsigned int) | ?LoadFont@mmNumberFont@@QAEXPADHI@Z
    0x5333B0 | public: void __thiscall mmNumberFont::LoadLocFont(char *,struct LocString *,int,unsigned int) | ?LoadLocFont@mmNumberFont@@QAEXPADPAULocString@@HI@Z
    0x533420 | public: __thiscall mmNumber::mmNumber(void) | ??0mmNumber@@QAE@XZ
    0x533440 | public: virtual __thiscall mmNumber::~mmNumber(void) | ??1mmNumber@@UAE@XZ
    0x533450 | public: void __thiscall mmNumber::Init(class mmNumberFont *,float,float) | ?Init@mmNumber@@QAEXPAVmmNumberFont@@MM@Z
    0x533470 | public: void __thiscall mmNumber::SetString(char *) | ?SetString@mmNumber@@QAEXPAD@Z
    0x5334A0 | public: void __cdecl mmNumber::Printf(char const *,...) | ?Printf@mmNumber@@QAAXPBDZZ
    0x5334C0 | public: virtual void __thiscall mmNumber::Update(void) | ?Update@mmNumber@@UAEXXZ
    0x5334E0 | public: virtual void __thiscall mmNumber::Cull(void) | ?Cull@mmNumber@@UAEXXZ
    public: void __thiscall mmNumber::AddWidgets(class bkBank *) | ?AddWidgets@mmNumber@@QAEXPAVbkBank@@@Z
    0x5335D0 | public: virtual void * __thiscall mmNumber::`scalar deleting destructor'(unsigned int) | ??_GmmNumber@@UAEPAXI@Z
    0x5B5324 | const mmNumber::`vftable' | ??_7mmNumber@@6B@
*/

class mmNumberFont
{
public:
    // 0x5332B0 | ??0mmNumberFont@@QAE@PAD@Z
    mmNumberFont(char* arg1)
    {
        stub<member_func_t<void, mmNumberFont, char*>>(0x5332B0, this, arg1);
    }

    // 0x5332E0 | ??1mmNumberFont@@QAE@XZ
    ~mmNumberFont()
    {
        stub<member_func_t<void, mmNumberFont>>(0x5332E0, this);
    }

    // 0x533340 | ?LoadFont@mmNumberFont@@QAEXPADHI@Z
    void LoadFont(char* arg1, i32 arg2, u32 arg3)
    {
        return stub<member_func_t<void, mmNumberFont, char*, i32, u32>>(0x533340, this, arg1, arg2, arg3);
    }

    // 0x5333B0 | ?LoadLocFont@mmNumberFont@@QAEXPADPAULocString@@HI@Z
    void LoadLocFont(char* arg1, struct LocString* arg2, i32 arg3, u32 arg4)
    {
        return stub<member_func_t<void, mmNumberFont, char*, struct LocString*, i32, u32>>(
            0x5333B0, this, arg1, arg2, arg3, arg4);
    }
};

struct mmNumber : asNode
{
public:
    // mmNumber::`vftable' @ 0x5B5324

    // 0x533420 | ??0mmNumber@@QAE@XZ
    mmNumber()
    {
        stub<member_func_t<void, mmNumber>>(0x533420, this);
    }

    // 0x533450 | ?Init@mmNumber@@QAEXPAVmmNumberFont@@MM@Z
    void Init(class mmNumberFont* arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, mmNumber, class mmNumberFont*, f32, f32>>(0x533450, this, arg1, arg2, arg3);
    }

    // 0x533470 | ?SetString@mmNumber@@QAEXPAD@Z
    void SetString(char* arg1)
    {
        return stub<member_func_t<void, mmNumber, char*>>(0x533470, this, arg1);
    }

    // 0x5334A0 | ?Printf@mmNumber@@QAAXPBDZZ
    // Skipped (Variable Arguments)

    // 0x533440 | ??1mmNumber@@UAE@XZ
    ~mmNumber() override
    {
        stub<member_func_t<void, mmNumber>>(0x533440, this);
    }

    // 0x5334E0 | ?Cull@mmNumber@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, mmNumber>>(0x5334E0, this);
    }

    // 0x5334C0 | ?Update@mmNumber@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, mmNumber>>(0x5334C0, this);
    }
};
