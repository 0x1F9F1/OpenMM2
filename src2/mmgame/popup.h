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
    mmgame:popup

    0x429D90 | public: __thiscall mmPopup::mmPopup(class mmGame *,float,float,float,float) | ??0mmPopup@@QAE@PAVmmGame@@MMMM@Z
    0x42A270 | public: virtual __thiscall mmPopup::~mmPopup(void) | ??1mmPopup@@UAE@XZ
    0x42A280 | public: int __thiscall mmPopup::IsEnabled(void) | ?IsEnabled@mmPopup@@QAEHXZ
    0x42A290 | public: void __thiscall mmPopup::DisablePU(int) | ?DisablePU@mmPopup@@QAEXH@Z
    0x42A320 | public: void __thiscall mmPopup::ProcessEscape(int) | ?ProcessEscape@mmPopup@@QAEXH@Z
    0x42A400 | public: void __thiscall mmPopup::ProcessChat(void) | ?ProcessChat@mmPopup@@QAEXXZ
    0x42A4B0 | public: void __thiscall mmPopup::ProcessKeymap(int) | ?ProcessKeymap@mmPopup@@QAEXH@Z
    0x42A5E0 | public: void __thiscall mmPopup::ShowResults(int) | ?ShowResults@mmPopup@@QAEXH@Z
    0x42A6D0 | public: void __thiscall mmPopup::ShowRoster(void) | ?ShowRoster@mmPopup@@QAEXXZ
    0x42A760 | public: void __thiscall mmPopup::ShowReplay(void) | ?ShowReplay@mmPopup@@QAEXXZ
    0x42A7A0 | public: void __thiscall mmPopup::ForceRoster(void) | ?ForceRoster@mmPopup@@QAEXXZ
    0x42A830 | public: virtual void __thiscall mmPopup::Update(void) | ?Update@mmPopup@@UAEXXZ
    0x42B430 | public: virtual void __thiscall mmPopup::Reset(void) | ?Reset@mmPopup@@UAEXXZ
    0x42B450 | public: char * __thiscall mmPopup::GetComment(void) | ?GetComment@mmPopup@@QAEPADXZ
    0x42B460 | public: void __thiscall mmPopup::SetComment(char *) | ?SetComment@mmPopup@@QAEXPAD@Z
    public: void __thiscall mmPopup::RecordPosition(void) | ?RecordPosition@mmPopup@@QAEXXZ
    0x42B480 | public: void __thiscall mmPopup::SaveReplay(void) | ?SaveReplay@mmPopup@@QAEXXZ
    0x42B4F0 | public: void __thiscall mmPopup::Lock(void) | ?Lock@mmPopup@@QAEXXZ
    0x42B500 | public: void __thiscall mmPopup::Unlock(void) | ?Unlock@mmPopup@@QAEXXZ
    0x42B510 | public: void __thiscall mmPopup::ChatCB(void) | ?ChatCB@mmPopup@@QAEXXZ
    0x42B570 | public: void __thiscall mmPopup::PlayPauseMusic(void) | ?PlayPauseMusic@mmPopup@@QAEXXZ
    0x42B5B0 | public: void __thiscall mmPopup::PlayReturnMusic(void) | ?PlayReturnMusic@mmPopup@@QAEXXZ
    0x42B720 | public: virtual void * __thiscall mmPopup::`scalar deleting destructor'(unsigned int) | ??_GmmPopup@@UAEPAXI@Z
    public: virtual void * __thiscall mmPopup::`vector deleting destructor'(unsigned int) | ??_EmmPopup@@UAEPAXI@Z
    0x5B0B44 | const mmPopup::`vftable' | ??_7mmPopup@@6B@
*/

struct mmPopup : asNode
{
public:
    // mmPopup::`vftable' @ 0x5B0B44

    // 0x429D90 | ??0mmPopup@@QAE@PAVmmGame@@MMMM@Z
    inline mmPopup(class mmGame* arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, mmPopup, class mmGame*, float, float, float, float>>(
            0x429D90, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x42A280 | ?IsEnabled@mmPopup@@QAEHXZ
    inline int32_t IsEnabled()
    {
        return stub<member_func_t<int32_t, mmPopup>>(0x42A280, this);
    }

    // 0x42A290 | ?DisablePU@mmPopup@@QAEXH@Z
    inline void DisablePU(int32_t arg1)
    {
        return stub<member_func_t<void, mmPopup, int32_t>>(0x42A290, this, arg1);
    }

    // 0x42A320 | ?ProcessEscape@mmPopup@@QAEXH@Z
    inline void ProcessEscape(int32_t arg1)
    {
        return stub<member_func_t<void, mmPopup, int32_t>>(0x42A320, this, arg1);
    }

    // 0x42A400 | ?ProcessChat@mmPopup@@QAEXXZ
    inline void ProcessChat()
    {
        return stub<member_func_t<void, mmPopup>>(0x42A400, this);
    }

    // 0x42A4B0 | ?ProcessKeymap@mmPopup@@QAEXH@Z
    inline void ProcessKeymap(int32_t arg1)
    {
        return stub<member_func_t<void, mmPopup, int32_t>>(0x42A4B0, this, arg1);
    }

    // 0x42A5E0 | ?ShowResults@mmPopup@@QAEXH@Z
    inline void ShowResults(int32_t arg1)
    {
        return stub<member_func_t<void, mmPopup, int32_t>>(0x42A5E0, this, arg1);
    }

    // 0x42A6D0 | ?ShowRoster@mmPopup@@QAEXXZ
    inline void ShowRoster()
    {
        return stub<member_func_t<void, mmPopup>>(0x42A6D0, this);
    }

    // 0x42A760 | ?ShowReplay@mmPopup@@QAEXXZ
    inline void ShowReplay()
    {
        return stub<member_func_t<void, mmPopup>>(0x42A760, this);
    }

    // 0x42A7A0 | ?ForceRoster@mmPopup@@QAEXXZ
    inline void ForceRoster()
    {
        return stub<member_func_t<void, mmPopup>>(0x42A7A0, this);
    }

    // 0x42B450 | ?GetComment@mmPopup@@QAEPADXZ
    inline char* GetComment()
    {
        return stub<member_func_t<char*, mmPopup>>(0x42B450, this);
    }

    // 0x42B460 | ?SetComment@mmPopup@@QAEXPAD@Z
    inline void SetComment(char* arg1)
    {
        return stub<member_func_t<void, mmPopup, char*>>(0x42B460, this, arg1);
    }

    // 0x42B480 | ?SaveReplay@mmPopup@@QAEXXZ
    inline void SaveReplay()
    {
        return stub<member_func_t<void, mmPopup>>(0x42B480, this);
    }

    // 0x42B4F0 | ?Lock@mmPopup@@QAEXXZ
    inline void Lock()
    {
        return stub<member_func_t<void, mmPopup>>(0x42B4F0, this);
    }

    // 0x42B500 | ?Unlock@mmPopup@@QAEXXZ
    inline void Unlock()
    {
        return stub<member_func_t<void, mmPopup>>(0x42B500, this);
    }

    // 0x42B510 | ?ChatCB@mmPopup@@QAEXXZ
    inline void ChatCB()
    {
        return stub<member_func_t<void, mmPopup>>(0x42B510, this);
    }

    // 0x42B570 | ?PlayPauseMusic@mmPopup@@QAEXXZ
    inline void PlayPauseMusic()
    {
        return stub<member_func_t<void, mmPopup>>(0x42B570, this);
    }

    // 0x42B5B0 | ?PlayReturnMusic@mmPopup@@QAEXXZ
    inline void PlayReturnMusic()
    {
        return stub<member_func_t<void, mmPopup>>(0x42B5B0, this);
    }

    // 0x42A270 | ??1mmPopup@@UAE@XZ
    inline ~mmPopup() override
    {
        stub<member_func_t<void, mmPopup>>(0x42A270, this);
    }

    // 0x42A830 | ?Update@mmPopup@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmPopup>>(0x42A830, this);
    }

    // 0x42B430 | ?Reset@mmPopup@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmPopup>>(0x42B430, this);
    }
};
