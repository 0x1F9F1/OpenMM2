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
    gizmo:bridgeaudio

    0x579D00 | public: __thiscall mmBridgeAudio::mmBridgeAudio(void) | ??0mmBridgeAudio@@QAE@XZ
    0x579D20 | public: virtual __thiscall mmBridgeAudio::~mmBridgeAudio(void) | ??1mmBridgeAudio@@UAE@XZ
    0x579D30 | public: void __thiscall mmBridgeAudio::Activate(int) | ?Activate@mmBridgeAudio@@QAEXH@Z
    0x579D70 | public: void __thiscall mmBridgeAudio::Deactivate(int) | ?Deactivate@mmBridgeAudio@@QAEXH@Z
    public: virtual void * __thiscall mmBridgeAudio::`scalar deleting destructor'(unsigned int) | ??_GmmBridgeAudio@@UAEPAXI@Z
    public: virtual void * __thiscall mmBridgeAudio::`vector deleting destructor'(unsigned int) | ??_EmmBridgeAudio@@UAEPAXI@Z
    0x5B6260 | const mmBridgeAudio::`vftable' | ??_7mmBridgeAudio@@6B@
*/

struct mmBridgeAudio : Aud3DAmbientObject
{
public:
    // mmBridgeAudio::`vftable' @ 0x5B6260

    // 0x579D00 | ??0mmBridgeAudio@@QAE@XZ
    inline mmBridgeAudio()
    {
        stub<member_func_t<void, mmBridgeAudio>>(0x579D00, this);
    }

    // 0x579D30 | ?Activate@mmBridgeAudio@@QAEXH@Z
    inline void Activate(int32_t arg1)
    {
        return stub<member_func_t<void, mmBridgeAudio, int32_t>>(0x579D30, this, arg1);
    }

    // 0x579D70 | ?Deactivate@mmBridgeAudio@@QAEXH@Z
    inline void Deactivate(int32_t arg1)
    {
        return stub<member_func_t<void, mmBridgeAudio, int32_t>>(0x579D70, this, arg1);
    }
};
