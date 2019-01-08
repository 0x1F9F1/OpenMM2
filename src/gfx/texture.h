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

#include "hooking.h"

#include "gfx/image.h"

#include <d3d.h>

class gfxTextureCacheEntry;
class gfxTextureCachePool;

class gfxTexture
{
public:
    uint32_t VglBindIndex {0};
    char *Name {nullptr};
    uint16_t Width {0};
    uint16_t Height {0};
    uint32_t TexEnv {0};
    uint32_t DominantColor {0};
    IDirectDrawSurface7 *m_Surface {nullptr};
    IDirectDrawPalette *m_Palette {nullptr};
    gfxTextureCacheEntry *CacheEntry {nullptr};
    gfxTextureCachePool *CachePool {nullptr};
    uint32_t RefCount {1};
    gfxTexture *PrevLOD {nullptr};
    gfxTexture *NextLOD {nullptr};
    int8_t m_LOD {-1};
    int8_t m_MaxLOD {0};

    gfxTexture();
    ~gfxTexture();

    void Load(gfxImage* image);

    void SetTexEnv(int texEnv);

    IDirectDrawSurface7* FindEntry();

    IDirectDrawSurface7* GetResidentSurface();

    void MarkFirstUse();
    void MarkHigherUse();

    static gfxTexture* Create(gfxImage * image, bool mipMap);
    static gfxTexture* Create(int width, int height, gfxImage::gfxImageFormat type, gfxImage::gfxImageFormat paletteType, int mipMapCount);

    static void EnableCache(bool enabled);
    static void ShutdownCache(void);

    inline_var(0x684D34, bool, sm_EnableSetLOD);
    inline_var(0x684D36, bool, sm_Allow32);
    inline_var(0x684D38, gfxTexture*, sm_First);
    inline_var(0x684524, bool, sm_UseInternalCache);
    inline_var(0x68452C, gfxTextureCachePool*, sm_FirstPool);
    inline_var(0x684D35, uint8_t, sm_LOD);
    inline_var(0x684D3C, gfxTexture*, sm_FirstActive);
};

class gfxBitmap
{
public:
    char* Name {nullptr};
    uint16_t Width {0};
    uint16_t Height {0};
    IDirectDrawSurface7 *Surface {nullptr};
    uint32_t RefCount {1};
    gfxBitmap *Prev {nullptr};

    gfxBitmap(uint16_t width, uint16_t height);
    ~gfxBitmap();

    bool Load(gfxImage *image);

    void SetName(const char* name);

    void Release();

    static gfxBitmap* Create(gfxImage* image, bool unused);
    static gfxBitmap* Create(int width, int height, bool unused);

    inline_var(0x684D40, gfxBitmap*, sm_First);
};

check_size(gfxBitmap, 0x14);

class gfxTextureCacheEntry
{
public:
    gfxTexture *Texture {nullptr};
    IDirectDrawSurface7 *Surface {nullptr};
    uint32_t LastAccessTime {0};
    gfxTextureCacheEntry *PrevEntry {nullptr};

    inline_var(0x684528, uint32_t, sm_CurrentTime);

    gfxTextureCacheEntry(IDirectDrawSurface7* surface, gfxTextureCacheEntry* prevEntry);
    ~gfxTextureCacheEntry();

    void Lease(gfxTexture *texture);
    void Evict();
};

class gfxTextureCachePool
{
public:
    uint16_t Width;
    uint16_t Height;
    uint16_t MipMapCount;
    uint16_t TextureCount;
    uint16_t EntryCount;
    uint16_t HasNoSurface;
    gfxTextureCacheEntry *FirstEntry;
    gfxTextureCachePool *PrevPool;
    DDPIXELFORMAT Format;

    gfxTextureCachePool(gfxTextureCachePool* prevPool);
    ~gfxTextureCachePool();

    void FindEntry(gfxTexture *texture);
};
