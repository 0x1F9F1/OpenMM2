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

#include "core/stream.h"

#include "output.h"

#include <cstdarg>

inline_var(0x5CED80, int, MaxFilesOpenAtOnce);

int Stream::Read(void* buffer, int size)
{
    int total = 0;

    if (!CurrentBufferSize && CurrentBufferOffset && Flush() < 0)
    {
        return -1;
    }

    int bufferSpace = CurrentBufferSize - CurrentBufferOffset;

    if (size > bufferSpace)
    {
        if (bufferSpace)
        {
            memcpy(buffer, &Buffer[CurrentBufferOffset], bufferSpace);

            buffer = static_cast<char *>(buffer) + bufferSpace;

            total += bufferSpace;
            size -= bufferSpace;

            CurrentBufferOffset = CurrentBufferSize;
        }

        CurrentFileOffset += CurrentBufferOffset;

        if (size >= BufferSize)
        {
            int bytesRead = Methods->Read(Handle, buffer, size);

            if (bytesRead >= 0)
            {
                CurrentBufferSize = 0;
                CurrentFileOffset += bytesRead;
                CurrentBufferOffset = 0;

                total += bytesRead;

                return total;
            }

            CurrentBufferOffset = 0;
            CurrentBufferSize = 0;

            return -1;
        }

        int bytesRead = Methods->Read(Handle, Buffer, BufferSize);

        CurrentBufferSize = bytesRead;
        CurrentBufferOffset = 0;

        if (bytesRead < 0)
        {
            CurrentBufferOffset = 0;
            CurrentBufferSize = 0;

            return -1;
        }
    }

    bufferSpace = CurrentBufferSize - CurrentBufferOffset;

    if (size > bufferSpace)
    {
        size = bufferSpace;
    }

    memcpy(buffer, &Buffer[CurrentBufferOffset], size);
    this->CurrentBufferOffset += size;
    total += size;

    return total;
};

int Stream::Write(const void* buffer, int size)
{
    if (!CurrentBufferSize || Flush() >= 0)
    {
        if (size < BufferSize)
        {
            int bufferSpace = BufferSize - CurrentBufferOffset;

            if (size >= bufferSpace)
            {
                memcpy(&Buffer[CurrentBufferOffset], buffer, bufferSpace);

                buffer = static_cast<const char *>(buffer) + bufferSpace;
                size -= bufferSpace;

                CurrentBufferOffset = BufferSize;

                if (Flush() < 0)
                {
                    return -1;
                }
            }

            memcpy(&Buffer[CurrentBufferOffset], buffer, size);
            CurrentBufferOffset += size;
            return size;
        }

        if (Flush() >= 0)
        {
            int result = Methods->Write(Handle, buffer, size);

            if (result >= 0)
            {
                this->CurrentFileOffset += result;

                return result;
            }
        }
    }

    return -1;
};

int Stream::GetCh(void)
{
    uint8_t result;

    if (Read(&result, 1) == 1)
    {
        return result;
    }

    return -1;
};

int Stream::PutCh(unsigned char ch)
{
    if (Write(&ch, 1) == 1)
    {
        return ch;
    }

    return -1;
};

int Stream::Seek(int offset)
{
    if (!Methods->Seek)
    {
        CurrentBufferOffset = offset;

        return offset;
    }

    if (Flush() >= 0)
    {
        CurrentFileOffset = offset;

        return Methods->Seek(Handle, offset, 0);
    }

    return -1;
}

int Stream::Seek(int offset, seekWhence whence)
{
    switch (whence)
    {
    case SeekBegin:
        break;

    case SeekCurrent:
        offset += Tell();
        break;

    case SeekEnd:
        offset += Size();
        break;
    }

    return Seek(offset);
}

int Stream::Tell(void) const
{
    return CurrentFileOffset + CurrentBufferOffset;
};

int Stream::Close(void)
{
    if (!CurrentBufferSize)
    {
        if (CurrentBufferOffset)
        {
            Flush();
        }
    }

    Methods->Close(Handle);

    Handle = -1;
    Methods = nullptr;

    return 0;
};

int Stream::Size(void)
{
    if (Methods->Size)
    {
        return Methods->Size(Handle);
    }

    if (Flush() >= 0)
    {
        int current = Methods->Seek(Handle, 0, SeekCurrent);
        int size = Methods->Seek(Handle, 0, SeekEnd);

        Methods->Seek(Handle, current, SeekBegin);

        return size;
    }

    return -1;
};

