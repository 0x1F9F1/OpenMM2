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
    node:event

    0x4A16C0 | public: __thiscall eqEventHandler::eqEventHandler(void) | ??0eqEventHandler@@QAE@XZ
    0x4A1700 | public: virtual __thiscall eqEventHandler::~eqEventHandler(void) | ??1eqEventHandler@@UAE@XZ
    0x4A1730 | public: int __thiscall eqEventHandler::BeginGfx(int,int,int) | ?BeginGfx@eqEventHandler@@QAEHHHH@Z
    0x4A1740 | public: void __thiscall eqEventHandler::EndGfx(void) | ?EndGfx@eqEventHandler@@QAEXXZ
    0x4A1750 | public: void __thiscall eqEventHandler::RestoreApp(void) | ?RestoreApp@eqEventHandler@@QAEXXZ
    0x4A1760 | public: void __thiscall eqEventHandler::MinimizeApp(int) | ?MinimizeApp@eqEventHandler@@QAEXH@Z
    0x4A1770 | public: void __thiscall eqEventHandler::SetActive(int) | ?SetActive@eqEventHandler@@QAEXH@Z
    0x4A1780 | public: void __thiscall eqEventHandler::ClearActive(int) | ?ClearActive@eqEventHandler@@QAEXH@Z
    0x4A1790 | public: void __thiscall eqEventHandler::Update(void) | ?Update@eqEventHandler@@QAEXXZ
    0x4A1D60 | public: static char * __cdecl eqEventHandler::EKeyName(int) | ?EKeyName@eqEventHandler@@SAPADH@Z
    0x4A2030 | public: void __thiscall eqEventHandler::AddClient(class eqEventMonitor *) | ?AddClient@eqEventHandler@@QAEXPAVeqEventMonitor@@@Z
    0x4A2090 | public: void __thiscall eqEventHandler::RemoveClient(class eqEventMonitor *) | ?RemoveClient@eqEventHandler@@QAEXPAVeqEventMonitor@@@Z
    0x4A20D0 | public: __thiscall eqEventMonitor::eqEventMonitor(void) | ??0eqEventMonitor@@QAE@XZ
    0x4A20F0 | public: virtual __thiscall eqEventMonitor::~eqEventMonitor(void) | ??1eqEventMonitor@@UAE@XZ
    0x4A2110 | public: virtual void __thiscall eqEventMonitor::Mouse(void *,int,int,int,int,int,int,int) | ?Mouse@eqEventMonitor@@UAEXPAXHHHHHHH@Z
    0x4A2190 | public: virtual void __thiscall eqEventMonitor::Keyboard(void *,int,int,int,int) | ?Keyboard@eqEventMonitor@@UAEXPAXHHHH@Z
    public: virtual void * __thiscall eqEventHandler::`scalar deleting destructor'(unsigned int) | ??_GeqEventHandler@@UAEPAXI@Z
    0x4A2210 | public: virtual void * __thiscall eqEventHandler::`vector deleting destructor'(unsigned int) | ??_EeqEventHandler@@UAEPAXI@Z
    public: virtual void * __thiscall eqEventMonitor::`vector deleting destructor'(unsigned int) | ??_EeqEventMonitor@@UAEPAXI@Z
    0x4A2240 | public: virtual void * __thiscall eqEventMonitor::`scalar deleting destructor'(unsigned int) | ??_GeqEventMonitor@@UAEPAXI@Z
    0x5B2960 | const eqEventHandler::`vftable' | ??_7eqEventHandler@@6B@
    0x5B2964 | const eqEventMonitor::`vftable' | ??_7eqEventMonitor@@6B@
    int EQ_BUTTON_PRIMARY | ?EQ_BUTTON_PRIMARY@@3HA
    0x661788 | public: static class eqEventHandler * eqEventHandler::SuperQ | ?SuperQ@eqEventHandler@@2PAV1@A
*/

class eqEventHandler
{
public:
    // eqEventHandler::`vftable' @ 0x5B2960

    // 0x4A16C0 | ??0eqEventHandler@@QAE@XZ
    eqEventHandler()
    {
        stub<member_func_t<void, eqEventHandler>>(0x4A16C0, this);
    }

