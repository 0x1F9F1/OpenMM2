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

#include "hooking.h"

#define MAX_STREAMS 12
#define STREAM_BUFFER_SIZE 4096

enum seekWhence
{
    SeekBegin,
    SeekCurrent,
    SeekEnd,
};

struct coreFileMethods
{
    int (*Open)(const char* fileName, bool readOnly);
    int (*Create)(const char* fileName);
    int (*Read)(int handle, void* buffer, int length);
    int (*Write)(int handle, const void* buffer, int length);
    int (*Seek)(int handle, int position, int whence);
    int (*Close)(int handle);
    int (*EnumFiles)(const char* fileName, void (*callback)(const char*, bool, void*), void* context);
    int (*Size)(int handle);
    int (*Flush)(int handle);
};

class Stream
{
public:
    const coreFileMethods* Methods;
    int Handle;
    uint8_t* Buffer;
    int CurrentFileOffset;
    int CurrentBufferOffset;
    int CurrentBufferSize;
    int BufferSize;

    int Read(void* buffer, int size);
    int Write(const void* buffer, int size);
    int GetCh(void);
    int PutCh(unsigned char ch);
    int Seek(int offset);
    int Seek(int offset, seekWhence whence);
    int Tell(void) const;
    int Close(void);
    int Size(void);
    int Flush(void);

    bool ReadBytes(void* buffer, int size)
    {
        return Read(buffer, size) == size;
    }

    template <typename T>
    bool Read(T& value)
    {
        return ReadBytes(&value, sizeof(value));
    }

    template <typename T>
    T Read()
    {
        T result;

        bool success = Read(result);

#ifdef _DEBUG
        if (!success)
        {
            Errorf("Failed to read %s", typeid(T).name());
        }
#else
        (void) success;
#endif

        return result;
    }

    template <typename T, size_t N>
    bool ReadArray(T (&values)[N], size_t count)
    {
        return ReadArray(values, N, count);
    }

    template <typename T>
    bool ReadArray(T* values, size_t max, size_t count)
    {
        if (count > max)
            return false;

        return ReadBytes(values, count * sizeof(*values));
    }

    static Stream* Open(char const* fileName, coreFileMethods const* methods, bool readOnly);
    static Stream* AllocStream(char const* fileName, int handle, coreFileMethods const* methods);

    static Stream* Open(char const* fileName, bool readOnly);

    static Stream* Create(const char* fileName);

    static void DumpOpenFiles(void);

    static inline extern_var(0x6A3D68, Stream[MAX_STREAMS], sm_Streams);
    static inline extern_var(0x6A3EB8, uint8_t[MAX_STREAMS][STREAM_BUFFER_SIZE], sm_Buffers);

    static inline extern_var(0x5CED7C, coreFileMethods const*, sm_DefaultCreateMethods);
    static inline extern_var(0x5CED78, coreFileMethods const*, sm_DefaultOpenMethods);
};

int fseek(Stream* stream, int position, seekWhence whence);
int fgets(char* buffer, int length, Stream* stream);
void fprintf(Stream* stream, char const* format, ...);
int fscanf(Stream* stream, char const* format, ...);
