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
    gfx:texture

    0x4AC8C0 | int __cdecl ilog2(int) | ?ilog2@@YAHH@Z
    0x4AC8E0 | private: __thiscall gfxTexture::gfxTexture(void) | ??0gfxTexture@@AAE@XZ
    0x4AC910 | private: __thiscall gfxTexture::~gfxTexture(void) | ??1gfxTexture@@AAE@XZ
    0x4AC9B0 | public: static void __cdecl gfxTexture::KillAll(void) | ?KillAll@gfxTexture@@SAXXZ
    0x4AC9F0 | public: static void __cdecl gfxTexture::SetLODs(void) | ?SetLODs@gfxTexture@@SAXXZ
    0x4ACA10 | private: void __thiscall gfxTexture::MarkFirstUse(void) | ?MarkFirstUse@gfxTexture@@AAEXXZ
    0x4ACA30 | private: void __thiscall gfxTexture::MarkHigherUse(void) | ?MarkHigherUse@gfxTexture@@AAEXXZ
    0x4ACA90 | public: static class gfxTexture * __cdecl gfxTexture::Create(int,int,enum gfxImage::gfxImageFormat,enum gfxImage::gfxImageFormat,int) | ?Create@gfxTexture@@SAPAV1@HHW4gfxImageFormat@gfxImage@@0H@Z
    0x4AD090 | public: static class gfxTexture * __cdecl gfxTexture::Create(class gfxImage *,bool) | ?Create@gfxTexture@@SAPAV1@PAVgfxImage@@_N@Z
    0x4AD100 | public: void __thiscall gfxTexture::Load(class gfxImage *) | ?Load@gfxTexture@@QAEXPAVgfxImage@@@Z
    0x4AD720 | public: class gfxTexture * __thiscall gfxTexture::CreateFromTexture(char const *,int,int,int,int) | ?CreateFromTexture@gfxTexture@@QAEPAV1@PBDHHHH@Z
    0x4AD730 | public: static void __cdecl gfxTexture::SetDefaultMIPMapEnv(unsigned int,float) | ?SetDefaultMIPMapEnv@gfxTexture@@SAXIM@Z
    0x4AD740 | public: static void __cdecl gfxTexture::GetDefaultMIPMapEnv(unsigned int &,float &) | ?GetDefaultMIPMapEnv@gfxTexture@@SAXAAIAAM@Z
    0x4AD750 | public: void __thiscall gfxTexture::SetMIPMapEnv(unsigned int,float) | ?SetMIPMapEnv@gfxTexture@@QAEXIM@Z
    0x4AD760 | public: void __thiscall gfxTexture::GetMIPMapEnv(unsigned int &,float &) | ?GetMIPMapEnv@gfxTexture@@QAEXAAIAAM@Z
    0x4AD770 | public: static void __cdecl gfxTexture::CalcMIPMapEnv(int,int,unsigned short &,unsigned short &) | ?CalcMIPMapEnv@gfxTexture@@SAXHHAAG0@Z
    0x4AD780 | public: static void __cdecl gfxTexture::EnableTrilinearMipMaping(bool) | ?EnableTrilinearMipMaping@gfxTexture@@SAX_N@Z
    0x4AD790 | public: void __thiscall gfxTexture::PreLoad(void) | ?PreLoad@gfxTexture@@QAEXXZ
    0x4AD7E0 | public: void __thiscall gfxTexture::MakeResident(void) | ?MakeResident@gfxTexture@@QAEXXZ
    0x4AD820 | public: void __thiscall gfxTexture::MakeUnresident(void) | ?MakeUnresident@gfxTexture@@QAEXXZ
    0x4AD830 | public: static void __cdecl gfxTexture::MakeAllUnresident(void) | ?MakeAllUnresident@gfxTexture@@SAXXZ
    0x4AD850 | public: static void __cdecl gfxTexture::EnableCache(bool) | ?EnableCache@gfxTexture@@SAX_N@Z
    0x4AD880 | public: static void __cdecl gfxTexture::InitCache(void) | ?InitCache@gfxTexture@@SAXXZ
    0x4ADAD0 | private: __thiscall gfxTextureCacheEntry::gfxTextureCacheEntry(struct IDirectDrawSurface7 *,class gfxTextureCacheEntry *) | ??0gfxTextureCacheEntry@@AAE@PAUIDirectDrawSurface7@@PAV0@@Z
    0x4ADB00 | public: void __thiscall gfxTextureCacheEntry::Evict(void) | ?Evict@gfxTextureCacheEntry@@QAEXXZ
    0x4ADB30 | public: void __thiscall gfxTextureCacheEntry::Lease(class gfxTexture *) | ?Lease@gfxTextureCacheEntry@@QAEXPAVgfxTexture@@@Z
    0x4ADB70 | public: __thiscall gfxTextureCacheEntry::~gfxTextureCacheEntry(void) | ??1gfxTextureCacheEntry@@QAE@XZ
    0x4ADB90 | public: __thiscall gfxTextureCachePool::gfxTextureCachePool(class gfxTextureCachePool *) | ??0gfxTextureCachePool@@QAE@PAV0@@Z
    0x4ADBB0 | public: __thiscall gfxTextureCachePool::~gfxTextureCachePool(void) | ??1gfxTextureCachePool@@QAE@XZ
    0x4ADBE0 | public: bool __thiscall gfxTextureCachePool::IsCompatibleWith(class gfxTexture *) | ?IsCompatibleWith@gfxTextureCachePool@@QAE_NPAVgfxTexture@@@Z
    0x4ADC90 | public: void __thiscall gfxTextureCachePool::Init(class gfxTexture *) | ?Init@gfxTextureCachePool@@QAEXPAVgfxTexture@@@Z
    0x4ADCF0 | public: void __thiscall gfxTextureCachePool::FindEntry(class gfxTexture *) | ?FindEntry@gfxTextureCachePool@@QAEXPAVgfxTexture@@@Z
    0x4ADD30 | public: bool __thiscall gfxTextureCachePool::AddSlot(void) | ?AddSlot@gfxTextureCachePool@@QAE_NXZ
    0x4ADE30 | public: static void __cdecl gfxTexture::ShutdownCache(void) | ?ShutdownCache@gfxTexture@@SAXXZ
    0x4ADED0 | public: struct IDirectDrawSurface7 * __thiscall gfxTexture::FindEntry(void) | ?FindEntry@gfxTexture@@QAEPAUIDirectDrawSurface7@@XZ
    0x4ADF00 | public: static class gfxTexture * __cdecl gfxTexture::CreateRenderTarget(int,int,unsigned int,unsigned int) | ?CreateRenderTarget@gfxTexture@@SAPAV1@HHII@Z
    0x4ADFD0 | public: static class gfxTexture * __cdecl gfxTexture::CreateCubeMap(int,int,class gfxTexture * * const) | ?CreateCubeMap@gfxTexture@@SAPAV1@HHQAPAV1@@Z
    0x4AE1A0 | public: void __thiscall gfxTexture::SetTexEnv(unsigned int) | ?SetTexEnv@gfxTexture@@QAEXI@Z
    0x4AE1B0 | public: void __thiscall gfxTexture::SetName(char const *) | ?SetName@gfxTexture@@QAEXPBD@Z
    0x4AE1E0 | public: void __thiscall gfxTexture::Blit(int,int,class gfxTexture *,int,int,int,int) | ?Blit@gfxTexture@@QAEXHHPAV1@HHHH@Z
    0x4AE250 | public: class gfxTexture * __thiscall gfxTexture::Clone(void) | ?Clone@gfxTexture@@QAEPAV1@XZ
    0x4AE370 | private: __thiscall gfxBitmap::gfxBitmap(int,int) | ??0gfxBitmap@@AAE@HH@Z
    0x4AE3B0 | public: void __thiscall gfxBitmap::SetName(char const *) | ?SetName@gfxBitmap@@QAEXPBD@Z
    0x4AE3E0 | private: __thiscall gfxBitmap::~gfxBitmap(void) | ??1gfxBitmap@@AAE@XZ
    0x4AE440 | public: static void __cdecl gfxBitmap::KillAll(void) | ?KillAll@gfxBitmap@@SAXXZ
    0x4AE480 | public: static class gfxBitmap * __cdecl gfxBitmap::Create(class gfxImage *,bool) | ?Create@gfxBitmap@@SAPAV1@PAVgfxImage@@_N@Z
    0x4AE4D0 | public: static class gfxBitmap * __cdecl gfxBitmap::Create(int,int,bool) | ?Create@gfxBitmap@@SAPAV1@HH_N@Z
    0x4AE580 | public: void __thiscall gfxBitmap::Clear(unsigned int) | ?Clear@gfxBitmap@@QAEXI@Z
    0x4AE5C0 | public: bool __thiscall gfxBitmap::Load(class gfxImage *) | ?Load@gfxBitmap@@QAE_NPAVgfxImage@@@Z
    public: static void __cdecl gfxTexture::AddWidgets(class bkBank &) | ?AddWidgets@gfxTexture@@SAXAAVbkBank@@@Z
    0x684524 | private: static bool gfxTexture::sm_UseInternalCache | ?sm_UseInternalCache@gfxTexture@@0_NA
    0x684528 | private: static unsigned int gfxTextureCacheEntry::sm_CurrentTime | ?sm_CurrentTime@gfxTextureCacheEntry@@0IA
    0x68452C | private: static class gfxTextureCachePool * gfxTexture::sm_FirstPool | ?sm_FirstPool@gfxTexture@@0PAVgfxTextureCachePool@@A
    0x684D34 | public: static bool gfxTexture::sm_EnableSetLOD | ?sm_EnableSetLOD@gfxTexture@@2_NA
    0x684D35 | private: static unsigned char gfxTexture::sm_LOD | ?sm_LOD@gfxTexture@@0EA
    0x684D36 | public: static bool gfxTexture::sm_Allow32 | ?sm_Allow32@gfxTexture@@2_NA
    0x684D38 | private: static class gfxTexture * gfxTexture::sm_First | ?sm_First@gfxTexture@@0PAV1@A
    0x684D3C | private: static class gfxTexture * gfxTexture::sm_FirstActive | ?sm_FirstActive@gfxTexture@@0PAV1@A
    0x684D40 | private: static class gfxBitmap * gfxBitmap::sm_First | ?sm_First@gfxBitmap@@0PAV1@A
