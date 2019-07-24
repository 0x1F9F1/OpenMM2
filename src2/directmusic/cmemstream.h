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
    directmusic:cmemstream

    0x518EA0 | public: __thiscall CMemStream::CMemStream(class CLoader *) | ??0CMemStream@@QAE@PAVCLoader@@@Z
    0x518EF0 | public: __thiscall CMemStream::~CMemStream(void) | ??1CMemStream@@QAE@XZ
    0x518F20 | public: long __thiscall CMemStream::Open(unsigned char *,__int64) | ?Open@CMemStream@@QAEJPAE_J@Z
    0x518F80 | public: long __thiscall CMemStream::Close(void) | ?Close@CMemStream@@QAEJXZ
    0x518F90 | public: virtual long __stdcall CMemStream::QueryInterface(struct _GUID const &,void * *) | ?QueryInterface@CMemStream@@UAGJABU_GUID@@PAPAX@Z
    0x519030 | public: virtual long __stdcall CMemStream::GetLoader(struct IDirectMusicLoader * *) | ?GetLoader@CMemStream@@UAGJPAPAUIDirectMusicLoader@@@Z
    0x519070 | public: virtual unsigned long __stdcall CMemStream::AddRef(void) | ?AddRef@CMemStream@@UAGKXZ
    0x519090 | public: virtual unsigned long __stdcall CMemStream::Release(void) | ?Release@CMemStream@@UAGKXZ
    0x5190D0 | public: virtual long __stdcall CMemStream::Read(void *,unsigned long,unsigned long *) | ?Read@CMemStream@@UAGJPAXKPAK@Z
    0x519150 | public: virtual long __stdcall CMemStream::Write(void const *,unsigned long,unsigned long *) | ?Write@CMemStream@@UAGJPBXKPAK@Z
    0x519160 | public: virtual long __stdcall CMemStream::Seek(union _LARGE_INTEGER,unsigned long,union _ULARGE_INTEGER *) | ?Seek@CMemStream@@UAGJT_LARGE_INTEGER@@KPAT_ULARGE_INTEGER@@@Z
    0x5191E0 | public: virtual long __stdcall CMemStream::SetSize(union _ULARGE_INTEGER) | ?SetSize@CMemStream@@UAGJT_ULARGE_INTEGER@@@Z
    0x5191F0 | public: virtual long __stdcall CMemStream::CopyTo(struct IStream *,union _ULARGE_INTEGER,union _ULARGE_INTEGER *,union _ULARGE_INTEGER *) | ?CopyTo@CMemStream@@UAGJPAUIStream@@T_ULARGE_INTEGER@@PAT3@2@Z
    0x519200 | public: virtual long __stdcall CMemStream::Commit(unsigned long) | ?Commit@CMemStream@@UAGJK@Z
    0x519210 | public: virtual long __stdcall CMemStream::Revert(void) | ?Revert@CMemStream@@UAGJXZ
    0x519220 | public: virtual long __stdcall CMemStream::LockRegion(union _ULARGE_INTEGER,union _ULARGE_INTEGER,unsigned long) | ?LockRegion@CMemStream@@UAGJT_ULARGE_INTEGER@@0K@Z
    0x519230 | public: virtual long __stdcall CMemStream::UnlockRegion(union _ULARGE_INTEGER,union _ULARGE_INTEGER,unsigned long) | ?UnlockRegion@CMemStream@@UAGJT_ULARGE_INTEGER@@0K@Z
    0x519240 | public: virtual long __stdcall CMemStream::Stat(struct tagSTATSTG *,unsigned long) | ?Stat@CMemStream@@UAGJPAUtagSTATSTG@@K@Z
    0x519250 | public: virtual long __stdcall CMemStream::Clone(struct IStream * *) | ?Clone@CMemStream@@UAGJPAPAUIStream@@@Z
    0x519260 | [thunk]:public: virtual long __stdcall CMemStream::QueryInterface`adjustor{4}' (struct _GUID const &,void * *) | ?QueryInterface@CMemStream@@W3AGJABU_GUID@@PAPAX@Z
    0x519270 | [thunk]:public: virtual unsigned long __stdcall CMemStream::AddRef`adjustor{4}' (void) | ?AddRef@CMemStream@@W3AGKXZ
    0x519280 | [thunk]:public: virtual unsigned long __stdcall CMemStream::Release`adjustor{4}' (void) | ?Release@CMemStream@@W3AGKXZ
    0x5B4DC4 | const CMemStream::`vftable'{for `IDirectMusicGetLoader'} | ??_7CMemStream@@6BIDirectMusicGetLoader@@@
    0x5B4DD4 | const CMemStream::`vftable'{for `IStream'} | ??_7CMemStream@@6BIStream@@@
*/

struct CMemStream
{
public:
    // 0x518EA0 | ??0CMemStream@@QAE@PAVCLoader@@@Z
    inline CMemStream(class CLoader* arg1)
    {
        stub<member_func_t<void, CMemStream, class CLoader*>>(0x518EA0, this, arg1);
    }

    // 0x518EF0 | ??1CMemStream@@QAE@XZ
    inline ~CMemStream()
    {
        stub<member_func_t<void, CMemStream>>(0x518EF0, this);
    }

    // 0x518F20 | ?Open@CMemStream@@QAEJPAE_J@Z
    inline int32_t Open(uint8_t* arg1, int64_t arg2)
    {
        return stub<member_func_t<int32_t, CMemStream, uint8_t*, int64_t>>(0x518F20, this, arg1, arg2);
    }

    // 0x518F80 | ?Close@CMemStream@@QAEJXZ
    inline int32_t Close()
    {
        return stub<member_func_t<int32_t, CMemStream>>(0x518F80, this);
    }

    // 0x519260 | ?QueryInterface@CMemStream@@W3AGJABU_GUID@@PAPAX@Z
    inline int32_t __stdcall QueryInterface(struct _GUID const& arg1, void** arg2)
    {
        return stub<member_func_t<int32_t, CMemStream, struct _GUID const&, void**>>(0x519260, this, arg1, arg2);
    }

    // 0x519270 | ?AddRef@CMemStream@@W3AGKXZ
    inline uint32_t __stdcall AddRef()
    {
        return stub<member_func_t<uint32_t, CMemStream>>(0x519270, this);
    }

    // 0x519280 | ?Release@CMemStream@@W3AGKXZ
    inline uint32_t __stdcall Release()
    {
        return stub<member_func_t<uint32_t, CMemStream>>(0x519280, this);
    }
};