    // 0x4A1730 | ?BeginGfx@eqEventHandler@@QAEHHHH@Z
    i32 BeginGfx(i32 arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<i32, eqEventHandler, i32, i32, i32>>(0x4A1730, this, arg1, arg2, arg3);
    }

    // 0x4A1740 | ?EndGfx@eqEventHandler@@QAEXXZ
    void EndGfx()
    {
        return stub<member_func_t<void, eqEventHandler>>(0x4A1740, this);
    }

    // 0x4A1750 | ?RestoreApp@eqEventHandler@@QAEXXZ
    void RestoreApp()
    {
        return stub<member_func_t<void, eqEventHandler>>(0x4A1750, this);
    }

    // 0x4A1760 | ?MinimizeApp@eqEventHandler@@QAEXH@Z
    void MinimizeApp(i32 arg1)
    {
        return stub<member_func_t<void, eqEventHandler, i32>>(0x4A1760, this, arg1);
    }

    // 0x4A1770 | ?SetActive@eqEventHandler@@QAEXH@Z
    void SetActive(i32 arg1)
    {
        return stub<member_func_t<void, eqEventHandler, i32>>(0x4A1770, this, arg1);
    }

    // 0x4A1780 | ?ClearActive@eqEventHandler@@QAEXH@Z
    void ClearActive(i32 arg1)
    {
        return stub<member_func_t<void, eqEventHandler, i32>>(0x4A1780, this, arg1);
    }

    // 0x4A1790 | ?Update@eqEventHandler@@QAEXXZ
    void Update()
    {
        return stub<member_func_t<void, eqEventHandler>>(0x4A1790, this);
    }

    // 0x4A1D60 | ?EKeyName@eqEventHandler@@SAPADH@Z
    static inline char* EKeyName(i32 arg1)
    {
        return stub<cdecl_t<char*, i32>>(0x4A1D60, arg1);
    }

    // 0x4A2030 | ?AddClient@eqEventHandler@@QAEXPAVeqEventMonitor@@@Z
    void AddClient(class eqEventMonitor* arg1)
    {
        return stub<member_func_t<void, eqEventHandler, class eqEventMonitor*>>(0x4A2030, this, arg1);
    }

    // 0x4A2090 | ?RemoveClient@eqEventHandler@@QAEXPAVeqEventMonitor@@@Z
    void RemoveClient(class eqEventMonitor* arg1)
    {
        return stub<member_func_t<void, eqEventHandler, class eqEventMonitor*>>(0x4A2090, this, arg1);
    }

    // 0x661788 | ?SuperQ@eqEventHandler@@2PAV1@A
    inline extern_var(0x661788, class eqEventHandler*, SuperQ);

    // 0x4A1700 | ??1eqEventHandler@@UAE@XZ
    virtual ~eqEventHandler()
    {
        stub<member_func_t<void, eqEventHandler>>(0x4A1700, this);
    }
};

class eqEventMonitor
{
public:
    // eqEventMonitor::`vftable' @ 0x5B2964

    // 0x4A20D0 | ??0eqEventMonitor@@QAE@XZ
    eqEventMonitor()
    {
        stub<member_func_t<void, eqEventMonitor>>(0x4A20D0, this);
    }

    // 0x4A20F0 | ??1eqEventMonitor@@UAE@XZ
    virtual ~eqEventMonitor()
    {
        stub<member_func_t<void, eqEventMonitor>>(0x4A20F0, this);
    }

    // 0x4A2110 | ?Mouse@eqEventMonitor@@UAEXPAXHHHHHHH@Z
    virtual void Mouse(void* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, i32 arg8)
    {
        return stub<member_func_t<void, eqEventMonitor, void*, i32, i32, i32, i32, i32, i32, i32>>(
            0x4A2110, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4A2190 | ?Keyboard@eqEventMonitor@@UAEXPAXHHHH@Z
    virtual void Keyboard(void* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5)
    {
        return stub<member_func_t<void, eqEventMonitor, void*, i32, i32, i32, i32>>(
            0x4A2190, this, arg1, arg2, arg3, arg4, arg5);
    }
};
