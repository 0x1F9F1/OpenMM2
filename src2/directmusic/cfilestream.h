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
    directmusic:cfilestream

    0x518A40 | public: __thiscall CFileStream::CFileStream(class CLoader *) | ??0CFileStream@@QAE@PAVCLoader@@@Z
    0x518A80 | public: __thiscall CFileStream::~CFileStream(void) | ??1CFileStream@@QAE@XZ
    0x518AB0 | public: long __thiscall CFileStream::Open(unsigned short *,unsigned long) | ?Open@CFileStream@@QAEJPAGK@Z
    0x518B80 | public: long __thiscall CFileStream::Close(void) | ?Close@CFileStream@@QAEJXZ
    0x518BA0 | public: virtual long __stdcall CFileStream::QueryInterface(struct _GUID const &,void * *) | ?QueryInterface@CFileStream@@UAGJABU_GUID@@PAPAX@Z
    0x518C40 | public: virtual long __stdcall CFileStream::GetLoader(struct IDirectMusicLoader * *) | ?GetLoader@CFileStream@@UAGJPAPAUIDirectMusicLoader@@@Z
    0x518C80 | public: virtual unsigned long __stdcall CFileStream::AddRef(void) | ?AddRef@CFileStream@@UAGKXZ
    0x518CA0 | public: virtual unsigned long __stdcall CFileStream::Release(void) | ?Release@CFileStream@@UAGKXZ
    0x518CE0 | public: virtual long __stdcall CFileStream::Read(void *,unsigned long,unsigned long *) | ?Read@CFileStream@@UAGJPAXKPAK@Z
    0x518D20 | public: virtual long __stdcall CFileStream::Write(void const *,unsigned long,unsigned long *) | ?Write@CFileStream@@UAGJPBXKPAK@Z
    0x518D60 | public: virtual long __stdcall CFileStream::Seek(union _LARGE_INTEGER,unsigned long,union _ULARGE_INTEGER *) | ?Seek@CFileStream@@UAGJT_LARGE_INTEGER@@KPAT_ULARGE_INTEGER@@@Z
    0x518DD0 | public: virtual long __stdcall CFileStream::SetSize(union _ULARGE_INTEGER) | ?SetSize@CFileStream@@UAGJT_ULARGE_INTEGER@@@Z
    0x518DE0 | public: virtual long __stdcall CFileStream::CopyTo(struct IStream *,union _ULARGE_INTEGER,union _ULARGE_INTEGER *,union _ULARGE_INTEGER *) | ?CopyTo@CFileStream@@UAGJPAUIStream@@T_ULARGE_INTEGER@@PAT3@2@Z
    0x518DF0 | public: virtual long __stdcall CFileStream::Commit(unsigned long) | ?Commit@CFileStream@@UAGJK@Z
    0x518E00 | public: virtual long __stdcall CFileStream::Revert(void) | ?Revert@CFileStream@@UAGJXZ
    0x518E10 | public: virtual long __stdcall CFileStream::LockRegion(union _ULARGE_INTEGER,union _ULARGE_INTEGER,unsigned long) | ?LockRegion@CFileStream@@UAGJT_ULARGE_INTEGER@@0K@Z
    0x518E20 | public: virtual long __stdcall CFileStream::UnlockRegion(union _ULARGE_INTEGER,union _ULARGE_INTEGER,unsigned long) | ?UnlockRegion@CFileStream@@UAGJT_ULARGE_INTEGER@@0K@Z
    0x518E30 | public: virtual long __stdcall CFileStream::Stat(struct tagSTATSTG *,unsigned long) | ?Stat@CFileStream@@UAGJPAUtagSTATSTG@@K@Z
    0x518E40 | public: virtual long __stdcall CFileStream::Clone(struct IStream * *) | ?Clone@CFileStream@@UAGJPAPAUIStream@@@Z
    0x518E50 | public: class CFileStream * __thiscall CFileStream::GetNextPtr(void) | ?GetNextPtr@CFileStream@@QAEPAV1@XZ
    0x518E60 | public: void __thiscall CFileStream::SetNextPtr(class CFileStream *) | ?SetNextPtr@CFileStream@@QAEXPAV1@@Z
    0x518E70 | [thunk]:public: virtual long __stdcall CFileStream::QueryInterface`adjustor{4}' (struct _GUID const &,void * *) | ?QueryInterface@CFileStream@@W3AGJABU_GUID@@PAPAX@Z
    0x518E80 | [thunk]:public: virtual unsigned long __stdcall CFileStream::AddRef`adjustor{4}' (void) | ?AddRef@CFileStream@@W3AGKXZ
    0x518E90 | [thunk]:public: virtual unsigned long __stdcall CFileStream::Release`adjustor{4}' (void) | ?Release@CFileStream@@W3AGKXZ
    0x5B4D6C | const CFileStream::`vftable'{for `IDirectMusicGetLoader'} | ??_7CFileStream@@6BIDirectMusicGetLoader@@@
    0x5B4D7C | const CFileStream::`vftable'{for `IStream'} | ??_7CFileStream@@6BIStream@@@
    0x5B4DB4 | const IDirectMusicGetLoader::`vftable' | ??_7IDirectMusicGetLoader@@6B@
*/

class CFileStream
{
public:
    // 0x518A40 | ??0CFileStream@@QAE@PAVCLoader@@@Z
    inline CFileStream(class CLoader* arg1)
    {
        stub<member_func_t<void, CFileStream, class CLoader*>>(0x518A40, this, arg1);
    }

    // 0x518A80 | ??1CFileStream@@QAE@XZ
    inline ~CFileStream()
    {
        stub<member_func_t<void, CFileStream>>(0x518A80, this);
    }

    // 0x518AB0 | ?Open@CFileStream@@QAEJPAGK@Z
    inline int32_t Open(uint16_t* arg1, uint32_t arg2)
    {
        return stub<member_func_t<int32_t, CFileStream, uint16_t*, uint32_t>>(0x518AB0, this, arg1, arg2);
    }

    // 0x518B80 | ?Close@CFileStream@@QAEJXZ
    inline int32_t Close()
    {
        return stub<member_func_t<int32_t, CFileStream>>(0x518B80, this);
    }

    // 0x518E50 | ?GetNextPtr@CFileStream@@QAEPAV1@XZ
    inline class CFileStream* GetNextPtr()
    {
        return stub<member_func_t<class CFileStream*, CFileStream>>(0x518E50, this);
    }

    // 0x518E60 | ?SetNextPtr@CFileStream@@QAEXPAV1@@Z
    inline void SetNextPtr(class CFileStream* arg1)
    {
        return stub<member_func_t<void, CFileStream, class CFileStream*>>(0x518E60, this, arg1);
    }

    // 0x518E70 | ?QueryInterface@CFileStream@@W3AGJABU_GUID@@PAPAX@Z
    inline int32_t __stdcall QueryInterface(struct _GUID const& arg1, void** arg2)
    {
        return stub<member_func_t<int32_t, CFileStream, struct _GUID const&, void**>>(0x518E70, this, arg1, arg2);
    }

    // 0x518E80 | ?AddRef@CFileStream@@W3AGKXZ
    inline uint32_t __stdcall AddRef()
    {
        return stub<member_func_t<uint32_t, CFileStream>>(0x518E80, this);
    }

    // 0x518E90 | ?Release@CFileStream@@W3AGKXZ
    inline uint32_t __stdcall Release()
    {
        return stub<member_func_t<uint32_t, CFileStream>>(0x518E90, this);
    }
};