*/

class gfxTexture
{
public:
    // 0x4AE1E0 | ?Blit@gfxTexture@@QAEXHHPAV1@HHHH@Z
    void Blit(i32 arg1, i32 arg2, class gfxTexture* arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7);

    // 0x4AE250 | ?Clone@gfxTexture@@QAEPAV1@XZ
    class gfxTexture* Clone();

    // 0x4AD720 | ?CreateFromTexture@gfxTexture@@QAEPAV1@PBDHHHH@Z
    class gfxTexture* CreateFromTexture(char const* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5);

    // 0x4ADED0 | ?FindEntry@gfxTexture@@QAEPAUIDirectDrawSurface7@@XZ
    struct IDirectDrawSurface7* FindEntry();

    // 0x45D180 | ?GetColor@gfxTexture@@QBEIXZ
    u32 GetColor();

    // 0x4AD760 | ?GetMIPMapEnv@gfxTexture@@QAEXAAIAAM@Z
    void GetMIPMapEnv(u32& arg1, f32& arg2);

    // 0x4AD100 | ?Load@gfxTexture@@QAEXPAVgfxImage@@@Z
    void Load(class gfxImage* arg1);

    // 0x4AD7E0 | ?MakeResident@gfxTexture@@QAEXXZ
    void MakeResident();

