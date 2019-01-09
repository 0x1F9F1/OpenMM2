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
    aud:dirsnd

    0x5A4ED0 | public: __thiscall DirSnd::DirSnd(void) | ??0DirSnd@@QAE@XZ
    0x5A4F30 | public: __thiscall DirSnd::~DirSnd(void) | ??1DirSnd@@QAE@XZ
    0x5A4FD0 | public: void __thiscall DirSnd::DeInit(void) | ?DeInit@DirSnd@@QAEXXZ
    0x5A5080 | public: static class DirSnd * __cdecl DirSnd::Init(unsigned long,unsigned char,bool,char *) | ?Init@DirSnd@@SAPAV1@KE_NPAD@Z
    0x5A5160 | public: int __thiscall DirSnd::Init3DListener(float,float,float,float,float) | ?Init3DListener@DirSnd@@QAEHMMMMM@Z
    0x5A5170 | void __cdecl UpperCase(char *) | ?UpperCase@@YAXPAD@Z
    0x5A51C0 | public: int __thiscall DirSnd::IsDSDeviceInList(struct _GUID *) | ?IsDSDeviceInList@DirSnd@@QAEHPAU_GUID@@@Z
    0x5A5210 | int __stdcall DSEnumProc(struct _GUID *,char *,char *,void *) | ?DSEnumProc@@YGHPAU_GUID@@PAD1PAX@Z
    0x5A5390 | public: void __thiscall DirSnd::SetDeviceRating(struct tag_dsdevdesc *) | ?SetDeviceRating@DirSnd@@QAEXPAUtag_dsdevdesc@@@Z
    0x5A5510 | public: int __thiscall DirSnd::EnumDSDevices(void) | ?EnumDSDevices@DirSnd@@QAEHXZ
    0x5A5530 | public: virtual int __thiscall DirSnd::InitPrimarySoundBuffer(unsigned long,unsigned char,char *) | ?InitPrimarySoundBuffer@DirSnd@@UAEHKEPAD@Z
    0x5A5630 | protected: int __thiscall DirSnd::CreatePrimaryInterfaceAndBuffer(struct _DSBUFFERDESC *) | ?CreatePrimaryInterfaceAndBuffer@DirSnd@@IAEHPAU_DSBUFFERDESC@@@Z
    0x5A5770 | public: void __thiscall DirSnd::ClearDSDeviceList(void) | ?ClearDSDeviceList@DirSnd@@QAEXXZ
    0x5A57B0 | int __cdecl FormatCodeToWFX(unsigned long,struct tWAVEFORMATEX *) | ?FormatCodeToWFX@@YAHKPAUtWAVEFORMATEX@@@Z
    0x5A5860 | public: void __thiscall DirSnd::SetPrimaryBufferFormat(unsigned long,unsigned char) | ?SetPrimaryBufferFormat@DirSnd@@QAEXKE@Z
    0x5A5950 | public: void __thiscall DirSnd::ScanAvailableDSFormats(void) | ?ScanAvailableDSFormats@DirSnd@@QAEXXZ
    0x5A5A30 | public: char * __thiscall DirSnd::TranslateDSError(long) | ?TranslateDSError@DirSnd@@QAEPADJ@Z
    0x5A5BB0 | public: void __thiscall DirSnd::SetBitDepth(int) | ?SetBitDepth@DirSnd@@QAEXH@Z
    0x5A5BD0 | public: char * * __thiscall DirSnd::GetDeviceNames(void) | ?GetDeviceNames@DirSnd@@QAEPAPADXZ
    0x5A5C00 | public: unsigned int __thiscall DirSnd::GetNum3DHallBufs(void) | ?GetNum3DHallBufs@DirSnd@@QAEIXZ
    0x5B8A1C | const DirSnd::`vftable' | ??_7DirSnd@@6B@
    struct tag_fd * aOutputFormats | ?aOutputFormats@@3PAUtag_fd@@A
    0x6B4C2C | class DirSnd * DSGlobalPtr | ?DSGlobalPtr@@3PAVDirSnd@@A
*/

#include "hooking.h"

#include "minwin.h"

#include <mmsystem.h>
#include <dsound.h>

struct mmSoundDriver
{
    GUID GUID;
    char* Name;
    int Rating;
    mmSoundDriver *Next;
};

check_size(mmSoundDriver, 0x1C);

class DirSnd
{
public:
    IDirectSoundBuffer* lpDSBuffer {nullptr};
    IDirectSound* lpDS {nullptr};
    HWND hWnd {nullptr};
    int gap10 {0};
    mmSoundDriver *FirstDriver {nullptr};
    mmSoundDriver *CurrentDriver {nullptr};
    IUnknown *field_1C {nullptr};
    int DeviceCount {0};
    int BitDepth {1};
    int DeviceFlags {0};
    bool Enable3D {false};
    bool Initialized {false};
    int SoundEnabled {false};
    int DeviceCaps {0};
    mmSoundDriver **SoundDevices {nullptr};

    DirSnd();
    ~DirSnd();

    virtual int InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char* deviceName);
};

check_size(DirSnd, 0x3C);

inline_var(0x6B4C2C, DirSnd*, DSGlobalPtr);
