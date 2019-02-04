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

#include "hooking.h"

class eqEventMonitor;

class eqEventHandler
{
public:
    uint32_t dword4 {0};
    uint32_t dword8 {1};
    uint32_t dwordC {0};
    eqEventMonitor *Clients[8] {nullptr};
    uint8_t gap30[8] {0};
    uint32_t dword38 {0};
    uint32_t dword3C {0};
    uint32_t dword40 {0};
    uint32_t dword44 {0};
    char char48[256] {};
    char gap148[0x18] {};

    eqEventHandler();
    virtual ~eqEventHandler();

    void RemoveClient(eqEventMonitor* client);

    void Update(void);

    static inline extern_var(0x661788, eqEventHandler*, SuperQ);
};

check_size(eqEventHandler, 0x160);

class eqEventMonitor
{
public:
    eqEventMonitor() = default;

    virtual ~eqEventMonitor();

    eqEventHandler *Handler {nullptr};
    int Index {-1};
};

check_size(eqEventMonitor, 0xC);
