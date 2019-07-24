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

// 0x4AC8C0 | ?ilog2@@YAHH@Z
inline int32_t ilog2(int32_t arg1)
{
    return stub<cdecl_t<int32_t, int32_t>>(0x4AC8C0, arg1);
}

class gfxTexture
{
public:
    // 0x45D180 | ?GetColor@gfxTexture@@QBEIXZ
    inline uint32_t GetColor()
    {
        return stub<member_func_t<uint32_t, gfxTexture>>(0x45D180, this);
    }

    // 0x4AC8E0 | ??0gfxTexture@@AAE@XZ
    inline gfxTexture()
    {
        stub<member_func_t<void, gfxTexture>>(0x4AC8E0, this);
    }

    // 0x4AC910 | ??1gfxTexture@@AAE@XZ
    inline ~gfxTexture()
    {
        stub<member_func_t<void, gfxTexture>>(0x4AC910, this);
    }

    // 0x4AC9B0 | ?KillAll@gfxTexture@@SAXXZ
    static inline void KillAll()
    {
        return stub<cdecl_t<void>>(0x4AC9B0);
    }

    // 0x4AC9F0 | ?SetLODs@gfxTexture@@SAXXZ
    static inline void SetLODs()
    {
        return stub<cdecl_t<void>>(0x4AC9F0);
    }

    // 0x4ACA10 | ?MarkFirstUse@gfxTexture@@AAEXXZ
    inline void MarkFirstUse()
    {
        return stub<member_func_t<void, gfxTexture>>(0x4ACA10, this);
    }

    // 0x4ACA30 | ?MarkHigherUse@gfxTexture@@AAEXXZ
    inline void MarkHigherUse()
    {
        return stub<member_func_t<void, gfxTexture>>(0x4ACA30, this);
    }