    // 0x4AD820 | ?MakeUnresident@gfxTexture@@QAEXXZ
    void MakeUnresident();

    // 0x4AD790 | ?PreLoad@gfxTexture@@QAEXXZ
    void PreLoad();

    // 0x4AD750 | ?SetMIPMapEnv@gfxTexture@@QAEXIM@Z
    void SetMIPMapEnv(u32 arg1, f32 arg2);

    // 0x4AE1B0 | ?SetName@gfxTexture@@QAEXPBD@Z
    void SetName(char const* arg1);

    // 0x4AE1A0 | ?SetTexEnv@gfxTexture@@QAEXI@Z
    void SetTexEnv(u32 arg1);

    // 0x4AD770 | ?CalcMIPMapEnv@gfxTexture@@SAXHHAAG0@Z
    static void CalcMIPMapEnv(i32 arg1, i32 arg2, u16& arg3, u16& arg4);

    // 0x4AD090 | ?Create@gfxTexture@@SAPAV1@PAVgfxImage@@_N@Z
    static class gfxTexture* Create(class gfxImage* arg1, bool arg2);

    // 0x4ACA90 | ?Create@gfxTexture@@SAPAV1@HHW4gfxImageFormat@gfxImage@@0H@Z
    static class gfxTexture* Create(
        i32 arg1, i32 arg2, enum gfxImage::gfxImageFormat arg3, enum gfxImage::gfxImageFormat arg4, i32 arg5);

