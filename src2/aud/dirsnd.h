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

class DirSnd
{
    // const DirSnd::`vftable' @ 0x5B8A1C

public:
    // 0x5A4ED0 | ??0DirSnd@@QAE@XZ
    DirSnd();

    // 0x5A4F30 | ??1DirSnd@@QAE@XZ
    ~DirSnd();

    // 0x5A5770 | ?ClearDSDeviceList@DirSnd@@QAEXXZ
    void ClearDSDeviceList();

    // 0x5A4FD0 | ?DeInit@DirSnd@@QAEXXZ
    void DeInit();

    // 0x5A5510 | ?EnumDSDevices@DirSnd@@QAEHXZ
    i32 EnumDSDevices();

    // 0x5A5BD0 | ?GetDeviceNames@DirSnd@@QAEPAPADXZ
    char** GetDeviceNames();

    // 0x5A5C00 | ?GetNum3DHallBufs@DirSnd@@QAEIXZ
    u32 GetNum3DHallBufs();

    // 0x5A5160 | ?Init3DListener@DirSnd@@QAEHMMMMM@Z
    i32 Init3DListener(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

    // 0x5A51C0 | ?IsDSDeviceInList@DirSnd@@QAEHPAU_GUID@@@Z
    i32 IsDSDeviceInList(struct _GUID* arg1);

    // 0x5A5950 | ?ScanAvailableDSFormats@DirSnd@@QAEXXZ
    void ScanAvailableDSFormats();

    // 0x5A5BB0 | ?SetBitDepth@DirSnd@@QAEXH@Z
    void SetBitDepth(i32 arg1);

    // 0x5A5390 | ?SetDeviceRating@DirSnd@@QAEXPAUtag_dsdevdesc@@@Z
    void SetDeviceRating(struct tag_dsdevdesc* arg1);

    // 0x5A5860 | ?SetPrimaryBufferFormat@DirSnd@@QAEXKE@Z
    void SetPrimaryBufferFormat(u32 arg1, u8 arg2);

    // 0x5A5A30 | ?TranslateDSError@DirSnd@@QAEPADJ@Z
    char* TranslateDSError(i32 arg1);

    // 0x5A5530 | ?InitPrimarySoundBuffer@DirSnd@@UAEHKEPAD@Z
    virtual i32 InitPrimarySoundBuffer(u32 arg1, u8 arg2, char* arg3);

    // 0x5A5080 | ?Init@DirSnd@@SAPAV1@KE_NPAD@Z
    static class DirSnd* Init(u32 arg1, u8 arg2, bool arg3, char* arg4);

protected:
    // 0x5A5630 | ?CreatePrimaryInterfaceAndBuffer@DirSnd@@IAEHPAU_DSBUFFERDESC@@@Z
    i32 CreatePrimaryInterfaceAndBuffer(struct _DSBUFFERDESC* arg1);
};

check_size(DirSnd, 0x0);

// 0x5A5210 | ?DSEnumProc@@YGHPAU_GUID@@PAD1PAX@Z
i32 __stdcall DSEnumProc(struct _GUID* arg1, char* arg2, char* arg3, void* arg4);

// 0x5A57B0 | ?FormatCodeToWFX@@YAHKPAUtWAVEFORMATEX@@@Z
i32 FormatCodeToWFX(u32 arg1, struct tWAVEFORMATEX* arg2);

// 0x5A5170 | ?UpperCase@@YAXPAD@Z
void UpperCase(char* arg1);

// 0x6B4C2C | ?DSGlobalPtr@@3PAVDirSnd@@A
inline extern_var(0x6B4C2C, class DirSnd*, DSGlobalPtr);