int Stream::Flush(void)
{
    int result = 0;

    if (CurrentBufferSize)
    {
        if (CurrentBufferOffset != CurrentBufferSize)
        {
            result = Methods->Seek(Handle, CurrentFileOffset + CurrentBufferOffset, 0);
        }
    }
    else if (CurrentBufferOffset)
    {
        result = Methods->Write(Handle, Buffer, CurrentBufferOffset);
    }

    CurrentBufferSize = 0;
    CurrentFileOffset += CurrentBufferOffset;
    CurrentBufferOffset = 0;

    if (Methods->Flush)
    {
        result = Methods->Flush(Handle);
    }

    return result;
}

Stream* Stream::Open(char const* fileName, coreFileMethods const* methods, bool readOnly)
{
    int handle = methods->Open(fileName, readOnly);

    if (handle != -1)
    {
        return AllocStream(fileName, handle, methods);
    }

    return nullptr;
}

Stream* Stream::AllocStream(char const* fileName, int handle, coreFileMethods const* methods)
{
    (void) fileName;

    for (int i = 0; i < MAX_STREAMS; ++i)
    {
        Stream* stream = &sm_Streams[i];

        if (stream->Methods == nullptr)
        {
            stream->Handle = handle;
            stream->Methods = methods;

            stream->CurrentFileOffset = 0;
            stream->CurrentBufferOffset = 0;
            stream->CurrentBufferSize = 0;

            stream->Buffer = sm_Buffers[i];
            stream->BufferSize = STREAM_BUFFER_SIZE;

            if (i > MaxFilesOpenAtOnce)
            {
                MaxFilesOpenAtOnce = i;
            }

            return stream;
        }
    }

    DumpOpenFiles();

    Errorf("Out of file handles.");

    return nullptr;
}

Stream* Stream::Open(char const* fileName, bool readOnly)
{
    const coreFileMethods* fileMethods = readOnly ? sm_DefaultOpenMethods : sm_DefaultCreateMethods;

    int fileHandle = fileMethods->Open(fileName, readOnly);

    if (fileHandle == -1)
    {
        return nullptr;
    }

    return AllocStream(fileName, fileHandle, fileMethods);
}

Stream* Stream::Create(const char* fileName)
{
    int handle = sm_DefaultCreateMethods->Create(fileName);

    if (handle == -1)
    {
        return nullptr;
    }

    return AllocStream(fileName, handle, sm_DefaultCreateMethods);
}

void Stream::DumpOpenFiles()
{
    for (int i = 0; i < MAX_STREAMS; ++i)
    {
        Stream* stream = &sm_Streams[i];

        if (stream->Methods)
        {
            Displayf("%d. HANDLE=%x", i, stream->Handle);
        }
    }
}

int fseek(Stream* stream, int position, seekWhence whence)
{
    return stream->Seek(position, whence);
}

int fgets(char* buffer, int length, Stream* stream)
{
    int total = 0;

    for (int last = length - 1; total < last; ++total)
    {
        int currentChar = -1;

        if (stream->CurrentBufferOffset >= stream->CurrentBufferSize)
        {
            currentChar = stream->GetCh();
        }
        else
        {
            currentChar = stream->Buffer[stream->CurrentBufferOffset++];
        }

        if (currentChar == -1)
        {
            break;
        }

        buffer[total] = static_cast<char>(currentChar);

        if (currentChar == '\n')
        {
            break;
        }
    }

    buffer[total] = '\0';

    return total;
}

void fprintf(Stream* stream, char const* format, ...)
{
    char buffer[512];
    va_list va;

    va_start(va, format);
    vsprintf_s(buffer, format, va);
    va_end(va);

    stream->Write(buffer, strlen(buffer));
}

int fscanf(Stream* stream, char const* format, ...)
{
    int currentChar;

    do
    {
        do
        {
            currentChar = stream->GetCh();
        }
        while (currentChar == '\t');
    }
    while (currentChar == '\n' || currentChar == ' ' || currentChar == '\r');

    char buffer[256];
    buffer[0] = static_cast<char>(currentChar);

    if (fgets(&buffer[1], 255, stream))
    {
        va_list va;
        va_start(va, format);
        int result = vsscanf_s(buffer, format, va);
        va_end(va);

        if (!result)
        {
            Errorf("fscanf of '%s' == '%s' failed", format, buffer);
        }

        return result;
    }

    return 0;
}

run_once([ ]
{
    create_hook("Stream::AllocStream", "", 0x4C98D0, &Stream::AllocStream);
    create_hook("Stream::DumpOpenFiles", "", 0x4C9970, &Stream::DumpOpenFiles);
})