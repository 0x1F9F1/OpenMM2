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
public:
    // DirSnd::`vftable' @ 0x5B8A1C

    // 0x5A4ED0 | ??0DirSnd@@QAE@XZ
    inline DirSnd()
    {
        stub<member_func_t<void, DirSnd>>(0x5A4ED0, this);
    }

    // 0x5A4F30 | ??1DirSnd@@QAE@XZ
    inline ~DirSnd()
    {
        stub<member_func_t<void, DirSnd>>(0x5A4F30, this);
    }

    // 0x5A4FD0 | ?DeInit@DirSnd@@QAEXXZ
    inline void DeInit()
    {
        return stub<member_func_t<void, DirSnd>>(0x5A4FD0, this);
    }

    // 0x5A5080 | ?Init@DirSnd@@SAPAV1@KE_NPAD@Z
    static inline class DirSnd* Init(uint32_t arg1, uint8_t arg2, bool arg3, char* arg4)
    {
        return stub<cdecl_t<class DirSnd*, uint32_t, uint8_t, bool, char*>>(0x5A5080, arg1, arg2, arg3, arg4);
    }

    // 0x5A5160 | ?Init3DListener@DirSnd@@QAEHMMMMM@Z
    inline int32_t Init3DListener(float arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<int32_t, DirSnd, float, float, float, float, float>>(
            0x5A5160, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5A51C0 | ?IsDSDeviceInList@DirSnd@@QAEHPAU_GUID@@@Z
    inline int32_t IsDSDeviceInList(struct _GUID* arg1)
    {
        return stub<member_func_t<int32_t, DirSnd, struct _GUID*>>(0x5A51C0, this, arg1);
    }

    // 0x5A5390 | ?SetDeviceRating@DirSnd@@QAEXPAUtag_dsdevdesc@@@Z
    inline void SetDeviceRating(struct tag_dsdevdesc* arg1)
    {
        return stub<member_func_t<void, DirSnd, struct tag_dsdevdesc*>>(0x5A5390, this, arg1);
    }

    // 0x5A5510 | ?EnumDSDevices@DirSnd@@QAEHXZ
    inline int32_t EnumDSDevices()
    {
        return stub<member_func_t<int32_t, DirSnd>>(0x5A5510, this);
    }

    // 0x5A5630 | ?CreatePrimaryInterfaceAndBuffer@DirSnd@@IAEHPAU_DSBUFFERDESC@@@Z
    inline int32_t CreatePrimaryInterfaceAndBuffer(struct _DSBUFFERDESC* arg1)
    {
        return stub<member_func_t<int32_t, DirSnd, struct _DSBUFFERDESC*>>(0x5A5630, this, arg1);
    }

    // 0x5A5770 | ?ClearDSDeviceList@DirSnd@@QAEXXZ
    inline void ClearDSDeviceList()
    {
        return stub<member_func_t<void, DirSnd>>(0x5A5770, this);
    }

    // 0x5A5860 | ?SetPrimaryBufferFormat@DirSnd@@QAEXKE@Z
    inline void SetPrimaryBufferFormat(uint32_t arg1, uint8_t arg2)
    {
        return stub<member_func_t<void, DirSnd, uint32_t, uint8_t>>(0x5A5860, this, arg1, arg2);
    }

    // 0x5A5950 | ?ScanAvailableDSFormats@DirSnd@@QAEXXZ
    inline void ScanAvailableDSFormats()
    {
        return stub<member_func_t<void, DirSnd>>(0x5A5950, this);
    }

    // 0x5A5A30 | ?TranslateDSError@DirSnd@@QAEPADJ@Z
    inline char* TranslateDSError(int32_t arg1)
    {
        return stub<member_func_t<char*, DirSnd, int32_t>>(0x5A5A30, this, arg1);
    }

    // 0x5A5BB0 | ?SetBitDepth@DirSnd@@QAEXH@Z
    inline void SetBitDepth(int32_t arg1)
    {
        return stub<member_func_t<void, DirSnd, int32_t>>(0x5A5BB0, this, arg1);
    }

    // 0x5A5BD0 | ?GetDeviceNames@DirSnd@@QAEPAPADXZ
    inline char** GetDeviceNames()
    {
        return stub<member_func_t<char**, DirSnd>>(0x5A5BD0, this);
    }

    // 0x5A5C00 | ?GetNum3DHallBufs@DirSnd@@QAEIXZ
    inline uint32_t GetNum3DHallBufs()
    {
        return stub<member_func_t<uint32_t, DirSnd>>(0x5A5C00, this);
    }

    // 0x5A5530 | ?InitPrimarySoundBuffer@DirSnd@@UAEHKEPAD@Z
    virtual inline int32_t InitPrimarySoundBuffer(uint32_t arg1, uint8_t arg2, char* arg3)
    {
        return stub<member_func_t<int32_t, DirSnd, uint32_t, uint8_t, char*>>(0x5A5530, this, arg1, arg2, arg3);
    }
};

// 0x5A5170 | ?UpperCase@@YAXPAD@Z
inline void UpperCase(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x5A5170, arg1);
}

// 0x5A5210 | ?DSEnumProc@@YGHPAU_GUID@@PAD1PAX@Z
inline int32_t __stdcall DSEnumProc(struct _GUID* arg1, char* arg2, char* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*>>(0x5A5210, arg1, arg2, arg3, arg4);
}

// 0x5A57B0 | ?FormatCodeToWFX@@YAHKPAUtWAVEFORMATEX@@@Z
inline int32_t FormatCodeToWFX(uint32_t arg1, struct tWAVEFORMATEX* arg2)
{
    return stub<cdecl_t<int32_t, uint32_t, struct tWAVEFORMATEX*>>(0x5A57B0, arg1, arg2);
}

// 0x6B4C2C | ?DSGlobalPtr@@3PAVDirSnd@@A
inline extern_var(0x6B4C2C, class DirSnd*, DSGlobalPtr);