    // 0x4ACA90 | ?Create@gfxTexture@@SAPAV1@HHW4gfxImageFormat@gfxImage@@0H@Z
    static inline class gfxTexture* Create(int32_t arg1, int32_t arg2, enum gfxImage::gfxImageFormat arg3,
        enum gfxImage::gfxImageFormat arg4, int32_t arg5)
    {
        return stub<cdecl_t<class gfxTexture*, int32_t, int32_t, enum gfxImage::gfxImageFormat,
            enum gfxImage::gfxImageFormat, int32_t>>(0x4ACA90, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4AD090 | ?Create@gfxTexture@@SAPAV1@PAVgfxImage@@_N@Z
    static inline class gfxTexture* Create(class gfxImage* arg1, bool arg2)
    {
        return stub<cdecl_t<class gfxTexture*, class gfxImage*, bool>>(0x4AD090, arg1, arg2);
    }

    // 0x4AD100 | ?Load@gfxTexture@@QAEXPAVgfxImage@@@Z
    inline void Load(class gfxImage* arg1)
    {
        return stub<member_func_t<void, gfxTexture, class gfxImage*>>(0x4AD100, this, arg1);
    }

    // 0x4AD720 | ?CreateFromTexture@gfxTexture@@QAEPAV1@PBDHHHH@Z
    inline class gfxTexture* CreateFromTexture(char const* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<class gfxTexture*, gfxTexture, char const*, int32_t, int32_t, int32_t, int32_t>>(
            0x4AD720, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4AD730 | ?SetDefaultMIPMapEnv@gfxTexture@@SAXIM@Z
    static inline void SetDefaultMIPMapEnv(uint32_t arg1, float arg2)
    {
        return stub<cdecl_t<void, uint32_t, float>>(0x4AD730, arg1, arg2);
    }

    // 0x4AD740 | ?GetDefaultMIPMapEnv@gfxTexture@@SAXAAIAAM@Z
    static inline void GetDefaultMIPMapEnv(uint32_t& arg1, float& arg2)
    {
        return stub<cdecl_t<void, uint32_t&, float&>>(0x4AD740, arg1, arg2);
    }

    // 0x4AD750 | ?SetMIPMapEnv@gfxTexture@@QAEXIM@Z
    inline void SetMIPMapEnv(uint32_t arg1, float arg2)
    {
        return stub<member_func_t<void, gfxTexture, uint32_t, float>>(0x4AD750, this, arg1, arg2);
    }

    // 0x4AD760 | ?GetMIPMapEnv@gfxTexture@@QAEXAAIAAM@Z
    inline void GetMIPMapEnv(uint32_t& arg1, float& arg2)
    {
        return stub<member_func_t<void, gfxTexture, uint32_t&, float&>>(0x4AD760, this, arg1, arg2);
    }

    // 0x4AD770 | ?CalcMIPMapEnv@gfxTexture@@SAXHHAAG0@Z
    static inline void CalcMIPMapEnv(int32_t arg1, int32_t arg2, uint16_t& arg3, uint16_t& arg4)
    {
        return stub<cdecl_t<void, int32_t, int32_t, uint16_t&, uint16_t&>>(0x4AD770, arg1, arg2, arg3, arg4);
    }

    // 0x4AD780 | ?EnableTrilinearMipMaping@gfxTexture@@SAX_N@Z
    static inline void EnableTrilinearMipMaping(bool arg1)
    {
        return stub<cdecl_t<void, bool>>(0x4AD780, arg1);
    }

    // 0x4AD790 | ?PreLoad@gfxTexture@@QAEXXZ
    inline void PreLoad()
    {
        return stub<member_func_t<void, gfxTexture>>(0x4AD790, this);
    }

    // 0x4AD7E0 | ?MakeResident@gfxTexture@@QAEXXZ
    inline void MakeResident()
    {
        return stub<member_func_t<void, gfxTexture>>(0x4AD7E0, this);
    }

    // 0x4AD820 | ?MakeUnresident@gfxTexture@@QAEXXZ
    inline void MakeUnresident()
    {
        return stub<member_func_t<void, gfxTexture>>(0x4AD820, this);
    }

    // 0x4AD830 | ?MakeAllUnresident@gfxTexture@@SAXXZ
    static inline void MakeAllUnresident()
    {
        return stub<cdecl_t<void>>(0x4AD830);
    }

    // 0x4AD850 | ?EnableCache@gfxTexture@@SAX_N@Z
    static inline void EnableCache(bool arg1)
    {
        return stub<cdecl_t<void, bool>>(0x4AD850, arg1);
    }

    // 0x4AD880 | ?InitCache@gfxTexture@@SAXXZ
    static inline void InitCache()
    {
        return stub<cdecl_t<void>>(0x4AD880);
    }

    // 0x4ADE30 | ?ShutdownCache@gfxTexture@@SAXXZ
    static inline void ShutdownCache()
    {
        return stub<cdecl_t<void>>(0x4ADE30);
    }

    // 0x4ADED0 | ?FindEntry@gfxTexture@@QAEPAUIDirectDrawSurface7@@XZ
    inline struct IDirectDrawSurface7* FindEntry()
    {
        return stub<member_func_t<struct IDirectDrawSurface7*, gfxTexture>>(0x4ADED0, this);
    }

    // 0x4ADF00 | ?CreateRenderTarget@gfxTexture@@SAPAV1@HHII@Z
    static inline class gfxTexture* CreateRenderTarget(int32_t arg1, int32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<cdecl_t<class gfxTexture*, int32_t, int32_t, uint32_t, uint32_t>>(0x4ADF00, arg1, arg2, arg3, arg4);
    }

    // 0x4ADFD0 | ?CreateCubeMap@gfxTexture@@SAPAV1@HHQAPAV1@@Z
    static inline class gfxTexture* CreateCubeMap(int32_t arg1, int32_t arg2, class gfxTexture** const arg3)
    {
        return stub<cdecl_t<class gfxTexture*, int32_t, int32_t, class gfxTexture** const>>(0x4ADFD0, arg1, arg2, arg3);
    }

    // 0x4AE1A0 | ?SetTexEnv@gfxTexture@@QAEXI@Z
    inline void SetTexEnv(uint32_t arg1)
    {
        return stub<member_func_t<void, gfxTexture, uint32_t>>(0x4AE1A0, this, arg1);
    }

    // 0x4AE1B0 | ?SetName@gfxTexture@@QAEXPBD@Z
    inline void SetName(char const* arg1)
    {
        return stub<member_func_t<void, gfxTexture, char const*>>(0x4AE1B0, this, arg1);
    }

    // 0x4AE1E0 | ?Blit@gfxTexture@@QAEXHHPAV1@HHHH@Z
    inline void Blit(
        int32_t arg1, int32_t arg2, class gfxTexture* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
    {
        return stub<
            member_func_t<void, gfxTexture, int32_t, int32_t, class gfxTexture*, int32_t, int32_t, int32_t, int32_t>>(
            0x4AE1E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4AE250 | ?Clone@gfxTexture@@QAEPAV1@XZ
    inline class gfxTexture* Clone()
    {
        return stub<member_func_t<class gfxTexture*, gfxTexture>>(0x4AE250, this);
    }

    // 0x684524 | ?sm_UseInternalCache@gfxTexture@@0_NA
    static inline extern_var(0x684524, bool, sm_UseInternalCache);

    // 0x68452C | ?sm_FirstPool@gfxTexture@@0PAVgfxTextureCachePool@@A
    static inline extern_var(0x68452C, class gfxTextureCachePool*, sm_FirstPool);

    // 0x684D34 | ?sm_EnableSetLOD@gfxTexture@@2_NA
    static inline extern_var(0x684D34, bool, sm_EnableSetLOD);

    // 0x684D35 | ?sm_LOD@gfxTexture@@0EA
    static inline extern_var(0x684D35, uint8_t, sm_LOD);

    // 0x684D36 | ?sm_Allow32@gfxTexture@@2_NA
    static inline extern_var(0x684D36, bool, sm_Allow32);

    // 0x684D38 | ?sm_First@gfxTexture@@0PAV1@A
    static inline extern_var(0x684D38, class gfxTexture*, sm_First);

    // 0x684D3C | ?sm_FirstActive@gfxTexture@@0PAV1@A
    static inline extern_var(0x684D3C, class gfxTexture*, sm_FirstActive);
};

class gfxBitmap
{
public:
    // 0x4AE370 | ??0gfxBitmap@@AAE@HH@Z
    inline gfxBitmap(int32_t arg1, int32_t arg2)
    {
        stub<member_func_t<void, gfxBitmap, int32_t, int32_t>>(0x4AE370, this, arg1, arg2);
    }

    // 0x4AE3B0 | ?SetName@gfxBitmap@@QAEXPBD@Z
    inline void SetName(char const* arg1)
    {
        return stub<member_func_t<void, gfxBitmap, char const*>>(0x4AE3B0, this, arg1);
    }

    // 0x4AE3E0 | ??1gfxBitmap@@AAE@XZ
    inline ~gfxBitmap()
    {
        stub<member_func_t<void, gfxBitmap>>(0x4AE3E0, this);
    }

    // 0x4AE440 | ?KillAll@gfxBitmap@@SAXXZ
    static inline void KillAll()
    {
        return stub<cdecl_t<void>>(0x4AE440);
    }

    // 0x4AE480 | ?Create@gfxBitmap@@SAPAV1@PAVgfxImage@@_N@Z
    static inline class gfxBitmap* Create(class gfxImage* arg1, bool arg2)
    {
        return stub<cdecl_t<class gfxBitmap*, class gfxImage*, bool>>(0x4AE480, arg1, arg2);
    }

    // 0x4AE4D0 | ?Create@gfxBitmap@@SAPAV1@HH_N@Z
    static inline class gfxBitmap* Create(int32_t arg1, int32_t arg2, bool arg3)
    {
        return stub<cdecl_t<class gfxBitmap*, int32_t, int32_t, bool>>(0x4AE4D0, arg1, arg2, arg3);
    }

    // 0x4AE580 | ?Clear@gfxBitmap@@QAEXI@Z
    inline void Clear(uint32_t arg1)
    {
        return stub<member_func_t<void, gfxBitmap, uint32_t>>(0x4AE580, this, arg1);
    }

    // 0x4AE5C0 | ?Load@gfxBitmap@@QAE_NPAVgfxImage@@@Z
    inline bool Load(class gfxImage* arg1)
    {
        return stub<member_func_t<bool, gfxBitmap, class gfxImage*>>(0x4AE5C0, this, arg1);
    }

    // 0x684D40 | ?sm_First@gfxBitmap@@0PAV1@A
    static inline extern_var(0x684D40, class gfxBitmap*, sm_First);
};

class gfxTextureCachePool
{
public:
    // 0x4ADB90 | ??0gfxTextureCachePool@@QAE@PAV0@@Z
    inline gfxTextureCachePool(class gfxTextureCachePool* arg1)
    {
        stub<member_func_t<void, gfxTextureCachePool, class gfxTextureCachePool*>>(0x4ADB90, this, arg1);
    }

    // 0x4ADBB0 | ??1gfxTextureCachePool@@QAE@XZ
    inline ~gfxTextureCachePool()
    {
        stub<member_func_t<void, gfxTextureCachePool>>(0x4ADBB0, this);
    }

    // 0x4ADBE0 | ?IsCompatibleWith@gfxTextureCachePool@@QAE_NPAVgfxTexture@@@Z
    inline bool IsCompatibleWith(class gfxTexture* arg1)
    {
        return stub<member_func_t<bool, gfxTextureCachePool, class gfxTexture*>>(0x4ADBE0, this, arg1);
    }

    // 0x4ADC90 | ?Init@gfxTextureCachePool@@QAEXPAVgfxTexture@@@Z
    inline void Init(class gfxTexture* arg1)
    {
        return stub<member_func_t<void, gfxTextureCachePool, class gfxTexture*>>(0x4ADC90, this, arg1);
    }

    // 0x4ADCF0 | ?FindEntry@gfxTextureCachePool@@QAEXPAVgfxTexture@@@Z
    inline void FindEntry(class gfxTexture* arg1)
    {
        return stub<member_func_t<void, gfxTextureCachePool, class gfxTexture*>>(0x4ADCF0, this, arg1);
    }

    // 0x4ADD30 | ?AddSlot@gfxTextureCachePool@@QAE_NXZ
    inline bool AddSlot()
    {
        return stub<member_func_t<bool, gfxTextureCachePool>>(0x4ADD30, this);
    }
};

class gfxTextureCacheEntry
{
public:
    // 0x4ADAD0 | ??0gfxTextureCacheEntry@@AAE@PAUIDirectDrawSurface7@@PAV0@@Z
    inline gfxTextureCacheEntry(struct IDirectDrawSurface7* arg1, class gfxTextureCacheEntry* arg2)
    {
        stub<member_func_t<void, gfxTextureCacheEntry, struct IDirectDrawSurface7*, class gfxTextureCacheEntry*>>(
            0x4ADAD0, this, arg1, arg2);
    }

    // 0x4ADB00 | ?Evict@gfxTextureCacheEntry@@QAEXXZ
    inline void Evict()
    {
        return stub<member_func_t<void, gfxTextureCacheEntry>>(0x4ADB00, this);
    }

    // 0x4ADB30 | ?Lease@gfxTextureCacheEntry@@QAEXPAVgfxTexture@@@Z
    inline void Lease(class gfxTexture* arg1)
    {
        return stub<member_func_t<void, gfxTextureCacheEntry, class gfxTexture*>>(0x4ADB30, this, arg1);
    }

    // 0x4ADB70 | ??1gfxTextureCacheEntry@@QAE@XZ
    inline ~gfxTextureCacheEntry()
    {
        stub<member_func_t<void, gfxTextureCacheEntry>>(0x4ADB70, this);
    }

    // 0x684528 | ?sm_CurrentTime@gfxTextureCacheEntry@@0IA
    static inline extern_var(0x684528, uint32_t, sm_CurrentTime);
};