    // 0x4ADFD0 | ?CreateCubeMap@gfxTexture@@SAPAV1@HHQAPAV1@@Z
    static class gfxTexture* CreateCubeMap(i32 arg1, i32 arg2, class gfxTexture** const arg3);

    // 0x4ADF00 | ?CreateRenderTarget@gfxTexture@@SAPAV1@HHII@Z
    static class gfxTexture* CreateRenderTarget(i32 arg1, i32 arg2, u32 arg3, u32 arg4);

    // 0x4AD850 | ?EnableCache@gfxTexture@@SAX_N@Z
    static void EnableCache(bool arg1);

    // 0x4AD780 | ?EnableTrilinearMipMaping@gfxTexture@@SAX_N@Z
    static void EnableTrilinearMipMaping(bool arg1);

    // 0x4AD740 | ?GetDefaultMIPMapEnv@gfxTexture@@SAXAAIAAM@Z
    static void GetDefaultMIPMapEnv(u32& arg1, f32& arg2);

    // 0x4AD880 | ?InitCache@gfxTexture@@SAXXZ
    static void InitCache();

    // 0x4AC9B0 | ?KillAll@gfxTexture@@SAXXZ
    static void KillAll();

    // 0x4AD830 | ?MakeAllUnresident@gfxTexture@@SAXXZ
    static void MakeAllUnresident();

    // 0x4AD730 | ?SetDefaultMIPMapEnv@gfxTexture@@SAXIM@Z
    static void SetDefaultMIPMapEnv(u32 arg1, f32 arg2);

    // 0x4AC9F0 | ?SetLODs@gfxTexture@@SAXXZ
    static void SetLODs();

    // 0x4ADE30 | ?ShutdownCache@gfxTexture@@SAXXZ
    static void ShutdownCache();

    // 0x684D36 | ?sm_Allow32@gfxTexture@@2_NA
    static inline extern_var(0x684D36, bool, sm_Allow32);

    // 0x684D34 | ?sm_EnableSetLOD@gfxTexture@@2_NA
    static inline extern_var(0x684D34, bool, sm_EnableSetLOD);

private:
    // 0x4AC8E0 | ??0gfxTexture@@AAE@XZ
    gfxTexture();

    // 0x4AC910 | ??1gfxTexture@@AAE@XZ
    ~gfxTexture();

    // 0x4ACA10 | ?MarkFirstUse@gfxTexture@@AAEXXZ
    void MarkFirstUse();

    // 0x4ACA30 | ?MarkHigherUse@gfxTexture@@AAEXXZ
    void MarkHigherUse();

    // 0x684D38 | ?sm_First@gfxTexture@@0PAV1@A
    static inline extern_var(0x684D38, class gfxTexture*, sm_First);

    // 0x684D3C | ?sm_FirstActive@gfxTexture@@0PAV1@A
    static inline extern_var(0x684D3C, class gfxTexture*, sm_FirstActive);

    // 0x68452C | ?sm_FirstPool@gfxTexture@@0PAVgfxTextureCachePool@@A
    static inline extern_var(0x68452C, class gfxTextureCachePool*, sm_FirstPool);

