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
    core:stream

    0x4C98D0 | private: static class Stream * __cdecl Stream::AllocStream(char const *,int,struct coreFileMethods const *) | ?AllocStream@Stream@@CAPAV1@PBDHPBUcoreFileMethods@@@Z
    0x4C9970 | public: static void __cdecl Stream::DumpOpenFiles(void) | ?DumpOpenFiles@Stream@@SAXXZ
    0x4C99C0 | public: static class Stream * __cdecl Stream::Open(char const *,bool) | ?Open@Stream@@SAPAV1@PBD_N@Z
    0x4C9A00 | public: static class Stream * __cdecl Stream::Create(char const *) | ?Create@Stream@@SAPAV1@PBD@Z
    0x4C9A40 | public: static class Stream * __cdecl Stream::Open(char const *,struct coreFileMethods const *,bool) | ?Open@Stream@@SAPAV1@PBDPBUcoreFileMethods@@_N@Z
    0x4C9A70 | public: static class Stream * __cdecl Stream::Create(char const *,struct coreFileMethods const *) | ?Create@Stream@@SAPAV1@PBDPBUcoreFileMethods@@@Z
    0x4C9AA0 | public: int __thiscall Stream::Read(void *,int) | ?Read@Stream@@QAEHPAXH@Z
    0x4C9BF0 | public: int __thiscall Stream::Write(void const *,int) | ?Write@Stream@@QAEHPBXH@Z
    0x4C9D00 | public: int __thiscall Stream::GetCh(void) | ?GetCh@Stream@@QAEHXZ
    0x4C9D30 | public: int __thiscall Stream::PutCh(unsigned char) | ?PutCh@Stream@@QAEHE@Z
    0x4C9D60 | public: int __thiscall Stream::Seek(int) | ?Seek@Stream@@QAEHH@Z
    0x4C9DB0 | public: int __thiscall Stream::Tell(void) | ?Tell@Stream@@QAEHXZ
    0x4C9DC0 | public: int __thiscall Stream::Close(void) | ?Close@Stream@@QAEHXZ
    0x4C9E00 | public: int __thiscall Stream::Size(void) | ?Size@Stream@@QAEHXZ
    0x4C9E60 | public: int __thiscall Stream::Flush(void) | ?Flush@Stream@@QAEHXZ
    0x4C9ED0 | void __cdecl fprintf(class Stream *,char const *,...) | ?fprintf@@YAXPAVStream@@PBDZZ
    0x4C9F20 | int __cdecl fseek(class Stream *,int,int) | ?fseek@@YAHPAVStream@@HH@Z
    0x4C9F80 | int __cdecl fgets(char *,int,class Stream *) | ?fgets@@YAHPADHPAVStream@@@Z
    0x4C9FF0 | int __cdecl fscanf(class Stream *,char const *,...) | ?fscanf@@YAHPAVStream@@PBDZZ
    0x4CA0A0 | int __cdecl memReadFile(int,void *,int) | ?memReadFile@@YAHHPAXH@Z
    0x4CA0B0 | int __cdecl memCloseFile(int) | ?memCloseFile@@YAHH@Z
    0x4CA0D0 | int __cdecl memSizeFile(int) | ?memSizeFile@@YAHH@Z
    0x4CA0E0 | public: static class Stream * __cdecl Stream::PreLoad(class Stream *) | ?PreLoad@Stream@@SAPAV1@PAV1@@Z
    0x5CED78 | private: static struct coreFileMethods const * const Stream::sm_DefaultOpenMethods | ?sm_DefaultOpenMethods@Stream@@0PBUcoreFileMethods@@B
    0x5CED7C | private: static struct coreFileMethods const * const Stream::sm_DefaultCreateMethods | ?sm_DefaultCreateMethods@Stream@@0PBUcoreFileMethods@@B
    0x6A3D68 | private: static class Stream * Stream::sm_Streams | ?sm_Streams@Stream@@0PAV1@A
    0x6A3EB8 | private: static char (* Stream::sm_Buffers)[4096] | ?sm_Buffers@Stream@@0PAY0BAAA@DA
    class CoreFileDumper __CoreFileDumper | ?__CoreFileDumper@@3VCoreFileDumper@@A
*/

// 0x4C9ED0 | ?fprintf@@YAXPAVStream@@PBDZZ
// Skipped (Variable Arguments)

// 0x4C9F20 | ?fseek@@YAHPAVStream@@HH@Z
inline i32 fseek(class Stream* arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<i32, class Stream*, i32, i32>>(0x4C9F20, arg1, arg2, arg3);
}

// 0x4C9F80 | ?fgets@@YAHPADHPAVStream@@@Z
inline i32 fgets(char* arg1, i32 arg2, class Stream* arg3)
{
    return stub<cdecl_t<i32, char*, i32, class Stream*>>(0x4C9F80, arg1, arg2, arg3);
}

// 0x4C9FF0 | ?fscanf@@YAHPAVStream@@PBDZZ
// Skipped (Variable Arguments)

// 0x4CA0A0 | ?memReadFile@@YAHHPAXH@Z
inline i32 memReadFile(i32 arg1, void* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, i32, void*, i32>>(0x4CA0A0, arg1, arg2, arg3);
}