    // 0x684D35 | ?sm_LOD@gfxTexture@@0EA
    static inline extern_var(0x684D35, u8, sm_LOD);

    // 0x684524 | ?sm_UseInternalCache@gfxTexture@@0_NA
    static inline extern_var(0x684524, bool, sm_UseInternalCache);
};

check_size(gfxTexture, 0x0);

// 0x4AC8C0 | ?ilog2@@YAHH@Z
i32 ilog2(i32 arg1);

class gfxTextureCacheEntry
{
public:
    // 0x4ADB70 | ??1gfxTextureCacheEntry@@QAE@XZ
    ~gfxTextureCacheEntry();

    // 0x4ADB00 | ?Evict@gfxTextureCacheEntry@@QAEXXZ
    void Evict();

    // 0x4ADB30 | ?Lease@gfxTextureCacheEntry@@QAEXPAVgfxTexture@@@Z
    void Lease(class gfxTexture* arg1);

private:
    // 0x4ADAD0 | ??0gfxTextureCacheEntry@@AAE@PAUIDirectDrawSurface7@@PAV0@@Z
    gfxTextureCacheEntry(struct IDirectDrawSurface7* arg1, class gfxTextureCacheEntry* arg2);

    // 0x684528 | ?sm_CurrentTime@gfxTextureCacheEntry@@0IA
    static inline extern_var(0x684528, u32, sm_CurrentTime);
};

check_size(gfxTextureCacheEntry, 0x10);

class gfxTextureCachePool
{
public:
    // 0x4ADB90 | ??0gfxTextureCachePool@@QAE@PAV0@@Z
    gfxTextureCachePool(class gfxTextureCachePool* arg1);

    // 0x4ADBB0 | ??1gfxTextureCachePool@@QAE@XZ
    ~gfxTextureCachePool();

    // 0x4ADD30 | ?AddSlot@gfxTextureCachePool@@QAE_NXZ
    bool AddSlot();

    // 0x4ADCF0 | ?FindEntry@gfxTextureCachePool@@QAEXPAVgfxTexture@@@Z
    void FindEntry(class gfxTexture* arg1);

    // 0x4ADC90 | ?Init@gfxTextureCachePool@@QAEXPAVgfxTexture@@@Z
    void Init(class gfxTexture* arg1);

    // 0x4ADBE0 | ?IsCompatibleWith@gfxTextureCachePool@@QAE_NPAVgfxTexture@@@Z
    bool IsCompatibleWith(class gfxTexture* arg1);
};

check_size(gfxTextureCachePool, 0x0);

class gfxBitmap
{
public:
    // 0x4AE580 | ?Clear@gfxBitmap@@QAEXI@Z
    void Clear(u32 arg1);

    // 0x4AE5C0 | ?Load@gfxBitmap@@QAE_NPAVgfxImage@@@Z
    bool Load(class gfxImage* arg1);

    // 0x4AE3B0 | ?SetName@gfxBitmap@@QAEXPBD@Z
    void SetName(char const* arg1);

    // 0x4AE480 | ?Create@gfxBitmap@@SAPAV1@PAVgfxImage@@_N@Z
    static class gfxBitmap* Create(class gfxImage* arg1, bool arg2);

    // 0x4AE4D0 | ?Create@gfxBitmap@@SAPAV1@HH_N@Z
    static class gfxBitmap* Create(i32 arg1, i32 arg2, bool arg3);

    // 0x4AE440 | ?KillAll@gfxBitmap@@SAXXZ
    static void KillAll();

private:
    // 0x4AE370 | ??0gfxBitmap@@AAE@HH@Z
    gfxBitmap(i32 arg1, i32 arg2);

    // 0x4AE3E0 | ??1gfxBitmap@@AAE@XZ
    ~gfxBitmap();

    // 0x684D40 | ?sm_First@gfxBitmap@@0PAV1@A
    static inline extern_var(0x684D40, class gfxBitmap*, sm_First);
};

check_size(gfxBitmap, 0x14);