// 0x4CA0B0 | ?memCloseFile@@YAHH@Z
inline i32 memCloseFile(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x4CA0B0, arg1);
}

// 0x4CA0D0 | ?memSizeFile@@YAHH@Z
inline i32 memSizeFile(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x4CA0D0, arg1);
}

class Stream
{
public:
    // 0x4C98D0 | ?AllocStream@Stream@@CAPAV1@PBDHPBUcoreFileMethods@@@Z
    static inline class Stream* AllocStream(char const* arg1, i32 arg2, struct coreFileMethods const* arg3)
    {
        return stub<cdecl_t<class Stream*, char const*, i32, struct coreFileMethods const*>>(
            0x4C98D0, arg1, arg2, arg3);
    }

    // 0x4C9970 | ?DumpOpenFiles@Stream@@SAXXZ
    static inline void DumpOpenFiles()
    {
        return stub<cdecl_t<void>>(0x4C9970);
    }

    // 0x4C99C0 | ?Open@Stream@@SAPAV1@PBD_N@Z
    static inline class Stream* Open(char const* arg1, bool arg2)
    {
        return stub<cdecl_t<class Stream*, char const*, bool>>(0x4C99C0, arg1, arg2);
    }

    // 0x4C9A00 | ?Create@Stream@@SAPAV1@PBD@Z
    static inline class Stream* Create(char const* arg1)
    {
        return stub<cdecl_t<class Stream*, char const*>>(0x4C9A00, arg1);
    }

    // 0x4C9A40 | ?Open@Stream@@SAPAV1@PBDPBUcoreFileMethods@@_N@Z
    static inline class Stream* Open(char const* arg1, struct coreFileMethods const* arg2, bool arg3)
    {
        return stub<cdecl_t<class Stream*, char const*, struct coreFileMethods const*, bool>>(
            0x4C9A40, arg1, arg2, arg3);
    }

    // 0x4C9A70 | ?Create@Stream@@SAPAV1@PBDPBUcoreFileMethods@@@Z
    static inline class Stream* Create(char const* arg1, struct coreFileMethods const* arg2)
    {
        return stub<cdecl_t<class Stream*, char const*, struct coreFileMethods const*>>(0x4C9A70, arg1, arg2);
    }

    // 0x4C9AA0 | ?Read@Stream@@QAEHPAXH@Z
    inline i32 Read(void* arg1, i32 arg2)
    {
        return stub<member_func_t<i32, Stream, void*, i32>>(0x4C9AA0, this, arg1, arg2);
    }

    // 0x4C9BF0 | ?Write@Stream@@QAEHPBXH@Z
    inline i32 Write(void const* arg1, i32 arg2)
    {
        return stub<member_func_t<i32, Stream, void const*, i32>>(0x4C9BF0, this, arg1, arg2);
    }

    // 0x4C9D00 | ?GetCh@Stream@@QAEHXZ
    inline i32 GetCh()
    {
        return stub<member_func_t<i32, Stream>>(0x4C9D00, this);
    }

    // 0x4C9D30 | ?PutCh@Stream@@QAEHE@Z
    inline i32 PutCh(u8 arg1)
    {
        return stub<member_func_t<i32, Stream, u8>>(0x4C9D30, this, arg1);
    }

    // 0x4C9D60 | ?Seek@Stream@@QAEHH@Z
    inline i32 Seek(i32 arg1)
    {
        return stub<member_func_t<i32, Stream, i32>>(0x4C9D60, this, arg1);
    }

    // 0x4C9DB0 | ?Tell@Stream@@QAEHXZ
    inline i32 Tell()
    {
        return stub<member_func_t<i32, Stream>>(0x4C9DB0, this);
    }

    // 0x4C9DC0 | ?Close@Stream@@QAEHXZ
    inline i32 Close()
    {
        return stub<member_func_t<i32, Stream>>(0x4C9DC0, this);
    }

    // 0x4C9E00 | ?Size@Stream@@QAEHXZ
    inline i32 Size()
    {
        return stub<member_func_t<i32, Stream>>(0x4C9E00, this);
    }

    // 0x4C9E60 | ?Flush@Stream@@QAEHXZ
    inline i32 Flush()
    {
        return stub<member_func_t<i32, Stream>>(0x4C9E60, this);
    }

    // 0x4CA0E0 | ?PreLoad@Stream@@SAPAV1@PAV1@@Z
    static inline class Stream* PreLoad(class Stream* arg1)
    {
        return stub<cdecl_t<class Stream*, class Stream*>>(0x4CA0E0, arg1);
    }

    // 0x5CED78 | ?sm_DefaultOpenMethods@Stream@@0PBUcoreFileMethods@@B
    inline extern_var(0x5CED78, struct coreFileMethods const* const, sm_DefaultOpenMethods);

    // 0x5CED7C | ?sm_DefaultCreateMethods@Stream@@0PBUcoreFileMethods@@B
    inline extern_var(0x5CED7C, struct coreFileMethods const* const, sm_DefaultCreateMethods);

    // 0x6A3D68 | ?sm_Streams@Stream@@0PAV1@A
    inline extern_var(0x6A3D68, class Stream*, sm_Streams);

    // 0x6A3EB8 | ?sm_Buffers@Stream@@0PAY0BAAA@DA
    inline extern_var(0x6A3EB8, char (*)[4096], sm_Buffers);
};
